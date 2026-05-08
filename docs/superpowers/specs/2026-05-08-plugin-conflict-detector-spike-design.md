# Plugin Conflict Detector — Research Spike Design

**Date:** 2026-05-08
**Status:** Spike (research, not production)
**Calibration target:** Naked-NPC bug class on Reborn-OOO (OOO Enhanced is the worst offender)

## 1. Goal and Success Criteria

### Goal

Prove or disprove that a static predictor can match in-game truth for the naked-NPC bug class on the Reborn-OOO modlist, with high enough precision/recall to justify scaling the same architecture to other bug classes (missing meshes, broken refs, leveled-list issues).

The current state is ~140 one-off audit scripts in `research/`, with the `static_record_diff_overcounts` lesson — 1865 NPCs flagged in OOO Enhanced, but only ~1 in 5 actually broken in-game. That ~10× false-positive rate is what we are trying to fix.

### Success bar

Spike succeeds if all of the following hold on the Reborn-OOO calibration corpus:

- **Precision ≥ 90%** on NPCs flagged "naked, no script attached" — when the tool says "this NPC will appear naked," it is right at least 9 times out of 10. ("No script attached" = NPC_ record has no `SCRI` subrecord — the binary, statically-detectable signal. We use this as the boundary marker for the no-script bucket.)
- **Recall ≥ 80%** on the same bucket — we miss at most 1 in 5 actually-naked NPCs.
- **Validation corpus ≥ 200 NPCs** with `outcome="ok"` from G5 (i.e., spawned, inventory readable, no crash). Crashes / timeouts / spawn failures don't count toward the 200.
- **xEdit oracle agreement ≥ 99% of FIDs** — the remaining 1% are documented edge cases we accept.

### Failure exits

If any of these trip, we stop and rethink rather than push through:

- **Game too crashy under G5 spawn loop** — more than 1-in-50 spawn attempts result in a crash. Crash detection: socket drops mid-command, or any command times out (default 30s) without an `ok` response. Abandon scaled validation, fall back to a ~50-NPC stratified hand-check, lower the precision bar by a confidence interval, decide whether the lower-confidence answer still ships.
- **Predictor plateaus below 70% precision** even after modeling template, race, and LVLI. A is harder than expected. Revisit S1 (are scripts mattering more than we estimated?) or step back to a tiered C-style output ("definitely / likely / possibly broken").
- **xEdit oracle and Python diverge on > 5% of FIDs.** Load-order or override-winning bug we can't easily characterize. Pause predictor work and treat oracle alignment as the new blocker.

## 2. Architecture

Four cooperating components, all owned in this repo or related repos. None are speculative — each builds on infrastructure we already have.

```
                                  ┌─────────────────┐
                                  │   xEdit Oracle  │  (one-shot)
                                  │   Pascal script │
                                  └────────┬────────┘
                                           │ winning_records.json
                                           ▼
        ┌──────────────┐          ┌──────────────────┐
        │  VFS Module  │ ────────▶│    Predictor     │
        │  (Python)    │          │    (Python)      │
        └──────┬───────┘          └────────┬─────────┘
               │                            │
               │ path_index                 │ predictions.jsonl
               ▼                            ▼
        ┌──────────────┐          ┌──────────────────┐
        │   modlist /  │          │  Calibration     │◀──┐
        │   plugins /  │          │  Harness         │   │
        │   BSAs       │          └────────┬─────────┘   │
        └──────────────┘                   │             │
                                           │ compare     │
                                           ▼             │
                                  ┌──────────────────┐   │
                                  │  Calibration     │   │
                                  │  script (Python) │   │
                                  │  precision/recall│   │
                                  └──────────────────┘   │
                                                         │
                                  ┌──────────────────┐   │
                                  │  G5 Validator    │───┘
                                  │  (Python driver) │   ground_truth.jsonl
                                  └────────┬─────────┘
                                           │ TCP socket
                                           ▼
                                  ┌──────────────────┐
                                  │  G5 OBSE plugin  │
                                  │  (in Oblivion)   │
                                  └──────────────────┘
```

**Component responsibilities:**

- **Predictor (Python)** — load-order walk, override winning, template/race/LVLI resolution, VFS-aware mesh existence check. Emits per-NPC predictions: `{fid, edid, predicted_naked: bool, reason: enum, has_script: bool, mesh_paths_missing: [...]}`.
- **G5 Validator (OBSE plugin + Python driver)** — live RPC into a running Oblivion process. Python sends `spawn FORMID` and `inspect_inventory`; plugin executes on the game's main thread and returns the actual runtime equipment state. This is the calibration ground truth.
- **VFS Module (Python)** — replicates MO2's mod-priority + plugin-companion-BSA + sArchiveList precedence rules. Builds a case-insensitive `path → real_file` index. Used by the predictor for mesh/texture existence checks.
- **xEdit Oracle (Pascal, one-shot)** — dumps the winning record per FID across the active load order, in a format Python can diff against the predictor's resolved record set. Validates correctness of pure-Python override winning. Run once at predictor checkpoints, not per-iteration.

