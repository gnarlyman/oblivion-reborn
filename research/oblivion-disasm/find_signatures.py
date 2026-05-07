"""For each engine function, find the FIRST ret/retn it encounters and report
the byte count. ret 0xN means N stack args (callee-pop / __thiscall+args / __stdcall).
Bare ret means 0 args (or __cdecl, but we know these are __thiscall here)."""
import capstone, pefile

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Oblivion.exe"
TARGETS = [
    (0x00439DC0, "sub_439DC0  ModelLoader::CancelPending"),
    (0x00439B90, "sub_439B90"),
    (0x004392E0, "sub_4392E0"),
    (0x00432130, "sub_432130  IOMgr state machine"),
    (0x004328B0, "sub_4328B0  GC"),
    (0x00432C30, "sub_432C30"),
    (0x00431D10, "sub_431D10"),
    (0x00431E10, "sub_431E10"),
    (0x00433380, "sub_433380"),
    (0x00433BC0, "sub_433BC0"),
    (0x00433FD0, "sub_433FD0"),
]

pe = pefile.PE(OBLIVION, fast_load=True)
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

def va_to_off(va):
    rva = va - pe.OPTIONAL_HEADER.ImageBase
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + s.Misc_VirtualSize:
            return s.PointerToRawData + (rva - s.VirtualAddress)
    return None

print(f"{'Address':<11} {'Args':>4}  {'First ret':<14}  Function")
print("-" * 80)
for va, label in TARGETS:
    off = va_to_off(va)
    data = pe.__data__[off:off + 0x400]  # generous window
    rets = []
    for ins in md.disasm(data, va):
        if ins.mnemonic in ("ret", "retn"):
            rets.append((ins.address, ins.bytes.hex(), ins.op_str))
            if len(rets) >= 3:
                break
    if not rets:
        print(f"0x{va:08X}  ?     no ret found    {label}")
        continue
    # Use the first ret. ret with bytes 'c3' = 0 args; 'c2 NN NN' = pop NN bytes / 4 args
    addr, hexb, op = rets[0]
    if hexb.startswith("c3"):
        nargs = 0
        ret_str = "ret"
    elif hexb.startswith("c2"):
        n = int.from_bytes(bytes.fromhex(hexb)[1:3], "little")
        nargs = n // 4
        ret_str = f"ret {n}"
    else:
        nargs = -1
        ret_str = f"?? ({hexb})"
    print(f"0x{va:08X}  {nargs:>4}  {ret_str:<14}  {label}")
    # Also list later rets if they differ (multiple exit points)
    later = [(a, hb, o) for a, hb, o in rets[1:] if hb[:2] != hexb[:2]]
    for la, lhb, lo in later:
        print(f"           also  {lo:<14}  at 0x{la:08X}")
