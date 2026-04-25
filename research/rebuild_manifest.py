#!/usr/bin/env python3
"""Rebuild manifest.csv with Nexus categories, content kinds, and MO2 ordering.

By default, the existing `status` column is preserved verbatim — the script will not
overwrite manual edits like flipping rows from `skipped` to `pending`. Pass
`--reset-status` to bulk-reset every row to `skipped` and re-mark rows present in
Reborn/mods/ as `installed`.
"""
import argparse
import csv
import os
import re
import sys
from pathlib import Path

APW_MODS = Path("D:/Modlists/APW/mods")
REBORN_MODS = Path("D:/Modlists/Reborn/mods")
APW_MODLIST = Path("D:/Modlists/APW/profiles/A Painted World/modlist.txt")
MANIFEST = Path(__file__).resolve().parent / "manifest.csv"

NEXUS_CATEGORIES = {
    0: "",
    24: "Gameplay Effects",
    25: "Guilds/Factions",
    26: "Body, Face, Hair",
    27: "Items - Player",
    28: "Patches",
    29: "Models and Textures",
    30: "Locations - Cyrodiil Expansion",
    33: "NPC",
    34: "Skills and Leveling",
    35: "Quests",
    36: "Books and Lore",
    38: "DLC Tweaks",
    39: "Utilities",
    41: "Bug Fixes (legacy)",
    42: "User Interface",
    51: "Animation",
    53: "Towns and Villages",
    54: "Armour",
    55: "Weapons",
    58: "New Lands",
    60: "Clothing",
    61: "Audio - Voice",
    62: "Visuals and Graphics",
    66: "Companions",
    67: "Player Homes",
    68: "Castles and Mansions",
    69: "Mercantiles (Shops/Inns)",
    70: "Locations - Vanilla",
    74: "Environment",
    75: "Magic - Spells",
    77: "Combat",
    78: "Immersion",
    79: "Overhauls",
    82: "Modders Resources",
    83: "Animals and Creatures",
    84: "Bug Fixes",
    85: "Items and Objects",
    88: "Dungeons - New",
    89: "Locations - Other",
    90: "Buildings and Camps",
    91: "Dungeons",
    93: "Magic - Gameplay",
    94: "Magic - Alchemy",
}


def section_order():
    """Return APW section names in modlist order (top = first), prepending Reborn-only sections."""
    order = ["UTILITIES (Reborn-added)"]  # Reborn-only sits above everything (matches existing manifest)
    for line in APW_MODLIST.read_text(encoding="utf-8").splitlines():
        if line.startswith(("+", "-", "*")) and line.endswith("_separator"):
            order.append(line[1:-len("_separator")])
    return order


def apw_mo2_order() -> dict[str, int]:
    """Map mod name -> position as displayed in MO2's mod list pane.
    Position 1 = top of MO2 UI (lowest priority, base game), N = bottom (highest priority).
    modlist.txt is the inverse of UI order, so we reverse it. Separators skipped."""
    names: list[str] = []
    for line in APW_MODLIST.read_text(encoding="utf-8").splitlines():
        if not line or line.startswith("#"):
            continue
        if line.startswith(("+", "-", "*")):
            name = line[1:]
            if name.endswith("_separator"):
                continue
            names.append(name)
    # File is high-priority-first; UI shows low-priority-first. Reverse.
    return {name: i + 1 for i, name in enumerate(reversed(names))}


def meta_lookup(mod_name: str) -> dict[str, str]:
    """Pull nexusCategory and modid from meta.ini. Checks APW first, then Reborn."""
    out = {"nexusCategory": "", "modid": ""}
    for base in (APW_MODS, REBORN_MODS):
        meta = base / mod_name / "meta.ini"
        if not meta.exists():
            continue
        for line in meta.read_text(encoding="utf-8", errors="replace").splitlines():
            m = re.match(r"^(nexusCategory|modid)=(\d+)\s*$", line)
            if m:
                out[m.group(1)] = m.group(2)
        if any(out.values()):
            return out
    return out


def detect_kind(mod_name: str) -> str:
    """Walk the mod folder (APW first, fall back to Reborn) and return a content-shape label."""
    if mod_name.endswith("_separator"):
        return "separator"
    mod_dir = APW_MODS / mod_name
    if not mod_dir.exists():
        mod_dir = REBORN_MODS / mod_name
        if not mod_dir.exists():
            return "missing"

    has_dll_obse = False
    has_esm = False
    has_esp = False
    has_bsa = False
    has_meshes = False
    has_textures = False
    has_sound = False
    has_music = False
    has_ini = False
    has_other = False

    for root, dirs, files in os.walk(mod_dir):
        rel = Path(root).relative_to(mod_dir)
        rel_lower = str(rel).replace("\\", "/").lower()
        # OBSE plugin DLL
        if rel_lower.endswith("obse/plugins") or "/obse/plugins" in "/" + rel_lower:
            for f in files:
                if f.lower().endswith(".dll"):
                    has_dll_obse = True
        # Top-level asset dirs
        parts = rel_lower.split("/") if rel_lower != "." else []
        top = parts[0] if parts else ""
        if top == "meshes":
            has_meshes = True
        elif top == "textures":
            has_textures = True
        elif top == "sound":
            has_sound = True
        elif top == "music":
            has_music = True
        # File-type detection at any depth (ESM/ESP/BSA usually top-level)
        for f in files:
            fl = f.lower()
            if fl.endswith(".esm"):
                has_esm = True
            elif fl.endswith(".esp"):
                has_esp = True
            elif fl.endswith(".bsa"):
                has_bsa = True
            elif fl.endswith(".ini"):
                has_ini = True
            elif fl in ("meta.ini",):
                pass
            else:
                if not (top in ("meshes", "textures", "sound", "music", "obse")
                        or fl.endswith((".dll", ".esm", ".esp", ".bsa"))):
                    has_other = True

    parts = []
    if has_dll_obse:
        parts.append("obse-plugin")
    if has_esm:
        parts.append("esm")
    if has_esp:
        parts.append("esp")
    if has_bsa:
        parts.append("bsa")
    if has_meshes:
        parts.append("meshes")
    if has_textures:
        parts.append("textures")
    if has_sound:
        parts.append("sound")
    if has_music:
        parts.append("music")
    if not parts:
        if has_ini:
            return "config"
        return "other" if has_other else "empty"
    return "+".join(parts)


