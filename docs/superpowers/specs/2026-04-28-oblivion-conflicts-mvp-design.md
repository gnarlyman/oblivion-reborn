# oblivion-conflicts — Design (MVP)

**Status:** Draft
**Date:** 2026-04-28
**Project:** APW Reborn (Oblivion MO2 modlist) — tooling, intended for sibling standalone repo

## Goal

A CLI tool that reports plugin conflicts in an Oblivion (TES4) load order in machine-readable JSON, suitable for direct consumption by AI agents or shell pipelines. It exposes a two-stage workflow: cheap *overview* queries that list conflicting FormIDs, and a heavier *drilldown* query that returns full field-level values for selected FormIDs across every plugin in the override chain.

The tool wraps xEdit (TES4Edit) running headlessly. It does not reimplement plugin parsing, conflict detection, or TES4 schemas — xEdit already does all of that. We add a thin Python CLI on top and a small set of Pascal scripts that drive xEdit's script API to emit JSON.

## Non-goals (v1)

- **Writing/modifying plugins.** xEdit's script API can create plugins, copy records as overrides, and edit fields; that's a future capability ("conflict resolution" / Bashed-Patch-style merging) and explicitly out of scope for the MVP.
- **CELL/worldspace child records.** v1 walks top-level records only. Iterating into cell children (TempReferences, PersistentReferences, regional grids, interior-vs-exterior variance) is non-trivial; deferred.
- **Save game files.** xEdit can read them; we don't.
- **Non-TES4 games.** The xEdit engine supports TES3/TES5/SF1/FO3/FNV/FO4/FO76; our queries are TES4-tested only. Adding `--game tes5` etc. is straightforward future work.
- **Vanilla Oblivion plugin discovery** via `%LOCALAPPDATA%\Oblivion\Plugins.txt`. Deferred. Only MO2-profile and explicit-list discovery in v1.
- **Daemon/warm-cache mode.** Each invocation eats xEdit's ~10–30s startup cost. Daemon mode is future work if it becomes painful.
- **GUI of any kind.** CLI only.
- **No per-record-type schema porting.** xEdit's schemas drive `GetEditValue`; we get decoded values for free for any record type xEdit knows about (which is essentially all of TES4).

## Why custom

xEdit has a powerful GUI for browsing conflicts (record view with red/yellow/green cells), and a Pascal script engine that can dump anything the GUI shows. There is no existing CLI that exposes the conflict view as structured data suitable for AI/scripting consumption. The bundled `Conflict Status.pas` and `Detect conflict between elements.pas` scripts compute the right things but emit unstructured text intended for the GUI's message log.

xEdit's license is **MPL-2.0** (file headers throughout `Core/`), so building a derivative tool on top of its scripts is unconstrained for our purposes.

## Approach

**Two-process architecture:**

1. **Python CLI** (`oblivion-conflicts` / short alias `obc`) is the user/AI entry point. It validates args, resolves the plugin list (from `--mo2-profile` or `--plugins`/`--plugins-file`), invokes xEdit headless with the right Pascal script and a sidecar JSON args file, then reads the JSON the script wrote and emits it on stdout.
2. **Pascal scripts** (`scripts/query_*.pas`) run inside xEdit's script engine. They use xEdit's existing record/override-chain API (`MasterOrSelf`, `OverrideByIndex`, `WinningOverride`, `RecordCount`, `GetEditValue`, `GetData`, etc.) to walk plugins and write JSON to a temp file. Two shared helper units: `lib_conflicts.pas` (traversal/winning logic) and `lib_json.pas` (write-only JSON emitter).

xEdit invocation (constructed by `xedit_runner.py`):

```
TES4Edit.exe -tes4 -nobuildrefs ^
  -script:scripts\query_<NAME>.pas ^
  -D:"<game-data-dir>" ^
  -PSEUDO:"<temp-load-list-file>" ^
  -IKnowWhatImDoing
```

Output JSON path is passed to the Pascal script via a sidecar args file (path provided by env var or `-Param:` — verified at implementation time).

