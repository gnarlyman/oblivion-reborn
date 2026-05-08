#!/usr/bin/env python3
"""T15 slow walkthrough — spawn, inspect, pause 5s, delete.

Used for visual verification of each NPC. Each NPC stays visible in-game for
~5 seconds so you can see who spawned, then auto-deletes before the next one.

Run from research/plugin_detector/g5/. Oblivion must be running, plugin loaded,
window in focus.
"""
import asyncio
import json
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))

from g5.candidates import load_candidates
from g5.driver import G5Driver
from g5.recovery import classify_failure, append_jsonl

CANDIDATE_PATH = Path(__file__).parent / "tests" / "fixtures" / "vanilla_50.json"
OUTPUT_PATH = Path(__file__).parent / "validation_vanilla.jsonl"
PAUSE_SECONDS = 5.0
TICKS_WAIT = 30  # ~1s at 30fps for inventory to populate after OnLoad


async def main():
    candidates = load_candidates(CANDIDATE_PATH)
    print(f"loaded {len(candidates)} candidates; pausing {PAUSE_SECONDS}s between inspect and delete")

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()

    try:
        for idx, cand in enumerate(candidates, start=1):
            fid = cand["form_id"]
            fid_hex = f"{fid:08X}"
            edid = cand.get("edid", "?")
            spawned_at = time.time()

            try:
                ref_id = await driver.spawn(fid, count=1)
                # let OnLoad populate inventory
                await asyncio.sleep(TICKS_WAIT * (1.0 / 30.0))
                items = await driver.inspect_inventory(ref_id)
                # leave the NPC visible for the operator
                print(f"[{idx}/{len(candidates)}] {edid} {fid_hex} ref=0x{ref_id:08X}: {len(items)} items — visible {PAUSE_SECONDS}s")
                await asyncio.sleep(PAUSE_SECONDS)
                await driver.delete(ref_id)

                entry = {
                    "form_id": fid_hex,
                    "edid": edid,
                    "ref_id": ref_id,
                    "inventory": items,
                    "outcome": "ok",
                    "ticks_to_ready": TICKS_WAIT,
                    "spawned_at": spawned_at,
                }
            except BaseException as e:
                outcome = classify_failure(e)
                entry = {
                    "form_id": fid_hex,
                    "edid": edid,
                    "outcome": outcome,
                    "error": str(e),
                }
                print(f"[{idx}/{len(candidates)}] {edid} {fid_hex}: FAIL {outcome}: {e}")
            append_jsonl(OUTPUT_PATH, entry)
    finally:
        await driver.close()

    print(f"\ndone; output at {OUTPUT_PATH}")


if __name__ == "__main__":
    asyncio.run(main())
