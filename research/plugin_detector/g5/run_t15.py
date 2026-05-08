#!/usr/bin/env python3
"""T15 self-validation gate runner + report.

Mode 1 (`run`): walks tests/fixtures/vanilla_50.json, spawns + inspects each NPC
through the live G5 plugin (assumed already running at 127.0.0.1:13580),
appends one JSONL row per result to validation_vanilla.jsonl.

Mode 2 (`report`): reads validation_vanilla.jsonl and prints summary counts
plus a random sample of 5 ok-entries for hand-spot-check.

Run from D:/Modlists/Reborn/_worktrees/g5-validator/research/plugin_detector/g5/.
"""
import asyncio
import json
import random
import sys
from pathlib import Path

# Make local g5/ package importable
sys.path.insert(0, str(Path(__file__).parent))

from g5.candidates import load_candidates
from g5.driver import G5Driver
from g5.recovery import classify_failure, append_jsonl, load_completed_form_ids


CANDIDATE_PATH = Path(__file__).parent / "tests" / "fixtures" / "vanilla_50.json"
OUTPUT_PATH = Path(__file__).parent / "validation_vanilla.jsonl"


async def run_mode():
    candidates = load_candidates(CANDIDATE_PATH)
    completed = load_completed_form_ids(OUTPUT_PATH)
    print(f"loaded {len(candidates)} candidates; {len(completed)} already ok in output")

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()

    try:
        for idx, cand in enumerate(candidates, start=1):
            fid_hex = f"{cand['form_id']:08X}"
            edid = cand.get("edid", "?")
            if fid_hex in completed:
                print(f"[{idx}/{len(candidates)}] {edid} {fid_hex}: skip (already ok)")
                continue
            try:
                result = await asyncio.wait_for(
                    driver.spawn_and_inspect(
                        form_id=cand["form_id"],
                        coc_cell=None,
                        ticks_wait=cand.get("ticks_wait", 30),
                    ),
                    timeout=15.0,
                )
                entry = {**result, "form_id": fid_hex, "edid": edid}
                items = entry.get("inventory", [])
                outcome = entry.get("outcome", "?")
                if outcome == "ok":
                    print(f"[{idx}/{len(candidates)}] {edid} {fid_hex}: {len(items)} items")
                else:
                    print(f"[{idx}/{len(candidates)}] {edid} {fid_hex}: outcome={outcome}")
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


def report_mode():
    if not OUTPUT_PATH.exists():
        print(f"no output found at {OUTPUT_PATH}")
        return
    rows = []
    with OUTPUT_PATH.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                rows.append(json.loads(line))
            except json.JSONDecodeError:
                continue

    counts = {"total": len(rows)}
    for outcome in ("ok", "crashed", "timeout", "error"):
        counts[outcome] = sum(1 for r in rows if r.get("outcome") == outcome)
    counts["empty_inventory"] = sum(
        1 for r in rows
        if r.get("outcome") == "ok" and not r.get("inventory")
    )
    print("=== T15 self-validation summary ===")
    for k in ("total", "ok", "crashed", "timeout", "error", "empty_inventory"):
        print(f"  {k}: {counts[k]}")

    # Sample 5 ok entries with stable seed
    ok_rows = [r for r in rows if r.get("outcome") == "ok"]
    if ok_rows:
        rng = random.Random(7)
        sample = rng.sample(ok_rows, min(5, len(ok_rows)))
        print("\n=== hand-spot-check sample (5 random ok entries) ===")
        for r in sample:
            inv = r.get("inventory", [])
            print(f"\n  {r['edid']} ({r['form_id']}): {len(inv)} items")
            for item in inv[:3]:
                print(f"    form_id=0x{item['form_id']:08X} count={item['count']} equipped={item['equipped']}")
            if len(inv) > 3:
                print(f"    ... and {len(inv) - 3} more")


def main() -> int:
    if len(sys.argv) != 2 or sys.argv[1] not in ("run", "report"):
        print("usage: python run_t15.py {run|report}")
        return 2
    if sys.argv[1] == "run":
        asyncio.run(run_mode())
    else:
        report_mode()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