**Why two-stage (overview vs drilldown):** an Oblivion modlist with 200 plugins running `obc list MOO.esp` could surface tens of thousands of conflicting FormIDs. Emitting full field-level values for every one of them at once produces tens of MB of JSON and isn't useful — an AI agent (or human) wants to see *which* records conflict first, then ask for values on the interesting ones. So the four commands split into three cheap "what's in conflict" queries and one heavier "what are the values" drilldown.

## Architecture diagram

```
user / AI agent
      │
      ▼
oblivion-conflicts CLI (Python)
 ├── argparse: subcommands list / between / winners / record
 ├── plugin source resolver (--mo2-profile | --plugins | --plugins-file)
 ├── xedit_runner: builds command line, invokes xEdit, manages tempfiles
 └── output: JSON to stdout (default) or human-readable table
      │
      ▼
TES4Edit.exe -tes4 -nobuildrefs -script:<query>.pas \
    -D:<DataDir> -PSEUDO:<plugin-list-tempfile>
      │
      ▼
Pascal scripts (one per query type, sharing two helper units)
 ├── lib_json.pas, lib_conflicts.pas
 ├── query_list.pas, query_between.pas, query_winners.pas, query_record.pas
      │
      ▼
JSON file at temp path → read by Python → emit to stdout
```

**Key invariants:**

- Python is the only thing the user runs. xEdit invocation is an implementation detail.
- JSON-default output to stdout. `--format human` for tabular view.
- Plugin list passed via tempfile, never as CLI args (avoids quoting issues with paths containing spaces).
- No persistent state between invocations. Output is deterministic given same plugin set + load order.

## CLI surface

**Tool name:** `oblivion-conflicts` (long), `obc` (short alias).

**Common flags** (apply to all subcommands):

| Flag | Required | Description |
|---|---|---|
| `--xedit-path PATH` | yes* | Path to `TES4Edit.exe` (or `xEdit.exe`). *Auto-discovered from `OBLIVION_CONFLICTS_XEDIT` env var if unset. Errors clearly if neither is set. |
| `--game-data PATH` | yes | Path to Oblivion `Data/` directory containing the .esp/.esm files. |
| `--mo2-profile PATH` | one-of | Resolves `plugins.txt` + `loadorder.txt` inside this profile dir. |
| `--plugins PLUGIN [PLUGIN ...]` | one-of | Explicit plugin list in load order, filenames only (resolved against `--game-data`). |
| `--plugins-file PATH` | one-of | One plugin filename per line, in load order. `#` comments allowed. |
| `--format {json,human}` | no | Default `json`. |
| `--quiet` | no | Suppress xEdit progress on stderr. |

Exactly one of `--mo2-profile` / `--plugins` / `--plugins-file` is required. Validated up-front.

**Subcommands:**

```
obc list <PLUGIN>
   Cheap overview. Every FormID in <PLUGIN> that ≥1 other loaded plugin
   touches, with full override chain. No values.

obc between <PLUGIN_A> <PLUGIN_B>
   Cheap overview. FormIDs both plugins touch, with which subrecord
   signatures differ between them (signature names only, no values).

obc winners <PLUGIN>
   Every FormID <PLUGIN> touches with the winning plugin per FormID.
   Indicates whether <PLUGIN> wins (is_winner: true).

obc record <FORMID> [<FORMID> ...]
   Drilldown. Full xEdit single-record-view JSON for each FormID:
   every subrecord's value across every plugin in the chain, with
   per-subrecord winner. Batched: one xEdit invocation handles all
   listed FormIDs (amortizes startup cost).
```

**FormIDs on the CLI:** load-order FormIDs (the 8-hex-digit value `list` output shows). Accepted formats: `0x1E012345`, `1E012345`, `1e012345`. The high byte is the master index in the current load order; low 3 bytes are the local form.

**Plugin args:** bare filenames (e.g. `MOO.esp`), matching how MO2's `plugins.txt` and xEdit's load list represent them. Resolution against `--game-data` is internal.

