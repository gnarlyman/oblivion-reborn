"""For each broken-mesh record in OOO Enhanced.esp, find the WINNING override
in APW's plugin stack (BP, APW Merge, APW CR, etc.) and check whether the
winning mesh path resolves in APW's loose files."""
from __future__ import annotations
import io, json, struct, sys, zlib
from collections import Counter, defaultdict
from pathlib import Path

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")

# All APW plugins that could override OOO Enhanced records, in load order
# (last wins — so for each record, the LAST plugin to override is the winner)
APW_PLUGINS = [
    Path(r"D:\Modlists\APW\mods\OOO Enhanced\OOO Enhanced.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge 2.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge 3.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\Bashed Patch, 0.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW - Conflict Resolution.esp"),
]

APW_MODS = Path(r"D:\Modlists\APW\mods")

def parse_subrecords(body):
    subs = []
    off = 0
    pending = None
    while off + 6 <= len(body):
        sig = body[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", body, off + 4)[0]
        off += 6
        if sig == "XXXX":
            pending = struct.unpack_from("<I", body, off)[0]
            off += size
            continue
        if pending is not None:
            size = pending
            pending = None
        subs.append((sig, body[off:off + size]))
        off += size
    return subs

def cstr(b):
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")

def iter_records(data):
    if data[0:4] != b"TES4": return
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    def walk(off, end):
        while off < end:
            tag = data[off:off+4].decode("latin-1", "replace")
            if tag == "GRUP":
                grp_size = struct.unpack_from("<I", data, off+4)[0]
                yield from walk(off+20, off+grp_size)
                off += grp_size; continue
            r_size = struct.unpack_from("<I", data, off+4)[0]
            r_flags = struct.unpack_from("<I", data, off+8)[0]
            r_fid = struct.unpack_from("<I", data, off+12)[0]
            body = data[off+20:off+20+r_size]
            if r_flags & 0x00040000:
                try: body = zlib.decompress(body[4:])
                except: pass
            yield tag, r_fid, body
            off += 20+r_size
    off = 20+tes4_size
    while off < len(data):
        if data[off:off+4] != b"GRUP": break
        grp_size = struct.unpack_from("<I", data, off+4)[0]
        yield from walk(off+20, off+grp_size)
        off += grp_size


def load_plugin_masters(path):
    data = path.read_bytes()
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    masters = []
    for sig, sub in parse_subrecords(data[20:20+tes4_size]):
        if sig == "MAST": masters.append(cstr(sub).lower())
    return data, masters


# Step 1: Build per-plugin record index, last-wins
# For each (sig, src_plugin_lower, src_local_fid), record the LAST winning record body.
print("Indexing APW plugin override stack…", flush=True)
winning = {}  # (sig, src_plugin, local_fid) → body
for path in APW_PLUGINS:
    if not path.exists():
        print(f"  MISS: {path}")
        continue
    data, masters = load_plugin_masters(path)
    self_idx = len(masters)
    for sig, r_fid, body in iter_records(data):
        if sig not in ("ARMO","CLOT","WEAP","STAT","CREA"):
            continue
        high = (r_fid >> 24) & 0xFF
        local = r_fid & 0x00FFFFFF
        if high == self_idx:
            src_plugin = path.name.lower()
        elif high < len(masters):
            src_plugin = masters[high]
        else:
            continue
        winning[(sig, src_plugin, local)] = (body, path.name)

print(f"  indexed {len(winning)} winning ARMO/CLOT/WEAP/STAT/CREA records\n")

# Step 2: Index all loose files in APW mods
print("Indexing APW loose files…", flush=True)
known = set()
for p in APW_MODS.rglob("*"):
    if p.is_file() and p.suffix.lower() in (".nif", ".dds"):
        try: rel = p.relative_to(APW_MODS)
        except: continue
        parts = rel.parts
        if len(parts) > 1:
            known.add("/".join(parts[1:]).lower().replace("\\", "/"))
print(f"  {len(known)} unique data-relative paths\n")

# Step 3: Iterate the broken-mesh records in OOO Enhanced.esp; for each, find
# the winning override in APW and check whether the winning MODL/MOD2/MOD3/MOD4
# paths resolve.
rows = [json.loads(l) for l in open(r"D:/Modlists/Reborn/research/ooo_enh_mesh_problems_with_resources.jsonl")]

# Group rows by (fid, sig) to deduplicate per-record (each record may have 4 mesh subs)
records_to_check = {}
for r in rows:
    key = (r["sig"], int(r["fid"], 16))
    records_to_check.setdefault(key, []).append(r)
print(f"Unique broken-mesh records: {len(records_to_check)}\n")

resolved = 0
unresolved = 0
fixed_at_record_layer = []
still_broken = []
for (sig, r_fid), problem_paths in records_to_check.items():
    # OOO Enhanced.esp is master[3] in itself (high byte 4); for APW lookup:
    # the broken-mesh record was added by OOO Enhanced (high byte == self_idx == 4 in OOO Enh)
    # In APW load order, OOO Enhanced is a master. So src_plugin = "ooo enhanced.esp", local_fid = r_fid & 0xFFFFFF
    local = r_fid & 0x00FFFFFF
    win = winning.get((sig, "ooo enhanced.esp", local))
    if not win:
        unresolved += 1
        continue
    body, win_plugin = win

    # Extract winning MODL/MOD2/MOD3/MOD4
    win_paths = []
    for ssig, sub in parse_subrecords(body):
        if ssig in ("MODL", "MOD2", "MOD3", "MOD4"):
            p = cstr(sub).lower().replace("\\", "/")
            if p:
                full = p if p.startswith("meshes/") else "meshes/" + p
                win_paths.append((ssig, full))

    # Are ALL winning paths resolvable?
    all_resolved = all(p in known for _, p in win_paths)
    if all_resolved:
        resolved += 1
        if len(fixed_at_record_layer) < 15:
            # Show what changed
            orig_paths = sorted({(p["subrec"], p["path"]) for p in problem_paths})
            new_paths = sorted({(s, p) for s, p in win_paths})
            fixed_at_record_layer.append({
                "fid": f"0x{r_fid:08X}",
                "sig": sig,
                "edid": problem_paths[0]["edid"],
                "winner": win_plugin,
                "orig_unresolved": orig_paths,
                "new_resolved": new_paths,
            })
    else:
        unresolved += 1
        still_paths = [p for s, p in win_paths if p not in known]
        if len(still_broken) < 15:
            still_broken.append({
                "fid": f"0x{r_fid:08X}",
                "sig": sig,
                "edid": problem_paths[0]["edid"],
                "winner": win_plugin,
                "still_broken_paths": still_paths,
            })

print(f"Records fixed at record layer (winning paths resolve in APW): {resolved}")
print(f"Records still broken (winning paths still don't resolve):     {unresolved}")
print(f"Total checked: {resolved + unresolved}\n")

print("=== Sample records FIXED at the record layer ===")
for f in fixed_at_record_layer[:10]:
    print(f"\n  {f['fid']} {f['sig']:5s} {f['edid'][:30]:30s}  WINNER: {f['winner']}")
    for s, p in f["orig_unresolved"][:2]:
        print(f"    OLD: {s}: {p}")
    for s, p in f["new_resolved"][:2]:
        print(f"    NEW: {s}: {p}")

print("\n\n=== Sample records still BROKEN at record layer ===")
for f in still_broken[:10]:
    print(f"\n  {f['fid']} {f['sig']:5s} {f['edid'][:30]:30s}  winner: {f['winner']}")
    for p in f["still_broken_paths"][:2]:
        print(f"    still missing: {p}")
