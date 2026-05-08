# Predictor v1 calibration — predicted-naked corpus (Reborn-OOO)

**Date:** 2026-05-08
**Profile:** Reborn-OOO
**Corpus:** `validation_naked.jsonl` (284 NPCs, all `predicted_naked=true` & `has_script=false`)
**Predictions:** `predictions.jsonl` (6,643 NPCs, regenerable)
**Runner:** `run_naked_corpus.py` (BATCH_SIZE=5, PAUSE_SECONDS=2.0, TICKS_WAIT=30)

## Summary

| metric | value |
|---|---|
| Spawned successfully | 284 / 284 (100%) |
| Crashes / timeouts | 0 |
| inventory == 0 (TP by inv-empty proxy) | 110 (38.7%) |
| inventory > 0 (apparent FP by inv-empty proxy) | 174 (61.3%) |

**Spec gates:**
- Precision ≥ 0.90: **FAIL** (38.7% by inv-empty proxy; ≤42.3% even after Dremora-class TP credit)
- Recall ≥ 0.80: **NOT EVALUABLE** — corpus contains no `predicted_naked=false` rows, so FN denominator is empty by construction

## Cross-tab: outcomes by winner plugin

| winner | total | inv==0 (TP) | inv>0 (FP) | precision (inv proxy) |
|---|---:|---:|---:|---:|
| Maskar's Oblivion Overhaul.esp | 208 | 83 | 125 | 39.9% |
| Bashed Patch, 0.esp | 70 | 26 | 44 | 37.1% |
| Oblivion.esm | 6 | 1 | 5 | 16.7% |
| **all** | **284** | **110** | **174** | **38.7%** |

## Cross-tab: precision by predictor reason

| reason | total | inv==0 (TP) | inv>0 (FP) | precision (inv proxy) |
|---|---:|---:|---:|---:|
| `inv_no_concrete_armor` | 278 | 110 | 168 | 39.6% |
| `armor_mesh_missing` | 6 | 0 | 6 | **0.0%** |

