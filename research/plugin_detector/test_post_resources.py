#!/usr/bin/env python3
"""Test the post-Resources state of the load:
  A. Validate daedric blue cluster is fixed (8 paths the resources install closed)
  B. Test record types we haven't yet visually confirmed (CREA, STAT, CONT, etc.)
  C. Re-test a few records confirmed broken to sanity-check still broken

  --phase add       adds inventory items + spawns world objects/creatures
  --phase cleanup   removes items + deletes spawned refs
"""
import argparse
import asyncio
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))
sys.path.insert(0, str(Path(__file__).parent))
from g5.driver import G5Driver
from predictor.load_order import build_load_order, build_winning_records
from predictor.plugin_parser import parse_subrecords, cstr

# Test entries are looked up by EDID at runtime so the test is robust to
# load-order shifts. Each entry: (edid, sig, label, mode, expected).
TESTS = [
    # ===== A. Daedric blue cluster — should now look correct =====
    ("DaedricBootsVAUnp",   "ARMO", "A daedric blue boots",   "additem",
     "should equip with proper boots mesh now (was broken pre-Resources)"),
    ("DaedricHelmetVAUn",   "ARMO", "A daedric blue helmet",  "additem",
     "should equip with proper helmet"),
    ("DaedricGreavesVAUn",  "ARMO", "A daedric blue greaves", "additem",
     "should equip with proper greaves"),

    # ===== B. UNTESTED record types =====
    ("OOOCreatureWaterPlant", "CREA", "B water plant creature", "spawn",
     "MODL broken — should appear invisible"),
    ("aaReaper", "CREA", "B Reaper creature", "spawn",
     "MODL broken — should appear invisible"),

    ("MOOStaticOutpostTunnelRamp01", "STAT", "B MOO outpost ramp", "spawn",
     "MODL broken — should be invisible static"),
    ("MOOCarriage", "STAT", "B MOO Carriage!", "spawn",
     "MODL broken — invisible carriage in front of you?"),
    ("MOOStaticNoticeBoard", "STAT", "B MOO Notice Board", "spawn",
     "MODL broken — invisible notice board"),
    ("HTBStrotiAFSarcophagusSkeleton02", "STAT", "B Stroti sarcophagus skel", "spawn",
     "MODL broken — invisible static"),
    ("AVAItable01", "STAT", "B AVAI table", "spawn",
     "MODL broken — invisible table"),

    ("HTBDinnerTray", "CONT", "B HTB Dinner Tray", "spawn",
     "MODL broken — invisible container"),

    ("MOOMoonstone", "MISC", "B MOO Moonstone", "additem",
     "MODL broken — should have invisible drop / odd icon"),

    ("bgForcePushTouchEnchScrollOOO", "BOOK", "B OOO ForcePush scroll", "additem",
     "MODL/ICON broken — scroll should look broken"),

    ("MOODungeonButtonGem01", "ACTI", "B MOO dungeon button", "spawn",
     "MODL broken — invisible button"),

    ("MOODoorCDoor00", "DOOR", "B MOO door", "spawn",
     "MODL broken — invisible door"),

    # ===== C. Sanity re-tests (confirmed broken before, should still be) =====
    ("MOOArmorBearCuirass", "ARMO", "C MOO Bear cuirass (re-test)", "additem",
     "still broken — invisible chest"),
    ("MOOBackpack", "CLOT", "C MOO Backpack (re-test)", "additem",
     "still broken — invisible backpack"),
    ("HTBVSSilverthornRing", "CLOT", "C Silverthorn ring (re-test)", "additem",
     "still broken — invisible ring"),
]


