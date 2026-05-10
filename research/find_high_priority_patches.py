"""Identify skipped APW compatibility patches where both bridged mods are installed in Reborn."""
import csv, os, re, sys

sys.stdout.reconfigure(encoding="utf-8")

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
folders = os.listdir(os.path.join(ROOT, "mods"))
folders_text = " || ".join(f.lower() for f in folders)

with open(os.path.join(ROOT, "research", "manifest.csv"), encoding="utf-8") as f:
    rows = list(csv.DictReader(f))

installed_apw_text = " || ".join(
    (r["apw_name"] or "").lower() for r in rows if r["status"] == "installed"
)


def has_token(t):
    t = t.lower()
    return t in folders_text or t in installed_apw_text


KNOWN = {
    "OOO": has_token("oscuro") or has_token("OOO Enhanced"),
    "OOO Enhanced": has_token("OOO Enhanced"),
    "MOO": has_token("Maskar"),
    "OCO": has_token("Oblivion Character Overhaul"),
    "Cobl": has_token("Cobl"),
    "KotN": True,
    "Frostcrag": True,
    "Frostcrag Reborn": has_token("Frostcrag Reborn"),
    "Spell Tomes": True,
    "Vile Lair": True,
    "Mehrunes Razor": True,
    "Thieves Den": True,
    "Orrery": True,
    "Horse Armor": True,
    "Battlehorn": True,
    "SI": True,
    "DarNified UI": has_token("DarNified UI"),
    "Extended UI": has_token("Extended UI"),
    "Loot Menu": has_token("Loot Menu") or has_token("LootMenu"),
    "Artifacts Remastered": has_token("Artifacts Remastered"),
    "Apophis": has_token("Apophis"),
    "Adonnay": has_token("Adonnay"),
    "HGEC": has_token("HGEC"),
    "Seamless": has_token("Seamless"),
    "Vermillion": has_token("Vermillion"),
    "DLC Integration": has_token("DLC Integration"),
    "Sentinel": has_token("Sentinel"),
    "Delay DLC": has_token("Delay DLC"),
    "NorthernUI": has_token("NorthernUI"),
    "Mercer": has_token("Mercer"),
    # excluded by design
    "Better Cities": has_token("Better Cities"),
    "Open Cities": has_token("Open Cities"),
    "UL": has_token("Unique Landscapes"),
    "Kvatch Rebuilt": has_token("Kvatch Rebuilt") or has_token("Kvatch Rebuild"),
    "Better Dungeons": has_token("Better Dungeons"),
    "Elsweyr": has_token("Elsweyr"),
    "Anequina": has_token("Anequina"),
    "AWLS": has_token("AWLS"),
    "Mannimarco Revisited": has_token("Mannimarco"),
    "Vampire Hunting": has_token("Vampire Hunting") or has_token("Order of the Virtuous Blood"),
    "MOBS": has_token("MOBS"),
    "Retextured Potions": has_token("Retextured Potions"),
    "Visually Improved Staffs": has_token("Visually Improved Staffs"),
    "Better DB Sanctuary": has_token("Better Dark Brotherhood"),
    "Compact Quivers": has_token("Compact Quivers"),
    "Weapon Improvement": has_token("Weapon Improvement Project"),
    "Improved Infamy": has_token("Improved Infamy"),
    "Oblivifall LMR": has_token("Oblivifall") and has_token("Losing My Religion"),
    "RadiantAI": has_token("RadiantAI"),
    "OCRAFT": has_token("OCRAFT"),
    "Productive Mines": has_token("Productive Mines"),
}

