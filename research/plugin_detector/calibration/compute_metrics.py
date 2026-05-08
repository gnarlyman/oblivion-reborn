"""Compute precision/recall on a G5 corpus against predictor predictions.

For each NPC in the G5 validation file, look up the predictor's output and
classify each:
  - True positive: predictor says naked, actually naked.
  - False positive: predictor says naked, actually has visible gear.
  - False negative: predictor says ok, actually naked.
  - True negative: predictor says ok, actually has visible gear.

"Actually naked" check (v3, default): an NPC is naked when its runtime
inventory contains zero items that are visible ARMO/CLOT — i.e. records with
a non-empty MODL whose mesh path exists in the VFS. This filters out:
  1. MOO script-token CLOTs (MOOTokenNpcLoot etc.) — CLOT records with no
     MODL used as inventory flags. The v1 inv-empty proxy mistook them for
     real garments and inflated FPs.
  2. ARMO/CLOT records whose MODL points to a missing mesh (Dremora-class
     bug). The proxy counted them as "clothed" but they render as nothing.

The legacy inv-empty proxy is available via --legacy-inv-empty-proxy for
comparison. Both modes skip NPCs flagged has_script and optionally NPCs
matching --exclude-edid-pattern.
"""
import argparse
import json
import re
from pathlib import Path


# Patterns for "abstract" NPCs that exist as records but never appear visibly
# in normal play — voice-only daedric speakers, dev test NPCs, leveled-list
# templates, no-summon variants, etc. These should be excluded from
# precision/recall scoring because the predictor's correctness on them is
# uninteresting (they're naked by design and never seen).
DEFAULT_ABSTRACT_PATTERNS = [
    r"Voice",                # *Voice* — abstract daedric speakers
    r"^[Tt][Ee][Ss][Tt]",    # Test*/TEST*/test* prefix — dev test NPCs
    r"NOSUMMON",             # *NOSUMMON template variants
    r"^SE09Experiment",      # SE Experiment corpses
    r"ActBase$",             # *ActBase templates (cobGenActBase, OOOActBase)
    r"^cob[A-Z]",            # cob* utility NPCs
    r"^ZU",                  # ZU* utility NPCs
    r"Template$|TEMPLATE$",  # *Template suffix
    r"^Generic",             # Generic* prefix
    r"Dead|DEAD",            # *Dead*/*DEAD* templates
]


def load_predictions(path: Path) -> dict[str, dict]:
    out: dict[str, dict] = {}
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            out[r["fid"].upper()] = r
    return out


def load_g5(path: Path) -> list[dict]:
    rows: list[dict] = []
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            rows.append(json.loads(line))
    return rows


def is_actually_naked_legacy(g5_row: dict) -> bool:
    """v1/v2 proxy: NPC has zero items in runtime inventory.

    Misclassifies NPCs whose only inventory consists of MOO script-token CLOTs
    (no real armor) as "clothed at runtime." Kept for comparison via
    --legacy-inv-empty-proxy.
    """
    inv = g5_row.get("inventory", [])
    return len(inv) == 0


def build_armor_classifier(winners: dict, vfs) -> dict:
    """Pre-compute (sig, has_visible_mesh) for every ARMO/CLOT in winners.

    Returns: lo_fid -> {"sig": "ARMO"|"CLOT", "visible": bool}
    where "visible" means the record has a MODL whose path resolves in VFS.
    """
    from predictor.plugin_parser import parse_subrecords, cstr

    out: dict[int, dict] = {}
    for lo_fid, (plugin, sig, body) in winners.items():
        if sig not in ("ARMO", "CLOT"):
            continue
        modl = None
        for ssig, ssub in parse_subrecords(body):
            if ssig == "MODL":
                modl = cstr(ssub)
                break
        if not modl:
            visible = False
        else:
            virtual = modl.lower().replace("\\", "/")
            if not virtual.startswith("meshes/"):
                virtual = "meshes/" + virtual
            visible = vfs.path_exists(virtual)
        out[lo_fid] = {"sig": sig, "visible": visible}
    return out


