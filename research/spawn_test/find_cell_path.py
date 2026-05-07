#!/usr/bin/env python3
"""Walk Oblivion.esm and report the GRUP path to a target CELL formID."""
import struct
import sys

ESM = r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm"

def walk(data, pos, end, target, path):
    while pos < end:
        sig = data[pos:pos+4]
        size = struct.unpack("<I", data[pos+4:pos+8])[0]
        if sig == b"GRUP":
            label = data[pos+8:pos+12]
            gtype = struct.unpack("<i", data[pos+12:pos+16])[0]
            if gtype == 0:
                label_repr = label.decode("latin-1", errors="replace")
            else:
                label_repr = f"0x{struct.unpack('<I', label)[0]:08X}"
            new_path = path + [f"GRUP(type={gtype}, label={label_repr}, size={size})"]
            r = walk(data, pos+20, pos+size, target, new_path)
            if r:
                return r
            pos += size
        else:
            fid = struct.unpack("<I", data[pos+12:pos+16])[0]
            if sig == b"CELL" and fid == target:
                flags = struct.unpack("<I", data[pos+8:pos+12])[0]
                return path + [f"CELL fid={fid:08X} flags={flags:08X}"]
            pos += 20 + size
    return None

with open(ESM, "rb") as f:
    d = f.read()

target = int(sys.argv[1], 16)
res = walk(d, 0, len(d), target, [])
if res is None:
    print(f"CELL {target:08X} not found")
else:
    for line in res:
        print(line)
