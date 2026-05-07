"""For each patrol ACHR (rider placement), follow the XHRS link to the horse
ACRE, then to the horse CREA base. Determine what CREA the horse uses, then
check if APW Merge / APW CR overrides that CREA with anything significant.
"""
import struct, zlib, sys, os
from pathlib import Path
sys.path.insert(0, '.')
from oblivion_esp_builder import parse_esp, iter_records

OBLIVION = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"

PATROL_NPCS = {
    0x0700C0, 0x0700C1, 0x0700C2, 0x0700C3, 0x0700C4, 0x0700C5,
    0x0700C6, 0x0700C7, 0x0700C8, 0x0700C9, 0x0700CA, 0x0700CB,
    0x0700CC, 0x0700CD, 0x18BA86, 0x18BA88, 0x18BA89,
    0x004D3B, 0x004D3F, 0x0052B7, 0x0052BE, 0x0052C6, 0x0052D1,
    0x0052D4, 0x012391, 0x03A27D, 0x03A286, 0x03A28B, 0x03A290,
    0x03A298, 0x03A29F, 0x03A78C, 0x03A796, 0x03AC9D, 0x03B18A,
    0x03B194,
}

def parse_subs(body):
    out = []; i = 0
    while i+6 <= len(body):
        s = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((s, body[i+6:i+6+sz]))
        i += 6 + sz
    return out

def get_body(rec):
    body_size = struct.unpack('<I', rec.raw_bytes[4:8])[0]
    if rec.flags & 0x40000:
        return zlib.decompress(rec.raw_bytes[24:20+body_size])
    return rec.raw_bytes[20:20+body_size]


def main():
    # Step 1: walk Oblivion.esm to find ACHR/ACRE/CREA chain for our patrols.
    src = parse_esp(OBLIVION)
    # Build maps
    achr_by_namefid = {}  # local NAME (NPC) -> [(achr_fid, xhrs_fid)]
    acre_by_local = {}    # ACRE local fid -> name_fid (CREA base)

    for r in iter_records(src):
        if r.sig == 'ACHR':
            body = get_body(r)
            name_fid = None; xhrs_fid = None
            for s, d in parse_subs(body):
                if s == b'NAME' and len(d) >= 4:
                    name_fid = struct.unpack('<I', d[:4])[0]
                elif s == b'XHRS' and len(d) >= 4:
                    xhrs_fid = struct.unpack('<I', d[:4])[0]
            if name_fid and (name_fid & 0xFFFFFF) in PATROL_NPCS:
                achr_by_namefid.setdefault(name_fid & 0xFFFFFF, []).append({
                    'achr_fid': r.fid, 'xhrs_fid': xhrs_fid,
                })
        elif r.sig == 'ACRE':
            body = get_body(r)
            for s, d in parse_subs(body):
                if s == b'NAME' and len(d) >= 4:
                    acre_by_local[r.local_fid] = struct.unpack('<I', d[:4])[0]
                    break

    # Step 2: walk CREA records, build local-fid -> EDID
    crea_edids = {}
    for r in iter_records(src):
        if r.sig == 'CREA':
            crea_edids[r.local_fid] = r.edid

    # Print the chain
    horses_used = set()
    print(f"=== Patrol rider -> horse -> horse-CREA chain (Oblivion.esm) ===")
    for npc_fid in sorted(PATROL_NPCS):
        if npc_fid not in achr_by_namefid:
            print(f"  NPC {npc_fid:06X} -- no ACHR placement found in Oblivion.esm (likely OOO-added)")
            continue
        for entry in achr_by_namefid[npc_fid]:
            xhrs_local = (entry['xhrs_fid'] or 0) & 0xFFFFFF
            crea_fid = acre_by_local.get(xhrs_local)
            if crea_fid is None:
                print(f"  NPC {npc_fid:06X}  ACHR {entry['achr_fid']:08X}  XHRS->{xhrs_local:06X}  (ACRE not found)")
                continue
            crea_local = crea_fid & 0xFFFFFF
            edid = crea_edids.get(crea_local, '?')
            horses_used.add(crea_local)
            print(f"  NPC {npc_fid:06X}  ACHR {entry['achr_fid']:08X}  XHRS {xhrs_local:06X}  -> CREA {crea_local:06X} EDID={edid}")

    # Step 3: check if APW CR or Merge overrides those CREA records
    print(f"\n=== Horse CREA records used: {sorted([f'{h:06X}' for h in horses_used])}")
    apw_files = [
        "D:/Modlists/APW/mods/A Painted World Configs/APW Merge.esp",
        "D:/Modlists/APW/mods/A Painted World Configs/APW Merge 2.esp",
        "D:/Modlists/APW/mods/A Painted World Configs/APW Merge 3.esp",
        "D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp",
    ]
    for path in apw_files:
        if not os.path.exists(path):
            print(f"  (skip {path})")
            continue
        e = parse_esp(path)
        hits = []
        for r in iter_records(e):
            if r.sig in ('CREA',) and r.local_fid in horses_used:
                hits.append((r.local_fid, r.edid, r.fid))
        if hits:
            print(f"  [{Path(path).name}] CREA overrides on patrol horses: {len(hits)}")
            for lf, edid, fid in hits:
                print(f"    CREA {lf:06X} {edid} (full FID {fid:08X})")
        else:
            print(f"  [{Path(path).name}] no patrol-horse CREA overrides")


if __name__ == '__main__':
    main()
