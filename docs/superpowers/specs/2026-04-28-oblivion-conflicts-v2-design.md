# oblivion-conflicts — Design v2

**Status:** Ready for implementation
**Date:** 2026-04-28
**Project:** APW Reborn tooling — sibling repo `D:\Modlists\_clones\oblivion-conflicts\`
**Supersedes:** `2026-04-28-oblivion-conflicts-mvp-design.md` (deprecated; over-engineered relative to what the patched headless xEdit makes possible)

---

## Goal

A small bundle of Pascal scripts that report Oblivion (TES4) plugin conflicts in machine-readable JSON by driving the patched headless xEdit. Three queries, all operating on a single load order. No Python, no daemon, no GUI. Output is suitable for direct consumption by AI agents or shell pipelines.

The user invokes the patched xEdit binary directly with one of our scripts and a few `--key=value` args; the script writes a JSON file at the path the user specifies; the user reads it.

## Non-goals

- **Cross-modlist comparison** (e.g., "MOO.esp in APW vs MOO.esp in Reborn"). Each script invocation runs against one load order. Cross-modlist diffs are an external workflow: run the same query twice with different `-P:` files, diff the JSONs externally.
- **Plugin-vs-plugin comparison across different load orders.** `query_between` only diffs two plugins *within the same load order*.
- **Writing/modifying plugins.** Conflict resolution / merging is post-v1.
- **CELL/worldspace child records.** Top-level records only.
- **Save game files.**
- **Non-TES4 games.** Adding `gmTES5` etc. is small future work — the same `ConflictAllForMainRecord` and chain API work for every game xEdit supports — but not v1.
- **Daemon/warm-cache mode.** Each invocation pays xEdit's ~10–30s startup cost.
- **GUI of any kind.**
- **Python CLI wrapper.** The deprecated MVP design had one; v2 removes it. Wrapping logic (profile resolution, argv shuffling) lives in the caller.
- **Vanilla Oblivion plugin discovery** via `%LOCALAPPDATA%\Oblivion\Plugins.txt`. Caller passes a `plugins.txt` path explicitly.

## Why custom

xEdit has a powerful conflict-detection engine (the same logic that colors records red/yellow/green in the GUI), and a Pascal script API that exposes it programmatically. There is no existing CLI that emits conflict information as structured JSON. Bundled scripts (`Conflict Status.pas`, `Detect conflict between elements.pas`) emit unstructured GUI-log text and mostly require `Apply filter for cleaning` to be run manually first.

xEdit's license is **MPL-2.0**, so deriving scripts from it is unconstrained.

## Spike evidence (what's verified working)

This design is grounded in a hybrid spike run on 2026-04-28 against the existing 3-plugin fixture set (`Master.esm + OverrideA.esp + OverrideB.esp`). Spike artifacts at `tests/fixtures/_spike/` (to be deleted as part of implementation cleanup). Headline findings:

**Verified end-to-end against fixtures:**
- Headless launch with `TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit -D:<data> -P:<plugins.txt> -script:<x.pas>`
- `-D:` and `-P:` flags are respected (script saw exactly the 3 fixture plugins, in the load order specified)
- `ParamStr(i)` reads custom args appended after xEdit's own flags — chosen mechanism for arg passing
- Override-chain API: `MasterOrSelf`, `OverrideCount`, `OverrideByIndex`, `WinningOverride`, `GetLoadOrderFormID`, `RecordCount`, `RecordByIndex`, `FileByLoadOrder`, `GetFile`, `GetFileName`, `Signature`, `EditorID`, `GetIsDeleted`
- Subrecord access: `ElementBySignature`, `Path`, `GetEditValue`
- **Conflict-detection engine:** `ConflictAllForMainRecord(rec)` works headless without GUI tree state and returns the same `caUnknown / caOnlyOne / caNoConflict / caConflictBenign / caOverride / caConflict / caConflictCritical` xEdit's GUI uses. Fixture results matched expectations exactly: TestSword (3-way) → caConflict; TestArmor + TestChest + TestDagger (1-way) → caOverride.
- `ConflictAllForElements(list, sibling, injected)` registered (not yet smoke-tested headless, but uses the same code path that `ConflictAllForMainRecord` proves works)
- `try`/`except` wrapping (essential — autoexit only fires on clean Initialize return)

**JvInterpreter constraints discovered:**
- `s[i]` char-indexing on a string variable raises `Array type required`. Use `Copy(s, i, 1)` or `StringReplace` for any escape logic.
- Top-level `var foo: array[0..N] of T` produces silent failure (the whole script body short-circuits and writes an empty output file). Either keep state local, or use `TStringList`/`TList`. The first chain probe in the spike fell into this trap; the flat-style rewrite without globals worked first try.
- `GetEnvironmentVariable` is **not exposed** by the script adapter, contrary to a comment in the existing `_smoke.pas`.
- Raw-byte subrecord access (`GetData` / `GetDataSize`) is **not exposed**. The deprecated MVP design's "byte-level subrecord diff" is impossible. xEdit's own `ConflictAllForElements` is strictly better — same authoritative conflict status the GUI uses.
- `AddMessage` output does **not** appear in `TES4Edit_log.txt` when running under the patched binary's `-autoload -autoexit` mode. Debug output from a script must go to its own file.

**Stale assets identified for removal during implementation:**
- `lib_json.pas` — has the `s[i]` bug; never actually ran end-to-end. The "smoke-tested" claim in the prior project memory is false (`%TEMP%\obc_smoke.json` was never produced).
- `_smoke.pas` — same; uses unsupported `GetEnvironmentVariable`.
- All Python under `src/oblivion_conflicts/` — written for the deprecated MVP design.

## Approach

**Three Pascal scripts and one shared helper file.** No wrapper layer.

```
caller (user, AI agent, shell script)
   │
   │ TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit
   │   -D:<DataDir> -P:<plugins.txt> -script:scripts/query_<name>.pas
   │   --target=<plugin> --out=<path>  (or --a/--b/--formid as appropriate)
   ▼
