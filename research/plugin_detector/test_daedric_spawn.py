#!/usr/bin/env python3
"""Spawn the 3 daedric blue armor pieces + moonstone as WORLD refs (via
placeatme) instead of adding to inventory. Diagnostic for whether the 4
AddItem-resistant records actually work as base forms.
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

EDIDS = ["DaedricBootsVAUnp", "DaedricHelmetVAUn", "DaedricGreavesVAUn",
         "MOOMoonstone"]


async def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=("spawn", "cleanup"), required=True)
    args = ap.parse_args()

    state_file = Path(__file__).with_suffix(".state.json")
    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    try:
        if args.phase == "spawn":
            profile_dir = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")
            data_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
            print("loading load order...")
            lo = build_load_order(profile_dir=profile_dir, data_dir=data_dir)
            print("building winners (ARMO/MISC)...")
            winners = build_winning_records(lo, signatures={"ARMO", "MISC"})
            edid_to_fid = {}
            for lo_fid, (plugin, sig, body) in winners.items():
                for ssig, ssub in parse_subrecords(body):
                    if ssig == "EDID":
                        e = cstr(ssub)
                        if e in EDIDS:
                            edid_to_fid[e] = lo_fid
                        break

            ref_ids = []
            print()
            for edid in EDIDS:
                fid = edid_to_fid.get(edid)
                if fid is None:
                    print(f"  {edid}: NOT FOUND")
                    continue
                try:
                    ref = await driver.spawn(fid, count=1)
                    ref_ids.append(ref)
                    print(f"  {edid:30s} 0x{fid:08X} -> ref=0x{ref:08X}")
                except Exception as e:
                    print(f"  {edid}: spawn FAIL {e}")
            state_file.write_text(json.dumps({"ref_ids": ref_ids}))
            print()
            print("4 base forms spawned at your feet. Look down/around — they should")
            print("appear as 3D items on the ground. Pick them up by 'taking' to test")
            print("if they enter inventory that way.")

        else:  # cleanup
            try:
                state = json.loads(state_file.read_text())
            except Exception:
                state = {"ref_ids": []}
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
