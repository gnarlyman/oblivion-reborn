"""Identify the IAT addresses used by the crash sites by name."""
import pefile

pe = pefile.PE(r"D:\Modlists\Reborn\Stock Game\Oblivion.exe")
addrs_of_interest = {
    0xa28078, 0xa2807c, 0xa2808c, 0xa280dc,
    0xa28140, 0xa28144, 0xa28148, 0xa2813c,
}
print(f"ImageBase: 0x{pe.OPTIONAL_HEADER.ImageBase:08X}")
for entry in pe.DIRECTORY_ENTRY_IMPORT:
    dll = entry.dll.decode("utf-8")
    for imp in entry.imports:
        addr = imp.address
        if addr in addrs_of_interest:
            name = imp.name.decode("utf-8") if imp.name else f"#{imp.ordinal}"
            print(f"  0x{addr:08X}  {dll:20s}  {name}")