patched headless xEdit
   │
   ▼
query_<name>.pas (uses obc_lib.pas)
   │
   ▼
JSON file written to --out
```

**Key invariants:**
- Each script is self-contained: parses ParamStr, validates required keys, queries xEdit, emits JSON, returns 0.
- All scripts wrap their body in `try`/`except` so xEdit autoexit is guaranteed to fire.
- Output is always written — even on validation failure, an error JSON is written to `--out`. The caller never has to guess whether the script ran.
- No state shared between invocations. Output is deterministic for a given plugin set + load order.

## Invocation & arg contract

Common shape (caller-side):
```
TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit \
  -D:<DataDir> -P:<plugins.txt> -script:scripts/query_<name>.pas \
  <--script-args...>
```

Script-level args use `--key=value` form. Multi-valued args repeat the flag.

| Script | Args |
|---|---|
| `query_list.pas` | `--target=<plugin.esp> --out=<path>` |
| `query_between.pas` | `--a=<plugin.esp> --b=<plugin.esp> --out=<path>` |
| `query_record.pas` | `--formid=<hex> [--formid=<hex> ...] --out=<path>` |

**FormID format on the CLI:** load-order FormID hex, accepted as `0x1E012345` / `1E012345` / `1e012345`. The 8-char no-prefix form is canonical in our output (matches xEdit's display).

**Plugin args:** bare filenames (e.g., `MOO.esp`) — same form as `plugins.txt` lines and xEdit's load list.

**Validation:**
- `--out` is always required.
- Each script validates its own required keys.
- Missing/invalid args → write an error envelope to `--out`, return 0 (so xEdit autoexits).

**No environment variables, no sidecar files, no temp files.** Everything goes through `--key=value` ParamStr.

## Output schema

All three queries share a top-level envelope:

```json
{
  "meta": {
    "tool_version": "0.1.0",
    "xedit_version": "4.1.5f",
    "query": "list" | "between" | "record",
    "args": { "target": "MOO.esp", "out": "C:/temp/list.json" },
    "load_order": ["Oblivion.esm", "DLCShiveringIsles.esp", "..."],
    "started_at": "2026-04-28T22:14:33Z",
    "duration_ms": 12483
  },
  "results": [ ... ]
}
```

`tool_version` is our script bundle's version. `xedit_version` is xEdit's, read via `wbVersionNumber` if available; omitted from the meta object if the call returns empty.

Multi-valued args (`--formid=` repeated) appear in `meta.args` as a JSON array:
```json
"args": { "formid": ["1E012345", "1E012346"], "out": "..." }
```

On validation/runtime error, the same envelope but with `"error"` instead of `"results"`:

```json
{
  "meta": { ... },
  "error": { "code": "missing_arg", "message": "--target is required" }
}
```

Error codes: `missing_arg`, `bad_arg`, `plugin_not_loaded`, `formid_not_found_any` (every requested FormID missing — emitted as a top-level error rather than per-result), `xedit_internal` (catch-all from the try/except).

### `query_list` results[]

**Algorithm:** iterate `RecordByIndex(target_plugin, ...)` for the plugin matching `--target`. For each record, call `ConflictAllForMainRecord(rec)`. Emit if status `>= caOverride` (anything someone else also touches, including innocent overrides — caller filters further if they want only `caConflict`+). The chain returned by `MasterOrSelf` + `OverrideByIndex` populates `chain[]` and `master_plugin`/`winner_plugin`.

Records the target plugin masters but no one else overrides have status `caOnlyOne` (1) and are correctly filtered out.

```json
{
  "lo_formid_hex": "1E012345",
  "signature": "WEAP",
  "edid": "MOO_IronDagger",
  "master_plugin": "Oblivion.esm",
  "winner_plugin": "MOO.esp",
  "is_winner": true,
  "is_deleted": false,
  "conflict_status": "caConflict",
  "chain": ["Oblivion.esm", "OOO.esp", "MOO.esp"]
}
```

Edge cases:
- **Deleted records** (`GetIsDeleted == true`): `is_deleted: true`. Note: a deleted override loses its EditorID — use the master's EDID. Spike confirmed this.
- **Injected records** (master byte points at a master that doesn't define the record): xEdit's `MasterOrSelf` returns the synthetic injection target; we emit `is_injected: true` if `GetFileName(GetFile(MasterOrSelf(rec)))` differs from xEdit's expected master. Implementation can flag this on-discovery; if it turns out to be hard to detect headlessly, drop to `is_injected: null` and document.

### `query_between` results[]

One entry per record both A and B touch (regardless of whether other plugins also touch it):

```json
{
  "lo_formid_hex": "00012345",
  "signature": "WEAP",
  "edid": "IronDagger",
  "winner_plugin": "MOO.esp",
  "a_summary": "Damage: 5",
  "b_summary": "Damage: 7",
  "subrecords": [
    {"signature": "DATA", "conflict_status": "caConflict"},
    {"signature": "MODL", "conflict_status": "caNoConflict"}
  ]
}
```

- `a_summary`/`b_summary` use `GetSummary(rec)` if available, else empty string. Cheap, useful at-a-glance.
- `subrecords[]` lists every subrecord signature present in either A or B, with `ConflictAllForElements([recA_sub, recB_sub], True, False)` per signature. xEdit's authoritative judgment — eliminates the need to roll our own diff.

### `query_record` results[]

One entry per `--formid`. Full chain + per-subrecord values across every chain link:

```json
{
  "lo_formid_hex": "1E012345",
  "signature": "WEAP",
  "edid": "MOO_IronDagger",
  "master_plugin": "Oblivion.esm",
  "winner_plugin": "MOO.esp",
  "chain": ["Oblivion.esm", "OOO.esp", "MOO.esp"],
  "is_deleted": false,
  "conflict_status": "caConflict",
  "subrecords": [
    {
      "signature": "DATA",
      "conflict_status": "caConflict",
      "winner_plugin": "MOO.esp",
      "values": [
        {"plugin": "Oblivion.esm", "edit_value": "..."},
        {"plugin": "OOO.esp",       "edit_value": "..."},
        {"plugin": "MOO.esp",       "edit_value": "..."}
      ]
    }
  ]
}
```

If a requested FormID isn't found in any loaded plugin, that slot becomes `{"lo_formid_hex": "...", "error": "not_found"}` — the batch is not aborted. If *every* requested FormID is missing, emit a top-level error envelope instead.

**Subrecord values:**
- `edit_value` is `GetEditValue(elem)` — xEdit's display string. For struct subrecords (e.g., WEAP's DATA), this is empty at the struct level; the per-field values would require walking into the struct. v1 emits the struct-level `edit_value` only — callers that need per-field detail can ask for individual `--formid` records and walk subrecord paths externally.
- A subrecord present in some chain links and absent in others appears in `values[]` only for the plugins that have it. The conflict_status field reflects xEdit's judgment of the asymmetric set.

## `obc_lib.pas` — shared helpers

A small unit included via `uses obc_lib;` from each query script. Lives at `scripts/obc_lib.pas` (same directory as the queries — `wbScriptsPath` resolves units from there).

**Surface:**
```pascal
unit obc_lib;
interface
function Esc(const s: string): string;            // JSON-escape a string, returns "..."
function ConflictName(c: integer): string;        // 0..6 → 'caUnknown'..'caConflictCritical'
function GetArg(const key: string): string;       // scan ParamStr for --key=value, '' if absent
function GetArgs(const key: string): TStringList; // collect all --key=value occurrences
function HasArg(const key: string): boolean;
function ParseFormID(const s: string): cardinal;  // accepts 0x... / ... / lowercase / uppercase
function NowIso8601: string;                      // 'YYYY-MM-DDTHH:MM:SSZ' for meta.started_at
procedure WriteOutput(const path, content: string); // TStringList.SaveToFile
function MetaPrefix(const query: string; const args: string): string;
                                                   // emits the {"meta":{...}, opening
