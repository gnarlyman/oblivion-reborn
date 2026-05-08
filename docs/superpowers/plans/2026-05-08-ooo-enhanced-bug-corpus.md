# OOO Enhanced bug-corpus build — Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development to execute this plan.
>
> **Read first:** the "Mission" and "Mental model" sections below — they contain the full picture.
>
> **You are picking up from a long prior session.** Two preceding spikes are already merged to main:
> 1. **G5** — live RPC OBSE plugin + Python driver that drives a running Oblivion.exe to spawn NPCs and dump runtime inventory. Merged to main as of 2026-05-08 afternoon. Self-validated against 50 vanilla NPCs (T15 50/50 ok).
> 2. **Predictor v1** — pure-Python static predictor: load-order walk + override winning + LVLI + VFS-aware mesh check. Merged to main as of 2026-05-08 evening. 95% accuracy on the no-script bucket of G5's vanilla-50 corpus, correctly catches the one visually-broken NPC (Dremora0ChurlMissile1).
>
> Memory entries `project_g5_validator.md`, `project_predictor_v1.md`, and several `feedback_*.md` files capture the lessons. Read those before starting.

## Mission

**Build the calibration corpus that the predictor v1 calibration report explicitly called for: a list of NPCs known to actually be visually broken in-game, against which the predictor's precision/recall can be evaluated.**

The natural test target is OOO Enhanced. Per memory `feedback_ooo_enhanced_drops_inventory.md`: "1865 NPCs affected, 248 net-negative, 148 lost CLOT/ARMO" from raw record diff against vanilla. Empirical correction: only ~1 in 5 are actually broken in-game (BP-merge / LVLI / race default / gear-swap rescue the rest). With predictor v1 running against the full load order, BP+MOO overrides are already applied, so the predictor's predicted-naked list should be MUCH closer to ground truth than raw record diff was.

**Plan output:**
1. A `validation_ooo_enhanced.jsonl` ground-truth file (G5-captured runtime inventory for ~50-150 OOO Enhanced victims).
2. A precision/recall calibration report measuring the predictor against this proper mixed corpus.
3. (Stretch) a list of confirmed actually-broken NPCs that could be fixed in a CR mod or excluded from the modlist.

## Mental model

```
                         ┌─────────────────────────┐
                         │   predictions.jsonl     │  6,643 NPCs scored
                         │   (re-generate via      │
                         │   predict.py)           │
                         └───────────┬─────────────┘
                                     │
                                     ▼
                         ┌─────────────────────────┐
                         │  Filter: OOO Enhanced   │  this plan, Task 1
                         │  is winner + naked +    │
                         │  no script              │
                         └───────────┬─────────────┘
                                     │
                                     ▼
                         ┌─────────────────────────┐
                         │  ooo_enhanced_50.json   │  candidate list
                         │  (FormID + EDID +       │
                         │   ticks_wait)           │
                         └───────────┬─────────────┘
                                     │
                                     ▼ user runs G5 in-game
                         ┌─────────────────────────┐
                         │  validation_ooo_        │  ground truth
                         │  enhanced.jsonl         │
                         └───────────┬─────────────┘
                                     │
                                     ▼
                         ┌─────────────────────────┐
                         │  compute_metrics.py     │  this plan, Task 4
                         │  with corrected         │
                         │  is_actually_naked      │
                         │  semantics              │
                         └───────────┬─────────────┘
                                     │
                                     ▼
                         ┌─────────────────────────┐
                         │  calibration_report_    │  PASS/FAIL vs.
                         │  ooo_enhanced.md        │  90/80 spec gates
                         └─────────────────────────┘
```

## State of the repo (at session start)

- Branch: `main` (G5 + predictor v1 merged).
- Worktree convention: `_worktrees/<feature>` (gitignored).
- Predictor lives at `research/plugin_detector/predictor/`. Run with `python -m predictor.predict --profile Reborn-OOO --output predictions.jsonl` from `research/plugin_detector/`.
- G5 lives at `research/plugin_detector/g5/`. Plugin DLL deploys to `D:/Modlists/Reborn/mods/G5 Validator/OBSE/Plugins/g5.dll` via post-build copy.
- Existing fixture: `research/plugin_detector/g5/tests/fixtures/vanilla_50.json` — pattern this plan's `ooo_enhanced_50.json` should follow.
- Existing G5 runner: `research/plugin_detector/g5/run_t15.py` — model the new runner on this.
- The xEdit oracle at `research/plugin_detector/oracle/dump_winning.pas` and the diff harness at `predictor/oracle_diff.py` are NOT prerequisites for this plan; they were a v1 sanity check that runs separately.
- `predictions.jsonl` and `oracle_winning.jsonl` are gitignored. Re-generate them from scratch.

