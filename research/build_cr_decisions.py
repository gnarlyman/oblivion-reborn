#!/usr/bin/env python3
"""Generate cr_decisions.csv from analyzer output with pre-filled decisions.

Strategy:
- For SCPT and QUST signatures: emit one row PER RECORD (script/quest behavior
  doesn't pattern-match cleanly; review individually).
- For all other signatures: emit one row PER PATTERN (decisions cascade to
  all records sharing that diff_pattern_key at builder time).

Pre-fill heuristic:
- ITPO-style patterns ("Record Header:+" only, no real data change) -> drop
- LVLI / LVLC / CONT / FACT -> merge (Bashed Patch handles these via
  auto-merge; the CR ESP doesn't need to carry them)
- SCPT / QUST per-record -> review (must be looked at individually)
- Everything else -> keep (default-trust APW CR's resolution)

Output columns:
  decision_type   "pattern" or "record"
  decision_key    pattern hash (for pattern rows) or FormID (for record rows)
  signature       4-char record signature
  count           number of records covered (1 for record rows)
  sample_fid      one example FID (same as decision_key for record rows)
  sample_master   one example target master
  sample_summary  the change_summary for context
  decision        pre-filled value: keep/drop/merge/review (user can edit)
  notes           empty (user fills in if they tweak the decision)

Sort order: count desc, then signature alpha, so the highest-impact
patterns are at the top of the file when the user opens it.
"""
import csv
from pathlib import Path
from collections import defaultdict

RESEARCH = Path("D:/Modlists/Reborn/research")
OVERRIDES_CSV = RESEARCH / "apw_cr_ooo_overrides.csv"
PATTERNS_CSV = RESEARCH / "apw_cr_ooo_patterns.csv"
DECISIONS_CSV = RESEARCH / "cr_decisions.csv"

PER_RECORD_SIGS = {"SCPT", "QUST"}
MERGE_SIGS = {"LVLI", "LVLC", "CONT", "FACT"}


def is_itpo(change_summary: str) -> bool:
    """A pattern is ITPO-style if change_summary is exactly 'Record Header+'
    (TStringList CommaText quotes it, but content matches that one element)."""
    cs = change_summary.strip().strip('"')
    return cs in ("Record Header+", '"Record Header+"')


def prefill_decision(signature: str, change_summary: str, is_per_record: bool) -> str:
    if is_per_record:
        return "review"
    if is_itpo(change_summary):
        return "drop"
    if signature in MERGE_SIGS:
        return "merge"
    return "keep"


def load_overrides() -> list[dict]:
    with OVERRIDES_CSV.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f))


def load_patterns() -> list[dict]:
    with PATTERNS_CSV.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f))


def main():
    overrides = load_overrides()
    patterns = load_patterns()

    # Index overrides by pattern key for sample lookup + per-record extraction
    by_pattern: dict[str, list[dict]] = defaultdict(list)
    for r in overrides:
        by_pattern[r["diff_pattern_key"]].append(r)

    rows: list[dict] = []

    # Per-record rows for SCPT / QUST
    for r in overrides:
        if r["signature"] in PER_RECORD_SIGS:
            rows.append({
                "decision_type": "record",
                "decision_key": r["target_fid"],
                "signature": r["signature"],
                "count": "1",
                "sample_fid": r["target_fid"],
                "sample_master": r["target_master"],
                "sample_summary": r["change_summary"],
                "decision": prefill_decision(r["signature"], r["change_summary"], True),
                "notes": "",
            })

    # Pattern rows for all other signatures
    for p in patterns:
        # Skip patterns whose ALL records are SCPT/QUST (they're handled per-record)
        records = by_pattern.get(p["diff_pattern_key"], [])
        non_per_record = [r for r in records if r["signature"] not in PER_RECORD_SIGS]
        if not non_per_record:
            continue
        sample = non_per_record[0]
        rows.append({
            "decision_type": "pattern",
            "decision_key": p["diff_pattern_key"],
            "signature": sample["signature"],
            "count": str(len(non_per_record)),
            "sample_fid": sample["target_fid"],
            "sample_master": sample["target_master"],
            "sample_summary": sample["change_summary"],
            "decision": prefill_decision(sample["signature"], sample["change_summary"], False),
            "notes": "",
        })

    # Sort: count desc, then signature alpha
    rows.sort(key=lambda r: (-int(r["count"]), r["signature"]))

    fieldnames = ["decision_type", "decision_key", "signature", "count",
                  "sample_fid", "sample_master", "sample_summary",
                  "decision", "notes"]

    with DECISIONS_CSV.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fieldnames)
        w.writeheader()
        w.writerows(rows)

    # Summary
    by_decision = defaultdict(int)
    by_decision_records = defaultdict(int)
    for r in rows:
        by_decision[r["decision"]] += 1
        by_decision_records[r["decision"]] += int(r["count"])

    print(f"Wrote {DECISIONS_CSV}")
    print(f"Total decision rows: {len(rows)}")
    print()
    print("Decisions by row count and total records covered:")
    for d in sorted(by_decision):
        print(f"  {d:8} {by_decision[d]:5} rows  ->  {by_decision_records[d]:5} records")


if __name__ == "__main__":
    main()
