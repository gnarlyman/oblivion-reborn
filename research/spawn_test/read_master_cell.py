#!/usr/bin/env python3
"""Read a CELL record's subrecord bytes from Oblivion.esm (or any ESM/ESP).

Walks GRUP structure, finds the CELL with the requested FormID, and dumps the
record's data section (subrecord bytes only — without the 20-byte record
header). Handles record compression (flag 0x00040000).
"""
import argparse
import struct
import sys
import zlib

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm"


def find_cell_data(path: str, target_formid: int):
    with open(path, "rb") as f:
        data = f.read()

    pos = 0
    n = len(data)
    while pos < n:
        sig = data[pos:pos+4]
        if sig == b"GRUP":
            # GRUP header: sig(4) + size(4) + label(4) + type(4) + vci(4) = 20
            grp_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            grp_type = struct.unpack("<i", data[pos+12:pos+16])[0]
            label = data[pos+8:pos+12]
            # Recurse into the GRUP (records start at pos+20, end at pos+grp_size)
            inner_start = pos + 20
            inner_end = pos + grp_size
            res = walk_grup(data, inner_start, inner_end, target_formid)
            if res is not None:
                return res
            pos += grp_size
        else:
            # Top-level non-GRUP record (e.g., TES4)
            if pos + 20 > n:
                break
            data_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            pos += 20 + data_size
    return None


def walk_grup(data: bytes, start: int, end: int, target_formid: int):
    pos = start
    while pos < end:
        sig = data[pos:pos+4]
        if sig == b"GRUP":
            grp_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            inner_start = pos + 20
            inner_end = pos + grp_size
            res = walk_grup(data, inner_start, inner_end, target_formid)
            if res is not None:
                return res
            pos += grp_size
        else:
            # record: sig(4) + dataSize(4) + flags(4) + formID(4) + vci(4)
            data_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            flags = struct.unpack("<I", data[pos+8:pos+12])[0]
            formid = struct.unpack("<I", data[pos+12:pos+16])[0]
            payload_start = pos + 20
            payload_end = payload_start + data_size

            if formid == target_formid:
                # Found it. Extract payload (subrecord bytes), decompressing if needed.
                payload = data[payload_start:payload_end]
                if flags & 0x00040000:
                    # Compressed: 4-byte uncompressed size + zlib data
                    uncomp_size = struct.unpack("<I", payload[:4])[0]
                    payload = zlib.decompress(payload[4:])
                    assert len(payload) == uncomp_size, \
                        f"decompressed {len(payload)} != expected {uncomp_size}"
                return payload, flags, sig

            pos = payload_end
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--esm", default=OBLIVION)
    ap.add_argument("--formid", required=True, help="hex CELL FormID, e.g. 000313B2")
    ap.add_argument("--out-bin", help="output .bin path (subrecord bytes)")
    args = ap.parse_args()

    fid = int(args.formid, 16)
    res = find_cell_data(args.esm, fid)
    if res is None:
        print(f"Record {fid:08X} not found", file=sys.stderr)
        sys.exit(1)
    payload, flags, sig = res
    sig_str = sig.decode("latin-1", errors="replace")
    print(f"{sig_str} {fid:08X}: {len(payload)} bytes (flags=0x{flags:08X})")
    # Print the subrecord breakdown
    pos = 0
    while pos < len(payload):
        sub_sig = payload[pos:pos+4].decode("latin-1", errors="replace")
        sub_size = struct.unpack("<H", payload[pos+4:pos+6])[0]
        print(f"  {sub_sig}  size={sub_size}")
        pos += 6 + sub_size

    if args.out_bin:
        with open(args.out_bin, "wb") as f:
            f.write(payload)
        print(f"wrote {args.out_bin}")


if __name__ == "__main__":
    main()