## Worktree setup (before Task 1)

Use `superpowers:using-git-worktrees`. Create `_worktrees/ooo-corpus` on branch `feature/ooo-corpus` from `main`.

## File Structure

```
research/plugin_detector/
├── calibration/
│   ├── compute_metrics.py              # extend: support "broken" semantics
│   ├── filter_ooo_candidates.py        # NEW (Task 1)
│   └── (existing files)
├── predictor/                          # unchanged from v1
├── oracle/                             # unchanged from v1
├── g5/                                 # unchanged from v1
│   └── tests/fixtures/ooo_enhanced_50.json   # NEW (Task 1 output)
├── run_ooo_corpus.py                   # NEW (Task 3) — slow walkthrough runner
└── validation_ooo_enhanced.jsonl       # NEW (Task 3 output, gitignored if large)
```

---

## Task 1: Filter predictions.jsonl → ooo_enhanced_50.json

**Files:**
- New: `research/plugin_detector/calibration/filter_ooo_candidates.py`
- New: `research/plugin_detector/g5/tests/fixtures/ooo_enhanced_50.json` (output)

### Step 1 — re-run the predictor to produce a fresh predictions.jsonl

Already gitignored, so it doesn't exist on a fresh checkout.

```powershell
cd D:\Modlists\Reborn\_worktrees\ooo-corpus\research\plugin_detector
python -m predictor.predict --profile Reborn-OOO --output predictions.jsonl
```

Expected: ~6,643 lines, completes in ~30 seconds.

### Step 2 — write the filter

Save to `research/plugin_detector/calibration/filter_ooo_candidates.py`:

```python
"""Filter predictions.jsonl for likely-actually-broken OOO Enhanced NPCs.

Selects rows where:
  - winner plugin contains "OOO Enhanced" (case-insensitive)
  - predicted_naked is true
  - has_script is false (S1 boundary — script-attached NPCs deferred)

Then enriches with EDID via a one-shot lookup against winning records and
emits a candidate JSON list compatible with G5Driver.
"""
import argparse
import json
from pathlib import Path

import sys
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from predictor.load_order import build_load_order, build_winning_records
from predictor.plugin_parser import parse_subrecords, cstr


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--predictions", required=True, type=Path)
    ap.add_argument("--profile", default="Reborn-OOO")
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--output", required=True, type=Path)
    ap.add_argument("--limit", type=int, default=150,
                    help="cap candidate count (default 150)")
    ap.add_argument("--ticks-wait", type=int, default=30)
    args = ap.parse_args()

    # Load predictions, filter.
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
            plugin = r.get("plugin", "")
            if "ooo enhanced" not in plugin.lower():
                continue
            candidates.append(r)
            if len(candidates) >= args.limit:
                break

    print(f"filtered {len(candidates)} candidates from predictions")

    # Look up EDID for each candidate via load order.
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
            "predicted_reason": cand.get("reason"),
            "predicted_missing_meshes": cand.get("missing_meshes", []),
        })

    print(f"enriched {len(enriched)} with EDIDs")
    args.output.write_text(json.dumps(enriched, indent=2), encoding="utf-8")
    print(f"wrote {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
```

### Step 3 — run it

```powershell
cd D:\Modlists\Reborn\_worktrees\ooo-corpus\research\plugin_detector
python -m calibration.filter_ooo_candidates `
    --predictions predictions.jsonl `
    --output g5/tests/fixtures/ooo_enhanced_50.json `
    --limit 150
