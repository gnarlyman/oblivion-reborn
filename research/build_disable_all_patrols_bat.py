"""Generate a console bat that disables every OOO Imperial Legion mounted
patrol (rider ACHR + horse ACRE) using load-order-aware FormIDs from the
current Reborn-OOO plugins.txt.

Usage in-game:
  bat disable_all_patrols

Each patrol pair gets:
  prid <rider_LO_FID>
  disable
  prid <horse_LO_FID>
  disable
"""
import os
import struct
import zlib
from pathlib import Path

PLUGINS_TXT = "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
OUT_PATH = "D:/Modlists/Reborn/mods/Reborn - Spawn Bat Files/Root/disable_all_patrols.txt"

# All 36 patrol NPCs identified as (master_plugin, local_fid) -> EDID
PATROL_NPCS = {
    # Vanilla 17 (Oblivion.esm)
    ("Oblivion.esm", 0x0700C0): "ImperialLegionRiderAnvil",
    ("Oblivion.esm", 0x0700C1): "ImperialLegionRiderGottshaw",
    ("Oblivion.esm", 0x0700C2): "ImperialLegionRiderCrossroads",
    ("Oblivion.esm", 0x0700C3): "ImperialLegionRiderRidge",
    ("Oblivion.esm", 0x0700C4): "ImperialLegionRiderSlope",
    ("Oblivion.esm", 0x0700C5): "ImperialLegionRiderFalls",
    ("Oblivion.esm", 0x0700C6): "ImperialLegionRiderWell",
    ("Oblivion.esm", 0x0700C7): "ImperialLegionRiderSardavar",
    ("Oblivion.esm", 0x0700C8): "ImperialLegionRiderRoxey",
    ("Oblivion.esm", 0x0700C9): "ImperialLegionRiderWellspring",
    ("Oblivion.esm", 0x0700CA): "ImperialLegionRiderAleswell",
    ("Oblivion.esm", 0x0700CB): "ImperialLegionRiderNikel",
    ("Oblivion.esm", 0x0700CC): "ImperialLegionRiderVirtue",
    ("Oblivion.esm", 0x0700CD): "ImperialLegionRiderRock",
    ("Oblivion.esm", 0x18BA86): "ImperialLegionRiderChorrol",
    ("Oblivion.esm", 0x18BA88): "ImperialLegionRiderChey",
    ("Oblivion.esm", 0x18BA89): "ImperialLegionRiderLey",
    # OOO ESM B-variants 19
    ("Oscuro's_Oblivion_Overhaul.esm", 0x004D3B): "ImperialLegionRiderSardavarB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x004D3F): "ImperialLegionRiderSlopeB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x0052B7): "ImperialLegionRiderRidgeB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x0052BE): "ImperialLegionRiderGottshawB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x0052C6): "ImperialLegionRiderRoxeyB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x0052D1): "ImperialLegionRiderWellspringB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x0052D4): "ImperialLegionRiderAnvilB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x012391): "ImperialLegionRiderWeye",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A27D): "ImperialLegionRiderWeyeB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A286): "ImperialLegionRiderNikelB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A28B): "ImperialLegionRiderAleswellB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A290): "ImperialLegionRiderCheyB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A298): "ImperialLegionRiderVirtueB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A29F): "ImperialLegionRiderFallsB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A78C): "ImperialLegionRiderWellB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03A796): "ImperialLegionRiderLeyB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03AC9D): "ImperialLegionRiderRockB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03B18A): "ImperialLegionRiderChorrolB",
    ("Oscuro's_Oblivion_Overhaul.esm", 0x03B194): "ImperialLegionRiderCrossroadsB",
}

# Plugins to scan for ACHR placements
SCAN_PLUGINS = [
    ("Oblivion.esm",                            "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"),
    ("Oscuro's_Oblivion_Overhaul.esm",          "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esm"),
    ("Oscuro's_Oblivion_Overhaul.esp",          "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esp"),
    ("OOO Enhanced.esp",                        "D:/Modlists/Reborn/mods/OOO Enhanced/OOO Enhanced.esp"),
]


