"""Find writers to [reg+0xb8] in Oblivion.exe .text section.

Looking for patterns:
  mov [reg+0xb8], reg32       opcode 89 /r with disp32=0xb8
  mov [reg+0xb8], imm32       opcode C7 /0 with disp32=0xb8

In x86-32 ModRM:
  mov r/m32, r32:  opcode 0x89; ModRM with mod=10 (disp32), r/m=reg, reg=src
  mov r/m32, imm:  opcode 0xC7; ModRM with mod=10, r/m=reg, reg=000

Disp 0xb8 is encoded as 4 bytes little-endian: B8 00 00 00.

Also catch lea / mov with SIB if reg was esp (mod=10, r/m=100, then SIB byte).
"""
import struct
import pefile
import capstone

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Oblivion.exe"

pe = pefile.PE(OBLIVION, fast_load=True)
image_base = pe.OPTIONAL_HEADER.ImageBase
text = next(s for s in pe.sections if s.Name.rstrip(b'\x00') == b'.text')
text_va = image_base + text.VirtualAddress
text_off = text.PointerToRawData
text_size = text.Misc_VirtualSize
data = pe.__data__[text_off:text_off + text_size]

md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

# Scan: look for any byte sequence ?? B8 00 00 00 where preceding 1-2 bytes start a mov disp32
# Easier: just disassemble linearly and filter by mnemonic + operand string.
# That's slow on 4MB but acceptable for one pass.

writers_set = []   # mov [reg+0xB8], reg
writers_imm = []   # mov [reg+0xB8], imm
readers = []       # for context: reads of +0xb8

count = 0
# Use capstone to disasm linearly; not perfect (mid-instruction misalignment) but
# we'll scan ALL byte offsets, dedupe later.
for start in range(0, len(data), 1):
    if start + 6 > len(data):
        break
    # Quick filter: only proceed if 4 of the next bytes look like 0xb8 0x00 0x00 0x00 anywhere in the next 7
    if b'\xb8\x00\x00\x00' not in data[start:start+8]:
        continue
    try:
        ins = next(md.disasm(data[start:start+15], text_va + start))
    except StopIteration:
        continue
    if ins.mnemonic != 'mov':
        continue
    op = ins.op_str
    # Patterns we care about: "dword ptr [reg + 0xb8], ..." (write)
    if '+ 0xb8]' in op and op.startswith('dword ptr ['):
        # Skip duplicates
        va = ins.address
        if any(w[0] == va for w in writers_set + writers_imm):
            continue
        # Distinguish set vs imm
        # If second operand looks like a register (3 chars or eax/ebx/...)
        rhs = op.split('],', 1)[1].strip()
        if rhs.startswith('0x') or rhs.lstrip('-').isdigit():
            writers_imm.append((va, op, ins.bytes.hex()))
        else:
            writers_set.append((va, op, ins.bytes.hex()))
    # ALSO catch reads of +0xb8 → "mov reg, dword ptr [reg+0xb8]"
    # so we can compare.
    elif op.endswith('+ 0xb8]') and 'dword ptr [' in op:
        va = ins.address
        if any(w[0] == va for w in readers):
            continue
        readers.append((va, op, ins.bytes.hex()))

print(f"=== Writers (mov [reg+0xb8], reg) -- {len(writers_set)} ===")
for va, op, hb in writers_set:
    print(f"  0x{va:08X}  {hb:14s}  {op}")
print()
print(f"=== Writers (mov [reg+0xb8], imm) -- {len(writers_imm)} ===")
for va, op, hb in writers_imm:
    print(f"  0x{va:08X}  {hb:14s}  {op}")
print()
print(f"=== Readers (first 60) -- {len(readers)} total ===")
for va, op, hb in readers[:60]:
    print(f"  0x{va:08X}  {hb:14s}  {op}")