## 3. G5 — Validator (built first)

This is the riskiest component and the one that gates all later measurement, so it ships first.

### 3.1 OBSE plugin (Oblivion side)

A minimal xOBSE plugin loaded into `Oblivion.exe`. Built in C++ in the same style as `oblivion-batch-compile` and `Blockhead-Reborn`.

**Threading model:**

- On plugin init, spawn a worker thread that opens a TCP socket on `127.0.0.1:<port>` and listens for line-delimited JSON commands.
- Game state mutation must run on the engine's main thread. Pattern: worker thread pushes parsed commands onto a thread-safe queue. Plugin hooks the per-frame main-loop callback (xOBSE exposes this) and drains the queue, executing one command per tick. Result is written back over the socket from the worker thread.
- This is well-trodden — the only Oblivion-specific subtlety is that some inventory state isn't populated until `OnLoad` / 3D-load fires, so the plugin waits a configurable number of ticks after `placeatme` before considering inventory readable.

**Command set (v1):**

- `ping` — health check, returns `pong`.
- `coc CELL_EDID` — teleport player to a clean cell. Used to keep spawn locations stable.
- `spawn FORMID [count=1]` — calls into the engine's `placeatme` path, returns the spawned reference's RefID.
- `inspect_inventory REFID` — walks the actor's `ExtraContainerChanges` and base `TESContainer`, returns the union as `[{fid, count, equipped}]`.
- `delete REFID` — `MarkForDelete + Disable` to clean up.
- `quit` — graceful shutdown.

That's the entire surface for A1. Future bug classes add commands without changing the protocol shape.

**Failure handling:**

- Socket I/O on the worker thread is wrapped in try/catch. Socket errors close the connection; the worker re-listens.
- Game crashes are not catchable from inside the process. The Python driver detects the dropped socket, kills the process, restarts. See 3.2.

### 3.2 Python driver (host side)

`research/plugin_detector/g5_driver.py` (preliminary path).

**Process lifecycle:**

- Drives MO2 (or `oblivion-usvfs-launcher` directly, if that ends up being faster) to spawn `Oblivion.exe` with the plugin loaded.
- Polls the socket until `ping` succeeds. Boot timeout: 60s; on timeout, log + abort.
- Sends a checkpoint command (e.g., `coc TestCellEmpty`) to put the game in a known state.

**Spawn loop:**

- For each candidate NPC: `coc` → `spawn` → wait N ticks → `inspect_inventory` → `delete` → log result to `ground_truth.jsonl`.
- Crash detection: if any command times out (default 30s) or the socket drops mid-command, mark this NPC as `crashed`, kill the process, restart from where we left off (resume by reading the last logged FID from `ground_truth.jsonl`).
- Per-NPC budget cap: ≤ 1 minute. Anything slower is logged as `timeout` and skipped.

**Output schema (`ground_truth.jsonl`):**

```json
{"fid": "010052BE", "edid": "...", "spawned_at": "...",
 "inventory": [{"fid": "0001F5C2", "count": 1, "equipped": true}],
 "outcome": "ok" | "crashed" | "timeout" | "spawn_failed",
 "ticks_to_ready": 12}
```

### 3.3 Validation gate for G5 itself

Before we trust G5 as a ground-truth source, sanity check:

- Spawn 50 known-good vanilla NPCs. Check that inventory matches what we see when we `placeatme` them by hand. If yes, G5 is trustworthy on the easy case.
- Spawn the 20 NPCs from our existing empirical sample. Confirm G5's "naked" classification matches our hand-checked classification on those 20. If not, G5's tick-wait or inventory walk is wrong; fix before scaling.

## 4. Predictor (built second)

`research/plugin_detector/predictor/` — pure Python, modular.

### 4.1 Load-order resolution

