"""Find a REFR/ACRE/ACHR record by local FormID across all CELL groups in a plugin.

Usage: find_refr_by_local.py <local_fid_hex> <plugin1> [plugin2 ...]
"""
from __future__ import annotations

import struct
import sys
import zlib
from pathlib import Path


def parse_subrecords(body):
    subs = []
    off = 0
    pending = None
    while off + 6 <= len(body):
        sig = body[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", body, off + 4)[0]
        off += 6
        if sig == "XXXX":
            pending = struct.unpack_from("<I", body, off)[0]
            off += size
            continue
        if pending is not None:
            size = pending
            pending = None
        subs.append((sig, body[off:off + size]))
        off += size
    return subs


def cstr(b):
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")


def fmt_fid(b):
    if len(b) < 4:
        return b.hex().upper()
    return f"{struct.unpack_from('<I', b)[0]:08X}"


def walk_records(data, off, end, target_local, plugin_name, depth=0):
    """Recursive walk through records and groups starting at offset, until end."""
    while off < end:
        if off + 4 > len(data):
            return
        tag = data[off:off + 4].decode("latin-1", "replace")
        if tag == "GRUP":
            grp_size = struct.unpack_from("<I", data, off + 4)[0]
            grp_label_raw = data[off + 8:off + 12]
            grp_type = struct.unpack_from("<I", data, off + 12)[0]
            grp_end = off + grp_size
            walk_records(data, off + 20, grp_end, target_local, plugin_name, depth + 1)
            off = grp_end
            continue
        # record
        if off + 20 > len(data):
            return
        r_size = struct.unpack_from("<I", data, off + 4)[0]
        r_flags = struct.unpack_from("<I", data, off + 8)[0]
        r_fid = struct.unpack_from("<I", data, off + 12)[0]
        local = r_fid & 0x00FFFFFF
        if local == target_local and tag in ("REFR", "ACRE", "ACHR"):
            body = data[off + 20:off + 20 + r_size]
            if r_flags & 0x00040000:
                body = zlib.decompress(body[4:])
            subs = dict(parse_subrecords(body))
            name = subs.get("NAME", b"")
            print(f"{plugin_name}: {tag} 0x{r_fid:08X} -> NAME (base) = 0x{fmt_fid(name)}")
            # Also print raw subrecord summary
            for sig, sub in parse_subrecords(body):
                extra = ""
                if sig in ("NAME", "XOWN", "XPCI", "XMRC", "XHRS", "INAM", "PARENT"):
                    extra = f"FID 0x{fmt_fid(sub)}"
                elif sig == "DATA" and len(sub) == 24:
                    x, y, z, rx, ry, rz = struct.unpack_from("<6f", sub)
                    extra = f"pos=({x:.1f},{y:.1f},{z:.1f}) rot=({rx:.2f},{ry:.2f},{rz:.2f})"
                elif sig == "EDID":
                    extra = repr(cstr(sub))
                print(f"    {sig} [{len(sub):4d}] {extra}")
        off += 20 + r_size


def scan(path, target_local):
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        return
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    walk_records(data, 20 + tes4_size, len(data), target_local, path.name)


if __name__ == "__main__":
    target = int(sys.argv[1], 16) & 0x00FFFFFF
    for p in sys.argv[2:]:
        try:
            scan(Path(p), target)
        except Exception as e:
            print(f"!! {p}: {e}")
