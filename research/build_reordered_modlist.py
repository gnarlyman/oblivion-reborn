"""Build a reordered modlist.txt for Reborn-Reorder profile, matching APW's section structure.

Strategy:
- DLCs at the bottom of the file (preserved verbatim from the source).
- APW's 32 section taxonomy in APW file-order (top of file = highest priority = bottom of MO2 UI).
- Within each section, mods present in Reborn-Reorder are placed in APW's relative order.
- Empty APW sections are dropped.
- Reborn mods with no APW counterpart go into an UNCATEGORIZED separator at the TOP of the file
  (= BOTTOM of the MO2 UI = highest priority position, easy to spot and drag down to fix).
- Original +/- enabled state is preserved per-mod.
"""
import os, configparser, sys, shutil, time
from collections import OrderedDict

APW_MODLIST = r"D:\Modlists\APW\profiles\A Painted World\modlist.txt"
REBORN_PROFILE_DIR = r"D:\Modlists\Reborn\profiles\Reborn-Reorder"
REBORN_MODLIST = os.path.join(REBORN_PROFILE_DIR, "modlist.txt")
REBORN_MODS_DIR = r"D:\Modlists\Reborn\mods"
APW_MODS_DIR = r"D:\Modlists\APW\mods"

UNCATEGORIZED_SEP_NAME = "UNCATEGORIZED — TRIAGE ME_separator"