```

Expected: 50–150 entries written to `ooo_enhanced_50.json`. Each entry has form_id, edid, ticks_wait, predicted_reason, predicted_missing_meshes.

### Step 4 — sanity check the output

```powershell
python -c "import json; rows = json.load(open(r'g5/tests/fixtures/ooo_enhanced_50.json')); print(f'count={len(rows)}'); print(f'sample: {rows[0]}'); reasons = {r[\"predicted_reason\"] for r in rows}; print(f'reasons: {reasons}')"
```

Expected:
- `count` between 50 and 150
- A sample row with all expected keys
- Reasons set should include `inv_no_concrete_armor` and possibly `armor_mesh_missing`

### Step 5 — commit

```powershell
cd D:\Modlists\Reborn\_worktrees\ooo-corpus
git add research/plugin_detector/calibration/filter_ooo_candidates.py research/plugin_detector/g5/tests/fixtures/ooo_enhanced_50.json
git commit -m "calibration: filter OOO Enhanced naked-no-script candidates from predictions"
```

(Don't commit `predictions.jsonl` — it's gitignored.)

---

## Task 2: Update compute_metrics.py for "broken" semantics

**File:**
- Modify: `research/plugin_detector/calibration/compute_metrics.py`

### Why

Predictor v1's calibration report flagged that "inventory empty" is the wrong proxy for "actually broken." The Dremora was incorrectly classified as a false positive because it had 10 inventory items, even though the user observed it was visually broken (missing body mesh).

For the OOO Enhanced corpus, "actually broken" needs a definition that matches what we want the predictor to catch. Options:

- **A. Inventory empty** — what compute_metrics.py currently does. Misses Dremora-class bugs. Best for OOO Enhanced's primary class (CNTO-empty).
- **B. Inventory empty OR all ARMO-CLOT meshes broken** — would catch both classes but G5's ground truth doesn't include record signatures, so we can't determine ARMO-vs-misc from a FormID alone without joining against winners.
- **C. Operator-tagged** — let the user manually mark each runtime inventory as "actually broken" or "actually fine" during the slow walkthrough.

Pick **A as the default** (compute_metrics already does this) but extend the script to ALSO emit a side report listing each predicted-naked NPC whose G5 inventory is non-empty, with predicted_reason. This lets the user spot-review whether each apparent FP is a Dremora-class TP or a real FP.

### Step 1 — extend compute_metrics.py

Add to the existing script (or a sibling `compute_metrics_v2.py`):

```python
# After the main scoring loop, emit a "for-review" list:
review_rows = []
for row in g5:
    fid = row["form_id"].upper()
    if fid not in preds:
        continue
    pred = preds[fid]
    if pred["has_script"]:
        continue
    actually_naked = is_actually_naked(row)
    predicted_naked = pred["predicted_naked"]
    if predicted_naked and not actually_naked:
        # Apparent FP — could be a Dremora-class TP.
        review_rows.append({
            "form_id": fid,
            "edid": row.get("edid"),
            "predicted_reason": pred.get("reason"),
            "predicted_missing_meshes": pred.get("missing_meshes", []),
            "g5_inventory_count": len(row.get("inventory", [])),
        })

# Write to <report>.review.json
review_path = args.report.with_suffix(".review.json")
review_path.write_text(json.dumps(review_rows, indent=2), encoding="utf-8")
print(f"\n{len(review_rows)} apparent FPs written to {review_path} for spot-check")
```

### Step 2 — commit

```powershell
git add research/plugin_detector/calibration/compute_metrics.py
git commit -m "calibration: emit per-FP review JSON for Dremora-class disambiguation"
```

---

## Task 3: G5 runner for the OOO corpus + slow walkthrough

**Files:**
- New: `research/plugin_detector/run_ooo_corpus.py`

### Why

The user wants to visually verify each spawn (per the T15 slow-walkthrough pattern). Pace the runner with a 5-second pause between inspect and delete so the user can confirm visual state.

### Step 1 — write the runner

Save to `research/plugin_detector/run_ooo_corpus.py`. Model on `g5/run_t15_slow.py` but with these changes:

- Reads `g5/tests/fixtures/ooo_enhanced_50.json`.
- Output goes to `validation_ooo_enhanced.jsonl`.
- Default ticks_wait stays at 30.
- Default pause stays at 5 seconds.
- Print each NPC's `predicted_reason` and any `predicted_missing_meshes` before the spawn — gives the user context for visual interpretation.

```python
#!/usr/bin/env python3
"""Walk OOO Enhanced corpus slowly so the user can visually verify each NPC."""
import asyncio
import json
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from g5.candidates import load_candidates
from g5.driver import G5Driver
from g5.recovery import classify_failure, append_jsonl

CANDIDATE_PATH = Path(__file__).parent / "g5" / "tests" / "fixtures" / "ooo_enhanced_50.json"
OUTPUT_PATH = Path(__file__).parent / "validation_ooo_enhanced.jsonl"
PAUSE_SECONDS = 5.0
TICKS_WAIT = 30


