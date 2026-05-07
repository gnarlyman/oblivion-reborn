"""Look at APW Conflict Resolution.esp for any record types touching the
35 patrol NPCs OR their horses.

Specifically:
  - ACHR records whose NAME (base FID) is one of our 35 patrol NPCs → placement
  - ACRE records whose NAME is one of the patrol horses
  - PACK records referenced by patrol NPCs as PKID
  - CREA records that are horse bases for patrol horses
  - ACHR/ACRE record-header flags (initial-disable bit 0x800)
"""
import struct, zlib, sys
from pathlib import Path
sys.path.insert(0, '.')
from oblivion_esp_builder import parse_esp, iter_records

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
    src = parse_esp('D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp')
    src_masters = src.masters
    src_self = len(src_masters)

    # Pass 1: gather PKID references from patrol NPCs (collect package FIDs)
    patrol_pkids = set()
    patrol_horse_xhrs = set()  # horse FIDs from XHRS in patrol ACHRs (we'll find ACHRs first)

    # Also collect ACHRs that point at our patrol NPCs (and their XHRS horse ACRE FIDs)
    achr_hits = []  # records pointing to our patrol NPCs
    acre_hits = []  # ACRE records that are linked horses
    pack_hits = []  # PACK records that match patrol PKIDs
    crea_hits = []  # CREA records that might be horse bases for patrol horses

    # First find PKIDs from patrol NPC_ records
    for r in iter_records(src):
        if r.sig != 'NPC_': continue
        if r.local_fid not in PATROL_NPCS: continue
        body = get_body(r)
        for s, d in parse_subs(body):
            if s == b'PKID' and len(d) >= 4:
                patrol_pkids.add(struct.unpack('<I', d[:4])[0])

    # Translate to local IDs (since we want to find PACK records by local FID)
    print(f"Patrol NPCs reference {len(patrol_pkids)} unique package FIDs")

    # ACHR pass — find placements pointing at patrol NPCs
    for r in iter_records(src):
        if r.sig != 'ACHR': continue
        body = get_body(r)
        name_fid = None
        xhrs_fid = None
        init_dis = bool(r.flags & 0x800)
        for s, d in parse_subs(body):
            if s == b'NAME' and len(d) >= 4:
                name_fid = struct.unpack('<I', d[:4])[0]
            elif s == b'XHRS' and len(d) >= 4:
                xhrs_fid = struct.unpack('<I', d[:4])[0]
        if name_fid is None: continue
        # Check if NAME points at a patrol NPC (any master, any local FID matching)
        local = name_fid & 0xFFFFFF
        if local in PATROL_NPCS:
            achr_hits.append({
                'achr_fid': r.fid, 'name_fid': name_fid, 'xhrs_fid': xhrs_fid,
                'init_disable': init_dis, 'flags': r.flags,
            })
            if xhrs_fid is not None:
                patrol_horse_xhrs.add(xhrs_fid & 0xFFFFFF)

    print(f"\n=== ACHR overrides referencing patrol NPCs: {len(achr_hits)}")
    for h in achr_hits:
        print(f"  ACHR {h['achr_fid']:08X} -> NAME {h['name_fid']:08X} XHRS={(f"{h['xhrs_fid']:08X}" if h['xhrs_fid'] else 'None')}  init_disable={h['init_disable']} flags=0x{h['flags']:08X}")

    print(f"\n=== Searching for ACRE records matching patrol horse FIDs: {sorted(patrol_horse_xhrs)[:10]}{'...' if len(patrol_horse_xhrs)>10 else ''}")
    for r in iter_records(src):
        if r.sig != 'ACRE': continue
        if r.local_fid in patrol_horse_xhrs:
            init_dis = bool(r.flags & 0x800)
            body = get_body(r)
            name_fid = None
            for s, d in parse_subs(body):
                if s == b'NAME' and len(d) >= 4:
                    name_fid = struct.unpack('<I', d[:4])[0]
            print(f"  ACRE {r.fid:08X} (horse placement) -> NAME (CREA base) {(f"{name_fid:08X}" if name_fid else 'None')}  init_disable={init_dis} flags=0x{r.flags:08X}")
            acre_hits.append((r.fid, name_fid))

    # Check PACK records matching patrol PKIDs
    print(f"\n=== PACK overrides among patrol PKIDs: ")
    pkid_locals = {p & 0xFFFFFF for p in patrol_pkids}
    pack_count = 0
    for r in iter_records(src):
        if r.sig != 'PACK': continue
        if r.local_fid in pkid_locals:
            pack_count += 1
            if pack_count <= 5:
                print(f"  PACK {r.fid:08X} EDID={r.edid}")
    print(f"  total: {pack_count}")


if __name__ == '__main__':
    main()
