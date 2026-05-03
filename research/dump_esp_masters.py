"""Print TES4 masters for each candidate ESP, by reading the file directly.

Masters live in the TES4 header record as a sequence of MAST subrecords.
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path

CANDIDATES = [
    Path(r"D:\Modlists\Reborn\mods\Cobl\Cobl Tweaks - OOO.esp"),
    Path(r"D:\Modlists\Reborn\mods\Cobl\Cobl Tweaks - OOO Mergeable.esp"),
    Path(r"D:\Modlists\Reborn\mods\Reborn - Cobl OOO Patch\Cobl Tweaks - OOO.esp"),
]


def masters_of(path: Path) -> list[str]:
    buf = path.read_bytes()
    if buf[:4] != b"TES4":
        raise ValueError(f"{path}: not an ESP")
    tes4_size = struct.unpack_from("<I", buf, 4)[0]
    body = buf[20:20 + tes4_size]
    pos = 0
    masters = []
    while pos + 6 <= len(body):
        sig = body[pos:pos + 4]
        size = struct.unpack_from("<H", body, pos + 4)[0]
        data = body[pos + 6:pos + 6 + size]
        if sig == b"MAST":
            # null-terminated cp1252 string (Oblivion uses ASCII)
            name = data.rstrip(b"\x00").decode("cp1252", errors="replace")
            masters.append(name)
        pos += 6 + size
    return masters


def main() -> int:
    for p in CANDIDATES:
        print(f"\n{p}")
        try:
            for i, m in enumerate(masters_of(p)):
                print(f"  [{i}] {m}")
        except Exception as e:
            print(f"  ERR: {e}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
