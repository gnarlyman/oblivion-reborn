#!/usr/bin/env python3
"""Test the 14 broken-icon refs surfaced by audit_resource_mod_usage.py.

Adds each suspect ARMO/CLOT record to player inventory via Player.AddItem,
prompts the operator to alt-tab and visually verify icons, then removes
each one cleanly.

Run from research/plugin_detector/. Oblivion must be running, G5 plugin
loaded, window in focus to receive console commands.
"""
import asyncio
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))
from g5.driver import G5Driver

# Broken-icon refs, from audit_resource_mod_usage.py output:
BROKEN_ICON_REFS = [
    # Plipo Blood Elves — 4 ARMOs with broken texture/opale icon/amazon01pli*.dds
    (0x1D101095, "0XnmJBPlipocuirass",         "ARMO", "OOO Enhanced.esp",
     "ICON: textures/opale icon/amazon01plibra.dds"),
    (0x1D101096, "0XnmOpPlipogreaves",         "ARMO", "OOO Enhanced.esp",
     "ICON: textures/opale icon/amazon01pligreaves.dds"),
    (0x1D101097, "0XnmOpPlipoboots",           "ARMO", "OOO Enhanced.esp",
     "ICON: textures/opale icon/amazon01pliboots.dds"),
    (0x1D101098, "0XnmOpPlipogloves",          "ARMO", "OOO Enhanced.esp",
     "ICON: textures/opale icon/amazon01pligloves.dds"),
    # OOO Enhanced HellSpawn Amazon — 5 ARMOs with broken hellspawn armor textures
    (0x1D101001, "sOOOAmazonHellSpawnBoots01",   "ARMO", "OOO Enhanced.esp",
     "ICON: textures/exnem/eyecandy/femalearmor/hellspawn armor/amazon01boots.dds"),
    (0x1D101002, "sOOOAmazonHellSpawnCuirass01", "ARMO", "OOO Enhanced.esp",
     "ICON: textures/exnem/eyecandy/femalearmor/hellspawn armor/amazon01pauldrons.dds"),
    (0x1D101003, "sOOOAmazonHellSpawnGauntlets01","ARMO", "OOO Enhanced.esp",
     "ICON: textures/exnem/eyecandy/femalearmor/hellspawn armor/amazon01gloves.dds"),
    (0x1D101004, "sOOOAmazonHellSpawnGreaves01", "ARMO", "OOO Enhanced.esp",
     "ICON: textures/exnem/eyecandy/femalearmor/hellspawn armor/amazon01greaves.dds"),
    (0x1D101094, "sOOOAmazonSeductress01Tiara",  "ARMO", "OOO Enhanced.esp",
     "ICON: textures/exnem/eyecandy/femalearmor/tiara.dds"),
    # Shivering Isles CLOTs — 3 with broken grhys/exnemconv textures
    (0x00074E85, "SEHaskillSuit",  "CLOT", "Bashed Patch, 0.esp",
     "ICON: textures/grhys/exnemconv/sehaskill.dds"),
    (0x0007393C, "SESylsDress",    "CLOT", "Bashed Patch, 0.esp",
     "ICON: textures/grhys/exnemconv/seduchess.dds"),
    (0x00073904, "SEThadonsRobe",  "CLOT", "Bashed Patch, 0.esp",
     "ICON: textures/grhys/exnemconv/seduke.dds"),
    # Amazon shields — 2 ARMOs with broken pek/pekale texture
    (0x1D008821, "AmazonShield01Magic", "ARMO", "OOO Enhanced.esp",
     "ICON: textures/armor/pek/pekale/amazon01.dds"),
    (0x1D03EA8C, "AmazonShield01",      "ARMO", "OOO Enhanced.esp",
     "ICON: textures/armor/pek/pekale/amazon01.dds"),
]

# Sanity-check controls — known-good vanilla items we expect to render with
# normal icons. If these look broken too, it's the test, not the records.
CONTROL_REFS = [
    (0x0001D4E1, "IronCuirass",  "ARMO", "Oblivion.esm", "(control: vanilla iron cuirass)"),
    (0x0001D4E5, "IronGreaves",  "ARMO", "Oblivion.esm", "(control: vanilla iron greaves)"),
]


async def main():
    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    try:
        if not await driver.ping():
            print("ping failed")
            return

        all_items = CONTROL_REFS + BROKEN_ICON_REFS

        print(f"Adding {len(all_items)} items to your inventory ({len(CONTROL_REFS)} "
              f"controls + {len(BROKEN_ICON_REFS)} suspected broken):")
        print()
        for fid, edid, sig, plugin, note in all_items:
            print(f"  {sig} {edid:36s} 0x{fid:08X}  {plugin}")
            print(f"      {note}")
            await driver.player_add_item(fid, 1)
            await asyncio.sleep(0.05)
        print()
        print("=" * 70)
        print("All items added. Alt-tab to Oblivion, open inventory (I), and check:")
        print("  - Controls (IronCuirass, IronGreaves) should show normal icons")
        print("  - Broken-icon suspects should show yellow !, blank box, or vanilla")
        print("    fallback icon")
        print()
        print("After you've checked each item, return here and press ENTER to clean")
        print("up (script will Player.RemoveItem each one).")
        print("=" * 70)
        input("press ENTER when done inspecting > ")

        print()
        print("Cleaning up...")
        for fid, edid, sig, plugin, note in all_items:
            try:
                await driver.player_remove_item(fid, 1)
                await asyncio.sleep(0.05)
            except Exception as e:
                print(f"  remove {edid} {fid:08X}: FAIL {e}")
        print(f"removed {len(all_items)} items.")
    finally:
        await driver.close()


if __name__ == "__main__":
    asyncio.run(main())