The 6 `armor_mesh_missing` rows are all Dremora variants with the missing
`meshes/soooequipment/daedricchurl/m/churl armor 1.nif` mesh (the same SOOO
Equipment mesh family already documented in memory as the Dremora visual bug).
All spawned with 6-10 inventory items but are almost certainly visually broken
in-game — i.e. they are **Dremora-class TPs** (predictor caught them, the
inv-empty proxy didn't). Operator visual confirmation pending.

If all 6 are confirmed Dremora-class TPs, precision rises from 38.7% to 40.8%
(116/284). Still well below the 0.90 spec gate.

## Apparent-FP composition (174 rows)

Sampled by EDID prefix:

| pattern | count | example |
|---|---:|---|
| `Dremora*` (armor_mesh_missing) | 6 | `Dremora0ChurlMissile1` |
| `Test*` / `TESTNord` etc. | ~15 | `TESTRedguard`, `TestErikNPC` |
| `*Voice` (abstract daedric speakers) | 6 | `DASanguineVoice` |
| `SE09Experiment*` (corpse/static) | 2 | `SE09ExperimentCorpse02` |
| `*NOSUMMON` template | 2 | `Dremora0ChurlMissileNOSUMMON` |
| other (mostly OOO/MOO leveled NPCs) | ~143 | many |

**Operator interpretation gate:** the 174 apparent FPs need a quick visual
spot-check to estimate the Dremora-class fraction. The runner held each batch
visible 2s; if the operator noticed `Install Blockhead` placeholder textures or
yellow exclamation diamonds on any non-Dremora NPCs, they are Dremora-class TPs
and the precision number rises accordingly.

See `calibration_report_naked.review.json` for the full apparent-FP list with
predicted_reason + missing_meshes per row.

## Failure-class diagnosis

The dominant predictor failure mode is **over-firing on `inv_no_concrete_armor`
NPCs whose runtime inventory contains items but none classified as ARMO/CLOT
by the predictor's static walk**. Three plausible causes:

1. **LVLI runtime resolution restores armor the predictor didn't trace.**
   Predictor v1's LVLI traversal walks the leveled list tree, but if MOO/OOO
   add ARMO refs via leveled lists with `Calculate from all levels ≤ PC level`
   or `Calculate for each item in count`, the static traversal may pick the
   wrong arm of the tree.

2. **Predictor's ARMO/CLOT classification is too narrow.** It checks the
   record signature of the directly-resolved item; if MOO/OOO push armor
   through SLGM/MISC wrappers (e.g. equipment-on-pickup scripts) those won't
   classify as ARMO/CLOT statically but do produce visible armor at runtime.

3. **Some apparent FPs are intentionally bodyless NPCs** (Voice NPCs, abstract
   speaker actors, test NPCs). Predictor correctly identifies them as having
   no concrete armor but they're not bugs because they're never seen in normal
   play. Filtering these out requires an "is this NPC ever visible?" heuristic
   the predictor doesn't have.

The (1)/(2)/(3) split needs operator-tagged ground truth to allocate. The
review.json + visual spot-check is the next step.

## Recall — not measured by this corpus

Recall = TP / (TP + FN). FN = predictor said "ok" but the NPC is actually
naked. This corpus is filtered to `predicted_naked=true`, so FN is structurally
0 and the metric is degenerate.

Measuring recall requires a *separate* corpus: a random sample of
`predicted_naked=false` NPCs spawned in-game. If any of them have empty
inventory, those are FNs. ~50–100 such samples would be enough for a 90% CI on
the recall number.

This is left for a v2 calibration pass.

## Operator notes (post-run, 2026-05-08)

- **Most NPCs that the predictor flagged were naked-but-visible** — they spawned
  without armor/clothing but had intact body meshes. So the predictor's
  *predicate* ("this NPC will spawn without armor") is essentially correct on
  what it predicts. The inv-empty proxy is measuring the right thing.
- **Only the Dremora variants had invisible body portions.** No other apparent
  FPs were Dremora-class TPs — the precision number does NOT upgrade beyond
  the 6 already counted. (`armor_mesh_missing` reason has 100% sensitivity for
  the visible-bug class on this corpus, just on a tiny n.)
- **A couple of NPCs had explicit "Testing" names** for OOO/MOO — confirmed
  out-of-scope abstract test NPCs.
- **Encounterability is unknown.** Many flagged NPCs may never appear in
  normal play even if their record is overridden — this affects how to
  interpret precision but isn't measurable from a static + spawn corpus.

## Verdict

**Spec gate: precision FAILS at 38.7%.** Operator review confirmed this is NOT
because the predictor is wrong about its predicate (it isn't — flagged NPCs
really do spawn naked) but because **"naked at runtime" is a broader category
than "visible bug a player would notice"**. The precision metric as defined by
the spike conflates the two.

**Spike outcome (revised after operator confirmation):**
- The predictor's `predicted_naked` predicate is **functionally correct**
- Its `armor_mesh_missing` reason has **100% sensitivity for the visible-bug
  class** on this corpus (6/6 Dremora-class catches; nothing else)
- The 0.90 precision gate, as written, doesn't separate "naked at runtime"
  from "broken in normal play" — and the gap between those two is dominated
  by abstract/test/encounter-rate factors the predictor can't see
- **Useful as-is** for: catching `armor_mesh_missing` NPCs (zero false alarms
  on the visible-bug class), generating a candidate list for manual triage
- **Not useful as-is** for: telling the player "here are bugs you'll encounter"
  without further filtering

**Concrete v2 work the result implies:**
- Drop "abstract" NPCs (Voice, Test, NOSUMMON, *DEAD*, etc.) from the corpus
  via an EDID-prefix exclude list before scoring. Re-run precision.
- Add an "encounterability" heuristic: cross-reference NPC FormID against
  CELL/PLAC records; NPCs with no static placement and no faction-spawn
  membership are likely never seen.
- Build a recall corpus (random sample of 50-100 `predicted_naked=false` NPCs)
  so the recall gate can be measured.
- Treat `armor_mesh_missing` as a separate, higher-confidence bug class —
  it earned 100% precision-on-visible-bugs in this run.

---

## v2 update — EDID-prefix exclude list (2026-05-08)

Implemented in `compute_metrics.py` as `DEFAULT_ABSTRACT_PATTERNS` plus
`--exclude-edid-pattern` repeatable CLI flag (`--no-default-excludes` to opt
out). Patterns: `Voice`, `^[Tt][Ee][Ss][Tt]`, `NOSUMMON`, `^SE09Experiment`,
`ActBase$`, `^cob[A-Z]`, `^ZU`, `Template$|TEMPLATE$`, `^Generic`, `Dead|DEAD`.

### Result on the same 284-NPC corpus

| metric | v1 (no exclude) | v2 (default excludes) |
|---|---:|---:|
| Excluded as abstract | 0 | 65 |
| TP (inv==0, predicted naked) | 110 | 86 |
| FP (inv>0, predicted naked) | 174 | 133 |
| Total scored | 284 | 219 |
| **Precision (inv-empty proxy)** | **38.7%** | **39.3%** |

Default excludes drop 24 TPs and 41 FPs. Direction is correct (more FPs
removed than TPs) but the precision shift is **negligible** — the abstract-NPC
hypothesis only explains ~6% of the FP volume.

### Aggressive-exclude probe (exploratory, not committed)

Tried adding `^MOOWanted`, `^Dark[0-9]`, `Victim`, `Captive` to the pattern
list. Result: 268 of 284 NPCs got swept into the "abstract" bucket, leaving 16
scored with precision **31.2% (worse)**. MOOWanted alone accounts for ~40
NPCs that genuinely spawn naked — they're either the wanted-poster 3D models
or actual encounterable bandits, and excluding them throws out real bugs
along with the noise.

### Revised v2 verdict

The exclude-list lever is **useful infrastructure** (kept) but **does not
materially fix the precision problem**. The dominant FP source is the 168
`inv_no_concrete_armor` NPCs whose runtime inventory has items but none
classified as ARMO/CLOT by the predictor's static walk — these are not
abstract, they are real NPCs whose armor the predictor failed to trace.

**The real predictor v2 fix is upstream of corpus filtering** — likely in
LVLI traversal or ARMO/CLOT classification (the `inv_no_concrete_armor`
predicate itself). Two concrete next investigations:

1. **LVLI traversal audit.** Pick 5–10 of the 168 `inv_no_concrete_armor` FPs
   that have non-trivial inventory at runtime (e.g. MOOWanted with 3+ items),
   xEdit-walk the NPC's INVE→LVLI tree, and compare to what the predictor
   reaches. The gap is the LVLI bug.
2. **ARMO/CLOT classification audit.** Sample some FPs whose runtime inventory
   includes items that look armor-shaped (by EDID); check what record signature
   they actually have. If it's not ARMO/CLOT, the predictor's static check is
   too narrow and should also catch SLGM/MISC/SCRL wrappers.

Recall corpus and encounterability heuristic remain on the v3+ list.
