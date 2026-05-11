"""Produce a clean rename list with collision detection."""
import os, configparser, sys

APW_MODS = r"D:\Modlists\APW\mods"
REBORN_MODS = r"D:\Modlists\Reborn\mods"


def meta(d, name):
    p = os.path.join(d, name, "meta.ini")
    if not os.path.exists(p):
        return None
    cp = configparser.ConfigParser(interpolation=None, strict=False)
    try:
        cp.read(p, encoding="utf-8-sig")
    except Exception:
        return None
    g = cp["General"] if cp.has_section("General") else {}
    return {
        "modid": g.get("modid", "0").strip('"'),
        "installationFile": g.get("installationFile", "").strip('"'),
        "version": g.get("version", "").strip('"'),
    }


# Pairs to evaluate — from earlier modid match output
pairs = [
    ("''I HAVE NO GREETING'' Fix for Oblivion", "''I HAVE NO GREETING'' Fix"),
    ("1_Clickable Magic Gate", "Clickable Magic Gate"),
    ("1_DarNified UI Ultrawide config preset", "UW Ultrawide map border fix for DarNified UI"),
    ("1_Dynamic Map", "Dynamic Map"),
    ("1_Extended UI", "Extended UI"),
    ("1_ULF DarNified UI patch image file", "UW DarNified UI patch for Black Rectangle Ultrawide Fix"),
    ("2_OCOv2 - Filter Patch for Mods", "OCOv2 - Filter Patch for Mods"),
    ("AleswellNoRefractFix", "Aleswell No Refraction Fix"),
    ("ArmoredShadowmereFix 1.0", "Armored Shadowmere Fix"),
    ("Better Oblivion Cursor File", "Better Oblivion Cursor"),
    ("Console Paste", "Console Paste Support"),
    ("DLCSpellTomes-No Attack", "No Annoying Conjurer Attack (Spell Tomes DLC fix)"),
    ("EVE HGEC Eyecandy Variants Expansion OOO", "EVE HGEC Eyecandy Variants Expansion"),
    ("Enhanced Hotkeys 2_3_1", "Enhanced Hotkeys"),
    ("Extended UI Boss Bar Retexture", "Extended UI - Vanilla and Darn Boss Bar Retexture"),
    ("Grip of Steel", "Grip of Steel - No Player Disarm"),
    ("Main Menu Ultrawide", "UW Main Menu 2K Ultrawide"),
    ("Maskars Oblivion Overhaul 5_0_5", "Maskars Oblivion Overhaul"),
    ("Migck Miscellaneous", "Migck's Miscellaneous fixes tweaks and additions"),
    ("NPC Idle Animation Restoration and Additions (NIARA)", "NPC Idle Animation Restoration and Additions"),
    ("New icon for Eye and Crosshair", "New Eye and Crosshair for UI"),
    ("OCOv2 - Advanced Edition (Vanilla Hairstyles)", "Oblivion Character Overhaul - Advanced Edition"),
    ("OCOv2 Orsimer Overhaul", "Orsimer Overhaul for Oblivion Character Overhaul version 2"),
    ("Oblivion Character Overhaul v2 DLC Addon", "Oblivion Character Overhaul v2 - DLC Addon"),
    ("Oblivion Reloaded Combined(ORC) 193", "Oblivion Reloaded Combined(ORC) 1.9.3"),
    ("Oblivion Reloaded Combined(ORC) 315", "Oblivion Reloaded Combined(ORC) 1.9.3"),
    ("PSMainQuestDelayer", "PrinceShroob Main Quest Delayer (Oblivion)"),
    ("QZ Easy Menus", "QZ Easy Menus Update"),
    ("SB_WeaponDropFix", "SB Weapon Drop Fix"),
    ("Seamless - OCOv2", "Seamless OCOV2"),
    ("TES4Edit 4.1.5f", "TES4Edit"),
    ("Ultrawide Letterbox Fix", "UW Black Rectangle Ultrawide Fix"),
]

# Existing Reborn folders (so we can detect collisions if rename target already exists)
reborn_existing = set(os.listdir(REBORN_MODS))

# Group by target name to detect rename-collisions among the proposed renames
from collections import defaultdict
by_target = defaultdict(list)
for src, tgt in pairs:
    by_target[tgt].append(src)

print(f"{'#':>3}  {'OK?':<3} REBORN folder -> APW name")
print("-" * 100)
n = 0
for src, tgt in pairs:
    n += 1
    flags = []
    if tgt in reborn_existing:
        flags.append("TARGET EXISTS in Reborn/mods")
    if len(by_target[tgt]) > 1:
        flags.append(f"{len(by_target[tgt])} sources -> same target")
    rm = meta(REBORN_MODS, src) or {}
    am = meta(APW_MODS, tgt) or {}
    if rm.get("modid") and am.get("modid") and rm["modid"] != am["modid"]:
        flags.append(f"modid mismatch: reborn={rm.get('modid')} apw={am.get('modid')}")
    if rm.get("installationFile") and am.get("installationFile") and rm["installationFile"] != am["installationFile"]:
        flags.append(f"different installer: r={rm.get('installationFile')[:30]}  a={am.get('installationFile')[:30]}")
    flag_str = " [" + "; ".join(flags) + "]" if flags else ""
    mark = "!!" if flags else "OK"
    print(f"{n:>3}  {mark:<3} '{src}' -> '{tgt}'{flag_str}")