**Exit codes:**
- `0` success (with or without conflicts found)
- `1` user/argument error
- `2` xEdit failure (non-zero exit, missing binary, parse error)
- `3` plugin-not-loaded error (plugin arg names a file not in the resolved load order)

**Example invocations:**

```bash
# AI agent: "what conflicts touch MOO.esp in the Reborn-Base profile?"
obc list MOO.esp \
  --mo2-profile "D:/Modlists/Reborn/profiles/Reborn-Base" \
  --game-data   "D:/Modlists/Reborn/Stock Game/Data" \
  --xedit-path  "D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit.exe"

# Standalone: compare two plugins outside any modlist
obc between MOO.esp UnnecessaryViolence.esp \
  --plugins Oblivion.esm DLCShiveringIsles.esp MOO.esp UnnecessaryViolence.esp \
  --game-data "D:/Games/Oblivion/Data" \
  --xedit-path "C:/Tools/xEdit/TES4Edit.exe"

# Two-stage AI workflow
obc list MOO.esp [...] > overview.json
# AI picks 10 interesting FormIDs from overview
obc record 0x1E012345 0x1E012346 [...] > details.json
```

**AI-friendliness rules:**
- All flags are long-form (no short flags except `-h`).
- All errors go to stderr as a single JSON object (`--format json`) or plain text (`--format human`) — never mixed with stdout.
- No interactive prompts ever. xEdit runs with `-IKnowWhatImDoing` (suppresses warning dialogs) and `wbDontSave := True` in the script (skips save dialog).
- No streaming JSON, no NDJSON in v1. Single top-level object on stdout.

## Pascal scripts

**Layout (inside the Python package, located via `importlib.resources`):**

```
src/oblivion_conflicts/scripts/
  lib_json.pas             ← write-only JSON emitter
  lib_conflicts.pas        ← shared traversal & override-chain helpers
  query_list.pas           ← `list <plugin>`
  query_between.pas        ← `between <a> <b>`
  query_winners.pas        ← `winners <plugin>`
  query_record.pas         ← `record <formid> [...]`
```

**Argument passing.** xEdit script invocation doesn't accept arbitrary CLI args. Two mechanisms:

1. `-PSEUDO:<file>` — load list (one plugin per line, in order). xEdit treats this as the active plugin set.
2. **Sidecar args file** at a known temp path. The Pascal script reads it on `Initialize` to learn target plugin name(s), output JSON path, and command-specific options. The temp path is communicated via env var (`OBC_ARGS_FILE`) or xEdit's `-Param:` mechanism — to be confirmed at implementation time; either works.

**xEdit script API surface used:**

- `Files`, `FileByLoadOrder`, `FileCount` — load-order navigation
- `RecordCount`, `RecordByIndex` — iterate plugin's records
- `MasterOrSelf`, `OverrideCount`, `OverrideByIndex`, `WinningOverride` — override-chain walk
- `LoadOrderFormID`, `FormID`, `Signature`, `EditorID` — record identity
- `ElementCount`, `ElementByIndex`, `ElementBySignature`, `Path` — subrecord traversal
- `GetEditValue`, `GetData`, `GetDataSize` — subrecord values (decoded + raw)
- `wbDontSave := True` — skip save dialog on exit
- `wbAddMessage` — progress / debug to stderr
- `Initialize` / `Process` / `Finalize` — script lifecycle hooks

These all exist today and are used by bundled scripts (`Conflict Status.pas`, `BASH tags autodetection.pas`, etc.).

