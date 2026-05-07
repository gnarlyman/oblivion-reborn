"""Quick CONT MODL extractor for an Oblivion ESP.

Walks GRUP CONT, decodes CONT records (no zlib needed for these as Oblivion
.esp files don't use record-level compression by default for CONT/MODL),
and prints (FormID, EDID, FULL, MODL) for each.

Output: JSON array printed to stdout.
"""
from __future__ import annotations

import json
import struct
import sys
from pathlib import Path


def _read_le(data: bytes, off: int, fmt: str) -> tuple[int, ...]:
    sz = struct.calcsize(fmt)
    return struct.unpack_from(fmt, data, off), off + sz


def parse_record_subrecords(rec_data: bytes) -> dict[str, bytes]:
    """Parse subrecords from raw record body. Returns dict of last-seen
    subrecord per signature (good enough for EDID/FULL/MODL/SCRI)."""
    subs: dict[str, bytes] = {}
    off = 0
    while off + 6 <= len(rec_data):
        sig = rec_data[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", rec_data, off + 4)[0]
        off += 6
        body = rec_data[off:off + size]
        off += size
        # XXXX subrecord encodes the next subrecord's actual size when > 64KB
        if sig == "XXXX":
            real_size = struct.unpack_from("<I", body)[0]
            sig2 = rec_data[off:off + 4].decode("latin-1", "replace")
            off += 6  # skip the next 6-byte header (size field is 0)
            body2 = rec_data[off:off + real_size]
            off += real_size
            subs[sig2] = body2
        else:
            subs[sig] = body
    return subs


def cstr(b: bytes) -> str:
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")


def walk_esp(path: Path) -> list[dict]:
    """Find all CONT records and return [{fid, edid, full, modl, scri}]."""
    data = path.read_bytes()

    # File header: TES4 record at top
    if data[0:4] != b"TES4":
        raise RuntimeError(f"Not an ESP/ESM (no TES4 header): {path}")

    # TES4 record: type(4) size(4) flags(4) formId(4) versionControl(4) = 20 bytes header
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    off = 20 + tes4_size  # skip TES4 record header + body

    results: list[dict] = []
    while off < len(data):
        tag = data[off:off + 4].decode("latin-1", "replace")
        if tag != "GRUP":
            # Could be a top-level record outside of any group; bail.
            break
        grp_size = struct.unpack_from("<I", data, off + 4)[0]
        grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
        # grp_type at off+12 = 0 (top-level)
        grp_end = off + grp_size
        cur = off + 20  # GRUP header is 20 bytes
        if grp_label != "CONT":
            off = grp_end
            continue

        # Walk CONT records
        while cur < grp_end:
            r_tag = data[cur:cur + 4].decode("latin-1", "replace")
            if r_tag == "GRUP":
                # nested group (shouldn't happen for CONT, but skip)
                inner_size = struct.unpack_from("<I", data, cur + 4)[0]
                cur += inner_size
                continue
            r_size = struct.unpack_from("<I", data, cur + 4)[0]
            r_flags = struct.unpack_from("<I", data, cur + 8)[0]
            r_fid = struct.unpack_from("<I", data, cur + 12)[0]
            body_off = cur + 20
            body = data[body_off:body_off + r_size]
            # Compressed records have flag 0x00040000
            if r_flags & 0x00040000:
                import zlib
                # First 4 bytes = decompressed size
                decompressed = zlib.decompress(body[4:])
                subs = parse_record_subrecords(decompressed)
            else:
                subs = parse_record_subrecords(body)
            edid = cstr(subs.get("EDID", b""))
            full = cstr(subs.get("FULL", b""))
            modl = cstr(subs.get("MODL", b""))
            scri = subs.get("SCRI", b"")
            scri_hex = scri.hex().upper() if scri else ""
            results.append({
                "fid": f"{r_fid:08X}",
                "edid": edid,
                "full": full,
                "modl": modl,
                "scri": scri_hex,
            })
            cur = body_off + r_size

        off = grp_end
    return results


def main() -> int:
    path = Path(sys.argv[1])
    rows = walk_esp(path)
    print(json.dumps(rows, indent=2))
    return 0


if __name__ == "__main__":
    sys.exit(main())
