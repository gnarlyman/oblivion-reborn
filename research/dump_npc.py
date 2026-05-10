"""Dump a specific NPC_ record from an Oblivion ESP/ESM by local FormID.

Usage: python dump_npc.py <plugin.esp> <local_fid_hex>
Example: python dump_npc.py "OOO.esp" 000112AB
"""
from __future__ import annotations

import struct
import sys
import zlib
from pathlib import Path


SUB_INTERESTING = {
    "EDID", "FULL", "RNAM", "HNAM", "ENAM", "TPLT", "ACBS",
    "DATA", "FNAM", "AIDT", "MODL", "MODB", "SCRI",
    "FGGS", "FGGA", "FGTS", "FNAM", "PNAM", "DESC",
    "DOFT", "SOFT", "CSCR", "CSDC", "INAM", "ZNAM", "CNAM",
    "SNAM", "PKID", "NAM6", "NAM7", "KFFZ", "RACE",
}


def parse_subrecords(body: bytes):
    subs = []
    off = 0
    pending_size = None
    while off + 6 <= len(body):
        sig = body[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", body, off + 4)[0]
        off += 6
        if sig == "XXXX":
            pending_size = struct.unpack_from("<I", body, off)[0]
            off += size
            continue
        if pending_size is not None:
            size = pending_size
            pending_size = None
        data = body[off:off + size]
        off += size
        subs.append((sig, data))
    return subs


def cstr(b: bytes) -> str:
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")


def fmt_fid(b: bytes) -> str:
    if len(b) < 4:
        return b.hex()
    return f"{struct.unpack_from('<I', b)[0]:08X}"


def walk_esp(path: Path, target_local_fid: int):
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        raise RuntimeError(f"Not TES4: {path}")
    tes4_size = struct.unpack_from("<I", data, 4)[0]

    # TES4 has masters in MAST subrecords
    tes4_body = data[20:20 + tes4_size]
    masters = []
    for sig, sub in parse_subrecords(tes4_body):
        if sig == "MAST":
            masters.append(cstr(sub))
    print(f"# Masters in {path.name}:")
    for i, m in enumerate(masters):
        print(f"#   [{i:02X}] {m}")
    print()

    off = 20 + tes4_size
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
            body_off = cur + 20
            body = data[body_off:body_off + r_size]
            local = r_fid & 0x00FFFFFF
            if local == target_local_fid:
                if r_flags & 0x00040000:
                    body = zlib.decompress(body[4:])
                subs = parse_subrecords(body)
                print(f"# NPC_ FormID 0x{r_fid:08X} (local 0x{local:08X}) flags=0x{r_flags:08X}")
                for sig, sub in subs:
                    extra = ""
                    if sig in {"EDID", "FULL", "MODL"}:
                        extra = repr(cstr(sub))
                    elif sig in {"RNAM", "HNAM", "ENAM", "TPLT", "SCRI", "INAM", "ZNAM", "CNAM", "RACE"}:
                        extra = f"FID 0x{fmt_fid(sub)}"
                    elif sig == "ACBS":
                        if len(sub) >= 16:
                            flags, base_spell, fatigue, barter, level, calc_min, calc_max = struct.unpack_from("<IHHHHHH", sub)
                            extra = f"flags=0x{flags:08X} (TPLT FaceGen={'YES' if flags & 0x80 else 'no'} useTraits={'YES' if flags & 0x100 else 'no'}) level={level}"
                    elif sig == "FGGS":
                        extra = f"({len(sub)} bytes geom-sym)"
                    elif sig == "FGGA":
                        extra = f"({len(sub)} bytes geom-asym)"
                    elif sig == "FGTS":
                        extra = f"({len(sub)} bytes tex-sym)"
                    elif sig == "FNAM":
                        if len(sub) == 4:
                            extra = f"hair-color FNAM {sub.hex().upper()}"
                        elif len(sub) == 8:
                            extra = f"face-data FNAM {sub.hex().upper()}"
                        else:
                            extra = f"({len(sub)} bytes)"
                    print(f"  {sig} [{len(sub):4d}]  {extra}")
                return
            cur = body_off + r_size
        off = grp_end
    print(f"!! NPC with local FID {target_local_fid:08X} not found in {path.name}")


def main():
    plugin = Path(sys.argv[1])
    target = int(sys.argv[2], 16) & 0x00FFFFFF
    walk_esp(plugin, target)


if __name__ == "__main__":
    main()
