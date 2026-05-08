"""Find the two CALL sites inside placeatme Execute (0x00514B50)
that target CreateReference (0x0044A7D0).

Reads Oblivion.exe directly, computes the file offset for the function entry,
walks forward looking for E8 xx xx xx xx where the relative target resolves
to CreateReference. Stops after finding two or after 4KB of bytes scanned.
"""
import struct
from pathlib import Path

EXE_PATH = Path(r"D:\Modlists\Reborn\Stock Game\Oblivion.exe")
IMAGE_BASE = 0x00400000  # Oblivion is non-ASLR, hardcoded base
CREATE_REF = 0x0044A7D0
PLACEATME = 0x00514B50

# Read PE header to find .text section file offset
data = EXE_PATH.read_bytes()
e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
# COFF header
num_sections = struct.unpack_from("<H", data, e_lfanew + 6)[0]
opt_header_size = struct.unpack_from("<H", data, e_lfanew + 0x14)[0]
section_table = e_lfanew + 0x18 + opt_header_size

# Find .text
text_va = text_size = text_raw = None
for i in range(num_sections):
    off = section_table + i * 40
    name = data[off:off + 8].rstrip(b"\x00")
    if name == b".text":
        text_va = struct.unpack_from("<I", data, off + 12)[0]
        text_size = struct.unpack_from("<I", data, off + 16)[0]
        text_raw = struct.unpack_from("<I", data, off + 20)[0]
        break

print(f".text VA=0x{text_va:08X} size=0x{text_size:08X} raw=0x{text_raw:08X}")


def va_to_offset(va):
    return va - IMAGE_BASE - text_va + text_raw


func_off = va_to_offset(PLACEATME)
END = func_off + 0x1000  # scan 4KB
target_va = CREATE_REF

print(f"scanning placeatme @ VA 0x{PLACEATME:08X} (file off 0x{func_off:08X})")
print(f"looking for CALLs to CreateReference @ VA 0x{CREATE_REF:08X}")

found = []
i = func_off
while i < END:
    if data[i] == 0xE8:  # CALL rel32
        rel = struct.unpack_from("<i", data, i + 1)[0]
        call_va = IMAGE_BASE + text_va + (i - text_raw)
        target = call_va + 5 + rel
        if target == target_va:
            found.append(call_va)
            print(f"  found call site at VA 0x{call_va:08X} (rel=0x{rel & 0xFFFFFFFF:08X})")
            if len(found) >= 2:
                break
    i += 1

if len(found) < 2:
    print(f"WARNING: only found {len(found)} call sites; placeatme has 2 expected")
print(f"\nVAs to patch: {[f'0x{x:08X}' for x in found]}")