implementation
...
```

**Implementation rules — non-negotiable, learned from the spike:**
- **Use `StringReplace` for escaping**, never `s[i]` indexing.
- **No top-level `var foo: array[0..N] of T`.** If state is needed, pass a `TStringList` as a parameter or build a local array inside a function.
- **Wrap script `Initialize` body in `try`/`except`.** Emit error envelope to `--out` on any exception. Always `Result := 0` (clean Initialize return is what triggers autoexit).
- **`GetArgs` returns `TStringList`** that the caller frees. Multi-valued args (`--formid=` repeated) need this.
- **No `AddMessage` for diagnostics.** It doesn't appear in the log under the patched binary's headless mode. Diagnostics, if any, get written into the JSON output's `meta.diagnostics[]` field instead.

**JSON emission style:** direct string concatenation per query (proven by the spike's `_probe_chain2.pas`). `obc_lib.pas` provides `Esc()` and a few helpers like `MetaPrefix()`; queries build `buf` themselves and `WriteOutput` it. We don't ship a JSON-DSL — keeping it simple beats the abstraction.

## Repo structure

```
oblivion-conflicts/
├── README.md                         # short — what + how to run + JSON schema link
├── LICENSE                           # MPL-2.0 (unchanged)
├── .gitignore
├── scripts/
│   ├── obc_lib.pas
│   ├── query_list.pas
│   ├── query_between.pas
│   └── query_record.pas
├── tests/
│   ├── fixtures/
│   │   ├── data/
│   │   │   ├── Master.esm            # unchanged
│   │   │   ├── OverrideA.esp         # unchanged
│   │   │   └── OverrideB.esp         # unchanged
│   │   ├── _generator/
│   │   │   ├── README.md             # how to rebuild fixtures
│   │   │   ├── generate_fixtures.pas # unchanged
│   │   │   └── patch_smoketest.pas   # validates the patched binary still works
│   │   ├── expected/                 # snapshot JSONs, one per query
│   │   │   ├── query_list.json
│   │   │   ├── query_between.json
│   │   │   └── query_record.json
│   │   └── loadorder.txt             # unchanged
│   ├── run_tests.sh                  # invokes each query, diffs vs expected
│   └── README.md                     # how to run + how to update snapshots
└── examples/
    └── reborn-shortcut.sh            # pre-fills -D:/-P: for Reborn's Stock Game