**`lib_json.pas` (JSON emitter):** small write-only API — `JsonOpenObj`, `JsonCloseObj`, `JsonOpenArr`, `JsonCloseArr`, `JsonKey(name)`, `JsonStr(s)`, `JsonInt(i)`, `JsonBool(b)`, `JsonNull`. Properly escapes control chars, `"`, `\`. We control the schema, so no parser is needed. Output goes to a `TStringList` buffered to disk on `Finalize`.

**`lib_conflicts.pas` (shared helpers):**
- `function ResolveLoadOrderFormIDStr(rec): string` → `"0xXXXXXXXX"`
- `function GetOverrideChain(rec): IInterface array` → master + every override in load order
- `function CompareSubrecordValues(elemA, elemB): boolean` → byte-equal raw data
- `procedure GroupSubrecordsBySig(rec; out map)` → for handling repeating subrecords
- `procedure ArgsLoad(out args)` → parse the sidecar JSON args file

## Conflict-detection algorithm

The four queries are all views over the **override chain** of a record. xEdit exposes this directly:

- Every record has a *load-order FormID* (canonical: master-index byte rewritten to point at the originating master plugin, regardless of which loaded plugin we're inspecting).
- Records sharing a load-order FormID across plugins form an **override chain**.
- `MasterOrSelf` returns the originating record; `OverrideByIndex(i)` walks each override in load order; `WinningOverride` returns the last one (= what the engine actually uses).

A "conflict" is any FormID with chain length ≥ 2 (master + ≥1 override).

**Engine semantics matter:** Oblivion's engine is *record-replace*, not field-merge. The winner of any subrecord equals the winner of the whole record (= `WinningOverride`). Per-field winner only matters when planning a Bashed-Patch-style merge that picks the latest value per field — which is exactly the use case the `record` drilldown supports informationally.

### `list <plugin>`

```
for rec in plugin.Records:
    chain := MasterOrSelf(rec).OverrideChain
    if chain.length < 2: continue
    emit {
        formid: LoadOrderFormID(rec),
        signature: rec.Signature,
        edid: rec.EditorID,
        master_plugin: MasterOrSelf(rec).File.Name,
        winner_plugin: WinningOverride(rec).File.Name,
        chain: [c.File.Name for c in chain],
        chain_length: chain.length,
        is_injected: <see edge cases>,
        is_deleted: rec.Flags & 0x20 != 0
    }
```

### `between <A> <B>`

```
recsA := { LoadOrderFormID(r): r for r in A.Records }
for rB in B.Records:
    fid := LoadOrderFormID(rB)
    if fid not in recsA: continue
    rA := recsA[fid]
    diff_sigs := []
    for sig in union of subrecord sigs in rA, rB:
        if not CompareSubrecordValues(rA.subrecs[sig], rB.subrecs[sig]):
            diff_sigs.append(sig)
    emit {
        formid: fid,
        signature: rA.Signature,
        edid: rA.EditorID,
        winner_plugin: WinningOverride(rA).File.Name,
        differing_subrecords: diff_sigs,
        identical_subrecords_count: <count>
    }
```

### `winners <plugin>`

```
for rec in plugin.Records:
    win := WinningOverride(rec)
    chain := MasterOrSelf(rec).OverrideChain
    emit {
        formid: LoadOrderFormID(rec),
        signature: rec.Signature,
        edid: rec.EditorID,
        winner_plugin: win.File.Name,
        is_winner: win == rec,
        chain: [c.File.Name for c in chain]
    }
```

### `record <FORMID> [...]`

For each requested FormID, locate the record (via any plugin in the load order whose load-order FormID matches) and walk the full chain:

```
for fid in requested:
    rec := find_record_by_load_order_formid(fid)
    if rec == null:
        emit {formid: fid, error: "not_found"}
        continue
    chain := MasterOrSelf(rec).OverrideChain
    winner := WinningOverride(rec)
    sigs := union of subrecord sigs across all chain links
    subrecords := []
    for sig in sigs:
        values := []
        for c in chain:
            sub := c.subrec(sig)
            if sub == null: continue
            values.append({
                plugin: c.File.Name,
                edit_value: GetEditValue(sub),
                raw_hex: hex(GetData(sub)),
                is_winner: c == winner
            })
        is_conflict := not all values' raw_hex equal
        winner_value := value of entry where is_winner
        subrecords.append({
            signature: sig,
            is_conflict: is_conflict,
            winner_plugin: winner.File.Name,
            winner_value: winner_value.edit_value,
            values: values
        })
    emit {
        formid: fid,
        signature: rec.Signature,
        edid: rec.EditorID,
        master_plugin: MasterOrSelf(rec).File.Name,
        winner_plugin: winner.File.Name,
        chain: [c.File.Name for c in chain],
        is_deleted: rec.Flags & 0x20 != 0,
        is_injected: <see edge cases>,
        subrecords: subrecords
    }
