#!/usr/bin/env python3
"""Walk the predicted-naked corpus in batches so the operator can visually verify clusters.

Reads g5/tests/fixtures/naked_candidates.json, spawns BATCH_SIZE NPCs at a time
on top of the player, holds the cluster visible for PAUSE_SECONDS, inspects each
runtime inventory, deletes the cluster, and appends results to validation_naked.jsonl.

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
BATCH_SIZE = 5
PAUSE_SECONDS = 2.0
TICKS_WAIT = 30


def chunked(seq, n):
    for i in range(0, len(seq), n):
        yield seq[i:i + n]


async def main():
    candidates = load_candidates(CANDIDATE_PATH)
    raw_meta: dict[int, dict] = {}
    raw = json.loads(CANDIDATE_PATH.read_text(encoding="utf-8"))
    for r in raw:
        fid = r["form_id"]
        fid_int = int(fid, 16) if isinstance(fid, str) else fid
        raw_meta[fid_int] = r

    total = len(candidates)
    n_batches = (total + BATCH_SIZE - 1) // BATCH_SIZE
    print(f"loaded {total} candidates; {BATCH_SIZE} per batch ({n_batches} batches); "
          f"holding each batch {PAUSE_SECONDS}s")

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()

    try:
        for batch_idx, batch in enumerate(chunked(candidates, BATCH_SIZE), start=1):
            print(f"\n=== batch {batch_idx}/{n_batches} ({len(batch)} NPCs) ===")
            for cand in batch:
                fid = cand["form_id"]
                meta = raw_meta.get(fid, {})
                reason = meta.get("predicted_reason", "?")
                winner = meta.get("winner_plugin", "?")
                missing = meta.get("predicted_missing_meshes", [])
                missing_str = ""
                if missing:
                    missing_str = f" missing={missing[:2]}{'...' if len(missing) > 2 else ''}"
                print(f"  {cand.get('edid','?'):40s} {fid:08X} ({winner}, {reason}){missing_str}")

            # Spawn all NPCs in the batch.
            spawned: list[dict] = []  # {cand, ref_id|None, error}
            for cand in batch:
                fid = cand["form_id"]
                spawned_at = time.time()
                try:
                    ref_id = await driver.spawn(fid, count=1)
                    spawned.append({"cand": cand, "ref_id": ref_id, "spawned_at": spawned_at})
                except BaseException as e:
                    spawned.append({"cand": cand, "ref_id": None, "spawned_at": spawned_at,
                                    "error": e})
                    print(f"  SPAWN FAIL {cand.get('edid','?')} {fid:08X}: {e}")

            # Wait once for OnLoad to populate all inventories.
            await asyncio.sleep(TICKS_WAIT * (1.0 / 30.0))

            # Inspect each spawned NPC.
            for s in spawned:
                if s["ref_id"] is None:
                    s["inventory"] = []
                    s["inspect_error"] = None
                    continue
                try:
                    s["inventory"] = await driver.inspect_inventory(s["ref_id"])
                    s["inspect_error"] = None
                except BaseException as e:
                    s["inventory"] = []
                    s["inspect_error"] = e

            # Brief inventory summary so the operator knows what to look at.
            for s in spawned:
                cand = s["cand"]
                edid = cand.get("edid", "?")
                fid = cand["form_id"]
                if s["ref_id"] is None:
                    print(f"  -> {edid} {fid:08X}: spawn failed")
                elif s["inspect_error"]:
                    print(f"  -> {edid} {fid:08X} ref=0x{s['ref_id']:08X}: inspect failed")
                else:
                    inv = s["inventory"]
                    flag = " <- NAKED" if not inv else ""
                    print(f"  -> {edid} {fid:08X} ref=0x{s['ref_id']:08X}: {len(inv)} items{flag}")

            # Hold for visual inspection.
            await asyncio.sleep(PAUSE_SECONDS)

            # Delete the cluster, then write entries.
            for s in spawned:
                if s["ref_id"] is not None:
                    try:
                        await driver.delete(s["ref_id"])
                    except BaseException as e:
                        print(f"  delete FAIL ref=0x{s['ref_id']:08X}: {e}")

                cand = s["cand"]
                fid = cand["form_id"]
                fid_hex = f"{fid:08X}"
                edid = cand.get("edid", "?")
                meta = raw_meta.get(fid, {})
                winner = meta.get("winner_plugin", "?")
                reason = meta.get("predicted_reason", "?")

                if s["ref_id"] is None:
                    err = s.get("error")
                    entry = {
                        "form_id": fid_hex,
                        "edid": edid,
                        "outcome": classify_failure(err) if err else "spawn_failed",
                        "error": str(err) if err else "spawn returned no ref",
                        "winner_plugin": winner,
                        "predicted_reason": reason,
                    }
                elif s["inspect_error"]:
                    err = s["inspect_error"]
                    entry = {
                        "form_id": fid_hex,
                        "edid": edid,
                        "ref_id": s["ref_id"],
                        "outcome": classify_failure(err),
                        "error": str(err),
                        "winner_plugin": winner,
                        "predicted_reason": reason,
                    }
                else:
                    entry = {
                        "form_id": fid_hex,
                        "edid": edid,
                        "ref_id": s["ref_id"],
                        "inventory": s["inventory"],
                        "outcome": "ok",
                        "ticks_to_ready": TICKS_WAIT,
                        "spawned_at": s["spawned_at"],
                        "winner_plugin": winner,
                        "predicted_reason": reason,
                    }
                append_jsonl(OUTPUT_PATH, entry)
    finally:
        await driver.close()

    print(f"\ndone; output at {OUTPUT_PATH}")


if __name__ == "__main__":
    asyncio.run(main())
