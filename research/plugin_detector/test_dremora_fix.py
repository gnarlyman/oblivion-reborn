#!/usr/bin/env python3
"""Verify the Dremora Churl Armor mesh fix is real after installing
OOO Enhanced - Resources.

  --phase add      adds the cuirass to player inventory + spawns a Dremora
  --phase cleanup  removes inventory item + deletes spawned Dremora
"""
import argparse
import asyncio
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))
from g5.driver import G5Driver

# The cuirass ARMO record itself.
DREMORA_CUIRASS_FID = 0x0003E9BD  # Dremora0ChurlCuirass
# A Dremora NPC that previously rendered with an invisible chest.
DREMORA_NPC_FID = 0x00014692  # Dremora0ChurlMissile1 (was a v3-calibration FP)

# Other Dremora NPCs — spawn one or two more for confidence.
EXTRA_DREMORA = [
    0x00092DA0,  # Dremora0ChurlMelee1
    0x00014693,  # Dremora0ChurlMissile2
]


async def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=("add", "cleanup"), required=True)
    args = ap.parse_args()

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    state_file = Path(__file__).with_suffix(".state.json")

    try:
        if not await driver.ping():
            print("ping failed")
            return

        if args.phase == "add":
            print("Phase: ADD")
            print(f"  - Adding Dremora0ChurlCuirass (0x{DREMORA_CUIRASS_FID:08X}) to inventory")
            await driver.player_add_item(DREMORA_CUIRASS_FID, 1)

            ref_ids = []
            print(f"  - Spawning Dremora0ChurlMissile1 (0x{DREMORA_NPC_FID:08X})")
            ref = await driver.spawn(DREMORA_NPC_FID, count=1)
            ref_ids.append(ref)
            print(f"      ref=0x{ref:08X}")

            for fid in EXTRA_DREMORA:
                print(f"  - Spawning extra dremora 0x{fid:08X}")
                try:
                    ref = await driver.spawn(fid, count=1)
                    ref_ids.append(ref)
                    print(f"      ref=0x{ref:08X}")
                except Exception as e:
                    print(f"      spawn FAIL: {e}")

            import json
            state_file.write_text(json.dumps({"ref_ids": ref_ids}))

            print()
            print("=" * 70)
            print("Tab to Oblivion and check:")
            print("  1. INVENTORY: equip 'Dremora Churl Cuirass'. Does the chest render?")
            print(f"  2. SCENE: there are {len(ref_ids)} Dremora NPCs around you. Do they")
            print("     render with full armor (chest + everything else)?")
            print()
            print(f"When done:  python test_dremora_fix.py --phase cleanup")
            print("=" * 70)

        else:  # cleanup
            print("Phase: CLEANUP")
            import json
            try:
                state = json.loads(state_file.read_text())
            except Exception:
                state = {"ref_ids": []}

            await driver.player_remove_item(DREMORA_CUIRASS_FID, 1)
            print("  removed cuirass from inventory")

            for ref in state.get("ref_ids", []):
                try:
                    await driver.delete(ref)
                    print(f"  deleted ref 0x{ref:08X}")
                except Exception as e:
                    print(f"  delete 0x{ref:08X}: FAIL {e}")
            try:
                state_file.unlink()
            except Exception:
                pass

    finally:
        await driver.close()


if __name__ == "__main__":
    asyncio.run(main())
