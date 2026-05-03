"""Extract cobPatchOOOQS SCDA bytes directly from each candidate ESP on disk.

Bypasses USVFS entirely — opens the raw file via Python file I/O and walks
the ESP record format. For BP we'd hit zlib-compressed records (Bethesda
flag 0x00040000 on the record header), but cobPatchOOOQS overrides in Cobl
mods are typically uncompressed; we handle compression anyway for safety.

Output: prints per-file plugin name, SCDA byte length, sha256 of the SCDA
bytes. Compare against the REPL chain dump.
"""
from __future__ import annotations

import hashlib
import struct
import sys
import zlib
from pathlib import Path

EDID_TARGET = b"cobPatchOOOQS\x00"

CANDIDATES = [
    Path(r"D:\Modlists\Reborn\mods\Cobl\Cobl Tweaks - OOO.esp"),
    Path(r"D:\Modlists\Reborn\mods\Cobl\Cobl Tweaks - OOO Mergeable.esp"),
    Path(r"D:\Modlists\Reborn\mods\Reborn - Cobl OOO Patch\Cobl Tweaks - OOO.esp"),
    Path(r"D:\Modlists\Reborn\mods\Reborn Bashed Patch\Bashed Patch, 0.esp"),
    Path(r"D:\Modlists\Reborn\overwrite\Reborn Cobl Tweaks.esp"),
]


RECORD_HEADER = 20  # Oblivion TES4 (Skyrim is 24)
GRUP_HEADER = 20    # Oblivion (Skyrim is 24)


def iter_records(buf: bytes, start: int, end: int):
    """Yield (sig, flags, formid, body_bytes) for top-level records.

    `body_bytes` is the decompressed payload (subrecords) when the record
    is compressed; otherwise the raw payload.
    """
    pos = start
    while pos + RECORD_HEADER <= end:
        sig = buf[pos:pos + 4]
        size = struct.unpack_from("<I", buf, pos + 4)[0]
        if sig == b"GRUP":
            # GRUP size INCLUDES the GRUP header.
            grp_end = pos + size
            yield from iter_records(buf, pos + GRUP_HEADER, grp_end)
            pos = grp_end
            continue
        flags = struct.unpack_from("<I", buf, pos + 8)[0]
        formid = struct.unpack_from("<I", buf, pos + 12)[0]
        body_start = pos + RECORD_HEADER
        body_end = body_start + size
        body = buf[body_start:body_end]
        if flags & 0x00040000:
            # Compressed: first 4 bytes of body = decompressed size, then zlib.
            try:
                body = zlib.decompress(body[4:])
            except zlib.error:
                body = b""
        yield sig, flags, formid, body
        pos = body_end


def find_scda_for_edid(record_body: bytes, target_edid: bytes) -> bytes | None:
    """Walk subrecords inside a record body. If EDID matches target, return
    the SCDA bytes."""
    pos = 0
    edid: bytes | None = None
    while pos + 6 <= len(record_body):
        sig = record_body[pos:pos + 4]
        size = struct.unpack_from("<H", record_body, pos + 4)[0]
        data = record_body[pos + 6:pos + 6 + size]
        if sig == b"EDID":
            edid = data
        if sig == b"SCDA" and edid == target_edid:
            return data
        pos += 6 + size
    return None


def extract(path: Path) -> dict:
    info = {"path": str(path), "exists": path.exists()}
    if not path.exists():
        return info
    buf = path.read_bytes()
    info["size"] = len(buf)
    if buf[:4] != b"TES4":
        info["error"] = f"not an ESP (header={buf[:4]!r})"
        return info
    # Skip the TES4 header record itself.
    tes4_size = struct.unpack_from("<I", buf, 4)[0]
    after_tes4 = RECORD_HEADER + tes4_size
    found_scda = None
    for sig, flags, formid, body in iter_records(buf, after_tes4, len(buf)):
        if sig != b"SCPT":
            continue
        scda = find_scda_for_edid(body, EDID_TARGET)
        if scda is not None:
            info["formid_hex"] = f"{formid:08X}"
            info["compressed"] = bool(flags & 0x00040000)
            info["scda_len"] = len(scda)
            info["scda_sha256"] = hashlib.sha256(scda).hexdigest()
            info["scda_first_32_hex"] = scda[:32].hex(" ").upper()
            found_scda = scda
            break
    if found_scda is None:
        info["error"] = "cobPatchOOOQS SCPT not found"
    return info


def main(argv: list[str]) -> int:
    rows = [extract(p) for p in CANDIDATES]
    width = max(len(r.get("path", "")) for r in rows)
    print(f"{'plugin':<{width}}  {'len':>4}  sha256                                                            compressed")
    for r in rows:
        if not r.get("exists"):
            print(f"{r['path']:<{width}}  MISSING")
            continue
        if "error" in r:
            print(f"{r['path']:<{width}}  ERR: {r['error']}")
            continue
        print(f"{r['path']:<{width}}  {r['scda_len']:>4}  {r['scda_sha256']}  {r['compressed']}")
        print(f"{'  first 32 hex bytes:':<{width}}  {r['scda_first_32_hex']}")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
