"""Find the nearest preceding function prologue before a given VA.

Scans backward looking for the first 'cc cc cc' (int3 padding) terminator
of the previous function, then returns the byte just after it.
"""
import sys
import pefile

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Oblivion.exe"


def main():
    target = int(sys.argv[1], 16)
    pe = pefile.PE(OBLIVION, fast_load=True)
    ib = pe.OPTIONAL_HEADER.ImageBase
    raw = pe.__data__

    text_sec = None
    for s in pe.sections:
        if s.Name.rstrip(b'\x00').decode() == '.text':
            text_sec = s
            break

    rva = target - ib
    off = text_sec.PointerToRawData + (rva - text_sec.VirtualAddress)

    # Scan backward for 'cc cc cc cc' (>= 4 int3 in a row → function boundary).
    i = off
    pad_run = 0
    while i > text_sec.PointerToRawData:
        if raw[i] == 0xCC:
            pad_run += 1
            if pad_run >= 4:
                # Function starts at i + pad_run (first non-cc above the pad)
                # Walk forward past the int3s.
                while i < off and raw[i] == 0xCC:
                    i += 1
                func_off = i
                func_va = ib + text_sec.VirtualAddress + (func_off - text_sec.PointerToRawData)
                print(f"Function start (preceding 0x{target:08X}): 0x{func_va:08X}")
                return
        else:
            pad_run = 0
        i -= 1
    print("not found")


if __name__ == "__main__":
    main()
