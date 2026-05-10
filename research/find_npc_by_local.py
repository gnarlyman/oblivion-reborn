"""Scan all NPC_ records in a plugin and report any whose 24-bit local FID matches.

Usage: find_npc_by_local.py <local_fid_hex> <plugin1> [plugin2 ...]
"""
from __future__ import annotations

import struct
import sys
import zlib
from pathlib import Path


def parse_subrecords(body: bytes):
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


def scan(path, target_local):
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        return
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    off = 20 + tes4_size
    found = []
    while off < len(data):
        if data[off:off + 4] != b"GRUP":
            break
        grp_size = struct.unpack_from("<I", data, off + 4)[0]
        grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
        grp_end = off + grp_size
        cur = off + 20
        if grp_label != "NPC_":
            off = grp_end
            continue
        while cur < grp_end:
            r_tag = data[cur:cur + 4].decode("latin-1", "replace")
            if r_tag == "GRUP":
                inner_size = struct.unpack_from("<I", data, cur + 4)[0]
                cur += inner_size
                continue
            r_size = struct.unpack_from("<I", data, cur + 4)[0]
            r_flags = struct.unpack_from("<I", data, cur + 8)[0]
            r_fid = struct.unpack_from("<I", data, cur + 12)[0]
            local = r_fid & 0x00FFFFFF
            if local == target_local:
                body = data[cur + 20:cur + 20 + r_size]
                if r_flags & 0x00040000:
                    body = zlib.decompress(body[4:])
                subs = dict(parse_subrecords(body))
                edid = cstr(subs.get("EDID", b""))
                full = cstr(subs.get("FULL", b""))
                found.append((r_fid, edid, full))
            cur += 20 + r_size
        off = grp_end
    if found:
        for r_fid, edid, full in found:
            print(f"{path.name}: NPC_ 0x{r_fid:08X}  EDID={edid!r}  FULL={full!r}")


if __name__ == "__main__":
    target = int(sys.argv[1], 16) & 0x00FFFFFF
    for p in sys.argv[2:]:
        try:
            scan(Path(p), target)
        except Exception as e:
            print(f"!! {p}: {e}", file=sys.stderr)