NAME_RULES = [
    (r"OCOv2.*MOO|MOO.*OCO", ["OCO", "MOO"]),
    (r"OCO\b.*Elsweyr|Elsweyr.*OCO", ["OCO", "Elsweyr"]),
    (r"OCOv2.*Beast.*Races", ["OCO"]),
    (r"Vampire Hunting.*OCO|Order of the Virtuous Blood.*OCO", ["Vampire Hunting", "OCO"]),
    (r"OCOv2.*Filter Patch", ["OCO"]),
    (r"OCOv2.*HGEC", ["OCO", "HGEC"]),
    (r"Visually Improved Staffs.*OOO", ["Visually Improved Staffs", "OOO"]),
    (r"Retextured Potions.*OOO", ["Retextured Potions", "OOO"]),
    (r"OOO Flavor.*Extended UI", ["OOO", "Extended UI"]),
    (r"Kvatch Rebuild.*OOO", ["Kvatch Rebuilt", "OOO"]),
    (r"Better Dark Brotherhood.*OOO", ["Better DB Sanctuary", "OOO"]),
    (r"Unique Landscapes.*OOO", ["UL", "OOO"]),
    (r"Better Cities.*OOO", ["Better Cities", "OOO"]),
    (r"OOO Enhanced.*Better Dungeons", ["OOO Enhanced", "Better Dungeons"]),
    (r"OOO\s*OBME|OOOOBME", ["OOO"]),
    (r"OOO golems", ["OOO"]),
    (r"MOBS.*Maskar", ["MOBS", "MOO"]),
    (r"MOO.*katkat", ["MOO"]),
    (r"Hill Giant Eye Fix.*MOO", ["MOO"]),
    (r"Coop.*MOO.*Wolf", ["MOO"]),
    (r"Smaller MOO Backpacks", ["MOO"]),
    (r"Item Description Framework.*Maskar", ["MOO"]),
    (r"Quieter Dragon Sounds.*MOO", ["MOO"]),
    (r"Seamless Equipment.*MOO", ["MOO", "Seamless"]),
    (r"Mannimarco Revisited", ["Mannimarco Revisited"]),
    (r"No Annoying Conjurer.*Spell Tomes", ["Spell Tomes"]),
    (r"Knights.*Weapon Improvement", ["KotN", "Weapon Improvement"]),
    (r"Knights Infamy.*Delay DLC", ["Improved Infamy", "Delay DLC"]),
    (r"Oblivifall.*Knights of the Nine", ["Oblivifall LMR", "KotN"]),
    (r"Oblivifall.*AWLS", ["Oblivifall LMR", "AWLS"]),
    (r"LootMenu.*NorthernUI", ["Loot Menu", "NorthernUI"]),
    (r"Artifacts Remastered.*Hood", ["Artifacts Remastered"]),
    (r"Artifacts Remastered.*Compact Quivers", ["Artifacts Remastered", "Compact Quivers"]),
    (r"Compact Quivers.*Arrow.*Extrication", ["Compact Quivers"]),
    (r"Productive Mines.*Better Cities", ["Productive Mines", "Better Cities"]),
    (r"Productive Mines.*OCRAFT", ["Productive Mines", "OCRAFT"]),
    (r"Better Cities Resources.*OCRAFT", ["Better Cities", "OCRAFT"]),
    (r"Elsweyr Anequina.*Khajiit", ["Elsweyr"]),
    (r"Tales from Elsweyr", ["Elsweyr"]),
    (r"UL.*Patch|Unique Landscapes.*", ["UL"]),
    (r"Kvatch Rebuilt", ["Kvatch Rebuilt"]),
    (r"RadiantAI.*NPCs Alive", ["RadiantAI"]),
    (r"Bash-able Quest Delayers", ["KotN"]),
]


def deps_for(name):
    for pat, tags in NAME_RULES:
        if re.search(pat, name, re.I):
            return tags
    return None


def all_installed(tags):
    return all(KNOWN.get(t, False) for t in tags)


print("=== Probe results ===")
for k, v in KNOWN.items():
    print(f"  {'YES' if v else 'no ':3} | {k}")

skipped = [r for r in rows if r["status"] == "skipped" and r["apw_name"]]
patch_kw = re.compile(r"\b(patch|adaptation|compat|fix|integration|adapted|addon)\b", re.I)
patch_sections = {
    "PATCHES",
    "FILTER PATCHES",
    "NPC & CREATURES",
    "WEAPONS & ARMOR",
    "GAMEPLAY",
    "BUG FIXES & QOL",
}
candidates = [r for r in skipped if r["section"] in patch_sections or patch_kw.search(r["apw_name"])]

both = []
some_missing = []
unmatched = []
for r in candidates:
    deps = deps_for(r["apw_name"])
    if deps is None:
        unmatched.append(r)
    elif all_installed(deps):
        both.append((r, deps))
    else:
        missing = [t for t in deps if not KNOWN.get(t, False)]
        some_missing.append((r, deps, missing))


def order_key(r):
    return int(r["mo2_order"]) if r["mo2_order"].isdigit() else 9999


print(f"\n=== HIGH PRIORITY: all dep mods installed ({len(both)}) ===")
for r, deps in sorted(both, key=lambda x: order_key(x[0])):
    print(f"  #{r['mo2_order']:>4} | {r['section'][:18]:18} | {r['apw_name'][:70]:70} | needs: {','.join(deps)}")

print(f"\n=== SKIP: bridged mod not installed ({len(some_missing)}) ===")
for r, deps, missing in sorted(some_missing, key=lambda x: order_key(x[0])):
    print(f"  #{r['mo2_order']:>4} | {r['apw_name'][:70]:70} | missing: {','.join(missing)}")

print(f"\n=== UNMATCHED: no name rule ({len(unmatched)}) ===")
for r in sorted(unmatched, key=order_key):
    print(f"  #{r['mo2_order']:>4} | {r['section'][:18]:18} | {r['apw_name'][:75]}")