def resolve_test_form_ids() -> dict:
    """Resolve each test EDID against the current load order. Returns
    {edid: form_id}; missing EDIDs are excluded with a warning."""
    profile_dir = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")
    data_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
    print(f"loading load order from {profile_dir}")
    lo = build_load_order(profile_dir=profile_dir, data_dir=data_dir)
    print(f"  {len(lo.plugins)} active plugins")

    sigs_needed = {sig for _, sig, *_ in TESTS}
    print(f"building winners ({sorted(sigs_needed)})...")
    winners = build_winning_records(lo, signatures=sigs_needed)
    print(f"  {len(winners)} winning records")

    # Index EDID -> lo_fid for the sigs we need.
    edid_to_fid: dict[str, int] = {}
    wanted_edids = {edid for edid, *_ in TESTS}
    for lo_fid, (plugin, sig, body) in winners.items():
        if sig not in sigs_needed:
            continue
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                e = cstr(ssub)
                if e in wanted_edids:
                    edid_to_fid[e] = lo_fid
                break

    return edid_to_fid


async def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=("add", "cleanup"), required=True)
    args = ap.parse_args()

    state_file = Path(__file__).with_suffix(".state.json")
    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    try:
        if not await driver.ping():
            print("ping failed")
            return

        if args.phase == "add":
            edid_to_fid = resolve_test_form_ids()
            unresolved = [t for t in TESTS if t[0] not in edid_to_fid]
            if unresolved:
                print()
                print(f"WARN: {len(unresolved)} test EDIDs did not resolve in current LO:")
                for edid, sig, *_ in unresolved:
                    print(f"  {sig} {edid}")

            resolved_tests = [(edid_to_fid[t[0]], *t) for t in TESTS if t[0] in edid_to_fid]
            print()
            print(f"Phase: ADD — {len(resolved_tests)} tests resolved")
            print()
            current_section = None
            ref_ids = []  # spawned refs to delete later
            added_fids = []  # inventory items to remove

            for fid, edid, sig, label, mode, note in resolved_tests:
                section = label[0]
                if section != current_section:
                    print(f"  --- Section {section} ---")
                    current_section = section
                print(f"  {sig} {edid:42s} 0x{fid:08X}  ({mode}) [{label}]")
                print(f"      {note}")
                try:
                    if mode == "additem":
                        await driver.player_add_item(fid, 1)
                        added_fids.append(fid)
                    else:  # spawn
                        ref = await driver.spawn(fid, count=1)
                        ref_ids.append(ref)
                        print(f"      ref=0x{ref:08X}")
                except Exception as e:
                    print(f"      FAIL: {e}")
                await asyncio.sleep(0.05)

            state_file.write_text(json.dumps({"ref_ids": ref_ids, "added_fids": added_fids}))
            print()
            print("=" * 70)
            print("Tab to Oblivion and check:")
            print("  A. Daedric blue armor — equip and verify mesh renders correctly")
            print("  B. NEW tests — look around for spawned creatures/statics/containers")
            print("     Note which render and which are invisible.")
            print("  C. Sanity re-tests — should still be broken (bear cuirass, backpack,")
            print("     Silverthorn ring) confirming nothing weird from changes.")
            print()
            print("When done:  python test_post_resources.py --phase cleanup")
            print("=" * 70)

        else:
            print(f"Phase: CLEANUP")
            try:
                state = json.loads(state_file.read_text())
            except Exception:
                state = {"ref_ids": [], "added_fids": []}

            for fid in state.get("added_fids", []):
                try:
                    await driver.player_remove_item(fid, 1)
                except Exception as e:
                    print(f"  remove 0x{fid:08X} FAIL: {e}")
            print(f"  removed {len(state.get('added_fids', []))} items")

            for ref in state.get("ref_ids", []):
                try:
                    await driver.delete(ref)
                except Exception as e:
                    print(f"  delete 0x{ref:08X} FAIL: {e}")
            print(f"  deleted {len(state.get('ref_ids', []))} refs")
            try:
                state_file.unlink()
            except Exception:
                pass

    finally:
        await driver.close()


if __name__ == "__main__":
    asyncio.run(main())
