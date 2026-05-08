"""Filter predictions.jsonl for predicted-naked, no-script NPC candidates.

Selects rows where:
  - predicted_naked is true
  - has_script is false (S1 boundary — script-attached NPCs deferred)
  - (optional) winner plugin matches a case-insensitive substring filter

Then enriches with EDID via a one-shot lookup against winning records and
emits a candidate JSON list compatible with G5Driver.
"""
import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from predictor.load_order import build_load_order, build_winning_records
from predictor.plugin_parser import parse_subrecords, cstr


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--predictions", required=True, type=Path)
    ap.add_argument("--profile", default="Reborn-OOO")
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--output", required=True, type=Path)
    ap.add_argument("--plugin-substring", default=None,
                    help="optional case-insensitive substring filter on winner plugin")
    ap.add_argument("--limit", type=int, default=None,
                    help="cap candidate count (default: no cap)")
    ap.add_argument("--ticks-wait", type=int, default=30)
    args = ap.parse_args()

    needle = args.plugin_substring.lower() if args.plugin_substring else None
    candidates: list[dict] = []
    with args.predictions.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            if not r.get("predicted_naked"):
                continue
            if r.get("has_script"):
                continue
            if needle and needle not in r.get("plugin", "").lower():
                continue
            candidates.append(r)
            if args.limit and len(candidates) >= args.limit:
                break

    print(f"filtered {len(candidates)} candidates from predictions")

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    winners = build_winning_records(lo, signatures={"NPC_"})

    enriched: list[dict] = []
    for cand in candidates:
        lo_fid = int(cand["fid"], 16)
        if lo_fid not in winners:
            continue
        plugin, sig, body = winners[lo_fid]
        edid = ""
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
                break
        if not edid:
            continue
        enriched.append({
            "form_id": cand["fid"],
            "edid": edid,
            "ticks_wait": args.ticks_wait,
            "winner_plugin": plugin,
            "predicted_reason": cand.get("reason"),
            "predicted_missing_meshes": cand.get("missing_meshes", []),
        })

    print(f"enriched {len(enriched)} with EDIDs")
    args.output.write_text(json.dumps(enriched, indent=2), encoding="utf-8")
    print(f"wrote {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
