"""Compare predictor's winning_records against xEdit oracle's dump.

Usage:
    python -m predictor.oracle_diff --oracle oracle_winning.jsonl --profile Reborn-OOO

Emits a summary: total records, predictor-only count, oracle-only count,
mismatched-plugin count.
"""
import argparse
import json
from pathlib import Path

from predictor.load_order import build_load_order, build_winning_records


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--oracle", required=True, type=Path)
    ap.add_argument("--profile", required=True)
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    args = ap.parse_args()

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    py_winners = build_winning_records(lo)

    oracle: dict[int, tuple[str, str]] = {}
    with args.oracle.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
            except json.JSONDecodeError:
                continue
            fid = int(obj["fid"], 16)
            oracle[fid] = (obj["plugin"], obj["sig"])

    py_keys = set(py_winners.keys())
    oracle_keys = set(oracle.keys())

    py_only = py_keys - oracle_keys
    oracle_only = oracle_keys - py_keys
    common = py_keys & oracle_keys
    mismatch_plugin = sum(
        1 for k in common
        if py_winners[k][0].lower() != oracle[k][0].lower()
    )
    mismatch_sig = sum(
        1 for k in common
        if py_winners[k][1] != oracle[k][1]
    )

    total = max(len(py_keys), len(oracle_keys))
    agreement = (len(common) - mismatch_plugin - mismatch_sig) / total * 100 if total else 100.0

    print(f"=== Oracle diff ===")
    print(f"  predictor records:  {len(py_keys)}")
    print(f"  oracle records:     {len(oracle_keys)}")
    print(f"  common keys:        {len(common)}")
    print(f"  predictor-only:     {len(py_only)}")
    print(f"  oracle-only:        {len(oracle_only)}")
    print(f"  plugin mismatches:  {mismatch_plugin}")
    print(f"  signature mismatch: {mismatch_sig}")
    print(f"  agreement:          {agreement:.2f}%")

    # Sample 10 disagreements for diagnosis.
    if py_only:
        print("\nSample predictor-only (first 10):")
        for k in list(py_only)[:10]:
            print(f"  {k:08X}: {py_winners[k][0]} {py_winners[k][1]}")
    if oracle_only:
        print("\nSample oracle-only (first 10):")
        for k in list(oracle_only)[:10]:
            print(f"  {k:08X}: {oracle[k][0]} {oracle[k][1]}")

    return 0 if agreement >= 99.0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