def is_actually_naked_v3(g5_row: dict, armor_class: dict) -> bool:
    """v3: NPC is naked if no runtime inventory item is a visible ARMO/CLOT."""
    for item in g5_row.get("inventory", []):
        if isinstance(item, dict):
            ifid = item.get("form_id", 0)
        else:
            ifid = int(item, 16) if isinstance(item, str) else item
        info = armor_class.get(ifid)
        if info and info["visible"]:
            return False
    return True


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--predictions", required=True, type=Path)
    ap.add_argument("--g5", required=True, type=Path)
    ap.add_argument("--report", required=True, type=Path)
    ap.add_argument("--exclude-edid-pattern", action="append", default=[],
                    help="extra regex pattern (repeatable) to exclude abstract NPCs by EDID")
    ap.add_argument("--no-default-excludes", action="store_true",
                    help="disable the built-in DEFAULT_ABSTRACT_PATTERNS list")
    ap.add_argument("--profile", default="Reborn-OOO",
                    help="MO2 profile name for the v3 visible-armor check")
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--mods-dir", default=r"D:\Modlists\Reborn\mods", type=Path)
    ap.add_argument("--legacy-inv-empty-proxy", action="store_true",
                    help="use the v1/v2 inv-empty proxy instead of the v3 visible-armor check")
    args = ap.parse_args()

    pattern_strs: list[str] = list(args.exclude_edid_pattern)
    if not args.no_default_excludes:
        pattern_strs = DEFAULT_ABSTRACT_PATTERNS + pattern_strs
    abstract_patterns = [re.compile(p) for p in pattern_strs]

    def is_abstract_edid(edid: str | None) -> bool:
        if not edid:
            return False
        return any(p.search(edid) for p in abstract_patterns)

    preds = load_predictions(args.predictions)
    g5 = load_g5(args.g5)

    # Build the armor classifier (or skip if legacy mode requested).
    armor_class: dict = {}
    if not args.legacy_inv_empty_proxy:
        from predictor.load_order import build_load_order, build_winning_records
        from predictor.vfs import VFS, parse_modlist
        profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
        print(f"loading load order from {profile_dir}")
        lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
        print(f"  {len(lo.plugins)} active plugins")
        print("building winning_records (ARMO/CLOT)…")
        winners = build_winning_records(lo, signatures={"ARMO", "CLOT"})
        print(f"  {len(winners)} ARMO/CLOT winning records")
        print("building VFS…")
        mods = parse_modlist(profile_dir / "modlist.txt")
        vfs = VFS(active_mods=mods, mods_dir=args.mods_dir, data_dir=args.data_dir)
        print(f"  {len(vfs.loose)} loose paths, {len(vfs.bsa)} bsa paths")
        armor_class = build_armor_classifier(winners, vfs)
        visible_n = sum(1 for v in armor_class.values() if v["visible"])
        print(f"  classified {len(armor_class)} ARMO/CLOT records "
              f"({visible_n} with visible meshes)")

    def actually_naked(row: dict) -> bool:
        if args.legacy_inv_empty_proxy:
            return is_actually_naked_legacy(row)
        return is_actually_naked_v3(row, armor_class)

    tp = fp = fn = tn = 0
    skipped_script = 0
    skipped_not_in_predictions = 0
    skipped_abstract = 0
    review_rows: list[dict] = []
    excluded_rows: list[dict] = []

    for row in g5:
        fid = row["form_id"].upper()
        if fid not in preds:
            skipped_not_in_predictions += 1
            continue
        pred = preds[fid]
        if pred["has_script"]:
            skipped_script += 1
            continue
        if is_abstract_edid(row.get("edid")):
            skipped_abstract += 1
            excluded_rows.append({
                "form_id": fid,
                "edid": row.get("edid"),
                "predicted_reason": pred.get("reason"),
                "g5_inventory_count": len(row.get("inventory", [])),
            })
            continue
        is_naked = actually_naked(row)
        predicted_naked = pred["predicted_naked"]
        if predicted_naked and is_naked:
            tp += 1
        elif predicted_naked and not is_naked:
            fp += 1
            # Apparent FP — but could be a Dremora-class TP (visually broken
            # despite non-empty inventory). Capture for operator spot-review.
            review_rows.append({
                "form_id": fid,
                "edid": row.get("edid"),
                "predicted_reason": pred.get("reason"),
                "predicted_missing_meshes": pred.get("missing_meshes", []),
                "g5_inventory_count": len(row.get("inventory", [])),
            })
        elif (not predicted_naked) and is_naked:
            fn += 1
        else:
            tn += 1

    total_scored = tp + fp + fn + tn
    precision = tp / (tp + fp) if (tp + fp) else 0.0
    recall = tp / (tp + fn) if (tp + fn) else 0.0
    accuracy = (tp + tn) / total_scored if total_scored else 0.0

    proxy_label = "v1/v2 inv-empty proxy" if args.legacy_inv_empty_proxy else "v3 visible-armor check"
    lines = [
        "# Predictor calibration — auto report",
        "",
        f"**Date:** generated by `compute_metrics.py`",
        f"**G5 corpus:** {args.g5}",
        f"**Predictions:** {args.predictions}",
        f"**Naked check:** {proxy_label}",
        "",
        "## Counts",
        f"- True positives (predicted naked, actually naked):   {tp}",
        f"- False positives (predicted naked, actually clothed): {fp}",
        f"- False negatives (predicted ok, actually naked):     {fn}",
        f"- True negatives (predicted ok, actually clothed):    {tn}",
        f"- Skipped (has_script in prediction):                  {skipped_script}",
        f"- Skipped (abstract NPC by EDID pattern):              {skipped_abstract}",
        f"- Skipped (G5 NPC not in predictions):                 {skipped_not_in_predictions}",
        f"- Total scored (no-script, non-abstract bucket):       {total_scored}",
        "",
        "## Metrics",
        f"- **Precision:** {precision:.3f}  (target ≥ 0.90)",
        f"- **Recall:**    {recall:.3f}  (target ≥ 0.80)",
        f"- Accuracy:    {accuracy:.3f}",
        "",
        "## Spec gates",
        f"- Precision ≥ 0.90: {'PASS' if precision >= 0.90 else 'FAIL'}",
        f"- Recall    ≥ 0.80: {'PASS' if recall >= 0.80 else 'FAIL'}",
        "",
        "## Notes on degenerate metrics",
        f"- {fn} false negatives — recall denominator is {tp+fn}.",
        "  If the corpus has no `predicted_naked=false` rows by construction,",
        "  recall is structurally undefined; treat the value as not meaningful.",
        f"- {tn} true negatives — specificity is structurally 0 if the corpus",
        "  contains only `predicted_naked=true` rows.",
        "",
        "Hand-written interpretation should accompany this auto report.",
    ]
    args.report.write_text("\n".join(lines), encoding="utf-8")

    review_path = args.report.with_suffix(".review.json")
    review_path.write_text(json.dumps(review_rows, indent=2), encoding="utf-8")

    excluded_path = args.report.with_suffix(".excluded.json")
    excluded_path.write_text(json.dumps(excluded_rows, indent=2), encoding="utf-8")

    import sys
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
    print("\n".join(lines))
    print(f"\n{len(review_rows)} apparent FPs written to {review_path} for spot-check")
    print(f"{len(excluded_rows)} abstract NPCs written to {excluded_path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
