"""Scan ALL plugins in Reborn-OOO load order for ACHR/ACRE placements that
have any chance of streaming into DerelictMineExterior or its neighbors.

We look at:
  - Cell DerelictMineExterior (FID 0x00007D65 in Oblivion.esm)
  - Cell GrayrockCave / GrayrockCaveExterior (interior + entrance)
  - Worldspace coords near DerelictMine in Tamriel (cells 0,-1 to 1,0 area
    but exact coords are inside ACHRs' DATA subrecord).

Easier proxy: walk every plugin's ACHR/ACRE records, dump those whose parent
GRUP path indicates Cell label 0x00007D65 etc.
"""
import struct, zlib, os
from pathlib import Path

PLUGINS_TXT = "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
MODS_ROOT = "D:/Modlists/Reborn/mods"
STOCK = "D:/Modlists/Reborn/Stock Game/Data"

# Cells of interest in Oblivion.esm — verified FormIDs
TARGET_CELLS = {
    0x00007D65: 'DerelictMineExterior',
    0x00007D26: 'GrayrockCaveExterior',
    0x00007D46: 'GrayRockCave02Exterior',
    0x0000AB8F: 'GottshawInnExterior',
    0x00014986: 'GrayrockCave',
    0x0005E1E2: 'GrayrockCave02',
    0x00015C33: 'DerelictMine',
    0x000579E4: 'DerelictMine03',
    0x000579E5: 'DerelictMine02',
}

def read_plugins():
    out = []
    with open(PLUGINS_TXT, encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'): continue
            if line.startswith('*'): line = line[1:]
            out.append(line)
    return out

def find_esp_path(name):
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

def parse_subs(body):
    out = []; i = 0
    while i+6 <= len(body):
        s = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((s, body[i+6:i+6+sz]))
        i += 6 + sz
    return out

def walk(data, off, end, scan_plugin, masters, ctx_cell_label, hits):
    """ctx_cell_label is the CELL FormID in scope (from the GRUP type=6/8/9 parent)."""
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            grup_label = struct.unpack('<I', data[cur+8:cur+12])[0]
            grup_type = struct.unpack('<I', data[cur+12:cur+16])[0]
            new_ctx = ctx_cell_label
            if grup_type in (6, 8, 9):  # Cell Children, Persistent, Temp
                new_ctx = grup_label
            walk(data, cur+20, cur+size, scan_plugin, masters, new_ctx, hits)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            if sig in (b'ACHR', b'ACRE') and ctx_cell_label is not None:
                # Resolve cell label as load-order FormID -> determine if it points at our targets
                # ctx_cell_label has master byte from THIS plugin's master list; we want to canonicalize
                cell_local = ctx_cell_label & 0xFFFFFF
                cell_master_idx = (ctx_cell_label >> 24) & 0xFF
                cell_owner = scan_plugin if cell_master_idx == len(masters) else (masters[cell_master_idx] if cell_master_idx < len(masters) else None)
                # Only track if the cell maps to one of our targets in Oblivion.esm
                if cell_owner == 'Oblivion.esm' and cell_local in TARGET_CELLS:
                    body = data[cur+20:cur+20+size]
                    if flags & 0x40000:
                        body = zlib.decompress(body[4:])
                    name_fid = None
                    for s, d in parse_subs(body):
                        if s == b'NAME' and len(d) >= 4:
                            name_fid = struct.unpack('<I', d[:4])[0]
                            break
                    init_dis = bool(flags & 0x800)
                    hits.append({
                        'plugin': scan_plugin,
                        'sig': sig.decode(),
                        'fid': fid,
                        'flags': flags,
                        'init_disable': init_dis,
                        'cell': TARGET_CELLS[cell_local],
                        'name_fid': name_fid,
                    })
            cur += 20 + size

def scan(path, plugin_name):
    data = open(path, 'rb').read()
    masters = parse_masters(data)
    tes4_size = struct.unpack('<I', data[4:8])[0]
    hits = []
    walk(data, 20+tes4_size, len(data), plugin_name, masters, None, hits)
    return hits

def main():
    plugins = read_plugins()
    print(f"Scanning {len(plugins)} plugins for ACHR/ACRE in target cells...")
    all_hits = []
    for p in plugins:
        path = find_esp_path(p)
        if not path: continue
        try:
            hits = scan(path, p)
        except Exception as e:
            print(f"  ERR {p}: {e}")
            continue
        all_hits.extend(hits)
    print(f"\nTotal placements found: {len(all_hits)}\n")
    # Group by plugin
    by_plugin = {}
    for h in all_hits:
        by_plugin.setdefault(h['plugin'], []).append(h)
    for plugin, hits in by_plugin.items():
        print(f"  [{plugin}]  ({len(hits)})")
        for h in hits:
            print(f"    {h['sig']} {h['fid']:08X}  cell={h['cell']:<25} init_dis={h['init_disable']}  NAME={(f"{h['name_fid']:08X}" if h['name_fid'] else 'None')}")

if __name__ == '__main__':
    main()
