"""Analyze APW vs Reborn-OOO modlist structure for reorder planning."""
import os, csv

APW_PATH = r"D:\Modlists\APW\profiles\A Painted World\modlist.txt"
REBORN_PATHS = {
    "Reborn-Base": r"D:\Modlists\Reborn\profiles\Reborn-Base\modlist.txt",
    "Reborn-Minimal": r"D:\Modlists\Reborn\profiles\Reborn-Minimal\modlist.txt",
    "Reborn-OOO": r"D:\Modlists\Reborn\profiles\Reborn-OOO\modlist.txt",
}


def parse(path):
    """Return list of (kind, name) where kind ∈ {'mod', 'separator', 'dlc', 'comment'}.
    Order is file order (high-priority-first)."""
    rows = []
    with open(path, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\r\n")
            if not line:
                continue
            if line.startswith("#"):
                rows.append(("comment", "", line))
                continue
            if line.startswith("*"):
                rows.append(("dlc", "", line))
                continue
            if line[0] in "+-":
                state = line[0]
                name = line[1:]
                kind = "separator" if name.endswith("_separator") else "mod"
                rows.append((kind, state, name))
    return rows


apw = parse(APW_PATH)
print(f"APW: {len(apw)} entries ({sum(1 for r in apw if r[0]=='mod')} mods, {sum(1 for r in apw if r[0]=='separator')} separators, {sum(1 for r in apw if r[0]=='dlc')} DLCs)")
print()

# Build: section_name -> ordered list of mod folder names (file order)
current_sep = None
apw_section_mods = {}
apw_mod_to_section = {}
apw_section_order = []  # file order
apw_mod_file_pos = {}

for i, (k, s, n) in enumerate(apw):
    if k == "separator":
        current_sep = n
        if n not in apw_section_order:
            apw_section_order.append(n)
            apw_section_mods[n] = []
    elif k == "mod":
        if current_sep is None:
            # mods above the first separator — call them HEAD
            current_sep = "__HEAD__"
            if current_sep not in apw_section_order:
                apw_section_order.append(current_sep)
                apw_section_mods[current_sep] = []
        apw_section_mods[current_sep].append((s, n))
        apw_mod_to_section[n] = current_sep
        apw_mod_file_pos[n] = i

print(f"APW section order (file order = high-priority-first):")
for s in apw_section_order:
    print(f"  [{len(apw_section_mods[s]):3d} mods] {s}")
print()

for profile, path in REBORN_PATHS.items():
    if not os.path.exists(path):
        print(f"{profile}: missing {path}")
        continue
    rmods = parse(path)
    mod_names = [n for k, s, n in rmods if k == "mod"]
    seps = [n for k, s, n in rmods if k == "separator"]
    print(f"--- {profile}: {len(mod_names)} mods, {len(seps)} separators")

    apw_set = set(apw_mod_to_section.keys())
    matched = [n for n in mod_names if n in apw_set]
    unmatched = [n for n in mod_names if n not in apw_set]
    print(f"    Direct name-match to APW: {len(matched)}")
    print(f"    No APW name match (Reborn-only or renamed): {len(unmatched)}")

print()
print("=== Reborn-OOO mods with NO APW name match ===")
rmods = parse(REBORN_PATHS["Reborn-OOO"])
apw_set = set(apw_mod_to_section.keys())
for k, s, n in rmods:
    if k == "mod" and n not in apw_set:
        print(f"  {s}{n}")
