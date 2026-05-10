"""Compare master vs OOO Enhanced override CNTO for specific NPCs."""
from __future__ import annotations
import io, sys, struct
from pathlib import Path
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

ESP = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
OOO_ESM_PATH = next(Path(r"D:\Modlists\Reborn\mods").glob("OOO - Oscuro*/*.esm"))

data, masters = load_plugin(ESP)
self_idx = len(masters)
ooo_data, ooo_masters = load_plugin(OOO_ESM_PATH)

targets = {
    0x003F14: "Astral Mistress",
    0x0234A7: "Putrid Hand Initiate",
    0x0109A2: "Amazon Wise Mother",
    0x006B1C: "Pilgrim of Arkay",
    0x026B4D: "Olyn Seran",
}

# Master records in OOO.esm
master_records = {}
for top, sig, r_fid, _, body in iter_records(ooo_data):
    if sig != "NPC_": continue
    local = r_fid & 0xFFFFFF
    if local in targets:
        master_records[local] = body

print("=" * 60)
print("MASTER (OOO.esm) records:")
print("=" * 60)
for local, label in targets.items():
    if local not in master_records:
        print(f"\n  {label} ({local:06X}): NOT FOUND in OOO.esm master")
        continue
    cntos = []
    edid = ""
    for ssig, sub in parse_subrecords(master_records[local]):
        if ssig == "EDID":
            edid = cstr(sub)
        elif ssig == "CNTO" and len(sub) >= 8:
            item_fid = struct.unpack_from("<I", sub, 0)[0]
            count = struct.unpack_from("<i", sub, 4)[0]
            cntos.append((item_fid, count))
    print(f"\n  {label} ({local:06X}) [{edid}] — {len(cntos)} CNTO items in OOO.esm master")
    for fid, c in cntos:
        print(f"    0x{fid:08X} x{c}")

# Override in OOO Enhanced.esp
print("\n" + "=" * 60)
print("OOO Enhanced.esp OVERRIDE:")
print("=" * 60)
for top, sig, r_fid, _, body in iter_records(data):
    if sig != "NPC_": continue
    if (r_fid >> 24) & 0xFF == self_idx: continue
    local = r_fid & 0xFFFFFF
    if local in targets:
        cntos = []
        edid = ""
        for ssig, sub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(sub)
            elif ssig == "CNTO" and len(sub) >= 8:
                item_fid = struct.unpack_from("<I", sub, 0)[0]
                count = struct.unpack_from("<i", sub, 4)[0]
                cntos.append((item_fid, count))
        print(f"\n  {targets[local]} ({local:06X}) [{edid}] — {len(cntos)} CNTO items in OOO Enhanced override")
        for fid, c in cntos:
            print(f"    0x{fid:08X} x{c}")
