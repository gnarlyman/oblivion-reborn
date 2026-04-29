# oblivion-conflicts — Sweep Query Design (v0.2)

**Status:** Ready for implementation
**Date:** 2026-04-29
**Project:** APW Reborn tooling — sibling repo `D:\Modlists\_clones\oblivion-conflicts\`
**Builds on:** `2026-04-28-oblivion-conflicts-v2-design.md` (v0.1 — three queries, all merged to `main`)

---

## Goal

Add one new Pascal query — `query_sweep` — that emits the **whole-modlist conflict matrix** in a single xEdit launch, so reverse-engineering investigations like *"what does APW - Conflict Resolution.esp override and how"* can be answered without re-launching xEdit per question.

The user invokes the sweep once per profile (or whenever the modlist changes), gets a JSON cache, and answers all "what does X override / who overrides X / what categories / how do X and Y disagree" questions by reading or `jq`-ing the cache. Per-record subrecord drill-down stays on the existing `query_record`.

## Why now

v0.1 ships three queries — `query_list`, `query_between`, `query_record` — each requiring its own xEdit launch (~30s on small lists, ~3-8 min on a 247-plugin modlist). Reverse-engineering APW-style overrides involves dozens of "what does this plugin touch and how" questions per session; running a per-question xEdit launch makes the workflow infeasible.

xEdit already does the heavy lifting via its conflict-only filter (`FilterConflictAll` + `ApplyFilter`), and exposes that machinery to JvI scripts. We can ride on it: a single sweep emits every conflict-bearing main record in the load order, then queries are filesystem-cheap.

## Non-goals

- **CLI wrapper.** No `obc` Python tool. The cache is a single JSON file; `jq` and direct reads (by users or AI agents) cover all documented queries. If repeated one-liners ever become annoying, a thin script can be promoted then.
- **Fingerprint-based cache invalidation.** The user reruns the sweep when they think the modlist changed. The cache file's own `meta.load_order` + `meta.started_at` shows what it represents.
- **Subrecord-level conflict detection at sweep time.** Sweep emits record-level status (`ConflictAllForMainRecord`); per-subrecord diff stays in `query_record` (drill).
- **Cache management** (list/rm/profile-switching). Single file, overwrite in place. `ls` and `rm` cover it.
- **Concurrency.** Single-user, no locks, no atomic rename.
- **Modifying or extending the existing three queries.** They stay as-is.
- **Patching the xEdit binary further.** The existing 4-line patch is sufficient.
- **Composing `-vqsc` with `-script:`.** Identified as a possible future swap-in (E in brainstorming) but explicitly out of scope here. Approach G (script applies the filter itself) doesn't depend on it.

## Spike evidence (load-bearing assumptions)

Source-read against `C:/Users/mschon/repos/TES5Edit/` (full xEdit source). Verified:

- **`ApplyFilter` is exposed to JvI headless scripts** (`xejviScriptHost.pas:426`). Sets `FilterPreset := True` and calls `mniNavFilterApplyClick(Sender)` — same path the GUI uses, no dialog.
- **`FilterConflictAll` and `FilterConflictAllSet` are JvI-settable** (`xejviScriptHost.pas:557-566`). A script can configure the conflict-only preset exactly like `-vqsc` does internally (`xeMainForm.pas:13921-13922`).
- **Headless iteration model** (`xeMainForm.pas:4871, 8410, 8305`):
  1. `DoRunScript` selects all root nodes (= every loaded plugin) before invoking the script.
  2. `ApplyScript` calls `Initialize()` once, with `ScriptProcessElements := [etMainRecord]`.
  3. `Process(e)` fires per **MainRecord visible in the nav tree**.
  4. `Finalize()` once.
- **Filter applied inside `Initialize` narrows the nav tree before `Process` iteration begins.** Selection is captured at line 8447 *before* Initialize runs, but `vstNav.GetPrevious` walks visible (= filtered) nodes, so applying the filter inside Initialize works as needed.

**Implication:** if `Initialize` sets `FilterConflictAll := True`, `FilterConflictAllSet := [caOverride, caConflict, caConflictBenign, caConflictCritical]`, and calls `ApplyFilter`, then `Process(e)` only fires for conflict-bearing main records across the entire load order — in one xEdit launch. xEdit does the sweep; the script is just an emitter.

**Caveats carried from v0.1:**
- `ConflictAllForElements` remains unreachable from JvI headless scripts. Sweep doesn't need it (record-level only via `ConflictAllForMainRecord`); drill (`query_record`) already works around this with the local `GetEditValue` fallback.
- `GetSummary` returned empty in v0.1 testing under the patched binary — but only when `-vqsc` was active (which sets `wbBuildRefs := False`, `xeMainForm.pas:5447`). Sweep does not pass `-vqsc`, so refs build normally and summaries should populate. Fallback: `Name(e)` always works.

**What needs binary verification (Task 1 of the implementation plan):** that `Process(e)` actually fires only for filtered records when `ApplyFilter` is called from inside `Initialize` in the patched binary. Source-read says yes; smoketest against the 3-plugin fixture confirms before committing to the full emitter.

---

## Architecture

```
┌──────────────────────────────────────────────────────────────────┐
│                         oblivion-conflicts                        │
├──────────────────────────────────────────────────────────────────┤
│   ╔═════════════════════╗      ╔══════════════════════╗          │
│   ║  scripts/            ║      ║  cache/sweep.json    ║          │
│   ║  query_sweep.pas     ║─────▶║  (overwritten in-    ║          │
│   ║  query_list.pas      ║      ║   place per sweep)   ║          │
│   ║  query_record.pas    ║      ╚══════════════════════╝          │
│   ║  query_between.pas   ║              │                          │
│   ╚═════════════════════╝              │                          │
│            ▲                            │                          │
│            │                            ▼                          │
│   ┌──────────────────────┐     ┌────────────────────────┐         │
│   │ TES4Edit_patched.exe │     │ jq / direct read /     │         │
│   │ (1 launch per query) │     │ AI agent in conversa-  │         │
│   └──────────────────────┘     │ tion                   │         │
│                                 └────────────────────────┘         │
│                                                                    │
│   examples/reborn-shortcut.sh — generic MO2/USVFS launcher        │
│   (existing; sweep slots in as another query name)                │
└──────────────────────────────────────────────────────────────────┘
```

**Three layers, clear boundaries:**

1. **Pascal scripts** (xEdit-side). `query_sweep.pas` is new; `query_list/record/between` already exist and are unchanged. Each is independent, called via the patched headless binary, emits JSON. No shared `.pas` library (JvI `uses` resolution makes that impractical).
2. **JSON cache** (filesystem). `cache/sweep.json` per repo. Single file. No fingerprint, no atomic operations, no locks. The JSON's own `meta` block tells you what it represents.
3. **Consumers** (jq, AI agent, future scripts). Read-only. The cache schema is the public API; versioned via `meta.tool_version`.

**What stays unchanged:**
- Existing three queries.
- The patched binary.
- The MO2 launch wrapper (`examples/reborn-shortcut.sh`).
- Snapshot test harness (`tests/run_tests.sh`) — sweep is added as a fourth case.

---

## `scripts/query_sweep.pas` — implementation outline

~150 lines. Three functions plus the standard preamble (Esc, ConflictName, GetArg, NowIso8601, WriteOutput — copy-paste from existing scripts, same trade-off).

```pascal
unit UserScript;

