"""For both APW and Reborn-OOO load orders, find every plugin that overrides
the four crash-related records:
  ACHR 00070106 (VirtueRider placement)
  ACHR 00070109 (sister patrol placement)
  NPC_ 000700CC (VirtueRider base NPC)
  NPC_ 000700CD (sister NPC base)

For each match, dump key subrecords (SCRI, AIDT, factions, packages, MODL).
"""
import struct
import zlib
import os
from pathlib import Path

ACHR_TARGETS = {0x00070106, 0x00070109}
NPC_TARGETS = {0x000700CC, 0x000700CD}

PROFILES = {
    "APW": ("D:/Modlists/APW/profiles/A Painted World/plugins.txt",
            "D:/Modlists/APW/mods"),
    "Reborn-OOO": ("D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt",
                   "D:/Modlists/Reborn/mods"),
}


def read_plugins_txt(path):
    out = []
    with open(path, encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('*'):
                line = line[1:]
            out.append(line)
    return out


def find_esp_path(plugin_name, mods_dir):
    for root, _, files in os.walk(mods_dir):
        for f in files:
            if f.lower() == plugin_name.lower():
                return os.path.join(root, f)
    return None


def parse_masters(data):
    tes4_size = struct.unpack('<I', data[4:8])[0]
    flags = struct.unpack('<I', data[8:12])[0]
    body = data[20:20+tes4_size]
    if flags & 0x40000:
        body = zlib.decompress(body[4:])
    masters, i = [], 0
    while i + 6 <= len(body):
        sub_sig = body[i:i+4]
        sub_size = struct.unpack('<H', body[i+4:i+6])[0]
        if sub_sig == b'MAST':
            masters.append(body[i+6:i+6+sub_size].rstrip(b'\x00').decode('latin1'))
        i += 6 + sub_size
    return masters


def parse_record_subs(body):
    out = []
    i = 0
    while i + 6 <= len(body):
        sub_sig = body[i:i+4]
        sub_size = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((sub_sig.decode('latin1', errors='replace'), body[i+6:i+6+sub_size]))
        i += 6 + sub_size
    return out


def walk(data, off, end, found, target_sigs_local_fids):
    cursor = off
    while cursor < end:
        sig = data[cursor:cursor+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
            walk(data, cursor + 20, cursor + size, found, target_sigs_local_fids)
            cursor += size
        else:
            size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
            flags = struct.unpack('<I', data[cursor+8:cursor+12])[0]
            fid = struct.unpack('<I', data[cursor+12:cursor+16])[0]
            local_fid = fid & 0x00FFFFFF
            master_idx = (fid >> 24) & 0xFF
            if (sig, local_fid) in target_sigs_local_fids:
                body = data[cursor+20:cursor+20+size]
                if flags & 0x40000:
                    body = zlib.decompress(body[4:])
                found.append({
                    'sig': sig.decode(),
                    'fid_in_file': fid,
                    'local_fid': local_fid,
                    'master_idx': master_idx,
                    'flags': flags,
                    'subs': parse_record_subs(body),
                })
            cursor += 20 + size


def scan(path, target_sigs_local_fids):
    data = open(path, 'rb').read()
    masters = parse_masters(data)
    tes4_size = struct.unpack('<I', data[4:8])[0]
    found = []
    walk(data, 20 + tes4_size, len(data), found, target_sigs_local_fids)
    return masters, found


def fmt_hex(b: bytes, max_len=24) -> str:
    h = b.hex()
    if len(b) > max_len:
        return h[:max_len*2] + '...'
    return h


def main():
    target_sigs_local_fids = set()
    for fid in ACHR_TARGETS:
        target_sigs_local_fids.add((b'ACHR', fid))
    for fid in NPC_TARGETS:
        target_sigs_local_fids.add((b'NPC_', fid))

    for profile_name, (plugins_txt, mods_dir) in PROFILES.items():
        print(f"\n{'='*70}")
        print(f"PROFILE: {profile_name}")
        print(f"{'='*70}")
        plugins = read_plugins_txt(plugins_txt)
        # Also include esm files even if not in plugins.txt (they always load)
        # Actually plugins.txt should already include them
        for plugin_name in plugins:
            if plugin_name == 'Oblivion.esm':
                # This is the source — every record is here. Skip to find OVERRIDES.
                continue
            esp_path = find_esp_path(plugin_name, mods_dir)
            if not esp_path:
                continue
            try:
                masters, found = scan(esp_path, target_sigs_local_fids)
            except Exception as e:
                print(f"  {plugin_name}: error {e}")
                continue
            if not found:
                continue
            print(f"\n  [{plugin_name}]")
            print(f"    masters: {masters[:8]}{'...' if len(masters)>8 else ''}")
            for f in found:
                master_name = masters[f['master_idx']] if f['master_idx'] < len(masters) else "(self)"
                init_dis = bool(f['flags'] & 0x800)
                print(f"    {f['sig']} {f['local_fid']:06X} master={master_name} init_disable={init_dis} flags=0x{f['flags']:08X}")
                # Dump key subrecords
                for s_sig, s_data in f['subs']:
                    if s_sig in ('EDID', 'NAME', 'FULL', 'SCRI', 'PKID', 'CNAM',
                                 'XHRS', 'XHLT', 'XESP', 'AIDT', 'CNTO', 'MODL',
                                 'CNAM', 'SNAM'):
                        if s_sig in ('EDID', 'FULL', 'MODL'):
                            try:
                                val = s_data.rstrip(b'\x00').decode('latin1')
                                print(f"      {s_sig}: {val!r}")
                            except Exception:
                                print(f"      {s_sig}: {fmt_hex(s_data)}")
                        elif s_sig in ('SCRI', 'NAME', 'PKID', 'XHRS', 'XESP', 'CNAM', 'SNAM'):
                            if len(s_data) >= 4:
                                ref_fid = struct.unpack('<I', s_data[:4])[0]
                                ref_master_idx = (ref_fid >> 24) & 0xFF
                                ref_local = ref_fid & 0x00FFFFFF
                                ref_master = masters[ref_master_idx] if ref_master_idx < len(masters) else "(self)"
                                print(f"      {s_sig}: {ref_local:06X} from {ref_master}")
                            else:
                                print(f"      {s_sig}: {fmt_hex(s_data)}")
                        elif s_sig == 'AIDT':
                            print(f"      AIDT: {fmt_hex(s_data, 32)}")
                        elif s_sig == 'CNTO':
                            if len(s_data) >= 4:
                                item_fid = struct.unpack('<I', s_data[:4])[0]
                                item_master_idx = (item_fid >> 24) & 0xFF
                                item_local = item_fid & 0x00FFFFFF
                                item_master = masters[item_master_idx] if item_master_idx < len(masters) else "(self)"
                                count = struct.unpack('<I', s_data[4:8])[0] if len(s_data) >= 8 else 0
                                print(f"      CNTO: item {item_local:06X} from {item_master}, count={count}")


if __name__ == '__main__':
    main()
