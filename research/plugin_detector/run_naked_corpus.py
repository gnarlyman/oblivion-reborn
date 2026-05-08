#!/usr/bin/env python3
"""Walk the predicted-naked corpus slowly so the operator can visually verify each NPC.

Reads g5/tests/fixtures/naked_candidates.json, spawns each NPC via G5, holds it
visible for PAUSE_SECONDS so the operator can inspect, deletes, and appends the
runtime inventory to validation_naked.jsonl.

Run from research/plugin_detector/. Oblivion must be running, G5 plugin loaded,
window in focus (alt-tab pauses the message loop and stalls the queue).
"""
import asyncio
import json
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))

from g5.candidates import load_candidates
from g5.driver import G5Driver
from g5.recovery import classify_failure, append_jsonl

CANDIDATE_PATH = Path(__file__).parent / "g5" / "tests" / "fixtures" / "naked_candidates.json"
OUTPUT_PATH = Path(__file__).parent / "validation_naked.jsonl"
PAUSE_SECONDS = 5.0
TICKS_WAIT = 30


async def main():
    candidates = load_candidates(CANDIDATE_PATH)
    raw_meta: dict[int, dict] = {}
    raw = json.loads(CANDIDATE_PATH.read_text(encoding="utf-8"))
    for r in raw:
        fid = r["form_id"]
        fid_int = int(fid, 16) if isinstance(fid, str) else fid
        raw_meta[fid_int] = r

    print(f"loaded {len(candidates)} candidates; pausing {PAUSE_SECONDS}s per NPC")

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()

    try:
        for idx, cand in enumerate(candidates, start=1):
            fid = cand["form_id"]
            fid_hex = f"{fid:08X}"
            edid = cand.get("edid", "?")
            meta = raw_meta.get(fid, {})
            reason = meta.get("predicted_reason", "?")
            winner = meta.get("winner_plugin", "?")
            missing = meta.get("predicted_missing_meshes", [])

            print(f"\n[{idx}/{len(candidates)}] {edid} {fid_hex}")
            print(f"   winner={winner} reason={reason}", end="")
            if missing:
                print(f" missing={missing[:2]}{'...' if len(missing) > 2 else ''}", end="")
            print()

            spawned_at = time.time()
            try:
                ref_id = await driver.spawn(fid, count=1)
                await asyncio.sleep(TICKS_WAIT * (1.0 / 30.0))
                items = await driver.inspect_inventory(ref_id)
                print(f"   -> ref=0x{ref_id:08X}, {len(items)} items, visible {PAUSE_SECONDS}s")
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
                    "winner_plugin": winner,
                    "predicted_reason": reason,
                }
            except BaseException as e:
                outcome = classify_failure(e)
                entry = {
                    "form_id": fid_hex,
                    "edid": edid,
                    "outcome": outcome,
                    "error": str(e),
                    "winner_plugin": winner,
                    "predicted_reason": reason,
                }
                print(f"   FAIL {outcome}: {e}")
            append_jsonl(OUTPUT_PATH, entry)
    finally:
        await driver.close()

    print(f"\ndone; output at {OUTPUT_PATH}")


if __name__ == "__main__":
    asyncio.run(main())