def parse_modlist(path):
    rows = []
    with open(path, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\r\n")
            if not line:
                continue
            if line.startswith("#"):
                rows.append(("comment", "", line, line))
                continue
            if line.startswith("*"):
                rows.append(("dlc", "", line, line))
                continue
            if line[0] in "+-":
                state, name = line[0], line[1:]
                kind = "separator" if name.endswith("_separator") else "mod"
                rows.append((kind, state, name, line))
    return rows


def read_meta(d, name):
    p = os.path.join(d, name, "meta.ini")
    if not os.path.exists(p):
        return None
    cp = configparser.ConfigParser(interpolation=None, strict=False)
    try:
        cp.read(p, encoding="utf-8-sig")
    except Exception:
        return None
    g = cp["General"] if cp.has_section("General") else {}
    mid = g.get("modid", "0").strip('"')
    return {"modid": mid if mid not in ("0", "") else None}


def build():
    apw_rows = parse_modlist(APW_MODLIST)
    reborn_rows = parse_modlist(REBORN_MODLIST)

    # ----- Walk APW: build section -> ordered list of mod names (in file order), and mod -> section
    # MO2 convention: separators come AFTER the mods they label.
    # Walk top-to-bottom; accumulate mods into a buffer; on separator, flush to that separator's section.
    apw_sections_in_order = []  # list of section names in file order
    apw_section_mods = OrderedDict()  # section -> [mod_name, ...] in file order
    apw_mod_to_section = {}
    buffer = []
    for k, s, n, raw in apw_rows:
        if k == "separator":
            if n not in apw_section_mods:
                apw_sections_in_order.append(n)
                apw_section_mods[n] = []
            for mn in buffer:
                apw_section_mods[n].append(mn)
                apw_mod_to_section[mn] = n
            buffer = []
        elif k == "mod":
            buffer.append(n)
    # Any tail mods (after the last separator) — give them a synthetic __TAIL__ section
    if buffer:
        apw_sections_in_order.append("__TAIL__")
        apw_section_mods["__TAIL__"] = []
        for mn in buffer:
            apw_section_mods["__TAIL__"].append(mn)
            apw_mod_to_section[mn] = "__TAIL__"

    # APW modid -> apw_mod_name (first hit wins; many APW mods share modid via Nexus multi-file pages)
    apw_modid_to_name = {}
    for n in apw_mod_to_section.keys():
        m = read_meta(APW_MODS_DIR, n)
        if m and m["modid"]:
            apw_modid_to_name.setdefault(m["modid"], n)

    # ----- Walk Reborn: keep state, classify each mod into APW section or UNCATEGORIZED
    reborn_states = {}  # name -> "+" or "-"
    reborn_mod_order = []  # order in source file (we'll use this only as tie-breaker)
    reborn_dlcs = []  # raw lines for DLC entries
    reborn_comments = []  # raw lines for comment header

    for k, s, n, raw in reborn_rows:
        if k == "comment":
            reborn_comments.append(raw)
        elif k == "dlc":
            reborn_dlcs.append(raw)
        elif k == "mod":
            reborn_states[n] = s
            reborn_mod_order.append(n)

    # For each Reborn mod, decide section + APW-relative rank
    apw_set = set(apw_mod_to_section.keys())
    reborn_to_apw = {}  # reborn_name -> apw_name (for ordering lookup)
    for n in reborn_mod_order:
        if n in apw_set:
            reborn_to_apw[n] = n
            continue
        m = read_meta(REBORN_MODS_DIR, n)
        if m and m["modid"] and m["modid"] in apw_modid_to_name:
            reborn_to_apw[n] = apw_modid_to_name[m["modid"]]
        else:
            reborn_to_apw[n] = None  # uncategorized

    # Group Reborn mods by APW section
    section_to_reborn_mods = OrderedDict()
    uncategorized = []
    for n in reborn_mod_order:
        apw_name = reborn_to_apw[n]
        if apw_name is None:
            uncategorized.append(n)
            continue
        sec = apw_mod_to_section[apw_name]
        section_to_reborn_mods.setdefault(sec, []).append((n, apw_name))

    # Sort each section by APW position
    for sec, lst in section_to_reborn_mods.items():
        apw_order_index = {nm: i for i, nm in enumerate(apw_section_mods[sec])}
        lst.sort(key=lambda x: apw_order_index.get(x[1], 999999))

    # ----- Build output file
    out_lines = []
    out_lines.append("# This file was automatically generated by Mod Organizer.")

    # UNCATEGORIZED at TOP of file (= bottom of MO2 UI = highest priority).
    # Mods come first, then the separator labels them.
    if uncategorized:
        for n in uncategorized:
            out_lines.append(f"{reborn_states[n]}{n}")
        out_lines.append(f"-{UNCATEGORIZED_SEP_NAME}")

    # APW sections in APW file order (top of file = highest priority)
    # MO2 convention: mods come FIRST, then the separator that labels them.
    for sec in apw_sections_in_order:
        mods_in_sec = section_to_reborn_mods.get(sec, [])
        if not mods_in_sec:
            continue  # drop empty sections
        if sec == "__TAIL__":
            # Mods after the last separator — write them at the end with no separator
            for reborn_n, _ in mods_in_sec:
                out_lines.append(f"{reborn_states[reborn_n]}{reborn_n}")
            continue
        # Emit mods first, then the separator
        for reborn_n, _ in mods_in_sec:
            out_lines.append(f"{reborn_states[reborn_n]}{reborn_n}")
        sep_state = "+"
        for k, s, n, raw in apw_rows:
            if k == "separator" and n == sec:
                sep_state = s
                break
        out_lines.append(f"{sep_state}{sec}")

    # DLCs at the very bottom, preserved
    out_lines.extend(reborn_dlcs)

    # Sanity: every Reborn mod must appear exactly once
    placed = set()
    for line in out_lines:
        if line.startswith("+") or line.startswith("-"):
            name = line[1:]
            if not name.endswith("_separator"):
                if name in placed:
                    print(f"ERROR: duplicate placement of {name}", file=sys.stderr)
                placed.add(name)
    missing = set(reborn_mod_order) - placed
    extra = placed - set(reborn_mod_order)
    if missing:
        print(f"ERROR: missing mods: {sorted(missing)}", file=sys.stderr)
        sys.exit(2)
    if extra:
        print(f"ERROR: phantom mods placed: {sorted(extra)}", file=sys.stderr)
        sys.exit(2)

    # Summary stats
    n_sec_used = sum(1 for s in apw_sections_in_order if section_to_reborn_mods.get(s))
    n_uncat = len(uncategorized)
    n_mods = len(reborn_mod_order)
    print(f"Total Reborn mods: {n_mods}")
    print(f"  Placed in APW sections: {n_mods - n_uncat}")
    print(f"  Uncategorized (top of file / bottom of UI): {n_uncat}")
    print(f"Sections used: {n_sec_used} of {len(apw_sections_in_order)} APW sections")
    print()
    print("Uncategorized mods (to triage):")
    for n in uncategorized:
        print(f"  {reborn_states[n]}{n}")

    return out_lines


def write_output(out_lines, dry_run=True):
    backup = REBORN_MODLIST + "." + time.strftime("%Y_%m_%d_%H_%M_%S") + ".reorder-bak"
    if dry_run:
        preview = REBORN_MODLIST + ".PREVIEW"
        with open(preview, "w", encoding="utf-8") as f:
            f.write("\n".join(out_lines) + "\n")
        print(f"\nPreview written: {preview}")
        print(f"(no backup yet — dry run)")
    else:
        shutil.copy2(REBORN_MODLIST, backup)
        with open(REBORN_MODLIST, "w", encoding="utf-8") as f:
            f.write("\n".join(out_lines) + "\n")
        print(f"\nWrote: {REBORN_MODLIST}")
        print(f"Backup: {backup}")


if __name__ == "__main__":
    dry = "--apply" not in sys.argv
    lines = build()
    write_output(lines, dry_run=dry)