async def main():
    candidates = load_candidates(CANDIDATE_PATH)
    raw_meta: dict[int, dict] = {}
    # Re-load raw fixture to get predicted_reason/predicted_missing_meshes.
    raw = json.loads(CANDIDATE_PATH.read_text(encoding="utf-8"))
    for r in raw:
        fid_int = int(r["form_id"], 16) if isinstance(r["form_id"], str) else r["form_id"]
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
            missing = meta.get("predicted_missing_meshes", [])

            print(f"\n[{idx}/{len(candidates)}] {edid} {fid_hex}")
            print(f"   reason={reason}", end="")
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
                    "predicted_reason": reason,
                }
            except BaseException as e:
                outcome = classify_failure(e)
                entry = {
                    "form_id": fid_hex,
                    "edid": edid,
                    "outcome": outcome,
                    "error": str(e),
                    "predicted_reason": reason,
                }
                print(f"   FAIL {outcome}: {e}")
            append_jsonl(OUTPUT_PATH, entry)
    finally:
        await driver.close()

    print(f"\ndone; output at {OUTPUT_PATH}")


if __name__ == "__main__":
    asyncio.run(main())
```

### Step 2 — sanity check (don't run yet — needs Oblivion)

```powershell
cd D:\Modlists\Reborn\_worktrees\ooo-corpus\research\plugin_detector
python -c "import run_ooo_corpus; print('imports ok')"
```

### Step 3 — commit

```powershell
git add research/plugin_detector/run_ooo_corpus.py
git commit -m "calibration: slow walkthrough runner for OOO Enhanced corpus"
```

---

## Task 4: USER-OPERATED — run the corpus

**This task requires the user to launch Oblivion.** After Task 3 ships, hand off to the user with these exact steps:

1. Launch Oblivion through MO2 (Reborn-OOO profile, G5 Validator enabled).
2. Load a save in a clean exterior cell (or `coc TestCellEmpty`-equivalent — but `coc` doesn't actually work, so the user must manually navigate or load a save).
3. Keep Oblivion in foreground (alt-tab pauses the message loop and stalls the queue per `feedback_mo2_plugins_txt_format_variants.md`-adjacent finding logged in this session).
4. From a separate terminal:
   ```powershell
   cd D:\Modlists\Reborn\_worktrees\ooo-corpus\research\plugin_detector
   python run_ooo_corpus.py
   ```
5. The runner walks 50–150 NPCs at ~6s each (~5–15 minutes total). Each NPC stays visible 5 seconds for visual verification. Note any visually broken NPCs (mostly-invisible body, yellow-diamond armor, etc.).
6. When done, report back: total count, any crashes/timeouts, any visual oddities the operator caught.

---

## Task 5: Run the calibration

**Files:**
- New: `research/plugin_detector/predictor/calibration_report_ooo.md` (output)

### Step 1 — run compute_metrics

```powershell
cd D:\Modlists\Reborn\_worktrees\ooo-corpus\research\plugin_detector
python -m calibration.compute_metrics `
    --predictions predictions.jsonl `
    --g5 validation_ooo_enhanced.jsonl `
    --report predictor/calibration_report_ooo.md
```

This generates the report AND a sibling `calibration_report_ooo.review.json` listing apparent false positives for spot-check.

### Step 2 — interpret

Look at the per-bucket counts:
- Did precision and recall pass the spec gates (≥0.90, ≥0.80)?
- If precision is below 0.90, examine `calibration_report_ooo.review.json` — are the apparent FPs Dremora-class (visually broken with non-empty inventory) or real FPs (predictor flagged a healthy NPC)?
- If recall is below 0.80, examine the false negatives — what should the predictor have caught but didn't?

### Step 3 — write a follow-up report

If the spec gates pass with the corpus mismatch caveat acknowledged, the spike formally succeeds. If not, document the dominant failure class for v2.

Append to or replace `calibration_report_ooo.md` with the operator's qualitative observations (visual oddities noted during Task 4).

### Step 4 — commit

```powershell
git add research/plugin_detector/predictor/calibration_report_ooo.md research/plugin_detector/predictor/calibration_report_ooo.review.json validation_ooo_enhanced.jsonl
git commit -m "calibration: OOO Enhanced corpus + report (precision/recall vs. spec gates)"
```

