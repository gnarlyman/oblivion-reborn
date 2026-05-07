"""Find every plugin that touches the DerelictMineExterior CELL record,
its PGRD (pathgrid), LAND (landscape), or any REFR/ACHR/ACRE inside it.
Filter to ACTIVE plugins from current Reborn-OOO load order.
"""
import struct, zlib, os
from pathlib import Path

PLUGINS_TXT = "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
MODS_ROOT = "D:/Modlists/Reborn/mods"
STOCK = "D:/Modlists/Reborn/Stock Game/Data"

DERELICT_EXT = 0x00007D65

def read_plugins():
    out = []
    with open(PLUGINS_TXT, encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'): continue
            if line.startswith('*'): line = line[1:]
            out.append(line)
    return out

def find_path(name):
    if os.path.exists(os.path.join(STOCK, name)):
        return os.path.join(STOCK, name)
    for root, _, files in os.walk(MODS_ROOT):
        for f in files:
            if f.lower() == name.lower():
                return os.path.join(root, f)
    return None

def parse_masters(data):
    tes4_size = struct.unpack('<I', data[4:8])[0]
    flags = struct.unpack('<I', data[8:12])[0]
    body = data[20:20+tes4_size]
    if flags & 0x40000:
        body = zlib.decompress(body[4:])
    masters, i = [], 0
    while i+6 <= len(body):
        s = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        if s == b'MAST':
            masters.append(body[i+6:i+6+sz].rstrip(b'\x00').decode('latin1'))
        i += 6 + sz
    return masters

def walk(data, off, end, scan_plugin, masters, ctx_cell_label, hits):
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            grup_label = struct.unpack('<I', data[cur+8:cur+12])[0]
            grup_type = struct.unpack('<I', data[cur+12:cur+16])[0]
            new_ctx = ctx_cell_label
            if grup_type in (6, 8, 9):
                new_ctx = grup_label
            walk(data, cur+20, cur+size, scan_plugin, masters, new_ctx, hits)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            sig_str = sig.decode('latin1','replace')
            local = fid & 0xFFFFFF
            m_idx = (fid >> 24) & 0xFF
            owner = scan_plugin if m_idx == len(masters) else (masters[m_idx] if m_idx < len(masters) else None)

            # CELL itself: did we override it?
            if sig == b'CELL' and owner == 'Oblivion.esm' and local == DERELICT_EXT:
                hits.append({'type':'CELL', 'plugin': scan_plugin, 'fid': fid, 'flags': flags})

            # Records inside our target cell's children groups
            elif ctx_cell_label is not None:
                cell_local = ctx_cell_label & 0xFFFFFF
                cell_owner_idx = (ctx_cell_label >> 24) & 0xFF
                cell_owner = scan_plugin if cell_owner_idx == len(masters) else (masters[cell_owner_idx] if cell_owner_idx < len(masters) else None)
                if cell_owner == 'Oblivion.esm' and cell_local == DERELICT_EXT:
                    if sig in (b'REFR', b'ACHR', b'ACRE', b'PGRD', b'LAND'):
                        hits.append({'type': sig_str, 'plugin': scan_plugin, 'fid': fid, 'flags': flags})
            cur += 20 + size

def scan_plugin(path, name):
    data = open(path, 'rb').read()
    masters = parse_masters(data)
    tes4_size = struct.unpack('<I', data[4:8])[0]
    hits = []
    walk(data, 20+tes4_size, len(data), name, masters, None, hits)
    return hits

def main():
    plugins = read_plugins()
    print(f"Active plugins: {len(plugins)}")
    print(f"Scanning each for refs to DerelictMineExterior (0x{DERELICT_EXT:08X})...\n")
    by_plugin = {}
    by_type = {}
    for p in plugins:
        path = find_path(p)
        if not path: continue
        try:
            hits = scan_plugin(path, p)
        except Exception:
            continue
        if hits:
            by_plugin[p] = hits
            for h in hits:
                by_type.setdefault(h['type'], []).append(h)
    for plugin, hits in by_plugin.items():
        type_counts = {}
        for h in hits:
            type_counts[h['type']] = type_counts.get(h['type'],0) + 1
        print(f"  [{plugin}]  " + ' '.join(f"{k}={v}" for k,v in type_counts.items()))
    print()
    for t, hits in by_type.items():
        print(f"  {t}: {len(hits)} total")

if __name__ == '__main__':
    main()