```

### Edge cases (handled in v1)

- **Injected records** (FormID master-byte points at a master that doesn't define the record — common with mods that inject into Oblivion.esm): treated as overrides of a synthetic chain rooted at the injection target. xEdit handles this internally via `MasterOrSelf`; we set `is_injected: true` on the emitted record.
- **ITPO ("identical to previous override")**: still appears in the chain. v1 does not flag it; v2 could mark `redundant: true`.
- **ITM ("identical to master")**: same — included unflagged in v1.
- **Deleted records** (`flags & 0x20`): included in chain with `is_deleted: true`.
- **Compressed records:** xEdit decompresses transparently. No action needed.
- **Repeating subrecords** (e.g., CONT records have many `CNTO` for inventory): grouped per-signature as ordered lists. `edit_value` and `raw_hex` represent the ordered concatenation; `CompareSubrecordValues` does ordered byte equality.
- **Subrecord present in some chain links and absent in others:** appears in `values[]` only for plugins that have it; absence doesn't make `is_conflict: true` by itself unless raw bytes differ where present.

### Edge cases (out of v1)

- CELL/worldspace child records (cell TempReferences, PersistentReferences, etc.) — see Non-goals.
- Save game records.
- Non-TES4 games.

## Output schemas

All commands share the same top-level shape:

```json
{
  "meta": {
    "tool_version": "0.1.0",
    "xedit_version": "4.1.5f",
    "game": "tes4",
    "command": "list",
    "args": { ... },
    "load_order": ["Oblivion.esm", "DLCShiveringIsles.esp", "..."],
    "started_at": "2026-04-28T18:23:11Z",
    "duration_ms": 12483
  },
  "results": [ ... ]
}
```

**Errors** (stderr, single JSON object):

```json
{"error": {"code": "plugin_not_loaded", "message": "MOO.esp is not in the load order", "details": {...}}}
```

### `list` results[] shape

```json
{
  "formid": "0x1E012345",
  "signature": "WEAP",
  "edid": "MOO_IronDagger",
  "master_plugin": "Oblivion.esm",
  "winner_plugin": "MOO.esp",
  "chain": ["Oblivion.esm", "OOO.esp", "MOO.esp"],
  "chain_length": 3,
  "is_injected": false,
  "is_deleted": false
}
```

### `between` results[] shape

```json
{
  "formid": "0x00012345",
  "signature": "WEAP",
  "edid": "IronDagger",
  "winner_plugin": "MOO.esp",
  "differing_subrecords": ["DATA", "MODL", "ENAM"],
  "identical_subrecords_count": 4
}
```

### `winners` results[] shape

```json
{
  "formid": "0x1E012345",
  "signature": "WEAP",
  "edid": "MOO_IronDagger",
  "winner_plugin": "MOO.esp",
  "is_winner": true,
  "chain": ["Oblivion.esm", "OOO.esp", "MOO.esp"]
}
```

### `record` results[] shape

```json
{
  "formid": "0x1E012345",
  "signature": "WEAP",
  "edid": "MOO_IronDagger",
  "master_plugin": "Oblivion.esm",
  "winner_plugin": "MOO.esp",
  "chain": ["Oblivion.esm", "OOO.esp", "MOO.esp"],
  "is_deleted": false,
  "is_injected": false,
  "subrecords": [
    {
      "signature": "DATA",
      "is_conflict": true,
      "winner_plugin": "MOO.esp",
      "winner_value": "Type: BluntOneHand, Speed: 1.30, Reach: 1.00, Flags: 0x00000000, Value: 25, Health: 600, Weight: 5.0, Damage: 8",
      "values": [
        {"plugin": "Oblivion.esm", "edit_value": "Type: BluntOneHand, Speed: 1.20, Reach: 1.00, Flags: 0x00000000, Value: 20, Health: 500, Weight: 5.0, Damage: 6", "raw_hex": "...", "is_winner": false},
        {"plugin": "OOO.esp",      "edit_value": "Type: BluntOneHand, Speed: 1.25, Reach: 1.00, Flags: 0x00000000, Value: 22, Health: 550, Weight: 5.0, Damage: 7", "raw_hex": "...", "is_winner": false},
        {"plugin": "MOO.esp",      "edit_value": "Type: BluntOneHand, Speed: 1.30, Reach: 1.00, Flags: 0x00000000, Value: 25, Health: 600, Weight: 5.0, Damage: 8", "raw_hex": "...", "is_winner": true}
      ]
    }
  ]
}
```

If a requested FormID isn't found in any loaded plugin, that entry's slot in `results[]` is `{"formid": "0x...", "error": "not_found"}` — the batch isn't aborted.

**Schema notes:**

- Every subrecord present in *any* chain link appears in `subrecords[]`. AI consumers can filter on `is_conflict: true`.
- `edit_value` is xEdit's decoded display string from `GetEditValue` — human-readable for any record type xEdit knows about (essentially all of TES4). For unknown subrecords falls back to a hex string.
- `raw_hex` is always the literal subrecord bytes — the deterministic source of truth for programmatic comparison.
- `values[]` excludes plugins in the chain that don't have that subrecord.

**Human format (`--format human`):** best-effort tabular for terminal use. Built last, drives off the same JSON internally. JSON is the contract.

## Repo structure

Standalone GitHub repo, modeled on `oblivion-monitor`. During initial development it can live as a working subdirectory of Reborn (similar to oblivion-monitor's history) and be subtree-split to its own repo once mature. Spec/plan stay in Reborn's `docs/superpowers/` as canonical history.

```
oblivion-conflicts/
├── README.md
├── LICENSE                          # MPL-2.0
├── pyproject.toml                   # Python 3.12+, uv/pip installable
├── .gitignore
├── .github/workflows/
│   └── ci.yml                       # ruff + pytest on push
│
├── src/oblivion_conflicts/
│   ├── __init__.py
│   ├── __main__.py                  # python -m oblivion_conflicts
│   ├── cli.py                       # argparse, subcommand dispatch
│   ├── plugin_source.py             # MO2 profile parser, --plugins resolver
│   ├── xedit_runner.py              # builds command line, invokes xEdit, manages tempfiles
│   ├── output.py                    # JSON pass-through + human-format renderer
│   ├── errors.py                    # error codes + structured stderr
│   └── scripts/
│       ├── lib_json.pas
│       ├── lib_conflicts.pas
│       ├── query_list.pas
│       ├── query_between.pas
│       ├── query_winners.pas
│       └── query_record.pas
│
├── tests/
│   ├── conftest.py
│   ├── fixtures/                    # tiny .esp fixtures + expected JSON
│   ├── unit/                        # plugin_source, output, error formatting
│   └── integration/                 # full CLI → xEdit → JSON round-trips
│
├── docs/
│   ├── output-schemas.md
│   └── pascal-scripts.md
│
└── examples/
    ├── reborn-shortcuts.sh          # pre-filled args for Reborn
    └── workflow.md                  # two-stage list → record example