(Decide whether to commit `validation_ooo_enhanced.jsonl` — it's the new ground-truth corpus and should probably be tracked, unlike `predictions.jsonl` which is regenerable.)

---

## Known pitfalls (don't repeat session 1's mistakes)

These are documented in memory; recap here so they're top-of-mind:

1. **`coc` doesn't actually teleport via the OBSE Console interface** — it's a console-UI-only command. User must manually position before tests.

2. **`RunScriptLine`'s bool return is unreliable** — placeatme returns false but does spawn; coc returns true regardless of cell validity. Trust side effects, not the bool. (Predictor v1's hook approach captures the spawned ref directly.)

3. **Alt-tab pauses Oblivion's main loop** — queued WndProc messages stall until the window is foreground again. Keep the game window focused while running G5.

4. **MO2 plugins.txt format variant** — Reborn-OOO has no `*` prefix on active entries. Use the auto-detect logic in `parse_plugins_txt`.

5. **BP is NOT last in Reborn-OOO** — MOO + MercerIngredients load after BP. Override-winning logic must do plain last-wins LO walk; no BP shortcut.

6. **Mod plugins live in `mods/<Mod>/`, not `Stock Game/Data/`** — only vanilla DLC files are in Data/. The plugin-path index handles both.

7. **BSA index must include `Stock Game/Data/` BSAs** — vanilla and DLC archives. P13 hand-rolled parser in v1 missed these initially, causing 81% FP rate that dropped to 4.8% after the fix. v2 uses `bethesda-structs`.

8. **`is_actually_naked` proxy is "inventory empty"** — misses Dremora-class bugs (visually broken with non-empty inventory). Task 2 emits a side review file to disambiguate.

9. **OBSE plugin logs go to `Reborn/overwrite/OBSE/Plugins/g5.log`** — USVFS redirects writes from the DLL-adjacent path. Don't look in `%USERPROFILE%/Documents/My Games/Oblivion/...`.

10. **Post-build copy fails when Oblivion has the old DLL loaded** — close the game before redeploying. The cp/Copy-Item from `Build/Release/g5.dll` to the mod folder is the manual fallback.

## Memory entries to consult

Read these before starting (sorted by relevance to this plan):

- `project_predictor_v1.md` — predictor architecture, what's in each module
- `project_g5_validator.md` — G5 architecture, plugin commands, RPC protocol
- `feedback_ooo_enhanced_drops_inventory.md` — original sweep + 1-in-5 empirical correction
- `feedback_calibration_corpus_mismatch.md` — why v1 gates were unevaluable
- `feedback_bp_not_always_last.md` — override-winning model
- `feedback_mo2_plugins_txt_format_variants.md` — parsing footgun
- `feedback_mo2_plugin_file_locations.md` — where plugins actually live
- `reference_oblivion_engine_addresses.md` — engine RE notes (mostly relevant for G5 work, not predictor)
- `reference_xedit_pascal_api.md` — for the oracle script (probably not needed this task)
- `feedback_static_record_diff_overcounts.md` — why we built G5 + predictor in the first place

## Success criteria

**Spike's formal gates** (from spec `2026-05-08-plugin-conflict-detector-spike-design.md`):
- Precision ≥ 0.90 on the no-script bucket
- Recall ≥ 0.80 on the same bucket
- Validation corpus ≥ 200 NPCs ← this is the metric this plan will satisfy or partially satisfy

**Spike's outcome:**
- PASS if both gates met → declare static naked-NPC prediction feasible. Write Phase 5 spec writeup. Generalize to other bug classes (broken refs, missing textures, leveled list issues) as v2.
- FAIL with diagnosable bias → document failure class, propose v2 (likely: handle template chain, race default fallback, or expand corpus to include other override classes like MOO).
- INCONCLUSIVE → expand corpus and re-run.

## Honest gaps for this task

- 50–150 NPCs is below the spec's ≥ 200 threshold. If the OOO Enhanced filter produces fewer than 200, supplement with NPCs whose winner is `Bashed Patch` AND who have CNTO records that came from OOO Enhanced.
- The `is_actually_naked` proxy is still "inventory empty"; Dremora-class bugs need operator tagging. The review.json from Task 2 is the workaround.
- We don't fix any actual bugs in this plan — we just measure. Bug fixes (CR mod or modlist exclusions) are a separate plan.
