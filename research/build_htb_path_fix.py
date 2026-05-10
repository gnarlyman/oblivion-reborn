"""Build a small mod that mirrors HTB Vermillion/Silverthorn paths to existing
KDRobes meshes inside the OOO Enhanced mod folder.

OOO Enhanced.esp records reference paths under
  meshes/HTB/VermillionSeries/Armor & Clothing/{Vermillion,Silverthorn}/...
that don't exist on disk. The actual meshes ship at meshes/Clothes/KDRobes/.

This builds:
  D:/Modlists/Reborn/mods/Reborn - OOO Enhanced HTB Path Fix/
    meshes/HTB/VermillionSeries/Armor & Clothing/Vermillion/clothes/m/vermrobe.nif
    ...
each being a copy of the corresponding KDRobes file.

Activate the mod after OOO Enhanced. The .esp doesn't need editing.
"""
from __future__ import annotations

import shutil
from pathlib import Path

KDROBES = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\Clothes\KDRobes")
DEST = Path(r"D:\Modlists\Reborn\mods\Reborn - OOO Enhanced HTB Path Fix")
HTB_BASE = "meshes/HTB/VermillionSeries/Armor & Clothing"

# Tier mapping. Each tuple: (target_path_relative_to_DEST, source_filename_in_KDROBES)
# Source filename is the literal disk filename (case as on disk).

# Records we cover exactly (visual fidelity intact):
EXACT = [
    # === Silverthorn Robe ===
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvrobe.nif",       "msilverthorn.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvrobe.nif",       "FSilverthorn.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/gnd/silvrobe_gnd.nif", "silverthorn_gnd.nif"),
    # === Silverthorn Hood ===
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvhood.nif",       "Silverthornhood.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvhood.nif",       "Silverthornhood.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/gnd/silvhood_gnd.nif", "silverthornhood_gnd.nif"),
    # === Vermillion Robe ===
    (f"{HTB_BASE}/Vermillion/clothes/m/vermrobe.nif",        "MVermillion.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermrobe.nif",        "Fvermillion.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/gnd/vermrobe_gnd.nif",  "vermillion_gnd.nif"),
    # === Vermillion Hood ===
    (f"{HTB_BASE}/Vermillion/clothes/m/vermhood.nif",        "vermillionhood.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermhood.nif",        "vermillionhood.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/gnd/vermhood_gnd.nif",  "vermillionhood_gnd.nif"),
    # === Vermillion Gloves (= gauntlets) ===
    (f"{HTB_BASE}/Vermillion/clothes/m/vermgloves.nif",       "Mvermgaunt.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermgloves.nif",       "Fvermgaunt.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/gnd/vermgloves_gnd.nif", "vermgaunt_gnd.nif"),
]

# Records we cover with substitutes (visual mismatch but no broken meshes):
# Silverthorn gloves use Vermillion gauntlets; Outfits and Shoes reuse the robe mesh.
SUBSTITUTE = [
    # Silverthorn Gloves -> Vermillion gauntlets (closest available)
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvgloves.nif",       "Mvermgaunt.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvgloves.nif",       "Fvermgaunt.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/gnd/silvgloves_gnd.nif", "vermgaunt_gnd.nif"),
    # Silverthorn Shoes -> robe mesh (visual oddity but no breakage)
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvshoes.nif",  "msilverthorn.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvshoes.nif",  "FSilverthorn.nif"),
    # Silverthorn Outfit01 -> robe
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvoutfit01.nif", "msilverthorn.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvoutfit01.nif", "FSilverthorn.nif"),
    # Silverthorn Outfit02 -> robe
    (f"{HTB_BASE}/Silverthorn/clothes/m/silvoutfit02.nif", "msilverthorn.nif"),
    (f"{HTB_BASE}/Silverthorn/clothes/f/silvoutfit02.nif", "FSilverthorn.nif"),
    # Vermillion Shoes -> robe
    (f"{HTB_BASE}/Vermillion/clothes/m/vermshoes.nif",   "MVermillion.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermshoes.nif",   "Fvermillion.nif"),
    # Vermillion Outfit01 -> robe
    (f"{HTB_BASE}/Vermillion/clothes/m/vermoutfit01.nif", "MVermillion.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermoutfit01.nif", "Fvermillion.nif"),
    # Vermillion Outfit02 -> robe
    (f"{HTB_BASE}/Vermillion/clothes/m/vermoutfit02.nif", "MVermillion.nif"),
    (f"{HTB_BASE}/Vermillion/clothes/f/vermoutfit02.nif", "Fvermillion.nif"),
]

# SKIPPED: Silverthorn Ring + Vermillion Ring (4 paths total, no clean substitute;
# rings/circlets are accessory slots and remain broken — minor visual impact)


def main():
    DEST.mkdir(parents=True, exist_ok=True)

    skipped_existing = 0
    copied = 0
    missing_source = []

    all_mappings = [("EXACT", t, s) for t, s in EXACT] + [("SUB", t, s) for t, s in SUBSTITUTE]

    for kind, target_rel, source_name in all_mappings:
        src = KDROBES / source_name
        dst = DEST / target_rel.replace("/", "\\")
        if not src.exists():
            missing_source.append((target_rel, source_name))
            continue
        dst.parent.mkdir(parents=True, exist_ok=True)
        if dst.exists() and dst.stat().st_size == src.stat().st_size:
            skipped_existing += 1
            continue
        shutil.copy2(src, dst)
        copied += 1
        print(f"  [{kind:5s}] {target_rel}")

    # Write a meta.ini so MO2 picks it up cleanly
    meta = DEST / "meta.ini"
    if not meta.exists():
        meta.write_text(
            "[General]\n"
            "gameName=oblivion\n"
            "modid=0\n"
            "version=1.0.0\n"
            "category=\"-1,\"\n"
            "comments=Path-fix copies of KDRobes meshes mirrored under HTB/VermillionSeries paths so OOO Enhanced.esp records resolve without editing the .esp.\n"
            "notes=Built by research/build_htb_path_fix.py. Activate after OOO Enhanced.\n",
            encoding="utf-8",
        )
        print(f"\n  wrote meta.ini at {meta}")

    print(f"\nResult: {copied} copied, {skipped_existing} already-up-to-date, "
          f"{len(missing_source)} source-missing")
    if missing_source:
        print("Missing sources:")
        for t, s in missing_source:
            print(f"  source not found: {s}  (target was {t})")
    print(f"\nMod folder: {DEST}")
    print("Total mappings: 15 EXACT + 15 SUBSTITUTE = 30 path mirrors covering 12 of 14 HTB records.")
    print("Skipped: SilverthornRing + VermillionRing (no clean mesh substitute).")


if __name__ == "__main__":
    main()