```

**Implementation deletes during cleanup:**
- `pyproject.toml`
- `src/` entire tree
- `tests/unit/` entire tree
- `tests/fixtures/_spike/` entire tree (this session's probes)
- Empty `tests/fixtures/expected/` is replaced by snapshot files when tests are written

**Notable:**
- Pascal scripts ship together; users point xEdit at them. No installation step.
- xEdit is **not** vendored. Users supply `TES4Edit_patched.exe`.
- License **MPL-2.0** (matches xEdit's; lets us adapt code from bundled scripts if needed).
- No Reborn-specific code in the repo. `examples/reborn-shortcut.sh` is just a sample.

## Testing strategy

**Single layer: snapshot tests via shell.**

`tests/run_tests.sh` does, for each query:
1. Run the patched binary against `tests/fixtures/data/` with `tests/fixtures/loadorder.txt` and the appropriate query script with fixed args.
2. Strip volatile fields from the output (`meta.started_at`, `meta.duration_ms`, `meta.tool_version`).
3. `diff` against `tests/fixtures/expected/<query>.json`.
4. Exit non-zero on any diff.

**Test-runner contract:**
- Reads `OBLIVION_CONFLICTS_XEDIT` env var for the patched binary path. Errors with a clear message if unset.
- Supports `UPDATE_SNAPSHOTS=1` to overwrite expected files. Never auto-updates.
- Works in bash (Git Bash on Windows, native Linux). PowerShell variant is post-v1.

**No Python tests, no unit tests.** The Pascal scripts are simple enough that snapshot tests of full behavior are sufficient. If a script grows complex enough to warrant unit-level testing, that's a signal to split logic into `obc_lib.pas`.

**Fixtures regeneration:** `tests/fixtures/_generator/generate_fixtures.pas` is documented in `_generator/README.md`. Manual GUI step (see existing README) — not automated, not run as part of `run_tests.sh`.

**Smoketest:** `tests/fixtures/_generator/patch_smoketest.pas` proves the patched binary still works headlessly. Run separately if the binary is rebuilt.

**Caveat: `meta.load_order` may include the user's `Oblivion.exe` "plugin"** when running against a real game data dir (xEdit treats the engine as a synthetic plugin). For fixture tests this isn't relevant (only Master.esm/OverrideA/OverrideB load). Document and move on.

## Reborn integration

`examples/reborn-shortcut.sh` is a thin wrapper:
```bash
#!/usr/bin/env bash
XEDIT="${XEDIT:-D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe}"
DATA="${DATA:-D:/Modlists/Reborn/Stock Game/Data}"
PLUGINS="${PLUGINS:-D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt}"
SCRIPTS="$(dirname "$0")/../scripts"

