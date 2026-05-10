"""For each broken-mesh OOO Enhanced item record, count how many times its
FormID is referenced in APW's plugin stack (NPC_ CNTO, CREA CNTO, LVLI LVLO,
CONT CNTO). If usage is 0, the broken record is dead content — the player
never sees it in-game even though the record exists.

This tests whether APW's strategy is "strip distribution" vs "fix mesh paths"."""
from __future__ import annotations
import io, json, struct, sys, zlib
from collections import Counter, defaultdict
from pathlib import Path

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")

sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

OOO_ENH = Path(r"D:\Modlists\APW\mods\OOO Enhanced\OOO Enhanced.esp")

# All APW plugins, in load order (last wins)
APW_PLUGINS_ALL = [
    Path(r"D:\Modlists\APW\Stock Game\Data\Oblivion.esm"),
]
# Find every esp/esm enabled in APW plugins.txt
plugins_txt = Path(r"D:\Modlists\APW\profiles\A Painted World\plugins.txt").read_text(encoding="utf-8", errors="replace")
mods_dir = Path(r"D:\Modlists\APW\mods")
stock_data = Path(r"D:\Modlists\APW\Stock Game\Data")
for line in plugins_txt.splitlines():
    line = line.strip()
    if not line or line.startswith("#"):
        continue
    name = line
    # Find this plugin in stock_data first, else in mods/*/
    sd_path = stock_data / name
    if sd_path.exists():
        APW_PLUGINS_ALL.append(sd_path)
        continue
    matches = list(mods_dir.glob(f"*/{name}"))
    if matches:
        APW_PLUGINS_ALL.append(matches[0])
        continue
    # fall back: glob deeper
    matches = list(mods_dir.glob(f"**/{name}"))
    if matches:
        APW_PLUGINS_ALL.append(matches[0])

print(f"Resolved {len(APW_PLUGINS_ALL)} of plugins.txt entries\n")

# Map (load_order_index, masters) for each plugin so we can resolve FIDs
print("Loading plugin master lists...", flush=True)
plugins_info = []  # list of (path, masters_list_lower, self_index)
for path in APW_PLUGINS_ALL:
    if not path.exists():
        continue
    try:
        data, masters = load_plugin(path)
    except Exception as e:
        print(f"  skip {path.name}: {e}")
        continue
    plugins_info.append((path, data, masters))

# Build runtime FID for each plugin self_idx
# At runtime, plugin position in plugins.txt = high byte
# We just want to know: for a given record's local fid (0x04003EB6), what is
# the runtime FID? In OOO Enhanced.esp (master[3] = OOO Enh.esp itself in its own masters), records added by it have file-FID = 0x04003EB6.
# At runtime, OOO Enhanced.esp's slot in plugins.txt determines the high byte.

# Map: file_in_plugins_txt_lowercase → runtime_load_order_byte
plugins_txt_lines = [l.strip() for l in plugins_txt.splitlines() if l.strip() and not l.startswith("#")]
runtime_idx = {name.lower(): i for i, name in enumerate(plugins_txt_lines)}
print(f"OOO Enhanced.esp runtime slot: 0x{runtime_idx.get('ooo enhanced.esp', 999):02X}")

# Load broken-mesh records from earlier audit
rows = [json.loads(l) for l in open(r"D:/Modlists/Reborn/research/ooo_enh_mesh_problems_with_resources.jsonl")]
broken_local_fids = set()
broken_meta = {}
for r in rows:
    raw = int(r["fid"], 16) & 0x00FFFFFF
    broken_local_fids.add(raw)
    broken_meta[raw] = (r["sig"], r["edid"])
print(f"Broken-mesh records to check: {len(broken_local_fids)}\n")

# For each broken record, the item's runtime FID is (ooo_enh_runtime_byte << 24) | local
ooo_enh_runtime = runtime_idx.get("ooo enhanced.esp")
if ooo_enh_runtime is None:
    print("OOO Enhanced.esp not in plugins.txt — bailing")
    sys.exit(1)

