"""Port APW configs to Reborn Configs for shared mods.

Maps each known APW config file to its Reborn-mods equivalent path. Copies
verbatim. Reports skipped / overwritten / new.
"""
import os
import shutil
from pathlib import Path

APW_CFG = Path("D:/Modlists/APW/mods/A Painted World Configs")
REBORN_CFG = Path("D:/Modlists/Reborn/mods/Reborn Configs")

# (APW relative path, Reborn relative path under Reborn Configs)
PORTS = [
    # MOO main + companion INIs (loaded from Data root)
    ("Maskar's Oblivion Overhaul.ini",                       "Maskar's Oblivion Overhaul.ini"),
    ("Maskar's Oblivion Overhaul for compatibility.ini",     "Maskar's Oblivion Overhaul for compatibility.ini"),
    ("Maskar's Oblivion Overhaul for actor levels.ini",      "Maskar's Oblivion Overhaul for actor levels.ini"),
    # OBSE plugin INIs (Data/OBSE/Plugins/)
    ("OBSE/Plugins/EngineBugFixes.ini",                      "OBSE/Plugins/EngineBugFixes.ini"),
    ("OBSE/Plugins/Blockhead.ini",                           "OBSE/Plugins/Blockhead.ini"),
    ("OBSE/Plugins/oblivion_display_tweaks.ini",             "OBSE/Plugins/oblivion_display_tweaks.ini"),
    ("OBSE/Plugins/WalkBlessed.ini",                         "OBSE/Plugins/WalkBlessed.ini"),
    # OBSE-batch-loaded INIs (Data/ini/)
    ("ini/Delay DLC Start.ini",                              "ini/Delay DLC Start.ini"),
    ("ini/Extended UI.ini",                                  "ini/Extended UI.ini"),
    ("ini/Dynamic Map.ini",                                  "ini/Dynamic Map.ini"),
    ("ini/Dynamic Map base.ini",                             "ini/Dynamic Map base.ini"),
    ("ini/Enhanced Hotkeys.ini",                             "ini/Enhanced Hotkeys.ini"),
    ("ini/Better Enemy Health - Config.ini",                 "ini/Better Enemy Health - Config.ini"),
    ("ini/Display Skill Perk Effects.ini",                   "ini/Display Skill Perk Effects.ini"),
    ("ini/Oscuro's_Oblivion_Overhaul.ini",                   "ini/Oscuro's_Oblivion_Overhaul.ini"),
    # QZ Easy Menus — APW puts it in root and ini/, both exist; root is the active one
    ("QZ Easy Menus.ini",                                    "QZ Easy Menus.ini"),
]

actions = []
for apw_rel, reborn_rel in PORTS:
    src = APW_CFG / apw_rel
    dst = REBORN_CFG / reborn_rel
    if not src.exists():
        actions.append(("MISSING-IN-APW", apw_rel, ""))
        continue
    existed = dst.exists()
    same = False
    if existed:
        same = src.read_bytes() == dst.read_bytes()
    if same:
        actions.append(("SAME", apw_rel, str(dst)))
        continue
    dst.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(src, dst)
    actions.append(("OVERWRITE" if existed else "NEW", apw_rel, str(dst)))

# Report
new = [a for a in actions if a[0] == "NEW"]
overwrite = [a for a in actions if a[0] == "OVERWRITE"]
same = [a for a in actions if a[0] == "SAME"]
missing = [a for a in actions if a[0] == "MISSING-IN-APW"]

print(f"\nPorted {len(new) + len(overwrite)} configs ({len(new)} new, {len(overwrite)} overwritten)")
print(f"Already identical: {len(same)}")
print(f"Missing in APW source: {len(missing)}")

print(f"\n=== NEW ({len(new)}) ===")
for status, src, dst in new:
    print(f"  {src}")
print(f"\n=== OVERWRITE ({len(overwrite)}) ===")
for status, src, dst in overwrite:
    print(f"  {src}")
if missing:
    print(f"\n=== MISSING IN APW ({len(missing)}) ===")
    for status, src, dst in missing:
        print(f"  {src}")
