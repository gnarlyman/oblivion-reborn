"""Find every ACHR in Oblivion.esm that references one of OOO's affected
patrol NPCs (000700CC ImperialLegionRiderVirtue, 000700CD ImperialLegionRiderRock,
or other OOO Imperial Legion mounted patrols). We scan ALL ACHRs and look at
their NAME (base NPC reference) subrecord.
"""
import struct, zlib

OBLIVION = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"

# The two NPCs we know are crashing.
KNOWN_NPCS = {0x000700CC, 0x000700CD}

# Also enumerate any NPC_ whose EDID matches these prefixes — likely mounted
# Imperial Legion patrols.
EDID_PATTERNS = ('LegionRider', 'LegionPatrol', 'IL_Rider', 'IL_Patrol')

# Optional: also enumerate all NAMEs that look like LegionRider* by EDID prefix.
# We'd need to walk NPC_ records first to build a name map.

def parse_subs(body):
    out = []; j = 0
    while j + 6 <= len(body):
        s = body[j:j+4]; sz = struct.unpack('<H', body[j+4:j+6])[0]
        out.append((s, body[j+6:j+6+sz]))
        j += 6 + sz
    return out

def walk_pattern_npcs(data, off, end, file_label, npc_edids_for_path, all_pattern_hits):
    """Walk one file looking for NPC_ records whose EDID matches EDID_PATTERNS."""
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            walk_pattern_npcs(data, cur+20, cur+size, file_label, npc_edids_for_path, all_pattern_hits)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            local_fid = fid & 0xFFFFFF
            body = data[cur+20:cur+20+size]
            if flags & 0x40000:
                body = zlib.decompress(body[4:])
            if sig == b'NPC_':
                edid = ''
                for s, d in parse_subs(body):
                    if s == b'EDID':
                        edid = d.rstrip(b'\x00').decode('latin1','replace')
                        break
                if edid and any(p.lower() in edid.lower() for p in EDID_PATTERNS):
                    all_pattern_hits.append((file_label, local_fid, edid))
                if edid:
                    npc_edids_for_path[local_fid] = edid
            cur += 20 + size


def walk(data, off, end, hits, npc_edids):
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            walk(data, cur+20, cur+size, hits, npc_edids)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            local_fid = fid & 0xFFFFFF
            body = data[cur+20:cur+20+size]
            if flags & 0x40000:
                body = zlib.decompress(body[4:])
            if sig == b'NPC_':
                edid = ''
                for s, d in parse_subs(body):
                    if s == b'EDID':
                        edid = d.rstrip(b'\x00').decode('latin1','replace')
                        break
                if edid:
                    npc_edids[local_fid] = edid
            elif sig == b'ACHR':
                # NAME subrecord = base NPC FID
                name_fid = None
                xhrs_fid = None
                for s, d in parse_subs(body):
                    if s == b'NAME' and len(d) >= 4:
                        name_fid = struct.unpack('<I', d[:4])[0]
                    elif s == b'XHRS' and len(d) >= 4:
                        xhrs_fid = struct.unpack('<I', d[:4])[0]
                if name_fid is not None:
                    base_local = name_fid & 0xFFFFFF
                    if base_local in KNOWN_NPCS:
                        hits.append({
                            'achr_fid': fid,
                            'base_npc': base_local,
                            'xhrs': xhrs_fid,
                        })
            cur += 20 + size

def main():
    data = open(OBLIVION, 'rb').read()
    tes4_size = struct.unpack('<I', data[4:8])[0]
    hits = []
    npc_edids = {}
    walk(data, 20+tes4_size, len(data), hits, npc_edids)

    print(f"NPC_ EDIDs for known crash NPCs:")
    for fid in sorted(KNOWN_NPCS):
        print(f"  {fid:06X}: {npc_edids.get(fid, '(not found)')}")

    print(f"\nACHR placements referencing these NPCs:")
    for h in hits:
        base = npc_edids.get(h['base_npc'], '?')
        xhrs_str = f"  XHRS=>{h['xhrs']:08X}" if h['xhrs'] is not None else ""
        print(f"  ACHR {h['achr_fid']:08X}  base={base}{xhrs_str}")
    print(f"\nTotal: {len(hits)} ACHR placements")

    # Cross-plugin EDID-pattern scan
    print()
    print("=== EDID-pattern scan: all NPC_ matching LegionRider/LegionPatrol/IL_Rider/IL_Patrol ===")
    files = [
        ("Oblivion.esm", OBLIVION),
        ("OOO ESM", "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esm"),
        ("OOO ESP", "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esp"),
        ("OOO Enhanced", "D:/Modlists/Reborn/mods/OOO Enhanced/OOO Enhanced.esp"),
        ("MOO", "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul 5_0_5/Maskar's Oblivion Overhaul.esp"),
    ]
    all_pattern_hits = []
    for label, path in files:
        try:
            d2 = open(path, 'rb').read()
            tes4_sz = struct.unpack('<I', d2[4:8])[0]
            local_npc_edids = {}
            walk_pattern_npcs(d2, 20+tes4_sz, len(d2), label, local_npc_edids, all_pattern_hits)
        except FileNotFoundError:
            print(f"  (skipped, file not found: {path})")
    for label, fid, edid in all_pattern_hits:
        print(f"  [{label}] NPC_ {fid:06X} EDID={edid!r}")
    print(f"\nTotal pattern-matching NPCs: {len(all_pattern_hits)}")

if __name__ == '__main__':
    main()