- Read `plugins.txt` from the active MO2 profile to get load order.
- Parse each plugin's TES4 header to extract its master list (we already have this in `research/audit_*.py`).
- For each plugin, build a master-table mapping (plugin's master idx → load-order idx). FIDs encountered in record bodies have their high byte rewritten to load-order space. **Carry forward the cross-master FID conversion fix from `oblivion-conflicts` main 2026-04-30** — the same bug bit us in the v1 query script, and the proper LO-byte → file → local-FID conversion is documented.
- Build `winning_records: dict[lo_fid, (plugin_idx, body_bytes)]`. BP merge falls out for free because BP is just another plugin, and it loads at the end of plugins.txt — its records naturally win for the FIDs it covers.

### 4.2 Inventory resolution

For each NPC the predictor evaluates:

1. Pull the winning NPC_ record.
2. **Resolve inventory source.** Two paths, in order:
   - If `Use Inventory` template flag is set on the NPC, the inventory comes from the templated NPC. Walk the template chain (each step: read templated NPC's flag, follow if set), cap depth at 8 to avoid pathological cycles. The terminal NPC's CNTO list is the inventory source.
   - If `Use Inventory` is *not* set, the NPC's own CNTO list is the inventory source.
3. **Extract CNTO entries** from the inventory source.
4. For each CNTO target:
   - If it's an ARMO/CLOT/WEAP, mark as concrete gear.
   - If it's an LVLI, recursively resolve (depth cap 8) and treat any leaf ARMO/CLOT/WEAP as "could appear here." LVLI with `Calculate from all levels <= PC level` semantics: if the LVLI's `LVLD` chance-none is 0 and the entry list is non-empty, every spawn returns at least one entry — count as concrete. Otherwise "may roll empty" — record both possibilities.
5. **Faction / race default fallback.** If steps 2–4 produce zero concrete gear, check whether the NPC's race or any of its factions provide default equipped clothing. The exact subrec layout for race-default and faction-default gear is one of the things the spike will pin down empirically — current memory says these defaults exist and account for some of the false-positive rate, but the static structure isn't fully RE'd. Phase 3 explicitly includes mapping this out by cross-referencing G5's actual runtime inventory against NPCs whose own + template CNTO is empty.
6. **Mesh existence check (VFS-aware).** For each concrete ARMO/CLOT, look up the MODL/MOD2 path through the VFS module. If the path doesn't resolve, the engine renders a yellow diamond — count as `armor_mesh_missing` rather than `inv_empty`. Both produce a visibly broken NPC, but the cause and fix differ.

### 4.3 Output schema (`predictions.jsonl`)

```json
{"fid": "010052BE", "edid": "...",
 "predicted_naked": true,
 "reason": "inv_empty_no_template_no_race" |
           "inv_template_chain_empty" |
           "inv_lvli_may_roll_empty" |
           "armor_mesh_missing",
 "has_script": false,
 "concrete_gear_fids": ["0001F5C2", ...],
 "lvli_paths_walked": [...],
 "mesh_paths_missing": [...]}
```

The `has_script` flag is the S1 boundary marker. NPCs with `has_script=true` are reported separately and excluded from the precision/recall calculation against G5 (since G5 captures script-equipped gear that the predictor was never asked to model).

## 5. VFS Module

`research/plugin_detector/vfs.py` — pure Python.

### 5.1 What it does

Builds a case-insensitive index `lowercase_virtual_path → real_file_location`, replicating what `Oblivion.exe` would see when launched through MO2.

### 5.2 Inputs

- MO2 profile dir → `modlist.txt` (mod priority order, with the inversion gotcha — file order is high-to-low UI).
- For each enabled mod: walk `mods/<name>/` for loose files.
- For each enabled mod: parse any `.bsa` files as additional sources.
- `Oblivion.ini` `sArchiveList` for engine-loaded BSAs.
- Plugin-companion BSA load: BSA loads if a same-named ESP/ESM is active in plugins.txt.

### 5.3 Precedence rules

Documented in memory entries — codify them here:

- Loose files win over BSAs.
- Among loose files, **higher MO2 mod priority wins** (UI bottom = highest, file top of `modlist.txt` = highest — invert one of them depending on which view we're reading from).
- Among BSAs, plugin-companion BSAs load in the order their plugins appear in `plugins.txt`. `sArchiveList` BSAs load before plugin-companion ones.
- Bash-mergeable plugins that are deactivated in `plugins.txt` still contribute their files (the records merge into BP, but the loose/BSA files come from the original mod folder).
- Root Builder destinations are out of scope for the spike (we don't check root files).

### 5.4 Validation

A one-shot diff: walk every path in our index and compare to a `dir /s` of the USVFS-mounted tree (using `oblivion-usvfs-launcher`). Any mismatch is either a bug in our replication or an edge case to document. Run this once when VFS module is "done"; do not run per-iteration.

## 6. xEdit Oracle

`research/plugin_detector/oracle/dump_winning.pas` — Pascal script run via the existing `repl_daemon.py`.

### 6.1 Behavior

For every record across all active plugins, emit `{lo_fid, plugin_filename, signature, body_sha256}` to a JSON file. This is the ground truth for "what is the winning record per FID."

### 6.2 How we use it

- After predictor's load-order/override module is implemented, run the oracle once.
- Diff predictor's `winning_records` against the oracle's output. Both sides should produce the same `(lo_fid, plugin_filename, signature, body_sha256)` for every FID.
- Any mismatch is a predictor bug to fix before the predictor is trusted.
- Re-run after non-trivial changes to the load-order/override code.

This is the empirical-test-first principle from `feedback_test_before_design`: don't lock the predictor's correctness in by reasoning, lock it by diff against a known-good implementation.

## 7. Sequencing

The whole spike is SP3 — validator first, predictor second. Concrete phases:

### Phase 0 — Bootstrap (≤ 1 day)

- New repo / sub-repo skeleton (`research/plugin_detector/`).
- C++ OBSE plugin compiles, loads in Oblivion, prints to console on init. No socket yet.

### Phase 1 — G5 v1 (≤ 3 days)

- Plugin: TCP socket, command queue, main-thread dispatch, `ping` + `coc` + `spawn` + `inspect_inventory` + `delete`.
- Python driver: spawn loop, crash recovery, output to `ground_truth.jsonl`.
- **Gate:** spawn 50 vanilla NPCs successfully, output looks right by hand-spot-check.

### Phase 2 — Calibration corpus (≤ 1 day)

- Run G5 against the full Reborn-OOO active NPC list (filtered to mortal humanoids).
- Target ≥ 200 successful inventory dumps. If crash rate > 1/50, hit the failure exit.

### Phase 3 — Predictor v1 (≤ 3 days)

- Load-order walk, override winning, template chain, race default, LVLI resolution, VFS-aware mesh check.
- Emit `predictions.jsonl`.
- **Gate:** xEdit oracle diff < 1% mismatch.

### Phase 4 — Calibration (≤ 1 day)

- Compute precision/recall on the no-script bucket from G5 corpus.
- Decide: success bar met → recommend scaling to general tool. Bar not met → diagnose worst false-positive class, iterate Phase 3, re-measure.

### Phase 5 — Spec writeup (≤ 1 day)

- Document findings, false-positive classes encountered, generalization plan for other bug classes (mesh existence, broken refs, leveled lists).

Total budget: ~10 working days (1 + 3 + 1 + 3 + 1 + 1). Anything significantly over signals we should pause and reconsider scope.

## 8. Out of Scope

Explicit non-goals for this spike. These exist to keep the spike honest and prevent scope creep:

- **Script behavior modeling.** S1 — predictor flags `has_script` and excludes those NPCs from precision/recall.
- **Other bug classes.** Mesh existence is built (because the predictor needs it for armor render checks), but missing-texture, broken-FID-ref, and leveled-list-issue detection are out. The architecture should generalize, but we don't ship them in the spike.
- **UI / report polish.** Output is JSONL. A human-readable report comes after the architecture is validated.
- **Non-Reborn-OOO modlists.** Spike runs on one modlist. Generalization is a follow-on.
- **Performance optimization.** Predictor runs once per modlist change. If it takes 5 minutes, that's fine for the spike.
- **CI integration.** Future work.

## 9. Repository Layout

```
D:/Modlists/Reborn/research/plugin_detector/
├── README.md
├── predictor/
│   ├── __init__.py
│   ├── load_order.py        # plugins.txt + master tables + winning_records
│   ├── npc_resolver.py      # template chain, race defaults, LVLI
│   ├── vfs.py               # MO2 VFS replication
│   └── predict.py           # CLI entrypoint
├── g5/
│   ├── plugin/              # C++ OBSE plugin source (own repo eventually)
│   │   └── ...
│   ├── g5_driver.py         # Python harness
│   └── protocol.md          # socket command reference
├── oracle/
│   └── dump_winning.pas
└── data/
    ├── ground_truth.jsonl   # produced by G5
    ├── predictions.jsonl    # produced by predictor
    └── calibration.json     # precision/recall + diagnostic counts
```

OBSE plugin likely gets its own GitHub repo (`oblivion-game-repl` or similar) once it stabilizes — same pattern as `oblivion-batch-compile` and `oblivion-monitor`.

## 10. Open Questions Deferred to Implementation

These are real questions but not architecture-defining; resolve during implementation:

- Exact tick count to wait after `placeatme` before reading inventory. Empirical — start with 10, adjust if dumps come back empty.
- Whether to use named pipes or TCP. TCP is simpler to reason about; pipes might be marginally faster. Pick TCP unless something forces us off it.
- xEdit oracle dump format — JSONL line per record, or one big JSON. JSONL streams better for 97k records.
- LVLI depth cap — start at 8, log when we hit it.
