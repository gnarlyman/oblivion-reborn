"""Find callers of a target VA in Oblivion.exe.

Searches the .text section for `e8 ?? ?? ?? ??` patterns whose decoded relative
target equals --target. Also searches for direct absolute address embeddings
(potential vtable slots / function pointer stores).

Usage: python find_callers.py 0x005547F0
"""
import sys
import struct
import pefile

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Oblivion.exe"


def main():
    target = int(sys.argv[1], 16)
    pe = pefile.PE(OBLIVION, fast_load=True)
    image_base = pe.OPTIONAL_HEADER.ImageBase

    # Map sections.
    text_sec = None
    rdata_sec = None
    data_sec = None
    for s in pe.sections:
        name = s.Name.rstrip(b'\x00').decode('ascii', errors='replace')
        if name == '.text':
            text_sec = s
        elif name == '.rdata':
            rdata_sec = s
        elif name == '.data':
            data_sec = s

    raw = pe.__data__

    # 1) Scan .text for E8 rel32 calls and E9 rel32 jumps targeting this VA.
    #    A call instruction is 5 bytes: E8 + 4-byte signed offset; target = next_ip + off.
    text_va = image_base + text_sec.VirtualAddress
    text_off = text_sec.PointerToRawData
    text_size = text_sec.Misc_VirtualSize
    text_bytes = raw[text_off:text_off + text_size]

    callers = []
    jumpers = []
    for i in range(len(text_bytes) - 5):
        op = text_bytes[i]
        if op in (0xE8, 0xE9):
            rel = struct.unpack_from('<i', text_bytes, i + 1)[0]
            ins_va = text_va + i
            tgt = (ins_va + 5 + rel) & 0xFFFFFFFF
            if tgt == target:
                if op == 0xE8:
                    callers.append(ins_va)
                else:
                    jumpers.append(ins_va)

    # 2) Scan .text and .rdata and .data for absolute 4-byte values matching target.
    #    These are vtable / function-pointer references.
    abs_refs = []
    for sec in (text_sec, rdata_sec, data_sec):
        if sec is None:
            continue
        sva = image_base + sec.VirtualAddress
        soff = sec.PointerToRawData
        ssize = sec.Misc_VirtualSize
        sb = raw[soff:soff + ssize]
        # 4-byte aligned scan is too narrow; scan unaligned.
        for i in range(len(sb) - 4):
            v = struct.unpack_from('<I', sb, i)[0]
            if v == target:
                abs_refs.append((sec.Name.rstrip(b'\x00').decode(), sva + i))

    print(f"Target: 0x{target:08X}")
    print(f"  E8 callers ({len(callers)}):")
    for a in callers:
        print(f"    0x{a:08X}")
    print(f"  E9 jumpers ({len(jumpers)}):")
    for a in jumpers:
        print(f"    0x{a:08X}")
    print(f"  Absolute references ({len(abs_refs)}):")
    for sec, a in abs_refs:
        print(f"    {sec:8s} 0x{a:08X}")


if __name__ == "__main__":
    main()
