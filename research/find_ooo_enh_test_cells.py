"""Find cells/worldspaces with concentrated OOO Enhanced new ACHRs/ACREs.
Lists the top cells by placed-actor count so we can pick easy test locations."""
from __future__ import annotations
import io, sys, struct, zlib
from collections import Counter, defaultdict
from pathlib import Path
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

ESP = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
data, masters = load_plugin(ESP)
self_idx = len(masters)

# Build a NPC base-FID lookup: which OOO Enhanced NEW NPCs exist?
new_npc_local_to_label = {}
for top, sig, r_fid, _, body in iter_records(data):
    if sig == "NPC_" and (r_fid >> 24) & 0xFF == self_idx:
        edid = ""; full = ""
        for ssig, sub in parse_subrecords(body):
            if ssig == "EDID": edid = cstr(sub)
            elif ssig == "FULL": full = cstr(sub)
        new_npc_local_to_label[r_fid & 0xFFFFFF] = (edid, full)

# Build CREA lookup
new_crea_local_to_label = {}
for top, sig, r_fid, _, body in iter_records(data):
    if sig == "CREA" and (r_fid >> 24) & 0xFF == self_idx:
        edid = ""; full = ""
        for ssig, sub in parse_subrecords(body):
            if ssig == "EDID": edid = cstr(sub)
            elif ssig == "FULL": full = cstr(sub)
        new_crea_local_to_label[r_fid & 0xFFFFFF] = (edid, full)

# Walk records to track CELL hierarchy
# In Oblivion CELL groups, ACHR/ACRE records are children of the parent CELL.
# Need to walk top-level groups properly with parent context.

def parse_grup(off, end, current_cell=None, current_cell_label=None, results=None):
    while off < end:
        if data[off:off+4] == b"GRUP":
            grp_size = struct.unpack_from("<I", data, off+4)[0]
            grp_label_raw = data[off+8:off+12]
            grp_type = struct.unpack_from("<I", data, off+12)[0]
            # Group types: 0=top, 1=world children, 2=interior cell block, 3=interior cell sub-block,
            # 4=exterior cell block, 5=exterior cell sub-block, 6=cell children, 7=topic children,
            # 8=cell persistent children, 9=cell temporary children, 10=cell visible distant children
            if grp_type in (6, 8, 9, 10) and current_cell is not None:
                parse_grup(off+20, off+grp_size, current_cell, current_cell_label, results)
            else:
                parse_grup(off+20, off+grp_size, current_cell, current_cell_label, results)
            off += grp_size
            continue
        # record
        r_size = struct.unpack_from("<I", data, off+4)[0]
        r_flags = struct.unpack_from("<I", data, off+8)[0]
        r_fid = struct.unpack_from("<I", data, off+12)[0]
        tag = data[off:off+4].decode("latin-1", "replace")
        body = data[off+20:off+20+r_size]
        if r_flags & 0x00040000:
            try: body = zlib.decompress(body[4:])
            except: pass
        if tag == "CELL":
            edid = ""; full = ""
            for ssig, sub in parse_subrecords(body):
                if ssig == "EDID": edid = cstr(sub)
                elif ssig == "FULL": full = cstr(sub)
            current_cell = r_fid
            current_cell_label = edid or full or f"0x{r_fid:08X}"
        elif tag in ("ACHR", "ACRE") and current_cell is not None:
            high = (r_fid >> 24) & 0xFF
            # Get the placed base via NAME subrecord
            base_fid = 0
            for ssig, sub in parse_subrecords(body):
                if ssig == "NAME" and len(sub) >= 4:
                    base_fid = struct.unpack_from("<I", sub, 0)[0]
                    break
            # Is the placed base a NEW OOO Enhanced NPC/CREA?
            base_high = (base_fid >> 24) & 0xFF
            base_local = base_fid & 0xFFFFFF
            if base_high == self_idx:
                if tag == "ACHR" and base_local in new_npc_local_to_label:
                    edid, full = new_npc_local_to_label[base_local]
                    results.setdefault(current_cell_label, {"npcs": [], "crea": []})
                    results[current_cell_label]["npcs"].append((edid, full))
                elif tag == "ACRE" and base_local in new_crea_local_to_label:
                    edid, full = new_crea_local_to_label[base_local]
                    results.setdefault(current_cell_label, {"npcs": [], "crea": []})
                    results[current_cell_label]["crea"].append((edid, full))
        off += 20+r_size

results = {}
tes4_size = struct.unpack_from("<I", data, 4)[0]
parse_grup(20+tes4_size, len(data), None, None, results)

# Rank cells by total placed new actors
ranked = sorted(results.items(), key=lambda kv: -(len(kv[1]["npcs"]) + len(kv[1]["crea"])))
print(f"Cells with new OOO Enhanced placed actors: {len(ranked)}\n")
print(f"Top 15 cells:")
for cell, data_ in ranked[:15]:
    n_npcs = len(data_["npcs"])
    n_crea = len(data_["crea"])
    print(f"\n  [{n_npcs} NPCs + {n_crea} creatures] {cell}")
    seen = set()
    for edid, full in data_["npcs"][:6]:
        label = full or edid
        if label in seen: continue
        seen.add(label)
        print(f"    NPC:  {label}")
    for edid, full in data_["crea"][:4]:
        label = full or edid
        if label in seen: continue
        seen.add(label)
        print(f"    CREA: {label}")
