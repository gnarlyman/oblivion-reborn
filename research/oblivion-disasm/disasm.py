"""
Targeted disassembler for Oblivion.exe (32-bit).
Dumps the crash-site functions plus key reference functions, with cross-reference
annotations against xOBSE / Construction Set Extender symbol tables.

Output goes to research/oblivion-disasm/<func>.asm
"""
import argparse
import os
import sys
from pathlib import Path

import capstone
import pefile

OBLIVION = r"D:\Modlists\Reborn\Stock Game\Oblivion.exe"

# Known symbols, harvested from xOBSE GameTasks.h, GameObjects.cpp, GameTypes.h,
# and Construction Set Extender RTTI tables. Maps VA -> name.
KNOWN = {
    0x004E0F80: "TESObjectREFR::Set3D",
    0x00430DE0: "BSTaskThread::Runnable",
    0x00431D60: "ThreadSpecificInterfaceManager::AddInterface",
    0x00435E70: "ThreadSpecificInterfaceManager::ctor",
    0x00432820: "IOManager::sub_432820 (Unk_07 callback)",
    0x00438060: "ModelLoader::QueueReference",
    0x00419B10: "BSStringT::InitAndSet",
    0x004395A9: "FinishedWithFile_HookSite",
    # RTTI vtable addresses (read targets, not call targets)
    0x009ED1A4: "RTTI_QueuedHead",
    0x009ED218: "RTTI_QueuedCharacter",
    0x009ECC34: "RTTI_BSTaskThread",
    0x009FA59C: "RTTI_BSFaceGenNiNode",
    0x009FA45C: "RTTI_BSFaceGenModel",
    0x00A255C4: "NiRTTI_BSFaceGenNiNode",
    # IOManager / ModelLoader singletons
    0x00B33A10: "g_ioManager (IOManager**)",
    0x00B33A1C: "g_modelLoader (ModelLoader**)",
}

# Crash sites recorded across our 6 fix iterations + reference functions to map.
# (start_va, length_bytes, label)
TARGETS = [
    (0x004328B0, 0x180, "sub_4328B0  Set3D-chain bottom (Crash 5: +0x5A)"),
    (0x00432A00, 0x180, "sub_432A00  (Crash 5: +0x51)"),
    (0x00432C30, 0x180, "sub_432C30  (Crash 6: +0x44)"),
    (0x00432820, 0x180, "sub_432820  IOManager Unk_07 dispatch target"),
    (0x00431D10, 0x180, "sub_431D10  (Crash 5: +0x19)"),
    (0x00431D60, 0x180, "ThreadSpecificInterfaceManager::AddInterface"),
    (0x00431E10, 0x200, "sub_431E10  (Crash 4: +0xC7)"),
    (0x00432130, 0x180, "sub_432130  (Crash 5: +0x72)"),
    (0x00433380, 0x200, "sub_433380  (Crash 5: +0xDC)"),
    (0x00433BC0, 0x280, "sub_433BC0  (Crash 3: +0x191)"),
    (0x00433FD0, 0x180, "sub_433FD0  (Crash 5: +0x3D)"),
    (0x004392E0, 0x180, "sub_4392E0  (Crash 5: +0x2F)"),
    (0x00439B90, 0x180, "sub_439B90  (Crash 5: +0x1B)"),
    (0x00439DC0, 0x180, "sub_439DC0  (Crash 5: +0x58)"),
    (0x00430DE0, 0x180, "BSTaskThread::Runnable"),
    (0x004E0F80, 0x180, "TESObjectREFR::Set3D  (Crash 5: +0x48)"),
    (0x00438060, 0x300, "ModelLoader::QueueReference"),
]


def annotate(addr):
    """Return ' ; <name>' if the address has a known symbol, else ''"""
    if addr in KNOWN:
        return f"  ; {KNOWN[addr]}"
    # Round-down lookups for sub_xxxx neighborhoods
    for known_va, name in KNOWN.items():
        if 0 < addr - known_va < 0x80:
            return f"  ; {name}+0x{addr-known_va:x}"
    return ""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--exe", default=OBLIVION)
    ap.add_argument("--outdir", default=str(Path(__file__).parent))
    ap.add_argument("--only", help="hex VA to disassemble, ignoring TARGETS")
    ap.add_argument("--length", default="0x200", help="length in bytes for --only (default 0x200)")
    args = ap.parse_args()

    pe = pefile.PE(args.exe, fast_load=True)
    image_base = pe.OPTIONAL_HEADER.ImageBase
    print(f"ImageBase: 0x{image_base:08X}")

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True

    def va_to_offset(va):
        rva = va - image_base
        for s in pe.sections:
            if s.VirtualAddress <= rva < s.VirtualAddress + s.Misc_VirtualSize:
                return s.PointerToRawData + (rva - s.VirtualAddress)
        return None

    def disasm_range(va, length, label):
        offset = va_to_offset(va)
        if offset is None:
            return f"; {label}\n; ERROR: VA 0x{va:08X} not mapped\n"
        data = pe.__data__[offset:offset + length]
        lines = [f"; ============================================================",
                 f"; {label}",
                 f"; VA: 0x{va:08X}  size: 0x{length:x}",
                 f"; ============================================================"]
        for ins in md.disasm(data, va):
            mnem = ins.mnemonic
            ops = ins.op_str
            line = f"0x{ins.address:08X}  {ins.bytes.hex():20s}  {mnem:6s} {ops}"
            line += annotate_operand(ins)
            lines.append(line)
            if mnem in ("ret", "retn") and ins.address > va + 4:
                # Often signals function end; keep going a few more for context.
                pass
        return "\n".join(lines) + "\n"

    def annotate_operand(ins):
        # Look for direct call/jmp targets and known data references
        for op in ins.operands:
            if op.type == capstone.x86.X86_OP_IMM:
                tgt = op.value.imm
                ann = annotate(tgt)
                if ann:
                    return ann
                if 0x00400000 <= tgt < 0x01000000:
                    return f"  ; -> sub_{tgt:X}"
            elif op.type == capstone.x86.X86_OP_MEM and op.mem.disp != 0:
                disp = op.mem.disp & 0xFFFFFFFF
                ann = annotate(disp)
                if ann:
                    return ann
        return ""

    if args.only:
        va = int(args.only, 16)
        length = int(args.length, 16)
        out = disasm_range(va, length, f"adhoc dump of 0x{va:08X}")
        print(out)
        return

    outdir = Path(args.outdir)
    outdir.mkdir(parents=True, exist_ok=True)
    index_lines = ["# Oblivion.exe crash-site disassembly index", ""]
    for va, length, label in TARGETS:
        fn = f"sub_{va:08X}.asm"
        out = disasm_range(va, length, label)
        (outdir / fn).write_text(out, encoding="utf-8")
        index_lines.append(f"- 0x{va:08X}  [{fn}]({fn})  -- {label}")
        print(f"wrote {fn}")
    (outdir / "INDEX.md").write_text("\n".join(index_lines) + "\n", encoding="utf-8")
    print(f"\nIndex: {outdir / 'INDEX.md'}")


if __name__ == "__main__":
    main()
