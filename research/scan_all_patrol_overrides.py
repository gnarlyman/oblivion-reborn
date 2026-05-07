"""For all 35 OOO Imperial Legion mounted patrol NPCs, find which APW vs Reborn
plugins override them and dump key inventory differences.

Goal: determine if APW CR systematically replaces gear on ALL patrol riders or
just the two we identified.
"""
import struct, zlib, os
from pathlib import Path

# All 35 ImperialLegionRider* NPC local FormIDs (vanilla 17 + OOO 18 "B" variants)
PATROL_NPCS = {
    # Vanilla Oblivion.esm
    0x0700C0, 0x0700C1, 0x0700C2, 0x0700C3, 0x0700C4, 0x0700C5,
    0x0700C6, 0x0700C7, 0x0700C8, 0x0700C9, 0x0700CA, 0x0700CB,
    0x0700CC, 0x0700CD, 0x18BA86, 0x18BA88, 0x18BA89,
    # OOO ESM "B" variants (master byte 01 in OOO ESM context, but local FID is what matters)
    0x004D3B, 0x004D3F, 0x0052B7, 0x0052BE, 0x0052C6, 0x0052D1,
    0x0052D4, 0x012391, 0x03A27D, 0x03A286, 0x03A28B, 0x03A290,
    0x03A298, 0x03A29F, 0x03A78C, 0x03A796, 0x03AC9D, 0x03B18A,
    0x03B194,
}

PROFILES = {
    "APW": ("D:/Modlists/APW/profiles/A Painted World/plugins.txt",
            "D:/Modlists/APW/mods"),
    "Reborn-OOO": ("D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt",
                   "D:/Modlists/Reborn/mods"),
}

# Item categories: which OOO Tarnished armor pieces appear?
TARNISHED_ITEMS = {0xD851, 0xD852, 0xD853, 0xD855, 0xD856, 0xD857}


def read_plugins_txt(path):
    out = []
    with open(path, encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'): continue
            if line.startswith('*'): line = line[1:]
            out.append(line)
    return out


def find_esp_path(plugin_name, mods_dir):
    for root, _, files in os.walk(mods_dir):
        for f in files:
            if f.lower() == plugin_name.lower():
                return os.path.join(root, f)
    return None


def parse_subs(body):
    out = []; j = 0
    while j+6 <= len(body):
        s = body[j:j+4]; sz = struct.unpack('<H', body[j+4:j+6])[0]
        out.append((s.decode('latin1','replace'), body[j+6:j+6+sz]))
        j += 6 + sz
    return out


def walk(data, off, end, found):
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            walk(data, cur+20, cur+size, found)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            local_fid = fid & 0xFFFFFF
            if sig == b'NPC_' and local_fid in PATROL_NPCS:
                body = data[cur+20:cur+20+size]
                if flags & 0x40000:
                    body = zlib.decompress(body[4:])
                edid, scri = '', None
                cnto_locals = []
                for s, d in parse_subs(body):
                    if s == 'EDID': edid = d.rstrip(b'\x00').decode('latin1','replace')
                    elif s == 'SCRI' and len(d) >= 4: scri = struct.unpack('<I', d[:4])[0] & 0xFFFFFF
                    elif s == 'CNTO' and len(d) >= 4: cnto_locals.append(struct.unpack('<I', d[:4])[0] & 0xFFFFFF)
                found.append({
                    'local_fid': local_fid,
                    'edid': edid,
                    'scri': scri,
                    'cnto_locals': cnto_locals,
                })
            cur += 20 + size


def scan(path):
    data = open(path, 'rb').read()
    tes4_size = struct.unpack('<I', data[4:8])[0]
    found = []
    walk(data, 20+tes4_size, len(data), found)
    return found


def main():
    by_profile = {}
    for profile_name, (plugins_txt, mods_dir) in PROFILES.items():
        plugins = read_plugins_txt(plugins_txt)
        # Last-wins, so iterate plugins in load order; later plugins overwrite earlier ones in `winner`
        winner = {}  # local_fid -> (plugin_name, record_dict)
        plugins_seen = []
        for plugin_name in plugins:
            esp_path = find_esp_path(plugin_name, mods_dir)
            if not esp_path: continue
            try:
                hits = scan(esp_path)
            except Exception:
                continue
            if hits:
                plugins_seen.append((plugin_name, hits))
                for h in hits:
                    winner[h['local_fid']] = (plugin_name, h)
        by_profile[profile_name] = (winner, plugins_seen)

    # Print summary tables
    for profile_name, (winner, plugins_seen) in by_profile.items():
        print(f"\n{'='*70}\nPROFILE: {profile_name} — winning records by NPC")
        print(f"{'='*70}")
        for fid in sorted(PATROL_NPCS):
            if fid not in winner:
                print(f"  {fid:06X}: (no override; vanilla wins)")
                continue
            plugin, rec = winner[fid]
            tarn_count = sum(1 for c in rec['cnto_locals'] if c in TARNISHED_ITEMS)
            print(f"  {fid:06X} {rec['edid']:<35} winner={plugin:<45} CNTO={len(rec['cnto_locals'])} Tarnished_armor_pieces={tarn_count}")

    # Comparison summary
    print(f"\n{'='*70}\nDIFF: APW winner vs Reborn winner per patrol NPC")
    print(f"{'='*70}")
    apw_w = by_profile['APW'][0]
    reb_w = by_profile['Reborn-OOO'][0]
    for fid in sorted(PATROL_NPCS):
        if fid not in apw_w and fid not in reb_w: continue
        apw_p, apw_r = apw_w.get(fid, (None, None))
        reb_p, reb_r = reb_w.get(fid, (None, None))
        apw_tarn = sum(1 for c in apw_r['cnto_locals'] if c in TARNISHED_ITEMS) if apw_r else 0
        reb_tarn = sum(1 for c in reb_r['cnto_locals'] if c in TARNISHED_ITEMS) if reb_r else 0
        edid = (apw_r and apw_r['edid']) or (reb_r and reb_r['edid']) or '?'
        if apw_tarn == reb_tarn:
            marker = ' '
        else:
            marker = '!'  # gear differs
        print(f"  {marker} {fid:06X} {edid:<32} APW_tarn={apw_tarn}/{len(apw_r['cnto_locals']) if apw_r else 0:>2}  REB_tarn={reb_tarn}/{len(reb_r['cnto_locals']) if reb_r else 0:>2}  APW_winner={apw_p}")


if __name__ == '__main__':
    main()