var
  outBuf:      TStringList;
  startTime:   TDateTime;
  recordCount: Integer;
  outPath:     string;
  loadOrder:   TStringList;
  errMsg:      string;

function Initialize: Integer;
begin
  // Parse --out=<path> (errMsg set on missing/bad arg → Finalize emits error envelope)
  // Snapshot load order
  // Apply conflict-only filter:
  FilterPreset             := True;
  FilterConflictAll        := True;
  FilterConflictAllSet     := [caOverride, caConflict, caConflictBenign, caConflictCritical];
  FilterConflictThis       := False;
  FilterByInjectStatus     := False;
  // ... (all other Filter* defaults from "Apply filter for cleaning.pas")
  InheritConflictByParent  := True;
  ApplyFilter;
  startTime := Now;
end;

function Process(e: IInterface): Integer;
// Build one JSON entry per filtered MainRecord:
//   { "fid":    <load-order-FormID hex>,
//     "sig":    <4-char signature>,
//     "edid":   <EditorID or empty>,
//     "status": <ConflictAllForMainRecord mapped to caName>,
//     "winner": <Name(GetFile(WinningOverride(MasterOrSelf(e))))>,
//     "chain":  [ { "plugin": ..., "summary": SafeSummary(link) }, ... ] }
// Append serialized JSON to outBuf. Inc(recordCount).
end;