target_runtime_fids = {(ooo_enh_runtime << 24) | l: l for l in broken_local_fids}
print(f"Target runtime FIDs (high byte 0x{ooo_enh_runtime:02X})\n")

# Step: in each plugin, find references to these target FIDs in CNTO Item, LVLO Item.
# To do so, we need to translate any plugin's file-FID into runtime-FID.
def file_to_runtime(file_fid, masters, self_idx, plugin_path):
    high = (file_fid >> 24) & 0xFF
    local = file_fid & 0x00FFFFFF
    if high == self_idx:
        # Self FID: runtime byte = this plugin's position
        rt_byte = runtime_idx.get(plugin_path.name.lower())
        if rt_byte is None:
            return None
        return (rt_byte << 24) | local
    elif high < len(masters):
        rt_byte = runtime_idx.get(masters[high])
        if rt_byte is None:
            return None
        return (rt_byte << 24) | local
    return None

# Count references to broken FIDs across all plugins
usage = defaultdict(lambda: Counter())  # local_fid → {sig: count}
sample_users = defaultdict(list)  # local_fid → [(plugin, parent_record_sig, parent_local_fid)]

print("Scanning all APW plugins for references to broken items…", flush=True)
for path, data, masters in plugins_info:
    self_idx = len(masters)
    for top_label, sig, r_fid, _, body in iter_records(data):
        # Iterate this record's CNTO and LVLO subrecords
        for ssig, sub in parse_subrecords(body):
            if ssig == "CNTO" and len(sub) >= 4:
                item_file_fid = struct.unpack_from("<I", sub, 0)[0]
                rt = file_to_runtime(item_file_fid, masters, self_idx, path)
                if rt and rt in target_runtime_fids:
                    local = target_runtime_fids[rt]
                    usage[local]["CNTO_in_" + sig] += 1
                    if len(sample_users[local]) < 3:
                        sample_users[local].append((path.name, sig, f"0x{r_fid:08X}"))
            elif ssig == "LVLO" and len(sub) >= 12:
                # LVLO format: short level, short padding, fid, short count, short padding
                item_file_fid = struct.unpack_from("<I", sub, 4)[0]
                rt = file_to_runtime(item_file_fid, masters, self_idx, path)
                if rt and rt in target_runtime_fids:
                    local = target_runtime_fids[rt]
                    usage[local]["LVLO_in_" + sig] += 1
                    if len(sample_users[local]) < 3:
                        sample_users[local].append((path.name, sig, f"0x{r_fid:08X}"))

# Bucket: how many broken records have ZERO references (dead) vs N references (live)?
dead = []
live_low = []   # 1-3 refs
live_med = []   # 4-10 refs
live_high = []  # 11+ refs
for lfid in broken_local_fids:
    n = sum(usage[lfid].values())
    if n == 0:
        dead.append(lfid)
    elif n <= 3:
        live_low.append(lfid)
    elif n <= 10:
        live_med.append(lfid)
    else:
        live_high.append(lfid)

print(f"\n=== Broken-mesh records by reference count ===")
print(f"  DEAD (0 refs):     {len(dead):4d}  ← never spawn or distributed; mesh path doesn't matter")
print(f"  LOW (1-3 refs):    {len(live_low):4d}")
print(f"  MED (4-10 refs):   {len(live_med):4d}")
print(f"  HIGH (11+ refs):   {len(live_high):4d}  ← actively used; broken meshes will be visible")

print(f"\n=== Sample HIGH-reference broken records ===")
for lfid in sorted(live_high, key=lambda l: -sum(usage[l].values()))[:10]:
    sig, edid = broken_meta[lfid]
    n = sum(usage[lfid].values())
    print(f"  0x{lfid:06X} {sig:5s} {edid:35s}  refs={n}")
    breakdown = ", ".join(f"{k}={v}" for k, v in usage[lfid].most_common(3))
    print(f"      {breakdown}")

print(f"\n=== Sample DEAD records (broken but unused — APW silent fix?) ===")
for lfid in sorted(dead)[:15]:
    sig, edid = broken_meta[lfid]
    print(f"  0x{lfid:06X} {sig:5s} {edid}")