def installed_set() -> set[str]:
    if not REBORN_MODS.exists():
        return set()
    return {p.name for p in REBORN_MODS.iterdir()
            if p.is_dir() and not p.name.endswith("_separator")}


REBORN_ADDED_SECTION = "UTILITIES (Reborn-added)"


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--reset-status", action="store_true",
                    help="Bulk-reset status: every row -> 'skipped', then rows present in "
                         "Reborn/mods/ -> 'installed'. Otherwise existing status values are preserved.")
    args = ap.parse_args()

    rows = list(csv.DictReader(MANIFEST.open(encoding="utf-8")))
    existing_status = {r["apw_name"]: r.get("status", "") for r in rows}
    installed = installed_set()
    sect_order = section_order()
    sect_idx = {s: i for i, s in enumerate(sect_order)}
    mo2_order = apw_mo2_order()

    # Add rows for Reborn-only mods not already in the manifest
    known = {r["apw_name"] for r in rows}
    for name in sorted(installed - known):
        rows.append({
            "apw_name": name,
            "chapter": REBORN_ADDED_SECTION,
            "apw_enabled": "no",
            "status": "",
            "notes": "Reborn-added (not in APW)",
        })

    out_rows = []
    unknown_cats: dict[int, int] = {}
    missing_meta = []
    for r in rows:
        name = r["apw_name"]
        section = r.get("section") or r.get("chapter", "")
        meta = meta_lookup(name)
        cat_id_str = meta["nexusCategory"]
        if not cat_id_str:
            missing_meta.append(name)
            cat_name = ""
        else:
            cat_id = int(cat_id_str)
            cat_name = NEXUS_CATEGORIES.get(cat_id)
            if cat_name is None:
                unknown_cats[cat_id] = unknown_cats.get(cat_id, 0) + 1
                cat_name = f"?cat{cat_id}"
        kind = detect_kind(name)
        if args.reset_status:
            status = "installed" if name in installed else "skipped"
        else:
            # Preserve existing status; default new rows to "installed" if present in Reborn/mods/
            status = existing_status.get(name, "installed" if name in installed else "skipped")
        order = mo2_order.get(name, "")
        modid = meta["modid"]
        nexus_url = f"https://www.nexusmods.com/oblivion/mods/{modid}" if modid and modid != "0" else ""
        out_rows.append({
            "apw_name": name,
            "mo2_order": order,
            "section": section,
            "nexus_category": cat_name,
            "mod_kind": kind,
            "apw_enabled": r["apw_enabled"],
            "status": status,
            "notes": r["notes"],
            "nexus_url": nexus_url,
        })

    # Sort to match MO2's mod-list pane scroll order: position 1 = top of UI (lowest
    # priority, base game), N = bottom of UI (highest priority). Reborn-only mods (no APW
    # order) sort to the bottom — they sit in the high-priority slot in Reborn anyway.
    def sort_key(r):
        if r["mo2_order"] == "":
            return (1, r["apw_name"].lower())
        return (0, r["mo2_order"])
    out_rows.sort(key=sort_key)

    fieldnames = ["apw_name", "mo2_order", "section", "nexus_category", "mod_kind", "apw_enabled", "status", "notes", "nexus_url"]
    with MANIFEST.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fieldnames)
        w.writeheader()
        w.writerows(out_rows)

    print(f"Wrote {len(out_rows)} rows to {MANIFEST}")
    print(f"Installed: {sum(1 for r in out_rows if r['status']=='installed')}")
    print(f"Skipped:   {sum(1 for r in out_rows if r['status']=='skipped')}")
    if missing_meta:
        print(f"\n{len(missing_meta)} mods with no meta.ini in APW (nexus_category blank):")
        for n in missing_meta[:10]:
            print(f"  {n}")
        if len(missing_meta) > 10:
            print(f"  ... and {len(missing_meta)-10} more")
    if unknown_cats:
        print(f"\nUnknown nexus category IDs (left as ?cat<id>):")
        for cid, cnt in sorted(unknown_cats.items()):
            print(f"  {cid}: {cnt} mods")


if __name__ == "__main__":
    main()
