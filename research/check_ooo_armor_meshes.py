"""Check the MODL paths on OOO ESM armor records 00D851..00D857 and OOO Enhanced 001F6D.
For each, dump MODL/MOD2/MOD3/MOD4/EDID, then verify each .nif file exists in the
USVFS-virtualized data directory (we'll just check Stock Game\\Data\\meshes\\<path>).
"""
import struct
import zlib
import os
from pathlib import Path

OOO_ESM = "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esm"
OOO_ENH = "D:/Modlists/Reborn/mods/OOO Enhanced/OOO Enhanced.esp"
OBLIVION_ESM = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"

# (path, set_of_local_fids_to_find_with_their_signatures)
TARGETS = {
    OOO_ESM: {
        ('ARMO', 0x000D851), ('ARMO', 0x000D852), ('ARMO', 0x000D853),
        ('ARMO', 0x000D855), ('ARMO', 0x000D856), ('ARMO', 0x000D857),
        # Also try CLOT in case any are clothing
        ('CLOT', 0x000D851), ('CLOT', 0x000D852), ('CLOT', 0x000D853),
        ('CLOT', 0x000D855), ('CLOT', 0x000D856), ('CLOT', 0x000D857),
    },
    OOO_ENH: {
        ('ARMO', 0x0001F6D), ('CLOT', 0x0001F6D),
    },
    # Also look up the VANILLA Imperial Legion gear that APW uses, for comparison:
    OBLIVION_ESM: {
        ('ARMO', 0x028ADE), ('ARMO', 0x028ADF),
        ('ARMO', 0x028AE0), ('ARMO', 0x028AE1),
        ('ARMO', 0x028AE2),
    },
}

# Possible mesh search roots — MO2 USVFS layers
MESH_ROOTS = [
    "D:/Modlists/Reborn/Stock Game/Data/meshes",
    "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/meshes",
    "D:/Modlists/Reborn/mods/OOO Enhanced/meshes",
]
# Plus we need any BSAs — check after-the-fact


def parse_record_subs(body):
    out = []
    i = 0
    while i + 6 <= len(body):
        sub_sig = body[i:i+4]
        sub_size = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((sub_sig.decode('latin1', errors='replace'), body[i+6:i+6+sub_size]))
        i += 6 + sub_size
    return out


def walk(data, off, end, found, want):
    cursor = off
    while cursor < end:
        sig = data[cursor:cursor+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
            walk(data, cursor + 20, cursor + size, found, want)
            cursor += size
        else:
            size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
            flags = struct.unpack('<I', data[cursor+8:cursor+12])[0]
            fid = struct.unpack('<I', data[cursor+12:cursor+16])[0]
            local_fid = fid & 0x00FFFFFF
            sig_str = sig.decode('latin1', errors='replace')
            if (sig_str, local_fid) in want:
                body = data[cursor+20:cursor+20+size]
                if flags & 0x40000:
                    body = zlib.decompress(body[4:])
                found.append({
                    'sig': sig_str,
                    'fid_in_file': fid,
                    'local_fid': local_fid,
                    'subs': parse_record_subs(body),
                })
            cursor += 20 + size


def scan(path, want):
    data = open(path, 'rb').read()
    tes4_size = struct.unpack('<I', data[4:8])[0]
    found = []
    walk(data, 20 + tes4_size, len(data), found, want)
    return found


def check_mesh(rel_path: str) -> str:
    """Return the absolute path of the first matching mesh, or '' if none."""
    rel_path = rel_path.replace('\\', '/').lstrip('/')
    for root in MESH_ROOTS:
        p = os.path.join(root, rel_path)
        if os.path.exists(p):
            return p
    return ''


def main():
    for path, want in TARGETS.items():
        print(f"\n=== {os.path.basename(path)} ===")
        if not os.path.exists(path):
            print(f"  MISS: {path}")
            continue
        found = scan(path, want)
        for rec in found:
            edid = ''
            modls = {}
            for s_sig, s_data in rec['subs']:
                if s_sig == 'EDID':
                    edid = s_data.rstrip(b'\x00').decode('latin1', errors='replace')
                elif s_sig in ('MODL', 'MOD2', 'MOD3', 'MOD4'):
                    val = s_data.rstrip(b'\x00').decode('latin1', errors='replace')
                    modls[s_sig] = val
            print(f"  {rec['sig']} {rec['local_fid']:06X}  EDID={edid!r}")
            if not modls:
                print(f"    (no MODL/MOD2/MOD3/MOD4 — no model)")
                continue
            for tag, p in modls.items():
                disk = check_mesh(p)
                status = 'OK' if disk else 'MISSING'
                print(f"    {tag} = {p!r}  [{status}]")
                if disk:
                    print(f"      -> {disk}")


if __name__ == '__main__':
    main()