function Finalize: Integer;
// Write outPath:
//   { "meta": { tool_version, xedit_version, query: "sweep", args,
//               load_order, plugin_count, record_count,
//               started_at, duration_ms },
//     "results": [ <outBuf joined with commas> ] }
// On errMsg: same envelope but "error": {...} replaces "results".
end;
```

**SafeSummary helper:**
```pascal
function SafeSummary(elem: IInterface): string;
begin
  Result := '';
  try
    Result := GetSummary(elem);
  except
    Result := '';
  end;
  if Result = '' then
    try
      Result := Name(elem);
    except
      Result := '';
    end;
end;
```

**Key implementation notes:**
- **No iteration loop in our code.** xEdit's `ApplyScriptToSelection` drives `Process` per filtered MainRecord automatically — same model `Conflict Status.pas` uses.
- **In-memory buffer, single write.** Even 50K records × ~400 bytes ≈ 20 MB stays in memory. Streaming is unnecessary at v0.1 scale; buffer-then-write is simpler and atomic.
- **No `ConflictAllForElements` calls.** Sweep is record-level only. `ConflictAllForMainRecord` works fine in headless JvI.
- **Reuse v0.1 preamble** (Esc, ConflictName, GetArg, NowIso8601, WriteOutput).

---

## Per-record output schema

```json
{
  "fid":    "1E012345",
  "sig":    "QUST",
  "edid":   "MQ04",
  "status": "caConflict",
  "winner": "APW - Conflict Resolution.esp",
  "chain": [
    { "plugin": "Oblivion.esm",                  "summary": "Quest: Main Quest 04" },
    { "plugin": "PSMainQuestDelayer.esp",        "summary": "Quest: Main Quest 04 [delayed start]" },
    { "plugin": "APW - Conflict Resolution.esp", "summary": "Quest: Main Quest 04 [PS-delay + APW script swap]" }
  ]
}
```

**Field semantics:**
- `fid` — load-order FormID, 8-char uppercase hex (matches existing queries).
- `sig` — 4-char record signature (QUST, SCPT, NPC_, CELL, ...).
- `edid` — EditorID if set; empty string otherwise.
- `status` — record-level conflict (`caOverride`, `caConflict`, `caConflictBenign`, `caConflictCritical`). `caOnlyOne` and `caNoConflict` are filtered out by the conflict-only preset.
- `winner` — name of the plugin file containing the winning override.
- `chain` — every plugin in the override chain, in load order (master first). One entry per plugin that defines or overrides this record. `summary` is `GetSummary` (with `Name` fallback) for that plugin's version of the record.

**Envelope** (same shape as v0.1 queries):
```json
{
  "meta": {
    "tool_version":  "0.2.0",
    "xedit_version": <packed integer>,
    "query":         "sweep",
    "args":          { "out": "..." },
    "load_order":    ["Oblivion.esm", ...],
    "plugin_count":  247,
    "record_count":  18432,
    "started_at":    "2026-04-29T14:00:00Z",
    "duration_ms":   124530
  },
  "results": [ <per-record entries> ]
}
```

On error: `"error": { "code": "...", "message": "..." }` replaces `"results"`. Error codes match v0.1: `missing_arg`, `bad_arg`, `xedit_internal`.

---

## Usage

**Run the sweep** (from the repo, MO2/USVFS path):
```bash
./examples/reborn-shortcut.sh sweep --out=cache/sweep.json
```

The wrapper requires the patched binary registered as a custom executable in MO2 (one-time, documented in v0.1 README).

**Direct run** (no MO2, against bare data dir):
```bash
TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit \
  -D:"<DataDir>" -P:"<plugins.txt>" \
  -script:scripts/query_sweep.pas --out=cache/sweep.json
```

**Query the cache:**
```bash
# What does X override?
jq '.results[] | select(.winner == "APW - Conflict Resolution.esp")' cache/sweep.json

