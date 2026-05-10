#!/usr/bin/env python3
"""Test the v2-audit-surfaced broken refs (with Mesh Nullify disabled).

Adds 22 records spanning 10 broken-ref categories from the audit, plus 2
vanilla controls.

  --phase add      adds the items and exits
  --phase cleanup  removes only the items this script added
"""
import argparse
import asyncio
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))
from g5.driver import G5Driver

# (form_id, edid, sig, plugin, category, expected)
TEST_ITEMS = [
    # ---- controls ----
    (0x0001D4E1, "IronCuirass",  "ARMO", "Oblivion.esm", "control", "vanilla iron cuirass — should look + work fine"),
    (0x0001D4E5, "IronGreaves",  "ARMO", "Oblivion.esm", "control", "vanilla iron greaves — should look + work fine"),

    # ---- icon-only broken (3) ----
    (0x01034943, "DremoraMQ14MarkynazGauntletsPlayable", "ARMO", "OOO Enhanced.esp", "icon-only",
     "ICON broken; mesh should be fine"),
    (0x01006F2F, "XElvenhoodUOOO", "CLOT", "OOO Enhanced.esp", "icon-only",
     "ICON broken; mesh should be fine"),
    (0x010359D7, "OOOBladeOfVirtue", "WEAP", "Oscuro's_Oblivion_Overhaul.esm", "icon-only",
     "ICON broken; mesh should be fine"),

    # ---- MOO armor mesh: matched Bear set (3) — high visual impact ----
    (0x4122CF04, "MOOArmorBearBoots", "ARMO", "MOO", "MOO bear set",
     "ICON+MODL+MOD2+MOD3 all broken — full set should fail visually"),
    (0x4122CF05, "MOOArmorBearCuirass", "ARMO", "MOO", "MOO bear set",
     "ICON+MODL+MOD2+MOD3 all broken"),
    (0x4122CF06, "MOOArmorBearGauntlets", "ARMO", "MOO", "MOO bear set",
     "ICON+MODL+MOD2 broken"),

    # ---- other mesh, mixed (2) ----
    (0x00049669, "EnchDwarvenGauntletsFortStrength", "ARMO", "BP", "other mesh",
     "MOD3 (female mesh) broken; male should work"),
    (0x0006FC35, "SEOrderPriestHood", "CLOT", "OOOShiveringIsles.esp", "other mesh",
     "MOD2 (ground mesh) broken"),

    # ---- MOO other (2) ----
    (0x413B2EBA, "MOOBackpack", "CLOT", "MOO", "MOO backpack",
     "MODL+MOD2 broken — backpack should fail to render"),
    (0x414EF9D2, "MOOArmorLootSotonhorianKiteShield", "ARMO", "MOO", "MOO shield",
     "MODL broken — shield mesh"),

    # ---- SOOO daedric blue set (3) ----
    (0x1D019104, "DaedricBootsVAUnp", "ARMO", "OOO Enhanced.esp", "SOOO daedric blue",
     "MODL+MOD2 broken — both 1st-person and 3rd-person?"),
    (0x1D019106, "DaedricHelmetVAUn", "ARMO", "OOO Enhanced.esp", "SOOO daedric blue",
     "MOD2 broken — ground mesh"),
    (0x1D019107, "DaedricGreavesVAUn", "ARMO", "OOO Enhanced.esp", "SOOO daedric blue",
     "MOD2+MOD3+MOD4 broken — only male equipped should work"),

    # ---- SOOO dremora (1) ----
    (0x0008B888, "Dremora2KynvalHelmet", "ARMO", "OOO Enhanced.esp", "SOOO dremora",
     "MODL broken — helmet should be invisible"),

    # ---- iconic Mankar Camoran robe ----
    (0x000BE31E, "MQMankarCamoranRobeL12", "CLOT", "BP", "MQ Mankar",
     "MODL+MOD3 broken — main quest robe"),

    # ---- NecroSOOO Underking set (2) ----
    (0x01005B71, "XUnderkingrobeOOOKW", "CLOT", "OOO Enhanced.esp", "Underking",
     "MODL+MOD3 broken"),
    (0x01005B72, "XUnderkinghoodOOOKW", "CLOT", "OOO Enhanced.esp", "Underking",
     "MODL broken"),

    # ---- asXivilai (2) ----
    (0x02004573, "cobCloAsXivCollar", "CLOT", "Cobl Main.esm", "asXivilai",
     "ICON+MODL+MOD2 all broken"),
    (0x02007542, "cobCloAsXivKilt", "CLOT", "Cobl Main.esm", "asXivilai",
     "ICON+MODL+MOD2+MOD3 all broken"),

    # ---- HTB Vermillion rings (2) ----
    (0x1D00857D, "HTBVSSilverthornRing", "CLOT", "OOO Enhanced.esp", "HTB Vermillion",
     "MODL+MOD2+MOD3+MOD4 all broken — ring should be invisible"),
    (0x1D00857E, "HTBVSVermillionRing", "CLOT", "OOO Enhanced.esp", "HTB Vermillion",
     "MODL+MOD2+MOD3+MOD4 all broken"),
]


async def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=("add", "cleanup"), required=True)
    args = ap.parse_args()

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    try:
        if not await driver.ping():
            print("ping failed")
            return

        if args.phase == "add":
            print(f"Phase: ADD. {len(TEST_ITEMS)} items "
                  f"(2 controls + {len(TEST_ITEMS) - 2} suspects from v2 audit)")
            print()
            current_cat = None
            for fid, edid, sig, plugin, cat, note in TEST_ITEMS:
                if cat != current_cat:
                    print(f"  --- {cat} ---")
                    current_cat = cat
                print(f"  {sig} {edid:38s} 0x{fid:08X}  {plugin}")
                print(f"      {note}")
                await driver.player_add_item(fid, 1)
                await asyncio.sleep(0.05)
            print()
            print("=" * 70)
            print("Items added. Tab to Oblivion, open inventory, equip each suspect,")
            print("note what you see (icon? mesh on body? slot conflict? invisible?).")
            print()
            print("When done:  python test_unmasked_refs.py --phase cleanup")
            print("=" * 70)

        else:
            print(f"Phase: CLEANUP. Removing {len(TEST_ITEMS)} items...")
            for fid, edid, sig, plugin, cat, note in TEST_ITEMS:
                try:
                    await driver.player_remove_item(fid, 1)
                    await asyncio.sleep(0.05)
                except Exception as e:
                    print(f"  remove {edid} {fid:08X}: FAIL {e}")
            print(f"removed {len(TEST_ITEMS)} items.")

    finally:
        await driver.close()


if __name__ == "__main__":
    asyncio.run(main())