```

**Notes:**

- Pascal scripts ship inside the Python package; `importlib.resources` locates them. Users don't manage them.
- xEdit is **not** vendored. Users point at their existing TES4Edit install via `--xedit-path` or `OBLIVION_CONFLICTS_XEDIT`.
- License **MPL-2.0** matches xEdit's, so adapting code from bundled scripts (`Conflict Status.pas` etc.) is unconstrained. Files we copy or substantially adapt get an attribution header.
- No Reborn-specific code in the repo. `examples/reborn-shortcuts.sh` is just a sample for users who happen to have Reborn.
- `pyproject.toml` console entry points wire `obc` and `oblivion-conflicts` to `oblivion_conflicts.cli:main`.

**Dependencies (runtime):** standard library only if possible. If `--format human` table rendering needs a library, `rich` is the only allowed runtime dep.

**Dependencies (dev):** `pytest`, `ruff`. Nothing else.

## Testing strategy

Three layers, increasing realism and cost:

**Unit tests (fast, no xEdit):**
- `plugin_source.py`: parses synthetic `plugins.txt` / `loadorder.txt` correctly. Handles BOM, comments, blank lines, missing files, conflicting flags.
- `output.py`: JSON shape stable across runs; human-format renderer produces expected tables.
- `errors.py`: each error code maps to expected stderr JSON.
- `xedit_runner.py`: builds the right command line for given inputs; no actual subprocess invocation — verify args.

**Pascal-script unit tests** (Pascal → JSON, requires xEdit):
- `tests/fixtures/` directory with smallest possible plugin set exercising every interesting case: master + 2 overrides for one record, an injected record, a deleted record, a record with repeating subrecords (CONT), a compressed record. Hand-built `.esp` files via xEdit GUI, ~20KB total, committed to repo.
- For each query script, run xEdit headless against the fixture set and snapshot-compare emitted JSON against `tests/fixtures/expected/query_X.json`.
- Snapshot updates require explicit `--update-snapshots` flag; never automatic.

**Integration tests (full CLI, requires xEdit):**
- Run actual `obc` CLI against the same fixtures. Verify exit codes, stdout JSON shape, stderr error format.
- Skipped automatically if `OBLIVION_CONFLICTS_XEDIT` env var is unset (CI without xEdit still passes the unit layer).

**No tests against Reborn's actual plugin set.** Plugin sets aren't reproducible across machines or modlist versions. Manual smoke-test against Reborn is the dev's pre-merge ritual, not automation.

**CI:** GitHub Actions runs the unit layer only (Python on Ubuntu, no xEdit). Pascal-script + integration layers run locally on Windows pre-merge.

## Open questions deferred to implementation

- **Sidecar args mechanism.** xEdit's `-Param:` flag may or may not be available; the alternative is an env var (`OBC_ARGS_FILE`). Both work; pick whichever is simpler at impl time.
- **xEdit version detection.** `meta.xedit_version` in output requires either parsing `--version` output or reading the binary's resource info. Verify which is reliable headless.
- **`-nobuildrefs` necessity.** Set for speed, but if any query needs cross-references (e.g., reverse-lookup of who references a record), we may need to drop it. v1 doesn't expose reverse-lookup so should be fine.
- **Output file path passed to script.** Either env var or sidecar args file. Both are fine; impl decides.

## Future work (post-v1)

- **Conflict resolution / writing.** Use the same engine to generate Bashed-Patch-style merged plugins, or "winner-picker" patches that pin specific subrecords from specific plugins.
- **Filter flags on overview queries:** `--signature WEAP --signature ARMO`, `--min-chain N`, `--editor-id-pattern <regex>`.
- **CELL/worldspace child records.**
- **`record` subrecord filters:** `--subrecord DATA --subrecord MODL` to limit which sigs are dumped.
- **Daemon mode.** Keep xEdit warm in the background; CLI commands talk to it over a local socket. Cuts per-query latency from ~30s to ~1s.
- **Reverse-lookup query:** "what records reference FormID X?" Requires `-nobuildrefs` removed.
- **Other games:** `--game tes5 | sse | fo4 | etc.`
- **Vanilla Oblivion plugin discovery** via `%LOCALAPPDATA%\Oblivion\Plugins.txt`.
- **`hotspots` query** (D from brainstorming): FormIDs where ≥N plugins disagree, ranked.
- **`plugin info` query** (F from brainstorming): masters, record counts by signature, ITPO/ITM stats, errors.