# Grouped by overridden plugin
jq '[.results[] | select(.winner == "APW - Conflict Resolution.esp")]
    | group_by(.chain[-2].plugin)
    | map({plugin: .[0].chain[-2].plugin,
           count: length,
           sigs: ([.[].sig] | unique)})' cache/sweep.json

# Who overrides X?
jq '.results[] | select(any(.chain[]; .plugin == "PSMainQuestDelayer.esp")
                        and .winner != "PSMainQuestDelayer.esp")' cache/sweep.json

# Category roll-up for X's overrides
jq '[.results[] | select(.winner == "APW - Conflict Resolution.esp")]
    | group_by(.sig)
    | map({sig: .[0].sig, count: length})' cache/sweep.json
```

**Drill into a specific record** (existing v0.1 path, unchanged):
```bash
./examples/reborn-shortcut.sh record --formid=1E012345 --out=/tmp/r.json
```

---

## Errors

- **Missing/bad args** — caught in Initialize, `errMsg` set, Finalize writes `meta.error` envelope. No `results`. Exit clean.
- **xEdit internal exception during Process** — wrapped in try/except. Single bad record skipped with a `meta.warnings` entry; sweep continues. (Same pattern as v0.1.)
- **`ApplyFilter` failure** — fatal. `errMsg := 'apply_filter_failed'`, Finalize emits error envelope.
- **Output file write failure** — last-resort `AddMessage` to xEdit log; nothing else we can do.

The existing JSON consumers (`jq`, AI agent) handle missing-results / malformed JSON loudly; that's the error story for the cache.

---

## Testing

**Snapshot harness** — add a fourth case to `tests/run_tests.sh`:
- Run `query_sweep` against the 3-plugin fixture corpus (`Master.esm + OverrideA.esp + OverrideB.esp`).
- Strip `args.out`, `started_at`, `duration_ms`, `tool_version`, `xedit_version` for stable diff (same strips as existing cases).
- New `tests/fixtures/expected/query_sweep.json`.

**Smoketest task in implementation plan (Task 1)** — before writing the full emitter, validate the load-bearing assumption with a minimal script that just calls `ApplyFilter` and counts `Process(e)` invocations. Compare against the unfiltered count (the spike already established this for the unfiltered case). If filter doesn't narrow iteration, design pivots (likely: emit a manual loop walking `wbRecordsByLoadOrder` post-filter, or surface to user for re-design).

**Real-world manual verification (Task 2)** — sweep against Reborn-Base (51 plugins, similar to v0.1 Task 11). Spot-check a known conflict (e.g., MOO override in MOO.esp present in chain). Records record-count + duration_ms for the README perf table.

---

## Out-of-band assumptions to verify in implementation

These are stated above but worth flagging once more for the implementation plan:

1. **`ApplyFilter` from `Initialize` actually narrows the iteration set in headless mode.** Source says yes; smoketest in Task 1 confirms.
2. **`GetSummary` returns non-empty under the patched binary when `-vqsc` is not active.** Source-read suggests it does (the empty-result issue was tied to `wbBuildRefs := False` which only `-vqsc` sets); confirm in Task 2 by spot-checking summaries on known QUST/SCPT records.
3. **`vstNav` traversal post-filter visits every filtered record exactly once.** This is VirtualTreeView default behavior; if it doesn't, fallback is the same as point 1.

---

## Estimated scope

- **New files:** `scripts/query_sweep.pas` (~150 lines), `tests/fixtures/expected/query_sweep.json` (snapshot output).
- **Modified files:** `tests/run_tests.sh` (add 4th case), `README.md` (add sweep usage + jq recipes).
- **Lines of new code:** ~150 Pascal + ~30 README markdown.
- **Implementation tasks:** smoketest (1), full emitter (1), snapshot test (1), real-modlist verification (1), README update (1) — five tasks, executed inline (per `feedback_subagent_overhead.md`).

## Estimated cost (runtime, not engineering)

Rough order-of-magnitude — to be verified by Task 2:
- **Reborn-Base (51 plugins):** ~30-90s (xEdit load dominant).
- **APW (247 plugins):** ~3-8 min.
- **Cache size:** ~5-50 MB JSON (depends on chain length distribution).
- **Query latency** (jq over loaded cache): sub-second for most queries; the JSON parse is the dominant cost.