QUERY="$1"; shift
"$XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$DATA" -P:"$PLUGINS" \
  -script:"$SCRIPTS/query_${QUERY}.pas" "$@"
```

Usage:
```bash
./reborn-shortcut.sh list --target=MOO.esp --out=/tmp/list.json
./reborn-shortcut.sh record --formid=1E012345 --formid=1E012346 --out=/tmp/rec.json
```

No equivalent in Reborn's main repo. The shortcut lives in oblivion-conflicts only; Reborn just consumes the JSON.

## Open questions deferred to implementation

- **Injected-record detection** without `-buildrefs`. May need `Definitions[]` lookups; if it gets ugly, ship `is_injected: null` and tackle in v1.1.
- **`GetSummary` availability** for `a_summary`/`b_summary` in `between`. Registered (verified by source grep at `xejviScriptAdapter.pas:2243`) but not yet smoke-tested. Fallback: empty string if it returns empty/throws.
- **`ConflictAllForElements` smoke test.** Registered, source path traces clean, but not yet run end-to-end. Implementation should validate it on the fixture before committing the `between` script.
- **xEdit version detection** for `meta.tool_version` (or rather, `meta.xedit_version`). `wbVersionNumber` is registered (`xejviScriptAdapter.pas:2191`). Prefer that to parsing `--version` output.
- **CRLF vs LF in output JSON.** `TStringList.SaveToFile` writes the platform default. Force LF for AI-friendly diffs by writing via a `TFileStream` directly. Implementation detail.

## Future work (post-v1)

- **`hotspots` query**: FormIDs where ≥N plugins disagree, ranked.
- **`plugin info` query**: masters, record counts by signature, ITPO/ITM stats, errors.
- **Filter flags** on overview queries: `--signature=WEAP`, `--min-chain=N`, `--editor-id-pattern=<regex>`.
- **Subrecord-path drilldown** in `record`: walk inside structs to expose per-field values (`DATA\Damage`, `DATA\Speed`, etc.).
- **Reverse lookup** ("what records reference FormID X?"): requires removing `-nobuildrefs`.
- **CELL/worldspace child records.**
- **Other games:** TES5/SSE/FO3/FNV/FO4/SF1.
- **Vanilla Oblivion plugin discovery** via `%LOCALAPPDATA%\Oblivion\Plugins.txt`.
- **Daemon mode** if startup latency becomes painful.
- **Conflict resolution / writing.** Bashed-Patch-style merging using xEdit's same engine.
- **Python or shell wrapper** around the scripts if argv-shuffling becomes painful (originally Approach B; deferred behind the demonstrated pain bar).

## Implementation order (suggested)

1. **Cleanup pass.** Delete `src/`, `tests/unit/`, `pyproject.toml`, `lib_json.pas`, `_smoke.pas`, `_spike/`. Single commit, no logic changes.
2. **Build `obc_lib.pas`.** Implement Esc/ConflictName/GetArg/GetArgs/HasArg/ParseFormID/NowIso8601/WriteOutput/MetaPrefix. Smoke-test by writing a tiny `_probe_lib.pas` that exercises every helper against the fixtures, runs headless, and writes a JSON we can eyeball.
3. **Build `query_list.pas`.** Run against fixtures, capture output, commit as `tests/fixtures/expected/query_list.json`. Verify by hand.
4. **Build `tests/run_tests.sh` skeleton** that runs `query_list` and diffs vs expected. Prove the snapshot loop works.
5. **Build `query_record.pas`** (next-most-useful query). Snapshot, run.
6. **Build `query_between.pas`** (last; depends on `ConflictAllForElements` working as expected — verify with a probe before committing the script).
7. **Documentation pass:** `README.md`, `tests/README.md`, `examples/reborn-shortcut.sh`.
8. **Final verification:** run `query_list` against the real Reborn load order, eyeball the output for sanity (this is dev-only, not a CI test).

Each step is a separate commit. Implementation can stop at any step and the repo remains useful.