def read_plugins_lo():
    out = {}
    idx = 0
    with open(PLUGINS_TXT, encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('*'):
                line = line[1:]
            out[line] = idx
            idx += 1
    return out


def parse_masters(data):
    tes4_size = struct.unpack('<I', data[4:8])[0]
    flags = struct.unpack('<I', data[8:12])[0]
    body = data[20:20+tes4_size]
    if flags & 0x40000:
        body = zlib.decompress(body[4:])
    masters, i = [], 0
    while i + 6 <= len(body):
        ss = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        if ss == b'MAST':
            masters.append(body[i+6:i+6+sz].rstrip(b'\x00').decode('latin1'))
        i += 6 + sz
    return masters


def parse_subs(body):
    out = []; i = 0
    while i + 6 <= len(body):
        s = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((s, body[i+6:i+6+sz]))
        i += 6 + sz
    return out


def walk(data, off, end, scan_plugin_name, masters, hits):
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            walk(data, cur+20, cur+size, scan_plugin_name, masters, hits)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            local = fid & 0xFFFFFF
            m_idx = (fid >> 24) & 0xFF
            # Determine the canonical owning plugin for this record
            self_byte = len(masters)
            if m_idx == self_byte:
                owner = scan_plugin_name
            else:
                owner = masters[m_idx] if m_idx < len(masters) else None

            if sig == b'ACHR' and owner:
                body = data[cur+20:cur+20+size]
                if flags & 0x40000:
                    body = zlib.decompress(body[4:])
                name_fid = None; xhrs_fid = None
                for ss, d in parse_subs(body):
                    if ss == b'NAME' and len(d) >= 4:
                        name_fid = struct.unpack('<I', d[:4])[0]
                    elif ss == b'XHRS' and len(d) >= 4:
                        xhrs_fid = struct.unpack('<I', d[:4])[0]
                if name_fid is not None:
                    n_local = name_fid & 0xFFFFFF
                    n_idx = (name_fid >> 24) & 0xFF
                    n_owner = scan_plugin_name if n_idx == self_byte else (masters[n_idx] if n_idx < len(masters) else None)
                    if (n_owner, n_local) in PATROL_NPCS:
                        # Resolve XHRS owner too
                        xhrs_owner = None; xhrs_local = None
                        if xhrs_fid is not None:
                            xhrs_local = xhrs_fid & 0xFFFFFF
                            xi = (xhrs_fid >> 24) & 0xFF
                            xhrs_owner = scan_plugin_name if xi == self_byte else (masters[xi] if xi < len(masters) else None)
                        hits.append({
                            'achr_owner': owner,
                            'achr_local': local,
                            'patrol_npc': PATROL_NPCS[(n_owner, n_local)],
                            'xhrs_owner': xhrs_owner,
                            'xhrs_local': xhrs_local,
                        })
            cur += 20 + size


def main():
    lo_byte = read_plugins_lo()
    print("Load-order bytes:")
    for plug, _ in SCAN_PLUGINS:
        if plug in lo_byte:
            print(f"  {plug}: 0x{lo_byte[plug]:02X}")
        else:
            print(f"  {plug}: NOT IN plugins.txt (will skip)")

    # Scan each plugin for ACHRs pointing at patrol NPCs
    all_hits = []
    seen = set()  # (achr_owner, achr_local)
    for plug_name, path in SCAN_PLUGINS:
        if plug_name not in lo_byte:
            continue
        if not os.path.exists(path):
            print(f"  WARN: file missing {path}")
            continue
        data = open(path, 'rb').read()
        masters = parse_masters(data)
        tes4_size = struct.unpack('<I', data[4:8])[0]
        hits = []
        walk(data, 20+tes4_size, len(data), plug_name, masters, hits)
        for h in hits:
            key = (h['achr_owner'], h['achr_local'])
            if key in seen:
                continue
            seen.add(key)
            all_hits.append(h)
        print(f"  scanned {plug_name}: {len(hits)} ACHR matches (deduped: {len(all_hits)})")

    # Generate bat file
    lines = []
    lines.append('; Auto-generated by build_disable_all_patrols_bat.py')
    lines.append(f'; Disables {len(all_hits)} OOO Imperial Legion mounted patrol pairs (rider + horse)')
    lines.append('; Run with:  bat disable_all_patrols')
    lines.append('printc "[NO_PATROLS] Disabling all Imperial Legion mounted patrols..."')
    lines.append('')
    skipped_horses = 0
    for h in all_hits:
        achr_owner = h['achr_owner']
        if achr_owner not in lo_byte:
            print(f"  WARN: ACHR owner {achr_owner!r} not in plugins.txt - skipping ACHR {h['achr_local']:06X}")
            continue
        achr_lo_fid = (lo_byte[achr_owner] << 24) | h['achr_local']
        lines.append(f'; -- {h["patrol_npc"]} (ACHR from {achr_owner})')
        lines.append(f'prid {achr_lo_fid:08X}')
        lines.append('disable')
        if h['xhrs_owner'] and h['xhrs_owner'] in lo_byte and h['xhrs_local'] is not None:
            xhrs_lo_fid = (lo_byte[h['xhrs_owner']] << 24) | h['xhrs_local']
            lines.append(f'prid {xhrs_lo_fid:08X}')
            lines.append('disable')
        else:
            skipped_horses += 1

    lines.append('')
    lines.append(f'printc "[NO_PATROLS] Done. {len(all_hits)} patrols disabled."')

    out = Path(OUT_PATH)
    out.parent.mkdir(parents=True, exist_ok=True)
    with open(out, 'w', encoding='ascii') as f:
        f.write('\n'.join(lines) + '\n')

    print(f"\nWrote: {out}")
    print(f"  ACHR pairs disabled: {len(all_hits)}")
    if skipped_horses:
        print(f"  Skipped {skipped_horses} horse ACREs (XHRS unresolved)")


if __name__ == '__main__':
    main()
