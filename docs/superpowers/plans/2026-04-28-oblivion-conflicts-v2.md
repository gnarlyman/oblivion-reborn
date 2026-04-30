# Oblivion Conflicts v2 Implementation Plan

> ## Status: IMPLEMENTED 2026-04-29
>
> Repo published at **https://github.com/gnarlyman/oblivion-conflicts** (clone at `D:/Modlists/_clones/oblivion-conflicts`). `main` is at `5fe7e5d`, all 11 plan tasks complete (Task 11 verified manually, not committed).
>
> **Implementation diverged from this plan in three significant ways** — the plan text below is preserved as the original design intent, not as ground truth:
>
> 1. **No shared `obc_lib.pas` unit.** JvInterpreter resolves `uses` from xEdit's install-dir `Edit Scripts/`, not from the script's own dir. Helpers are inlined in each query script (~80-line preamble). See `feedback_pascal_script_quirks.md` memory for the full list of JvInterpreter constraints learned during implementation.
> 2. **`ConflictAllForElements` is unreachable** from headless JvInterpreter scripts. Per-subrecord `conflict_status` falls back to a local `GetEditValue` comparison. Overall record-level status still uses the authoritative `ConflictAllForMainRecord`.
> 3. **`jq` swapped for `python`** in `tests/run_tests.sh` (jq isn't installed; python is).
>
> Plus several smaller deltas — see commit history (`5fe7e5d` and ancestors) and `project_oblivion_conflicts.md` memory for the full picture. Task 11 (real-Reborn verification) required launching xEdit through MO2's USVFS — see `reference_xedit_mo2_launch.md` for that flow, which the plan didn't anticipate.

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Replace the deprecated Python-CLI MVP in `D:/Modlists/_clones/oblivion-conflicts/` with three Pascal scripts (`query_list`, `query_between`, `query_record`) plus a shared `obc_lib.pas` helper unit, driven by the patched headless `TES4Edit_patched.exe` and emitting structured JSON.

**Architecture:** Each query is a self-contained Pascal script invoked via `TES4Edit_patched.exe -script:<query>.pas <--script-args>`. It parses `--key=value` args from `ParamStr`, queries xEdit's conflict-detection API (`ConflictAllForMainRecord`, `ConflictAllForElements`, override-chain primitives), emits JSON via direct string concatenation, writes to `--out`, and returns 0 (clean Initialize return triggers `-autoexit`). Errors land in a structured `error` envelope written to the same `--out` path. A shared helpers unit (`obc_lib.pas`) lives next to the queries and is consumed via `uses obc_lib;`. Snapshot tests run via a Bash script that diffs actual JSON against committed expected files (volatile fields stripped).

**Tech Stack:** Pascal (JvInterpreter dialect inside xEdit — no `s[i]` indexing, no top-level `var foo: array[..] of T`, all bodies wrapped in `try/except`), `TES4Edit_patched.exe` (the existing binary at `D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe`), Bash + `jq` for snapshot testing.

**Working tree:** `D:/Modlists/_clones/oblivion-conflicts/` — its own git repo. All paths in this plan are relative to that root unless otherwise noted.

**Patched xEdit binary:** Path is set via the `OBLIVION_CONFLICTS_XEDIT` environment variable. For local Reborn runs:
```
export OBLIVION_CONFLICTS_XEDIT="D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe"
```

**Fixture facts (from spike, do not re-derive):**
- `tests/fixtures/data/` contains: `Master.esm`, `OverrideA.esp`, `OverrideB.esp`.
- `tests/fixtures/loadorder.txt`: 3 lines — `Master.esm`, `OverrideA.esp`, `OverrideB.esp` (in order).
- Records (master `Master.esm` defines all four; load-order FormIDs as shown):
  - `00001001 WEAP TestSword` — overridden by **A** (`Damage:7, Value:15`) and **B** (`Damage:6, Speed:1.2`) → `caConflict` (5).
  - `00001002 ARMO TestArmor` — overridden by **A** only (`Armor:20`) → `caOverride` (4).
  - `00001003 CONT TestChest` — overridden by **B** only (added inventory entry) → `caOverride` (4).
  - `00001004 WEAP TestDagger` — overridden by **A** only and **marked deleted** → `caOverride` (4) (deleted-override loses its EDID; spike confirmed).

---

## Target File Structure (after all tasks)

```
oblivion-conflicts/
├── README.md                         # Rewritten; describes Pascal-script bundle, usage, schema
├── LICENSE                           # MPL-2.0 (unchanged)
├── .gitignore                        # Pascal-only project; Python entries removed
├── scripts/
│   ├── obc_lib.pas                   # Shared helpers: Esc, ConflictName, GetArg(s), HasArg,
│   │                                 # ParseFormID, NowIso8601, WriteOutput, MetaContent
│   ├── query_list.pas                # --target=<plugin> --out=<path>
│   ├── query_between.pas             # --a=<plugin> --b=<plugin> --out=<path>
│   └── query_record.pas              # --formid=<hex> [--formid=...] --out=<path>
├── tests/
│   ├── run_tests.sh                  # Bash runner: invokes each query, normalises, diffs vs expected
│   ├── README.md                     # How to run tests; UPDATE_SNAPSHOTS=1 workflow
│   ├── fixtures/
│   │   ├── data/                     # Unchanged (Master.esm, OverrideA.esp, OverrideB.esp)
│   │   ├── loadorder.txt             # Unchanged
│   │   ├── _generator/               # Unchanged (generate_fixtures.pas, patch_smoketest.pas, README.md)
│   │   └── expected/
│   │       ├── query_list.json       # Snapshot: query_list --target=OverrideA.esp
│   │       ├── query_record.json     # Snapshot: query_record --formid=00001001 --formid=00001002
│   │       └── query_between.json    # Snapshot: query_between --a=OverrideA.esp --b=OverrideB.esp
└── examples/
    └── reborn-shortcut.sh            # Wrapper that pre-fills -D:/-P: for Reborn's Stock Game
```

**Deletes during cleanup (Task 1):** `pyproject.toml`, `src/` entire tree, `tests/unit/` entire tree, `tests/__init__.py`, `tests/__pycache__/`, `tests/fixtures/_spike/` entire tree, `.pytest_cache/`, `tests/fixtures/expected/.gitkeep` (replaced by snapshots later — but the dir stays).

---

## Task 1: Repository cleanup

Remove all deprecated Python-MVP and spike artefacts in one focused commit. No logic changes — pure deletion + minor `.gitignore`/`README.md` updates so the repo state is consistent with the v2 design before any new code lands.

**Files:**
- Delete (tracked): `pyproject.toml`, `src/oblivion_conflicts/{__init__,__main__,cli,errors,output,plugin_source,xedit_runner}.py`
- Delete (tracked): `tests/__init__.py`, `tests/unit/{__init__,test_cli,test_errors,test_output,test_plugin_source,test_xedit_runner}.py`
- Delete (untracked — `rm -rf` only): `src/oblivion_conflicts/scripts/` (contains `lib_json.pas`, `_smoke.pas`), `src/oblivion_conflicts/__pycache__/`, `tests/__pycache__/`, `tests/unit/__pycache__/`, `.pytest_cache/`, `tests/fixtures/_spike/`, `tests/fixtures/loadorder.tes4viewsettings`
- Add (currently untracked, but spec keeps it): `tests/fixtures/_generator/patch_smoketest.pas` — `git add` it as part of this commit so the keeper file is tracked.
- Delete (tracked): `tests/fixtures/expected/.gitkeep` — **deferred to Task 5** (replaced by the first real snapshot then). Leave it in place until Task 5; otherwise this task leaves an empty untracked dir for git to forget.
- Modify: `.gitignore`
- Modify: `README.md`

**Note on git state:** As of this plan's writing the repo's `main` HEAD is `f0cfa12 fix: use real xEdit flag -P: for plugins file`. Tracked Python files match the deletion list above; the spike artefacts and the two `.pas` smoke files under `src/oblivion_conflicts/scripts/` are uncommitted local working-tree files only.

- [ ] **Step 1.1: Confirm working tree state and branch**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git status
git branch --show-current
git ls-files src/ tests/ pyproject.toml
```

Expected: branch is `main` (or the feature branch the controller has set up). The `git ls-files` listing tells you which files are tracked — only those need `git rm`. Untracked files (`_spike/`, `loadorder.tes4viewsettings`, `src/oblivion_conflicts/scripts/`, `patch_smoketest.pas`) are removed with plain `rm -rf` or kept (in `patch_smoketest.pas`'s case) and `git add`ed.

- [ ] **Step 1.2: Delete tracked Python source + packaging**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git rm -r src/oblivion_conflicts/__init__.py \
         src/oblivion_conflicts/__main__.py \
         src/oblivion_conflicts/cli.py \
         src/oblivion_conflicts/errors.py \
         src/oblivion_conflicts/output.py \
         src/oblivion_conflicts/plugin_source.py \
         src/oblivion_conflicts/xedit_runner.py
git rm pyproject.toml
# Then nuke the untracked working-tree leftovers (lib_json.pas, _smoke.pas, __pycache__):
rm -rf src .pytest_cache
```

(`git rm` removed only the tracked files; the leftover `src/oblivion_conflicts/scripts/` directory and its untracked `.pas` files plus `__pycache__/` come out via `rm -rf src` and aren't tracked, so they don't need `git rm`.)

- [ ] **Step 1.3: Delete tracked Python tests**

```bash
git rm tests/__init__.py \
       tests/unit/__init__.py \
       tests/unit/test_cli.py \
       tests/unit/test_errors.py \
       tests/unit/test_output.py \
       tests/unit/test_plugin_source.py \
       tests/unit/test_xedit_runner.py
rm -rf tests/__pycache__ tests/unit/__pycache__
# tests/unit/ is now empty; remove the empty dir if present:
rmdir tests/unit 2>/dev/null || true
```

- [ ] **Step 1.4: Delete untracked spike artefacts and stale xEdit state**

```bash
rm -rf tests/fixtures/_spike
rm -f tests/fixtures/loadorder.tes4viewsettings
```

- [ ] **Step 1.4.1: Track the keeper smoketest script**

`tests/fixtures/_generator/patch_smoketest.pas` exists in the working tree but isn't yet tracked. The spec keeps it — add it now so it becomes part of this commit.

```bash
git add tests/fixtures/_generator/patch_smoketest.pas
```

- [ ] **Step 1.5: Update `.gitignore`**

The current `.gitignore` carries Python-specific entries that no longer apply. Replace its content with the Pascal-friendly version below. Use `Write` (full overwrite) since the file is small.

```
# Editor / OS
*.swp
.DS_Store
Thumbs.db

# Generated test artefacts
tests/.tmp/
tests/actual/

# xEdit per-data-dir state
*.tes4viewsettings

# Local environment
.env
.env.local
```

(`.tes4viewsettings` is what xEdit drops next to `loadorder.txt` when it runs — we don't want it churning in commits.)

- [ ] **Step 1.6: Rewrite `README.md` to a minimal v2-aligned stub**

Replace the file's content with this. The full README is finalised in Task 10; this stub just stops the file from claiming we're a Python CLI:

```markdown
# oblivion-conflicts

Pascal scripts that drive the patched headless `TES4Edit_patched.exe` to emit Oblivion (TES4) plugin-conflict information as machine-readable JSON.

Status: under active development (see `docs/` in the parent repo for the design and plan).

License: MPL-2.0.
```

- [ ] **Step 1.7: Verify the cleanup**

```bash
git status
ls -la
ls src tests/unit tests/fixtures/_spike pyproject.toml 2>&1 | head
```

Expected: `src/`, `tests/unit/`, `tests/fixtures/_spike/`, `pyproject.toml` all absent (each `ls` line errors with "No such file"). `git status` should show the tracked deletions staged, the modified `.gitignore` and `README.md`, and `tests/fixtures/_generator/patch_smoketest.pas` newly staged. Any remaining untracked files should be empty/expected — investigate anything surprising before committing.

- [ ] **Step 1.8: Commit**

```bash
git add .gitignore README.md
git commit -m "$(cat <<'EOF'
chore: remove Python MVP and spike artefacts

The Python CLI / lib_json / smoke / spike code was for the deprecated MVP
design. v2 is a Pascal-only bundle driven by the patched xEdit binary;
nothing under src/ or tests/unit/ applies. Spike probes served their
purpose and are replaced by the production scripts.

Also tracks tests/fixtures/_generator/patch_smoketest.pas (kept per the
v2 design; was previously untracked).

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 2: Scaffold `scripts/obc_lib.pas` and verify cross-unit `uses` works

The spec assumes `uses obc_lib;` resolves at the script's directory. The spike never tested this end-to-end (the closest case, `_smoke.pas`, was never run successfully). Validate the mechanism *first*, before building anything that depends on it. Implement the two stateless string helpers (`Esc`, `ConflictName`) and exercise them from a probe.

**Contingency:** if `uses obc_lib;` errors out at load time, fall back to inlining the helpers in each query script — duplication is ugly but proven to work (every spike script inlined `Esc`). Document the failure in Task 2's commit message and adjust later tasks accordingly.

**Files:**
- Create: `scripts/obc_lib.pas`
- Create: `scripts/_probe_lib.pas` (throwaway — deleted in Task 4)

- [ ] **Step 2.1: Create `scripts/` directory**

```bash
mkdir -p D:/Modlists/_clones/oblivion-conflicts/scripts
```

- [ ] **Step 2.2: Write `scripts/obc_lib.pas` with interface block + first two helpers**

Use `Write` to create the file:

```pascal
{
  obc_lib.pas — shared helpers for the oblivion-conflicts query scripts.

  JvInterpreter constraints (learned from the v2 spike on 2026-04-28):
    - No s[i] char indexing on strings (raises "Array type required").
      Use StringReplace / Copy(s,i,1) instead.
    - No top-level `var foo: array[0..N] of T` (silently short-circuits the
      whole script body). Keep state local to functions, or pass TStringList.
    - GetEnvironmentVariable is NOT exposed by the script adapter.
    - AddMessage output does NOT reach TES4Edit_log.txt under -autoload
      -autoexit. Diagnostics must go in the JSON output.
    - All scripts wrap Initialize in try/except; clean Initialize return is
      what triggers autoexit, so any uncaught exception hangs the binary.
}
unit obc_lib;

interface

uses Classes, SysUtils;

function Esc(const s: string): string;
function ConflictName(c: integer): string;

implementation

function Esc(const s: string): string;
begin
  Result := StringReplace(s, '\', '\\', [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"', [rfReplaceAll]);
  Result := StringReplace(Result, #13#10, '\n', [rfReplaceAll]);
  Result := StringReplace(Result, #10, '\n', [rfReplaceAll]);
  Result := StringReplace(Result, #13, '\n', [rfReplaceAll]);
  Result := StringReplace(Result, #9, '\t', [rfReplaceAll]);
  Result := StringReplace(Result, #8, '\b', [rfReplaceAll]);
  Result := StringReplace(Result, #12, '\f', [rfReplaceAll]);
  Result := '"' + Result + '"';
end;

function ConflictName(c: integer): string;
begin
  case c of
    0: Result := 'caUnknown';
    1: Result := 'caOnlyOne';
    2: Result := 'caNoConflict';
    3: Result := 'caConflictBenign';
    4: Result := 'caOverride';
    5: Result := 'caConflict';
    6: Result := 'caConflictCritical';
  else
    Result := 'caUnknown';
  end;
end;

end.
```

Notes:
- `Esc` returns the string already wrapped in double quotes — call sites concatenate it directly into JSON.
- We don't escape U+0000–U+001F generically (no `s[i]` allowed); we cover the common control characters explicitly. Untrusted JSON-injected strings are out of scope here.

- [ ] **Step 2.3: Write `scripts/_probe_lib.pas` to exercise the helpers**

```pascal
{
  _probe_lib.pas — verifies obc_lib.pas loads via `uses` and the helpers
  produce the expected JSON output. Throwaway; deleted at end of Task 4.

  Usage (assumes OBLIVION_CONFLICTS_XEDIT is set):
    "$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
      -D:tests/fixtures/data \
      -P:tests/fixtures/loadorder.txt \
      -script:scripts/_probe_lib.pas \
      --out=tests/.tmp/probe_lib.json
}
unit UserScript;

uses obc_lib;

function FindOutArg: string;
var i: integer; s: string;
begin
  Result := '';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, 6) = '--out=' then begin
      Result := Copy(s, 7, Length(s));
      Exit;
    end;
  end;
end;

function Initialize: integer;
var
  outPath, buf, errMsg: string;
  sl: TStringList;
  i: integer;
begin
  Result := 0;
  errMsg := '';
  buf := '{';
  try
    buf := buf + '"esc_simple":' + Esc('hello');
    buf := buf + ',"esc_quotes":' + Esc('a"b');
    buf := buf + ',"esc_backslash":' + Esc('a\b');
    buf := buf + ',"esc_path":' + Esc('C:\Modlists\test');
    buf := buf + ',"esc_newline":' + Esc('line1' + #13#10 + 'line2');
    buf := buf + ',"esc_tab":' + Esc('a' + #9 + 'b');
    buf := buf + ',"conflict_names":[';
    for i := 0 to 6 do begin
      if i > 0 then buf := buf + ',';
      buf := buf + Esc(ConflictName(i));
    end;
    buf := buf + ']';
  except
    on E: Exception do errMsg := E.Message;
  end;
  buf := buf + ',"error":' + Esc(errMsg) + '}';

  outPath := FindOutArg;
  if outPath = '' then outPath := 'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/probe_lib.json';

  sl := TStringList.Create;
  try
    sl.Text := buf;
    sl.SaveToFile(outPath);
  finally
    sl.Free;
  end;
end;

end.
```

- [ ] **Step 2.4: Make the temp output directory and run the probe**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
mkdir -p tests/.tmp

"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/_probe_lib.pas" \
  --out="$(pwd)/tests/.tmp/probe_lib.json"
```

The patched binary should exit cleanly (no GUI window left open) within ~10–30 seconds. If it hangs with a popup, kill it (`taskkill //IM TES4Edit_patched.exe //F` in Git Bash) — that means autoexit didn't fire and there's a Pascal-level error.

- [ ] **Step 2.5: Inspect probe output**

```bash
cat tests/.tmp/probe_lib.json
```

Expected (single line; pretty-printing for readability here):
```json
{
  "esc_simple": "hello",
  "esc_quotes": "a\"b",
  "esc_backslash": "a\\b",
  "esc_path": "C:\\Modlists\\test",
  "esc_newline": "line1\nline2",
  "esc_tab": "a\tb",
  "conflict_names": ["caUnknown","caOnlyOne","caNoConflict","caConflictBenign","caOverride","caConflict","caConflictCritical"],
  "error": ""
}
```

If `error` is non-empty, the message tells you what failed inside `try/except`. If the file is **empty**, that's the JvInterpreter "silent failure" pattern — usually a top-level `var foo: array[..] of T` somewhere; here it would mean `uses obc_lib;` itself failed to load. Fall back to inlining helpers (see Task 2's contingency note above).

If the output looks wrong but non-empty, edit `obc_lib.pas` accordingly and re-run the probe.

- [ ] **Step 2.6: Commit**

`_probe_lib.pas` is committed too — it gets deleted in Task 4 once the rest of `obc_lib` is built and exercised.

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git add scripts/obc_lib.pas scripts/_probe_lib.pas
git commit -m "$(cat <<'EOF'
feat(obc_lib): add Esc and ConflictName helpers + verify uses-obc_lib

Probe confirms cross-unit `uses obc_lib;` resolves under the patched
headless binary. Esc covers the control characters JvInterpreter lets
us pattern-match without char indexing.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 3: Add argument-parsing helpers to `obc_lib.pas`

Add `GetArg`, `HasArg`, `GetArgs`, and `ParseFormID`. Extend the probe to exercise them with realistic args (single, multi-valued, FormID with and without `0x` prefix).

**Files:**
- Modify: `scripts/obc_lib.pas` (add 4 helpers)
- Modify: `scripts/_probe_lib.pas` (extend with arg-reading section)

- [ ] **Step 3.1: Add the four helpers to `obc_lib.pas`**

Edit `scripts/obc_lib.pas`. In the `interface` section, add (after `function ConflictName(c: integer): string;`):

```pascal
function GetArg(const key: string): string;
function HasArg(const key: string): boolean;
function GetArgs(const key: string): TStringList;
function ParseFormID(const s: string): cardinal;
```

In the `implementation` section, add (before `end.`):

```pascal
function GetArg(const key: string): string;
var
  i: integer;
  prefix, s: string;
begin
  Result := '';
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then begin
      Result := Copy(s, Length(prefix) + 1, Length(s));
      Exit;
    end;
  end;
end;

function HasArg(const key: string): boolean;
var
  i: integer;
  prefix, s: string;
begin
  Result := False;
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then begin
      Result := True;
      Exit;
    end;
  end;
end;

function GetArgs(const key: string): TStringList;
var
  i: integer;
  prefix, s: string;
begin
  Result := TStringList.Create;
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then
      Result.Add(Copy(s, Length(prefix) + 1, Length(s)));
  end;
end;

function ParseFormID(const s: string): cardinal;
var
  body: string;
begin
  body := s;
  if (Length(body) >= 2) and (Copy(body, 1, 2) = '0x') then
    body := Copy(body, 3, Length(body))
  else if (Length(body) >= 2) and (Copy(body, 1, 2) = '0X') then
    body := Copy(body, 3, Length(body));
  Result := StrToInt64('$' + body);
end;
```

Notes:
- `GetArgs` returns a freshly allocated `TStringList`; **the caller must `Free` it.** Multi-valued args (`--formid=` repeated) use this.
- `ParseFormID` accepts both `0x1E012345` and bare `1E012345` (any case). It does *not* validate the result is in range — JvInterpreter's `StrToInt64` will raise on garbage, and the script's `try/except` catches that into the error envelope.

- [ ] **Step 3.2: Extend `_probe_lib.pas` to exercise the new helpers**

Replace the body of `Initialize` in `scripts/_probe_lib.pas` so it also produces the new sections. The full updated file:

```pascal
{
  _probe_lib.pas — verifies obc_lib.pas loads via `uses` and the helpers
  produce the expected JSON output. Throwaway; deleted at end of Task 4.

  Usage:
    "$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
      -D:tests/fixtures/data \
      -P:tests/fixtures/loadorder.txt \
      -script:scripts/_probe_lib.pas \
      --out=tests/.tmp/probe_lib.json \
      --target=MOO.esp \
      --formid=0x1E012345 --formid=DEADBEEF
}
unit UserScript;

uses obc_lib;

function Initialize: integer;
var
  outPath, buf, errMsg: string;
  sl, fids: TStringList;
  i: integer;
begin
  Result := 0;
  errMsg := '';
  buf := '{';
  try
    buf := buf + '"esc_simple":' + Esc('hello');
    buf := buf + ',"esc_quotes":' + Esc('a"b');
    buf := buf + ',"esc_backslash":' + Esc('a\b');
    buf := buf + ',"esc_path":' + Esc('C:\Modlists\test');
    buf := buf + ',"esc_newline":' + Esc('line1' + #13#10 + 'line2');
    buf := buf + ',"esc_tab":' + Esc('a' + #9 + 'b');

    buf := buf + ',"conflict_names":[';
    for i := 0 to 6 do begin
      if i > 0 then buf := buf + ',';
      buf := buf + Esc(ConflictName(i));
    end;
    buf := buf + ']';

    buf := buf + ',"arg_target":' + Esc(GetArg('target'));
    buf := buf + ',"has_target":';
    if HasArg('target') then buf := buf + 'true' else buf := buf + 'false';
    buf := buf + ',"arg_missing":' + Esc(GetArg('does_not_exist'));
    buf := buf + ',"has_missing":';
    if HasArg('does_not_exist') then buf := buf + 'true' else buf := buf + 'false';

    fids := GetArgs('formid');
    try
      buf := buf + ',"formid_count":' + IntToStr(fids.Count);
      buf := buf + ',"formids":[';
      for i := 0 to fids.Count - 1 do begin
        if i > 0 then buf := buf + ',';
        buf := buf + Esc(fids[i]);
      end;
      buf := buf + ']';
      buf := buf + ',"formids_parsed":[';
      for i := 0 to fids.Count - 1 do begin
        if i > 0 then buf := buf + ',';
        buf := buf + Esc(IntToHex(ParseFormID(fids[i]), 8));
      end;
      buf := buf + ']';
    finally
      fids.Free;
    end;
  except
    on E: Exception do errMsg := E.Message;
  end;
  buf := buf + ',"error":' + Esc(errMsg) + '}';

  outPath := GetArg('out');
  if outPath = '' then outPath := 'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/probe_lib.json';

  sl := TStringList.Create;
  try
    sl.Text := buf;
    sl.SaveToFile(outPath);
  finally
    sl.Free;
  end;
end;

end.
```

- [ ] **Step 3.3: Run the probe with realistic args**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/_probe_lib.pas" \
  --out="$(pwd)/tests/.tmp/probe_lib.json" \
  --target=MOO.esp \
  --formid=0x1E012345 --formid=DEADBEEF
```

- [ ] **Step 3.4: Inspect output**

```bash
cat tests/.tmp/probe_lib.json
```

Expected (formatted for readability — actual is one line):
```json
{
  "esc_simple": "hello", "esc_quotes": "a\"b", "esc_backslash": "a\\b",
  "esc_path": "C:\\Modlists\\test", "esc_newline": "line1\nline2", "esc_tab": "a\tb",
  "conflict_names": ["caUnknown","caOnlyOne","caNoConflict","caConflictBenign","caOverride","caConflict","caConflictCritical"],
  "arg_target": "MOO.esp",
  "has_target": true,
  "arg_missing": "",
  "has_missing": false,
  "formid_count": 2,
  "formids": ["0x1E012345","DEADBEEF"],
  "formids_parsed": ["1E012345","DEADBEEF"],
  "error": ""
}
```

Key checks:
- `arg_target` is `"MOO.esp"` (extra-arg passthrough confirmed working).
- `has_missing` is `false` and `arg_missing` is `""`.
- `formid_count` is `2`.
- Both raw FormIDs parse to the same canonical 8-char hex.
- `error` is empty.

If anything mismatches, fix `obc_lib.pas` and re-run.

- [ ] **Step 3.5: Commit**

```bash
git add scripts/obc_lib.pas scripts/_probe_lib.pas
git commit -m "$(cat <<'EOF'
feat(obc_lib): add GetArg/HasArg/GetArgs/ParseFormID

Probe confirms ParamStr-based --key=value arg passing works under the
patched binary. ParseFormID accepts both 0x-prefixed and bare hex.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 4: Add output helpers to `obc_lib.pas`, exercise via probe, then delete probe

Implement `NowIso8601`, `WriteOutput`, and `MetaContent`. Verify everything via the probe one last time, then delete the probe (its job is done).

**Files:**
- Modify: `scripts/obc_lib.pas`
- Modify: `scripts/_probe_lib.pas`
- Delete: `scripts/_probe_lib.pas` (after verification)

- [ ] **Step 4.1: Add the three helpers to `obc_lib.pas`**

In the `interface` section, after the existing helpers, add:

```pascal
function NowIso8601: string;
procedure WriteOutput(const path, content: string);
function MetaContent(const query, argsJson, startedAt: string;
                     durationMs: integer): string;
```

In the `implementation` section, add:

```pascal
function NowIso8601: string;
var
  d: TDateTime;
begin
  // FormatDateTime against current UTC. JvInterpreter exposes
  // SysUtils.Now (local time) but no GetSystemTime; we approximate UTC by
  // subtracting the local TZ offset via TTimeZone if available, otherwise
  // emit local time labelled with "Z" — acceptable here because this field
  // is stripped from snapshot diffs and is only informational.
  d := Now;
  Result := FormatDateTime('yyyy"-"mm"-"dd"T"hh":"nn":"ss"Z"', d);
end;

procedure WriteOutput(const path, content: string);
var
  fs: TFileStream;
  bytes: AnsiString;
begin
  // TStringList.SaveToFile writes the platform default line ending. We want
  // LF for AI-/diff-friendliness, so write the raw bytes via TFileStream.
  // The output JSON is single-line so this mostly matters when content
  // happens to embed newlines.
  bytes := AnsiString(content);
  fs := TFileStream.Create(path, fmCreate);
  try
    if Length(bytes) > 0 then
      fs.Write(bytes[1], Length(bytes));
  finally
    fs.Free;
  end;
end;

function MetaContent(const query, argsJson, startedAt: string;
                     durationMs: integer): string;
var
  i: integer;
  loStr, xeditVer: string;
begin
  loStr := '';
  for i := 0 to FileCount - 1 do begin
    if i > 0 then loStr := loStr + ',';
    loStr := loStr + Esc(GetFileName(FileByLoadOrder(i)));
  end;

  xeditVer := '';
  try
    xeditVer := wbVersionNumber;
  except
    xeditVer := '';
  end;

  Result := '{';
  Result := Result + '"tool_version":' + Esc('0.1.0');
  if xeditVer <> '' then
    Result := Result + ',"xedit_version":' + Esc(xeditVer);
  Result := Result + ',"query":' + Esc(query);
  Result := Result + ',"args":' + argsJson;
  Result := Result + ',"load_order":[' + loStr + ']';
  Result := Result + ',"started_at":' + Esc(startedAt);
  Result := Result + ',"duration_ms":' + IntToStr(durationMs);
  Result := Result + '}';
end;
```

Notes:
- `NowIso8601` labels output as UTC (`Z`) but actually uses `Now` (local time). The `started_at` field is stripped from snapshot diffs, so the label fidelity doesn't affect tests. Documented in the comment; if a future task needs real UTC, switch to a `TTimeZone`-based call.
- `WriteOutput` writes raw bytes to a `TFileStream`. The `AnsiString` cast keeps us in 1-byte-per-char territory — JvInterpreter's `string` is already `AnsiString`-compatible, but the explicit cast is safe and clarifies intent.
- `MetaContent` swallows any exception from `wbVersionNumber` (the spike registered it but never smoke-tested it): if it raises or returns empty, we omit the field rather than emitting `"xedit_version":""`. This matches the spec's "omitted from the meta object if the call returns empty".
- `argsJson` is passed in pre-formatted by each query (different queries have different arg shapes; doing it in obc_lib would require generalising over key types). The query is responsible for producing a valid JSON object literal here.

- [ ] **Step 4.2: Update `_probe_lib.pas` one more time to exercise the output helpers**

Replace the file content:

```pascal
{
  _probe_lib.pas — final probe before deletion. Verifies the output
  helpers in obc_lib.pas: NowIso8601, WriteOutput, MetaContent.
}
unit UserScript;

uses obc_lib;

function Initialize: integer;
var
  outPath, buf, args, errMsg: string;
begin
  Result := 0;
  errMsg := '';
  outPath := GetArg('out');
  if outPath = '' then outPath := 'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/probe_lib.json';

  buf := '';
  try
    args := '{"out":' + Esc(outPath) + ',"target":' + Esc('MOO.esp') + '}';
    buf := '{';
    buf := buf + '"meta":' + MetaContent('probe', args, NowIso8601, 1234);
    buf := buf + ',"results":[]';
    buf := buf + '}';
  except
    on E: Exception do begin
      errMsg := E.Message;
      buf := '{"error":' + Esc(errMsg) + '}';
    end;
  end;

  WriteOutput(outPath, buf);
end;

end.
```

- [ ] **Step 4.3: Run the probe**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/_probe_lib.pas" \
  --out="$(pwd)/tests/.tmp/probe_lib.json"
```

- [ ] **Step 4.4: Inspect output**

```bash
jq . tests/.tmp/probe_lib.json
```

Expected (jq formats it):
```json
{
  "meta": {
    "tool_version": "0.1.0",
    "xedit_version": "4.1.5f",
    "query": "probe",
    "args": {
      "out": ".../probe_lib.json",
      "target": "MOO.esp"
    },
    "load_order": [
      "Master.esm",
      "OverrideA.esp",
      "OverrideB.esp"
    ],
    "started_at": "2026-04-28T...Z",
    "duration_ms": 1234
  },
  "results": []
}
```

Key checks:
- `xedit_version` is present and looks like `"4.1.5f"` (or whatever the patched binary reports). If absent, `wbVersionNumber` isn't actually exposed under the patched binary's headless mode — leave the absence as-is (`MetaContent` already handles that path).
- `load_order` lists the three fixture plugins.
- `started_at` is a parseable ISO-8601-ish timestamp.
- `args` is an embedded JSON object (not stringified).

`load_order` may *also* include `Oblivion.exe` as a synthetic plugin when running against a real game data dir — for fixture data this won't happen.

- [ ] **Step 4.5: Delete the probe**

```bash
git rm scripts/_probe_lib.pas
rm -f tests/.tmp/probe_lib.json
```

- [ ] **Step 4.6: Commit**

```bash
git add scripts/obc_lib.pas
git commit -m "$(cat <<'EOF'
feat(obc_lib): add NowIso8601, WriteOutput, MetaContent; remove probe

WriteOutput uses TFileStream so output JSON is plain LF/no-BOM (no
TStringList platform-default endings). MetaContent omits xedit_version
gracefully if wbVersionNumber is unavailable.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 5: Build `query_list.pas`

The first production query. Iterates the target plugin's records, calls `ConflictAllForMainRecord`, emits any record with status `>= caOverride` (4). Uses the override-chain primitives proven in the spike.

**Files:**
- Create: `scripts/query_list.pas`

- [ ] **Step 5.1: Write `scripts/query_list.pas`**

```pascal
{
  query_list.pas — list every record in --target where xEdit detects a
  conflict status >= caOverride (i.e. anything someone else also touches).

  Args:
    --target=<plugin.esp>  required
    --out=<path>           required
}
unit UserScript;

uses obc_lib;

const
  TOOL_VERSION = '0.1.0';
  CA_OVERRIDE  = 4;

function ChainList(master: IInterface; ovrCount: integer): string;
var
  i: integer;
  link: IInterface;
begin
  Result := Esc(GetFileName(GetFile(master)));
  for i := 0 to ovrCount - 1 do begin
    link := OverrideByIndex(master, i);
    Result := Result + ',' + Esc(GetFileName(GetFile(link)));
  end;
end;

function ResolveEdid(rec, master: IInterface): string;
var
  edid: string;
begin
  // Deleted overrides lose EDID; fall back to the master's.
  edid := EditorID(rec);
  if (edid = '') and Assigned(master) then
    edid := EditorID(master);
  Result := edid;
end;

function IsInjected(master: IInterface; const targetName: string): boolean;
var
  masterFile: IInterface;
  expected: cardinal;
  actual: cardinal;
begin
  // A record is injected when its FormID's master byte points at a plugin
  // that doesn't define it. xEdit's MasterOrSelf returns the synthetic
  // injection target (the file the master byte points to). We compare the
  // load-order index encoded in the FormID against the file we got back.
  Result := False;
  if not Assigned(master) then Exit;
  masterFile := GetFile(master);
  if not Assigned(masterFile) then Exit;
  // Best-effort: if the master file's load-order index doesn't match the
  // top byte of the record's load-order FormID, we treat that as injected.
  expected := GetLoadOrder(masterFile);
  actual := GetLoadOrderFormID(master) shr 24;
  Result := expected <> actual;
end;

function RecordEntry(rec: IInterface): string;
var
  master, win: IInterface;
  ovrCount, status: integer;
  isWinner, isDeleted, injected: boolean;
begin
  master    := MasterOrSelf(rec);
  win       := WinningOverride(rec);
  ovrCount  := OverrideCount(master);
  status    := ConflictAllForMainRecord(rec);
  isWinner  := SameText(GetFileName(GetFile(rec)), GetFileName(GetFile(win)));
  isDeleted := GetIsDeleted(rec);
  injected  := IsInjected(master, GetFileName(GetFile(rec)));

  Result := '{';
  Result := Result + '"lo_formid_hex":' + Esc(IntToHex(GetLoadOrderFormID(rec), 8));
  Result := Result + ',"signature":' + Esc(Signature(rec));
  Result := Result + ',"edid":' + Esc(ResolveEdid(rec, master));
  Result := Result + ',"master_plugin":' + Esc(GetFileName(GetFile(master)));
  Result := Result + ',"winner_plugin":' + Esc(GetFileName(GetFile(win)));
  Result := Result + ',"is_winner":';
  if isWinner then Result := Result + 'true' else Result := Result + 'false';
  Result := Result + ',"is_deleted":';
  if isDeleted then Result := Result + 'true' else Result := Result + 'false';
  Result := Result + ',"is_injected":';
  if injected then Result := Result + 'true' else Result := Result + 'false';
  Result := Result + ',"conflict_status":' + Esc(ConflictName(status));
  Result := Result + ',"chain":[' + ChainList(master, ovrCount) + ']';
  Result := Result + '}';
end;

function FindPluginByName(const name: string): IInterface;
var
  i: integer;
  f: IInterface;
begin
  Result := nil;
  for i := 0 to FileCount - 1 do begin
    f := FileByLoadOrder(i);
    if SameText(GetFileName(f), name) then begin
      Result := f;
      Exit;
    end;
  end;
end;

function BuildArgsJson(const target, outPath: string): string;
begin
  Result := '{';
  Result := Result + '"target":' + Esc(target);
  Result := Result + ',"out":' + Esc(outPath);
  Result := Result + '}';
end;

function ErrorEnvelope(const query, argsJson, startedAt: string;
                      durationMs: integer;
                      const code, msg: string): string;
begin
  Result := '{';
  Result := Result + '"meta":' + MetaContent(query, argsJson, startedAt, durationMs);
  Result := Result + ',"error":{"code":' + Esc(code) + ',"message":' + Esc(msg) + '}';
  Result := Result + '}';
end;

function Initialize: integer;
var
  target, outPath, startedAt, errMsg, args, results, buf: string;
  startD: TDateTime;
  durationMs, status, recordsEmitted: integer;
  pluginFile, rec: IInterface;
  i: integer;
  emittedOne: boolean;
begin
  Result := 0;
  startD := Now;
  startedAt := NowIso8601;

  outPath := GetArg('out');
  target  := GetArg('target');
  args    := BuildArgsJson(target, outPath);

  if outPath = '' then begin
    // No --out: we have nowhere to write. Still try to leave SOMETHING on
    // disk at a deterministic path so the caller can find the failure.
    outPath := 'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/query_list_error.json';
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope('list', args, startedAt, durationMs,
                    'missing_arg', '--out is required'));
    Exit;
  end;

  if target = '' then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope('list', args, startedAt, durationMs,
                    'missing_arg', '--target is required'));
    Exit;
  end;

  pluginFile := FindPluginByName(target);
  if not Assigned(pluginFile) then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope('list', args, startedAt, durationMs,
                    'plugin_not_loaded',
                    'plugin "' + target + '" not in load order'));
    Exit;
  end;

  results := '';
  recordsEmitted := 0;
  emittedOne := False;
  errMsg := '';
  try
    for i := 0 to RecordCount(pluginFile) - 1 do begin
      rec := RecordByIndex(pluginFile, i);
      if Signature(rec) = 'TES4' then Continue;
      status := ConflictAllForMainRecord(rec);
      if status < CA_OVERRIDE then Continue;
      if emittedOne then results := results + ',';
      results := results + RecordEntry(rec);
      Inc(recordsEmitted);
      emittedOne := True;
    end;
  except
    on E: Exception do errMsg := E.Message;
  end;

  durationMs := Round((Now - startD) * 86400000);

  if errMsg <> '' then begin
    WriteOutput(outPath,
      ErrorEnvelope('list', args, startedAt, durationMs,
                    'xedit_internal', errMsg));
    Exit;
  end;

  buf := '{';
  buf := buf + '"meta":' + MetaContent('list', args, startedAt, durationMs);
  buf := buf + ',"results":[' + results + ']';
  buf := buf + '}';
  WriteOutput(outPath, buf);
end;

end.
```

Notes:
- `IsInjected` is best-effort. If the heuristic flags false positives for ordinary records, swap the body for `Result := False;` and emit `is_injected: false` everywhere — the spec accepts that fallback ("if it turns out to be hard to detect headlessly, drop to `is_injected: null` and document"). Verify with the fixture run: nothing should be flagged injected there.
- The `Signature(rec) = 'TES4'` skip drops the file-header pseudo-record (every plugin has one).
- Duration is computed via `(Now - startD) * 86400000` because `Now` is fractional days.
- `Round` is used to coerce to integer; precision is well above what we need.

- [ ] **Step 5.2: Run against fixtures (target = OverrideA.esp)**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
mkdir -p tests/.tmp
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/query_list.pas" \
  --target=OverrideA.esp \
  --out="$(pwd)/tests/.tmp/query_list.json"
```

- [ ] **Step 5.3: Inspect output**

```bash
jq . tests/.tmp/query_list.json
```

Expected `results` (3 entries — order should match record-iteration order in OverrideA.esp):

| `lo_formid_hex` | `signature` | `edid`        | `master_plugin` | `winner_plugin` | `is_winner` | `is_deleted` | `is_injected` | `conflict_status` | `chain`                                                |
|-----------------|-------------|---------------|-----------------|-----------------|-------------|--------------|---------------|-------------------|--------------------------------------------------------|
| `00001001`      | `WEAP`      | `TestSword`   | `Master.esm`    | `OverrideB.esp` | `false`     | `false`      | `false`       | `caConflict`      | `["Master.esm","OverrideA.esp","OverrideB.esp"]`       |
| `00001002`      | `ARMO`      | `TestArmor`   | `Master.esm`    | `OverrideA.esp` | `true`      | `false`      | `false`       | `caOverride`      | `["Master.esm","OverrideA.esp"]`                       |
| `00001004`      | `WEAP`      | `TestDagger`  | `Master.esm`    | `OverrideA.esp` | `true`      | `true`       | `false`       | `caOverride`      | `["Master.esm","OverrideA.esp"]`                       |

Critical checks:
- **3 entries**, not 4 — `TestChest` is owned by Master.esm but only OverrideB touches it; OverrideA doesn't touch it, so it must NOT appear here.
- `TestDagger.edid` is `"TestDagger"`, not `""` — the `ResolveEdid` master fallback must work.
- `TestSword.is_winner` is `false` (B wins), `TestArmor.is_winner` is `true` (A is the only override), `TestDagger.is_winner` is `true`.
- All `is_injected` are `false` — fixtures have no injected records.
- `chain` is the load-order list, master first.

If any field is wrong, fix `query_list.pas` and re-run. Common issues:
- Empty file → `try`/`except` caught a Pascal-level error; check `error.message` in the JSON.
- `is_injected: true` on fixture records → `IsInjected` heuristic is mis-triggered; replace its body with `Result := False;`.

- [ ] **Step 5.4: Capture as the expected snapshot**

We commit the JSON pretty-printed and with volatile fields nulled out, so reviewers can read the diff.

```bash
mkdir -p tests/fixtures/expected
jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version)' \
  tests/.tmp/query_list.json \
  > tests/fixtures/expected/query_list.json
cat tests/fixtures/expected/query_list.json
```

The expected file should now have 3 entries in `results` and a meta block without the three volatile keys (no tool_version, no started_at, no duration_ms; xedit_version stays).

- [ ] **Step 5.5: Commit**

```bash
git add scripts/query_list.pas tests/fixtures/expected/query_list.json
# If the .gitkeep in tests/fixtures/expected/ still exists, drop it:
[ -f tests/fixtures/expected/.gitkeep ] && git rm tests/fixtures/expected/.gitkeep
git commit -m "$(cat <<'EOF'
feat(query_list): list conflicts for a target plugin + fixture snapshot

Iterates RecordByIndex on the target, filters by ConflictAllForMainRecord
>= caOverride, emits chain via MasterOrSelf+OverrideByIndex. Best-effort
is_injected heuristic; deleted-override edid falls back to master.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 6: Build `tests/run_tests.sh` snapshot harness

The first integration of run_tests.sh — wire up `query_list` and prove the snapshot loop works.

**Files:**
- Create: `tests/run_tests.sh`

**Tooling note:** `jq` is required (used to strip volatile meta fields and pretty-print). On Git Bash for Windows, install via `scoop install jq` or `choco install jq`. The script errors with a clear message if `jq` is missing.

- [ ] **Step 6.1: Write `tests/run_tests.sh`**

```bash
#!/usr/bin/env bash
# run_tests.sh — snapshot tests for the oblivion-conflicts query scripts.
#
# Usage:
#   OBLIVION_CONFLICTS_XEDIT="/path/to/TES4Edit_patched.exe" ./tests/run_tests.sh
#
# Set UPDATE_SNAPSHOTS=1 to overwrite the expected files instead of diffing.

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
DATA_DIR="$REPO_ROOT/tests/fixtures/data"
PLUGINS="$REPO_ROOT/tests/fixtures/loadorder.txt"
SCRIPTS_DIR="$REPO_ROOT/scripts"
EXPECTED_DIR="$REPO_ROOT/tests/fixtures/expected"
TMP_DIR="$REPO_ROOT/tests/.tmp"

if [[ -z "${OBLIVION_CONFLICTS_XEDIT:-}" ]]; then
  echo "ERROR: OBLIVION_CONFLICTS_XEDIT env var must point at TES4Edit_patched.exe" >&2
  exit 2
fi
if [[ ! -x "$OBLIVION_CONFLICTS_XEDIT" && ! -f "$OBLIVION_CONFLICTS_XEDIT" ]]; then
  echo "ERROR: $OBLIVION_CONFLICTS_XEDIT does not exist" >&2
  exit 2
fi
if ! command -v jq >/dev/null 2>&1; then
  echo "ERROR: jq is required (try: scoop install jq, or choco install jq)" >&2
  exit 2
fi

mkdir -p "$TMP_DIR"

UPDATE="${UPDATE_SNAPSHOTS:-0}"
FAILED=0

normalise() {
  # Strip volatile meta fields and sort keys for stable diffs.
  jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version)'
}

run_one() {
  local name="$1"; shift
  local script="$1"; shift
  # Remaining args are passed to the query script (after the xEdit flags).

  local actual="$TMP_DIR/${name}.json"
  local expected="$EXPECTED_DIR/${name}.json"
  local normalised="$TMP_DIR/${name}.normalised.json"

  echo "=== $name ==="
  rm -f "$actual"

  "$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
    -D:"$DATA_DIR" \
    -P:"$PLUGINS" \
    -script:"$SCRIPTS_DIR/$script" \
    --out="$actual" \
    "$@"

  if [[ ! -s "$actual" ]]; then
    echo "FAIL: $name produced no output" >&2
    FAILED=1
    return
  fi

  normalise < "$actual" > "$normalised"

  if [[ "$UPDATE" = "1" ]]; then
    cp "$normalised" "$expected"
    echo "  updated: $expected"
    return
  fi

  if [[ ! -f "$expected" ]]; then
    echo "FAIL: no expected snapshot at $expected (run with UPDATE_SNAPSHOTS=1)" >&2
    FAILED=1
    return
  fi

  if diff -u "$expected" "$normalised"; then
    echo "  ok"
  else
    echo "FAIL: $name diverges from $expected" >&2
    FAILED=1
  fi
}

run_one query_list query_list.pas --target=OverrideA.esp

if [[ $FAILED -ne 0 ]]; then
  echo "FAILED" >&2
  exit 1
fi
echo "All snapshot tests passed."
```

Mark it executable:
```bash
chmod +x tests/run_tests.sh
```

- [ ] **Step 6.2: Run the harness**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
./tests/run_tests.sh
```

Expected: prints `=== query_list ===`, then `  ok`, then `All snapshot tests passed.` Exit 0.

If the diff fails:
- The fixtures didn't match what we captured in Task 5? Inspect the diff. If it's a stable-but-different ordering, the test runner's `jq -S` should already sort keys; the *array order* of `results` we accept as-emitted (xEdit's record order is deterministic per file).
- The volatile-field strip missed something? Add it to the `del(...)` list in `normalise`.

- [ ] **Step 6.3: Confirm UPDATE_SNAPSHOTS path works**

```bash
UPDATE_SNAPSHOTS=1 ./tests/run_tests.sh
git diff tests/fixtures/expected/query_list.json
```

Expected: `git diff` shows no changes (the snapshot we captured in Task 5 was already produced by the same `jq -S del(...)` pipeline, so re-writing it is a no-op).

- [ ] **Step 6.4: Commit**

```bash
git add tests/run_tests.sh
git commit -m "$(cat <<'EOF'
test: snapshot harness wired for query_list

run_tests.sh requires OBLIVION_CONFLICTS_XEDIT and jq. Strips
meta.started_at/duration_ms/tool_version before diffing.
UPDATE_SNAPSHOTS=1 overwrites expected files; never auto-updates.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 7: Build `query_record.pas` and add to test harness

Per-FormID full-chain detail. For each `--formid`, walk the chain (master + every override), emit per-subrecord values across every chain link.

**Files:**
- Create: `scripts/query_record.pas`
- Create: `tests/fixtures/expected/query_record.json` (snapshot)
- Modify: `tests/run_tests.sh` (add the second test case)

- [ ] **Step 7.1: Write `scripts/query_record.pas`**

```pascal
{
  query_record.pas — full-chain + per-subrecord detail for one or more
  --formid FormIDs.

  Args:
    --formid=<hex> [--formid=<hex> ...]   one or more
    --out=<path>                          required

  Per-FormID emission: full chain (master + every override), each link's
  subrecord values via GetEditValue. ConflictAllForElements judges each
  subrecord signature across the chain.

  Missing FormIDs become {"lo_formid_hex":"...","error":"not_found"} in
  results[]. If EVERY requested FormID is missing, emit a top-level
  formid_not_found_any error envelope instead.
}
unit UserScript;

uses obc_lib;

const
  TOOL_VERSION = '0.1.0';

function FindRecordByLoFormID(fid: cardinal): IInterface;
var
  i: integer;
  pluginFile: IInterface;
begin
  Result := nil;
  for i := 0 to FileCount - 1 do begin
    pluginFile := FileByLoadOrder(i);
    Result := RecordByFormID(pluginFile, fid, False);
    if Assigned(Result) then Exit;
  end;
end;

function CollectChainLinks(rec: IInterface): TStringList;
var
  master, link: IInterface;
  i, ovrCount: integer;
begin
  // Returns a TStringList where each line is a chain-link plugin name.
  // Caller frees. The IInterface objects can't be stored in TStringList,
  // so we keep the names — links are re-resolved on demand by index.
  Result := TStringList.Create;
  master := MasterOrSelf(rec);
  Result.AddObject(GetFileName(GetFile(master)), TObject(0));
  ovrCount := OverrideCount(master);
  for i := 0 to ovrCount - 1 do begin
    link := OverrideByIndex(master, i);
    Result.AddObject(GetFileName(GetFile(link)), TObject(i + 1));
  end;
end;

function CollectSubrecordSigs(master: IInterface; ovrCount: integer): TStringList;
var
  i, j: integer;
  link, elem: IInterface;
  sig: string;
begin
  // Union of all top-level subrecord signatures across the master and every
  // override, in master-first iteration order. Duplicates skipped.
  Result := TStringList.Create;
  Result.Sorted := False;
  Result.Duplicates := dupIgnore;
  // Master
  for j := 0 to ElementCount(master) - 1 do begin
    elem := ElementByIndex(master, j);
    sig := Signature(elem);
    if sig = '' then sig := Name(elem); // some non-record elements lack a sig
    if Result.IndexOf(sig) < 0 then Result.Add(sig);
  end;
  // Overrides
  for i := 0 to ovrCount - 1 do begin
    link := OverrideByIndex(master, i);
    for j := 0 to ElementCount(link) - 1 do begin
      elem := ElementByIndex(link, j);
      sig := Signature(elem);
      if sig = '' then sig := Name(elem);
      if Result.IndexOf(sig) < 0 then Result.Add(sig);
    end;
  end;
end;

function ResolveEdid(rec, master: IInterface): string;
var s: string;
begin
  s := EditorID(rec);
  if (s = '') and Assigned(master) then s := EditorID(master);
  Result := s;
end;

function SubrecordEntry(master: IInterface; ovrCount: integer; const sig: string): string;
var
  i: integer;
  link, elem: IInterface;
  list: TList;
  values, pluginName, editVal, winnerName: string;
  emittedOne: boolean;
  status: integer;
  winnerLink: IInterface;
begin
  // Build values[] for plugins in the chain that actually have this
  // subrecord; compute conflict_status across them via ConflictAllForElements.
  values := '';
  emittedOne := False;
  list := TList.Create;
  try
    // Master
    elem := ElementBySignature(master, sig);
    if not Assigned(elem) then elem := ElementByName(master, sig);
    if Assigned(elem) then begin
      list.Add(Pointer(elem));
      pluginName := GetFileName(GetFile(master));
      editVal := GetEditValue(elem);
      values := '{"plugin":' + Esc(pluginName) + ',"edit_value":' + Esc(editVal) + '}';
      emittedOne := True;
    end;
    // Overrides
    for i := 0 to ovrCount - 1 do begin
      link := OverrideByIndex(master, i);
      elem := ElementBySignature(link, sig);
      if not Assigned(elem) then elem := ElementByName(link, sig);
      if not Assigned(elem) then Continue;
      list.Add(Pointer(elem));
      pluginName := GetFileName(GetFile(link));
      editVal := GetEditValue(elem);
      if emittedOne then values := values + ',';
      values := values + '{"plugin":' + Esc(pluginName) +
                ',"edit_value":' + Esc(editVal) + '}';
      emittedOne := True;
    end;

    // ConflictAllForElements expects a list of IInterface; we passed pointers
    // through a TList. If the registered builtin can't accept TList here,
    // fall back to caUnknown and document. The smoke probe in Task 8 confirms.
    try
      status := ConflictAllForElements(list, True, False);
    except
      status := 0;
    end;

    // Find winner: walk the chain backward (last link wins by default,
    // unless caller wants per-subrecord winner via xEdit's resolver — keep
    // it simple: the override-chain winner of the parent record is the
    // standard caller-visible answer).
    winnerLink := WinningOverride(master);
    winnerName := GetFileName(GetFile(winnerLink));

    Result := '{';
    Result := Result + '"signature":' + Esc(sig);
    Result := Result + ',"conflict_status":' + Esc(ConflictName(status));
    Result := Result + ',"winner_plugin":' + Esc(winnerName);
    Result := Result + ',"values":[' + values + ']';
    Result := Result + '}';
  finally
    list.Free;
  end;
end;

function RecordEntry(rec: IInterface): string;
var
  master, win: IInterface;
  ovrCount, status, k: integer;
  isDeleted: boolean;
  chain, subs: string;
  chainLinks, sigs: TStringList;
begin
  master := MasterOrSelf(rec);
  win := WinningOverride(rec);
  ovrCount := OverrideCount(master);
  status := ConflictAllForMainRecord(rec);
  isDeleted := GetIsDeleted(rec);

  chainLinks := CollectChainLinks(rec);
  try
    chain := '';
    for k := 0 to chainLinks.Count - 1 do begin
      if k > 0 then chain := chain + ',';
      chain := chain + Esc(chainLinks[k]);
    end;
  finally
    chainLinks.Free;
  end;

  sigs := CollectSubrecordSigs(master, ovrCount);
  try
    subs := '';
    for k := 0 to sigs.Count - 1 do begin
      if sigs[k] = 'EDID' then Continue;          // EDID is the record header field; skip
      if sigs[k] = 'Record Header' then Continue; // top-level wrapper
      if subs <> '' then subs := subs + ',';
      subs := subs + SubrecordEntry(master, ovrCount, sigs[k]);
    end;
  finally
    sigs.Free;
  end;

  Result := '{';
  Result := Result + '"lo_formid_hex":' + Esc(IntToHex(GetLoadOrderFormID(rec), 8));
  Result := Result + ',"signature":' + Esc(Signature(rec));
  Result := Result + ',"edid":' + Esc(ResolveEdid(rec, master));
  Result := Result + ',"master_plugin":' + Esc(GetFileName(GetFile(master)));
  Result := Result + ',"winner_plugin":' + Esc(GetFileName(GetFile(win)));
  Result := Result + ',"chain":[' + chain + ']';
  Result := Result + ',"is_deleted":';
  if isDeleted then Result := Result + 'true' else Result := Result + 'false';
  Result := Result + ',"conflict_status":' + Esc(ConflictName(status));
  Result := Result + ',"subrecords":[' + subs + ']';
  Result := Result + '}';
end;

function NotFoundEntry(fid: cardinal): string;
begin
  Result := '{';
  Result := Result + '"lo_formid_hex":' + Esc(IntToHex(fid, 8));
  Result := Result + ',"error":' + Esc('not_found');
  Result := Result + '}';
end;

function BuildArgsJson(fids: TStringList; const outPath: string): string;
var i: integer;
begin
  Result := '{"formid":[';
  for i := 0 to fids.Count - 1 do begin
    if i > 0 then Result := Result + ',';
    Result := Result + Esc(fids[i]);
  end;
  Result := Result + '],"out":' + Esc(outPath) + '}';
end;

function ErrorEnvelope(const argsJson, startedAt: string;
                      durationMs: integer;
                      const code, msg: string): string;
begin
  Result := '{';
  Result := Result + '"meta":' + MetaContent('record', argsJson, startedAt, durationMs);
  Result := Result + ',"error":{"code":' + Esc(code) + ',"message":' + Esc(msg) + '}';
  Result := Result + '}';
end;

function Initialize: integer;
var
  outPath, args, startedAt, results, buf, errMsg: string;
  startD: TDateTime;
  durationMs, foundCount, i: integer;
  fids: TStringList;
  fid: cardinal;
  rec: IInterface;
  emittedOne: boolean;
begin
  Result := 0;
  startD := Now;
  startedAt := NowIso8601;

  outPath := GetArg('out');
  fids := GetArgs('formid');

  args := BuildArgsJson(fids, outPath);

  if outPath = '' then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(
      'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/query_record_error.json',
      ErrorEnvelope(args, startedAt, durationMs,
                    'missing_arg', '--out is required'));
    fids.Free;
    Exit;
  end;

  if fids.Count = 0 then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'missing_arg', '--formid is required (one or more)'));
    fids.Free;
    Exit;
  end;

  results := '';
  emittedOne := False;
  foundCount := 0;
  errMsg := '';
  try
    for i := 0 to fids.Count - 1 do begin
      try
        fid := ParseFormID(fids[i]);
      except
        on E: Exception do begin
          if emittedOne then results := results + ',';
          results := results + '{"lo_formid_hex":' + Esc(fids[i]) +
                     ',"error":' + Esc('bad_arg') + '}';
          emittedOne := True;
          Continue;
        end;
      end;
      rec := FindRecordByLoFormID(fid);
      if not Assigned(rec) then begin
        if emittedOne then results := results + ',';
        results := results + NotFoundEntry(fid);
        emittedOne := True;
        Continue;
      end;
      if emittedOne then results := results + ',';
      results := results + RecordEntry(rec);
      emittedOne := True;
      Inc(foundCount);
    end;
  except
    on E: Exception do errMsg := E.Message;
  end;

  durationMs := Round((Now - startD) * 86400000);

  if errMsg <> '' then begin
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'xedit_internal', errMsg));
    fids.Free;
    Exit;
  end;

  if foundCount = 0 then begin
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'formid_not_found_any',
                    'none of the requested FormIDs were found in the load order'));
    fids.Free;
    Exit;
  end;

  buf := '{';
  buf := buf + '"meta":' + MetaContent('record', args, startedAt, durationMs);
  buf := buf + ',"results":[' + results + ']';
  buf := buf + '}';
  WriteOutput(outPath, buf);
  fids.Free;
end;

end.
```

Notes:
- `CollectSubrecordSigs` walks `ElementByIndex` on master and every override; we filter `EDID` and `Record Header` from the emitted list because those are the record metadata, not "real" subrecords.
- `ConflictAllForElements` is wrapped in `try`/`except`; on exception we emit `caUnknown` and continue. Task 8's smoke probe verifies the call works — if it fails there, drop the fallback and revisit.
- `BuildArgsJson` always emits `formid` as an array (even for one entry), per the spec's shape for multi-valued args.

- [ ] **Step 7.2: Run against fixtures (one shared, one A-only)**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/query_record.pas" \
  --formid=00001001 --formid=00001002 \
  --out="$(pwd)/tests/.tmp/query_record.json"
```

- [ ] **Step 7.3: Inspect output**

```bash
jq . tests/.tmp/query_record.json
```

Expected `results[]`:
- **Entry 0** — TestSword (`00001001`, WEAP):
  - `chain`: `["Master.esm","OverrideA.esp","OverrideB.esp"]`
  - `winner_plugin`: `"OverrideB.esp"`, `master_plugin`: `"Master.esm"`
  - `conflict_status`: `"caConflict"`
  - `subrecords[]` includes `FULL`, `MODL`, `DATA`. `DATA.values[]` has 3 entries (one per chain link). `DATA.conflict_status` is `caConflict` (A and B disagree on Damage; Speed is master+B vs A) — exact value depends on xEdit's judgement; eyeball, then lock in.
- **Entry 1** — TestArmor (`00001002`, ARMO):
  - `chain`: `["Master.esm","OverrideA.esp"]`
  - `subrecords[]` includes `FULL` (no conflict — both have "Test Armor") and `DATA` (`caConflict` — Armor differs).

If a subrecord that exists in only one chain link shows up only with that one entry in `values[]`, that's correct.

Common issues:
- `subrecords[]` is empty → `CollectSubrecordSigs` walked the wrong elements; check `Signature(elem)` vs `Name(elem)` calls.
- `ConflictAllForElements` raised on every call → see Task 8 (move it forward and verify on the fixture before continuing here).

- [ ] **Step 7.4: Capture as expected snapshot**

```bash
jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version)' \
  tests/.tmp/query_record.json \
  > tests/fixtures/expected/query_record.json
```

Sanity-check the file (`cat tests/fixtures/expected/query_record.json | jq .` and re-eyeball).

- [ ] **Step 7.5: Add to `tests/run_tests.sh`**

Edit the test runner. After the existing `run_one query_list ...` line, add:

```bash
run_one query_record query_record.pas --formid=00001001 --formid=00001002
```

- [ ] **Step 7.6: Run the harness**

```bash
./tests/run_tests.sh
```

Expected: both `query_list` and `query_record` pass; `All snapshot tests passed.`

- [ ] **Step 7.7: Commit**

```bash
git add scripts/query_record.pas tests/fixtures/expected/query_record.json tests/run_tests.sh
git commit -m "$(cat <<'EOF'
feat(query_record): per-FormID full-chain + per-subrecord detail

Walks chain via MasterOrSelf+OverrideByIndex, unions subrecord signatures
across links, judges each via ConflictAllForElements (with caUnknown
fallback). Missing FormIDs become per-entry not_found; all-missing
becomes a top-level formid_not_found_any error.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 8: Smoke-test `ConflictAllForElements` before building `query_between`

The spec flags `ConflictAllForElements` as registered but not yet smoke-tested. `query_between` depends on it heavily (every shared subrecord). Verify it works against the fixture chain via a short throwaway probe before committing the production script.

If `query_record`'s subrecord output in Task 7.3 already showed sensible per-subrecord `conflict_status` values, that's prima facie evidence the call works — you can skip directly to Task 9 *if* you're confident. Otherwise run the probe.

**Files:**
- Create: `scripts/_probe_between.pas` (throwaway — deleted at end of Task 9)

- [ ] **Step 8.1: Write the probe**

```pascal
{
  _probe_between.pas — verify ConflictAllForElements works headless on the
  fixture chain, comparing TestSword's DATA subrecord across A and B.

  Args:
    --out=<path>   required
}
unit UserScript;

uses obc_lib;

function FindPluginByName(const name: string): IInterface;
var i: integer;
begin
  Result := nil;
  for i := 0 to FileCount - 1 do
    if SameText(GetFileName(FileByLoadOrder(i)), name) then begin
      Result := FileByLoadOrder(i);
      Exit;
    end;
end;

function Initialize: integer;
var
  fileA, fileB, recA, recB, dataA, dataB: IInterface;
  list: TList;
  status: integer;
  outPath, buf, errMsg: string;
begin
  Result := 0;
  errMsg := '';
  buf := '{';
  outPath := GetArg('out');
  if outPath = '' then outPath := 'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/probe_between.json';

  try
    fileA := FindPluginByName('OverrideA.esp');
    fileB := FindPluginByName('OverrideB.esp');
    recA := RecordByFormID(fileA, $01001001, False); // load index 1 = OverrideA in fixtures? confirm
    recB := RecordByFormID(fileB, $02001001, False);
    // If those misalign, find by editor ID instead:
    if not Assigned(recA) then recA := MainRecordByEditorID(GroupBySignature(fileA, 'WEAP'), 'TestSword');
    if not Assigned(recB) then recB := MainRecordByEditorID(GroupBySignature(fileB, 'WEAP'), 'TestSword');

    dataA := ElementBySignature(recA, 'DATA');
    dataB := ElementBySignature(recB, 'DATA');

    list := TList.Create;
    try
      list.Add(Pointer(dataA));
      list.Add(Pointer(dataB));
      status := ConflictAllForElements(list, True, False);
    finally
      list.Free;
    end;

    buf := buf + '"recA_assigned":';
    if Assigned(recA) then buf := buf + 'true' else buf := buf + 'false';
    buf := buf + ',"recB_assigned":';
    if Assigned(recB) then buf := buf + 'true' else buf := buf + 'false';
    buf := buf + ',"data_status":' + IntToStr(status);
    buf := buf + ',"data_status_name":' + Esc(ConflictName(status));
  except
    on E: Exception do errMsg := E.Message;
  end;
  buf := buf + ',"error":' + Esc(errMsg) + '}';

  WriteOutput(outPath, buf);
end;

end.
```

The exact load-order indices for the fixture FormIDs (the upper byte of the load-order FormID) depend on what xEdit assigns at runtime. The fallback `MainRecordByEditorID` lookup makes the probe robust to that.

- [ ] **Step 8.2: Run the probe**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/_probe_between.pas" \
  --out="$(pwd)/tests/.tmp/probe_between.json"
```

- [ ] **Step 8.3: Inspect**

```bash
jq . tests/.tmp/probe_between.json
```

Expected: both `recA_assigned` and `recB_assigned` are `true`. `data_status_name` is one of `caConflict` (5) or `caConflictBenign` (3) — both A and B disagree on the DATA struct, so xEdit should flag a real conflict. `error` is empty.

If `error` is non-empty saying something like `Variable required` or `Cannot create variable`, `TList`-of-pointers isn't accepted by the registered builtin; try a `TStringList` workaround:
- Replace the list assembly with two separate `IInterface` vars and call `ConflictThisForElements(dataA, dataB)` if the registered API exposes that pairwise variant. Verify by grepping `xejviScriptAdapter.pas` in the xEdit source for `Conflict.*ForElements`.

If `ConflictAllForElements` truly isn't usable, fall back in `query_between` to comparing `GetEditValue(dataA) <> GetEditValue(dataB)` and emitting a stub `conflict_status` based on equality; document the degradation in `query_between.pas`'s header comment.

- [ ] **Step 8.4: Commit (probe lives until Task 9)**

```bash
git add scripts/_probe_between.pas
git commit -m "$(cat <<'EOF'
spike: probe ConflictAllForElements headlessly on fixture WEAP DATA

Verifies the registered builtin works under -autoload/-autoexit. Probe
file kept temporarily; deleted at end of Task 9 (query_between).

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 9: Build `query_between.pas` and add to test harness

Pairwise diff: every record both `--a` and `--b` touch. `a_summary`/`b_summary` via `GetSummary` (with empty fallback). Per-subrecord conflict status via `ConflictAllForElements` (proven in Task 8).

**Files:**
- Create: `scripts/query_between.pas`
- Create: `tests/fixtures/expected/query_between.json`
- Modify: `tests/run_tests.sh`
- Delete: `scripts/_probe_between.pas`

- [ ] **Step 9.1: Write `scripts/query_between.pas`**

```pascal
{
  query_between.pas — list every record both --a and --b touch (within the
  same load order). Per-subrecord conflict_status via ConflictAllForElements.

  Args:
    --a=<plugin.esp>   required
    --b=<plugin.esp>   required
    --out=<path>       required
}
unit UserScript;

uses obc_lib;

function FindPluginByName(const name: string): IInterface;
var i: integer;
begin
  Result := nil;
  for i := 0 to FileCount - 1 do
    if SameText(GetFileName(FileByLoadOrder(i)), name) then begin
      Result := FileByLoadOrder(i);
      Exit;
    end;
end;

function GetSummarySafe(rec: IInterface): string;
begin
  Result := '';
  try
    Result := GetSummary(rec);
  except
    Result := '';
  end;
end;

function CounterpartIn(other: IInterface; rec: IInterface): IInterface;
var
  fid: cardinal;
begin
  fid := GetLoadOrderFormID(rec);
  Result := RecordByFormID(other, fid, False);
end;

function CollectUnionSigs(recA, recB: IInterface): TStringList;
var
  i: integer;
  elem: IInterface;
  sig: string;
begin
  Result := TStringList.Create;
  Result.Sorted := False;
  Result.Duplicates := dupIgnore;
  for i := 0 to ElementCount(recA) - 1 do begin
    elem := ElementByIndex(recA, i);
    sig := Signature(elem);
    if sig = '' then sig := Name(elem);
    if sig = 'Record Header' then Continue;
    if sig = 'EDID' then Continue;
    if Result.IndexOf(sig) < 0 then Result.Add(sig);
  end;
  for i := 0 to ElementCount(recB) - 1 do begin
    elem := ElementByIndex(recB, i);
    sig := Signature(elem);
    if sig = '' then sig := Name(elem);
    if sig = 'Record Header' then Continue;
    if sig = 'EDID' then Continue;
    if Result.IndexOf(sig) < 0 then Result.Add(sig);
  end;
end;

function SubrecordEntry(recA, recB: IInterface; const sig: string): string;
var
  elemA, elemB: IInterface;
  list: TList;
  status: integer;
begin
  elemA := ElementBySignature(recA, sig);
  if not Assigned(elemA) then elemA := ElementByName(recA, sig);
  elemB := ElementBySignature(recB, sig);
  if not Assigned(elemB) then elemB := ElementByName(recB, sig);

  list := TList.Create;
  try
    if Assigned(elemA) then list.Add(Pointer(elemA));
    if Assigned(elemB) then list.Add(Pointer(elemB));
    try
      status := ConflictAllForElements(list, True, False);
    except
      status := 0;
    end;
  finally
    list.Free;
  end;

  Result := '{';
  Result := Result + '"signature":' + Esc(sig);
  Result := Result + ',"conflict_status":' + Esc(ConflictName(status));
  Result := Result + '}';
end;

function RecordEntry(recA, recB: IInterface): string;
var
  master, win: IInterface;
  sigs: TStringList;
  subs, sumA, sumB: string;
  k: integer;
begin
  master := MasterOrSelf(recA);
  win := WinningOverride(master);
  sumA := GetSummarySafe(recA);
  sumB := GetSummarySafe(recB);

  sigs := CollectUnionSigs(recA, recB);
  try
    subs := '';
    for k := 0 to sigs.Count - 1 do begin
      if subs <> '' then subs := subs + ',';
      subs := subs + SubrecordEntry(recA, recB, sigs[k]);
    end;
  finally
    sigs.Free;
  end;

  Result := '{';
  Result := Result + '"lo_formid_hex":' + Esc(IntToHex(GetLoadOrderFormID(recA), 8));
  Result := Result + ',"signature":' + Esc(Signature(recA));
  Result := Result + ',"edid":' + Esc(EditorID(master));
  Result := Result + ',"winner_plugin":' + Esc(GetFileName(GetFile(win)));
  Result := Result + ',"a_summary":' + Esc(sumA);
  Result := Result + ',"b_summary":' + Esc(sumB);
  Result := Result + ',"subrecords":[' + subs + ']';
  Result := Result + '}';
end;

function BuildArgsJson(const a, b, outPath: string): string;
begin
  Result := '{';
  Result := Result + '"a":' + Esc(a);
  Result := Result + ',"b":' + Esc(b);
  Result := Result + ',"out":' + Esc(outPath);
  Result := Result + '}';
end;

function ErrorEnvelope(const argsJson, startedAt: string;
                      durationMs: integer;
                      const code, msg: string): string;
begin
  Result := '{';
  Result := Result + '"meta":' + MetaContent('between', argsJson, startedAt, durationMs);
  Result := Result + ',"error":{"code":' + Esc(code) + ',"message":' + Esc(msg) + '}';
  Result := Result + '}';
end;

function Initialize: integer;
var
  aName, bName, outPath, args, startedAt, results, buf, errMsg: string;
  startD: TDateTime;
  durationMs, i: integer;
  fileA, fileB, recA, recB: IInterface;
  emittedOne: boolean;
begin
  Result := 0;
  startD := Now;
  startedAt := NowIso8601;

  outPath := GetArg('out');
  aName := GetArg('a');
  bName := GetArg('b');
  args := BuildArgsJson(aName, bName, outPath);

  if outPath = '' then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(
      'D:/Modlists/_clones/oblivion-conflicts/tests/.tmp/query_between_error.json',
      ErrorEnvelope(args, startedAt, durationMs,
                    'missing_arg', '--out is required'));
    Exit;
  end;
  if (aName = '') or (bName = '') then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'missing_arg', '--a and --b are both required'));
    Exit;
  end;

  fileA := FindPluginByName(aName);
  fileB := FindPluginByName(bName);
  if not Assigned(fileA) then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'plugin_not_loaded', '--a plugin "' + aName + '" not loaded'));
    Exit;
  end;
  if not Assigned(fileB) then begin
    durationMs := Round((Now - startD) * 86400000);
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs,
                    'plugin_not_loaded', '--b plugin "' + bName + '" not loaded'));
    Exit;
  end;

  results := '';
  emittedOne := False;
  errMsg := '';
  try
    for i := 0 to RecordCount(fileA) - 1 do begin
      recA := RecordByIndex(fileA, i);
      if Signature(recA) = 'TES4' then Continue;
      recB := CounterpartIn(fileB, recA);
      if not Assigned(recB) then Continue;
      if emittedOne then results := results + ',';
      results := results + RecordEntry(recA, recB);
      emittedOne := True;
    end;
  except
    on E: Exception do errMsg := E.Message;
  end;

  durationMs := Round((Now - startD) * 86400000);

  if errMsg <> '' then begin
    WriteOutput(outPath,
      ErrorEnvelope(args, startedAt, durationMs, 'xedit_internal', errMsg));
    Exit;
  end;

  buf := '{';
  buf := buf + '"meta":' + MetaContent('between', args, startedAt, durationMs);
  buf := buf + ',"results":[' + results + ']';
  buf := buf + '}';
  WriteOutput(outPath, buf);
end;

end.
```

Notes:
- We iterate `fileA`'s records and look up the same FormID in `fileB`. If absent, skip — it's not a record both touch. Records `fileB` defines that `fileA` doesn't would also need iterating from `fileB`'s side, but those by definition aren't shared, so we don't emit them.
- `EditorID(master)` for the EDID field, since A or B's deleted-override might have lost it.
- `a_summary`/`b_summary` always use `GetSummarySafe`, which swallows exceptions and returns `''`.

- [ ] **Step 9.2: Run against fixtures**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$(pwd)/tests/fixtures/data" \
  -P:"$(pwd)/tests/fixtures/loadorder.txt" \
  -script:"$(pwd)/scripts/query_between.pas" \
  --a=OverrideA.esp --b=OverrideB.esp \
  --out="$(pwd)/tests/.tmp/query_between.json"
```

- [ ] **Step 9.3: Inspect output**

```bash
jq . tests/.tmp/query_between.json
```

Expected `results[]` length: **1** (only `TestSword` is touched by both A and B). The single entry should look approximately like:
- `lo_formid_hex`: `"00001001"`
- `signature`: `"WEAP"`
- `edid`: `"TestSword"`
- `winner_plugin`: `"OverrideB.esp"`
- `a_summary`: a non-empty WEAP summary string (or `""` if `GetSummary` is unsupported for this record under JvInterpreter)
- `b_summary`: similarly
- `subrecords[]`: includes at minimum `FULL`, `MODL`, `DATA`. `DATA.conflict_status` is `caConflict` (5).

If the `subrecords[]` array is empty, `CollectUnionSigs` is misbehaving — likely `Signature(elem)` returns `''` for top-level structures and `Name(elem)` returns the human-readable label like `"DATA - Data"`. If the snapshot diff in step 9.5 surfaces consistent labels matching xEdit's display, that's still acceptable; just lock them in.

- [ ] **Step 9.4: Capture snapshot**

```bash
jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version)' \
  tests/.tmp/query_between.json \
  > tests/fixtures/expected/query_between.json
cat tests/fixtures/expected/query_between.json | jq .
```

- [ ] **Step 9.5: Add to `tests/run_tests.sh`**

After the `run_one query_record ...` line, add:

```bash
run_one query_between query_between.pas --a=OverrideA.esp --b=OverrideB.esp
```

- [ ] **Step 9.6: Run the harness**

```bash
./tests/run_tests.sh
```

Expected: all three queries pass. `All snapshot tests passed.`

- [ ] **Step 9.7: Delete the smoke probe**

```bash
git rm scripts/_probe_between.pas
rm -f tests/.tmp/probe_between.json
```

- [ ] **Step 9.8: Commit**

```bash
git add scripts/query_between.pas tests/fixtures/expected/query_between.json tests/run_tests.sh
git commit -m "$(cat <<'EOF'
feat(query_between): pairwise plugin diff + remove smoke probe

Iterates --a's records, looks up matching FormIDs in --b, emits one
entry per shared record with per-subrecord conflict_status via
ConflictAllForElements. GetSummary wrapped in try/except (empty fallback).

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 10: Documentation pass (`README.md`, `tests/README.md`, `examples/reborn-shortcut.sh`)

Replace the placeholder README with the full v2 documentation, add a tests README that captures the snapshot-test workflow, and ship the Reborn shortcut.

**Files:**
- Modify: `README.md`
- Create: `tests/README.md`
- Create: `examples/reborn-shortcut.sh`

- [ ] **Step 10.1: Write `README.md`**

```markdown
# oblivion-conflicts

Pascal scripts that drive the patched headless `TES4Edit_patched.exe` to emit Oblivion (TES4) plugin-conflict information as machine-readable JSON. Three queries, one shared helpers unit, no Python wrapper.

The patched xEdit binary is built from a 4-line Delphi patch over upstream xEdit 4.1.5f that makes `-autoload -autoexit` honour `-script:` instead of the GUI ignoring it. See the parent project `Reborn` (`D:/Modlists/Reborn/`) for the patched binary build instructions.

## Status

v0.1 — ready for use. Three queries:

| Query | What it answers |
|---|---|
| `query_list`    | "Which records does plugin X define-or-override that someone else also touches, and how serious is each conflict?" |
| `query_between` | "What records do plugins A and B both touch, and which subrecords disagree?" |
| `query_record`  | "Show me the full chain and per-subrecord values for FormIDs 1, 2, …" |

## Requirements

- `TES4Edit_patched.exe` (the patched-headless variant).
- A working Oblivion data dir (`-D:`) and a `plugins.txt` (`-P:`).
- For tests: `bash` (Git Bash on Windows works), `jq`.

## Usage

```bash
TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit \
  -D:"<DataDir>" \
  -P:"<plugins.txt>" \
  -script:scripts/query_<name>.pas \
  --<arg>=<value> ... \
  --out=<output.json>
```

### `query_list --target=<plugin> --out=<path>`
Lists every record in `<plugin>` that has at least one other plugin overriding it. Output: array of records with `chain`, `winner_plugin`, `conflict_status`, etc. Filters out `caOnlyOne` records (records nobody else touches).

### `query_between --a=<plugin> --b=<plugin> --out=<path>`
Lists every record both plugins touch (in the same load order). Each entry includes a per-subrecord conflict status (`ConflictAllForElements` judgement) and short summary strings for each side.

### `query_record --formid=<hex> [--formid=<hex> …] --out=<path>`
Full per-FormID detail: chain, deleted flag, conflict status, every subrecord's value across every chain link.

## Output schema

All queries share an envelope:

```json
{
  "meta": {
    "tool_version": "0.1.0",
    "xedit_version": "4.1.5f",
    "query": "list",
    "args": { "...": "..." },
    "load_order": ["Oblivion.esm", "..."],
    "started_at": "2026-04-28T22:14:33Z",
    "duration_ms": 12483
  },
  "results": [ ... ]
}
```

On error: `"error": {"code": "...", "message": "..."}` instead of `"results"`. Error codes: `missing_arg`, `bad_arg`, `plugin_not_loaded`, `formid_not_found_any`, `xedit_internal`.

Per-query result shapes — see `docs/` in the parent repo (the design spec at `Reborn/docs/superpowers/specs/2026-04-28-oblivion-conflicts-v2-design.md`).

## Reborn shortcut

```bash
export OBLIVION_CONFLICTS_XEDIT="D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe"
./examples/reborn-shortcut.sh list   --target=MOO.esp --out=/tmp/list.json
./examples/reborn-shortcut.sh record --formid=1E012345 --out=/tmp/rec.json
```

## Tests

```bash
export OBLIVION_CONFLICTS_XEDIT="..."   # path to TES4Edit_patched.exe
./tests/run_tests.sh
```

See `tests/README.md` for the snapshot-update workflow.

## License

MPL-2.0. Matches xEdit's licence so the scripts can adapt code from xEdit's bundled `Edit Scripts/` if needed.
```

- [ ] **Step 10.2: Write `tests/README.md`**

```markdown
# Tests

Snapshot tests via `run_tests.sh`. Each query runs against the fixture data dir, the output is normalised (strip `meta.started_at`, `meta.duration_ms`, `meta.tool_version`; sort keys), and the result is diffed against the committed expected file.

## Running

```bash
export OBLIVION_CONFLICTS_XEDIT="/c/path/to/TES4Edit_patched.exe"
./tests/run_tests.sh
```

Requires `bash` and `jq`. On Git Bash for Windows: `scoop install jq` or `choco install jq`.

## Updating snapshots

After intentional output changes:

```bash
UPDATE_SNAPSHOTS=1 ./tests/run_tests.sh
git diff tests/fixtures/expected/   # review carefully
```

The runner never auto-updates without `UPDATE_SNAPSHOTS=1`. Always read the diff before committing.

## Fixtures

`fixtures/data/` contains a hand-built 3-plugin test corpus generated by `fixtures/_generator/generate_fixtures.pas` (see that directory's README for the regeneration procedure — it's a manual GUI step, not run by `run_tests.sh`).

`fixtures/_generator/patch_smoketest.pas` proves the patched xEdit binary still works headlessly. Run separately if the binary is rebuilt:
```bash
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:tests/fixtures/data -P:tests/fixtures/loadorder.txt \
  -script:tests/fixtures/_generator/patch_smoketest.pas
```
```

- [ ] **Step 10.3: Write `examples/reborn-shortcut.sh`**

```bash
#!/usr/bin/env bash
# Wrapper that pre-fills -D: and -P: for Reborn's Stock Game data dir.
#
# Usage:
#   ./reborn-shortcut.sh list   --target=MOO.esp --out=/tmp/list.json
#   ./reborn-shortcut.sh record --formid=1E012345 --out=/tmp/rec.json
#   ./reborn-shortcut.sh between --a=MOO.esp --b=OOO.esp --out=/tmp/diff.json
#
# Override defaults via env vars:
#   XEDIT, DATA, PLUGINS, PROFILE

set -euo pipefail

XEDIT="${XEDIT:-${OBLIVION_CONFLICTS_XEDIT:-D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe}}"
DATA="${DATA:-D:/Modlists/Reborn/Stock Game/Data}"
PROFILE="${PROFILE:-Reborn-Base}"
PLUGINS="${PLUGINS:-D:/Modlists/Reborn/profiles/$PROFILE/plugins.txt}"
SCRIPTS_DIR="$(cd "$(dirname "$0")/../scripts" && pwd)"

if [[ $# -lt 1 ]]; then
  echo "usage: $0 <list|between|record> [--script-arg=value ...]" >&2
  exit 2
fi

QUERY="$1"; shift
SCRIPT="$SCRIPTS_DIR/query_${QUERY}.pas"
if [[ ! -f "$SCRIPT" ]]; then
  echo "no such query script: $SCRIPT" >&2
  exit 2
fi

"$XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"$DATA" -P:"$PLUGINS" \
  -script:"$SCRIPT" "$@"
```

Mark executable:
```bash
chmod +x examples/reborn-shortcut.sh
```

- [ ] **Step 10.4: Verify the docs render and the shortcut works**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
# Spot-check the README in your editor for typos / broken markdown.
# Then run the shortcut against the fixtures (override DATA/PLUGINS):
DATA="$(pwd)/tests/fixtures/data" \
PLUGINS="$(pwd)/tests/fixtures/loadorder.txt" \
./examples/reborn-shortcut.sh list \
  --target=OverrideA.esp \
  --out="$(pwd)/tests/.tmp/shortcut_smoke.json"
jq -e '.results | length == 3' tests/.tmp/shortcut_smoke.json
```

`jq -e` should exit 0 (3 results match the Task 5 expected snapshot).

- [ ] **Step 10.5: Commit**

```bash
git add README.md tests/README.md examples/reborn-shortcut.sh
git commit -m "$(cat <<'EOF'
docs: README, tests/README, examples/reborn-shortcut.sh

Full v2 documentation: usage, schema, error codes. tests/README.md
captures the UPDATE_SNAPSHOTS=1 workflow. Reborn shortcut wraps the
patched xEdit invocation with sensible defaults; XEDIT/DATA/PLUGINS/
PROFILE override env vars.

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

---

## Task 11: Final verification against the real Reborn load order (manual, dev-only)

A sanity check, not a CI test. Run `query_list` against Reborn's actual data dir + plugins.txt, eyeball that the output looks plausible. Catches issues that synthetic 3-plugin fixtures can't surface (large record counts, real-world EDID/FormID shapes, quirky plugins).

This is **not** committed — it's exploratory. If something's wrong, file a follow-up task; if everything looks fine, stop.

- [ ] **Step 11.1: Pick a real plugin**

A good candidate is `MOO.esp` (or whichever sits high in Reborn's load order and you know touches a lot of vanilla records). Confirm its presence:

```bash
grep -i '^MOO.esp$' "D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt"
```

- [ ] **Step 11.2: Run `query_list`**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"D:/Modlists/Reborn/Stock Game/Data" \
  -P:"D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt" \
  -script:"$(pwd)/scripts/query_list.pas" \
  --target=MOO.esp \
  --out="$(pwd)/tests/.tmp/reborn_moo_list.json"
```

This will take longer than the fixture run — Reborn's load order is dozens of plugins.

- [ ] **Step 11.3: Sanity-check output**

```bash
jq '.meta | {load_order_count: (.load_order | length), duration_ms}' tests/.tmp/reborn_moo_list.json
jq '.results | length' tests/.tmp/reborn_moo_list.json
jq '[.results[].conflict_status] | group_by(.) | map({status: .[0], count: length})' tests/.tmp/reborn_moo_list.json
jq '.results | map(select(.is_injected)) | length' tests/.tmp/reborn_moo_list.json
jq '.results | map(select(.is_deleted)) | length' tests/.tmp/reborn_moo_list.json
```

Eyeball:
- `load_order_count` is the full Reborn plugin count (dozens).
- `results | length` is non-zero (MOO touches plenty of vanilla stuff).
- conflict-status histogram contains a mix of `caOverride`, `caConflict`, possibly `caConflictBenign` / `caConflictCritical`. If everything is `caOverride`, that's suspicious — re-check `ConflictAllForMainRecord`.
- `is_injected` count: small number expected (most overrides aren't injected); huge number is a sign the `IsInjected` heuristic is over-eager.

- [ ] **Step 11.4: Optional: diff `MOO.esp` between APW and Reborn (true cross-modlist use case)**

This is the "external diff" pattern from the spec — a dev-only flow that demonstrates the v1 design's intended cross-modlist composition.

```bash
# APW
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"D:/Modlists/APW/Stock Game/Data" \
  -P:"D:/Modlists/APW/profiles/<apw-profile>/plugins.txt" \
  -script:"$(pwd)/scripts/query_list.pas" \
  --target=MOO.esp \
  --out="$(pwd)/tests/.tmp/apw_moo_list.json"

# Strip volatile fields and diff
jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version, .meta.load_order)' \
  tests/.tmp/reborn_moo_list.json > tests/.tmp/reborn_moo.norm.json
jq -S 'del(.meta.started_at, .meta.duration_ms, .meta.tool_version, .meta.load_order)' \
  tests/.tmp/apw_moo_list.json > tests/.tmp/apw_moo.norm.json
diff -u tests/.tmp/apw_moo.norm.json tests/.tmp/reborn_moo.norm.json | head -200
```

Note the extra `del(.meta.load_order)` — between modlists the load-order array obviously differs and would dominate the diff. Stripping it lets the per-record changes stand out.

- [ ] **Step 11.5: Stop here**

No commit. If something looks wrong, file a follow-up task referencing the specific output. Otherwise, the implementation is complete.

---

## Spec → task coverage check

| Spec section | Covered by |
|---|---|
| Cleanup (delete src/, _spike/, etc.) | Task 1 |
| `obc_lib.pas` Esc/ConflictName | Task 2 |
| `obc_lib.pas` GetArg/HasArg/GetArgs/ParseFormID | Task 3 |
| `obc_lib.pas` NowIso8601/WriteOutput/MetaContent (renamed from `MetaPrefix` — meta object built post-results) | Task 4 |
| `query_list.pas` algorithm, edge cases (deleted, injected) | Task 5 |
| `tests/run_tests.sh` snapshot harness, `OBLIVION_CONFLICTS_XEDIT`, `UPDATE_SNAPSHOTS=1` | Task 6 |
| `query_record.pas` chain + subrecord values | Task 7 |
| `ConflictAllForElements` smoke test (open question) | Task 8 |
| `query_between.pas`, `GetSummary` fallback | Task 9 |
| README.md / tests/README.md / examples/reborn-shortcut.sh | Task 10 |
| Final verification against Reborn | Task 11 |
| LF output (post-v1 detail) | Task 4 (`WriteOutput` uses `TFileStream`) |
| Repo structure (final) | The "Target File Structure" header section |
| MPL-2.0 LICENSE unchanged | Task 1 (no edit to LICENSE) |

**Open questions deferred from spec → tracked in implementation:**
- `is_injected` detection — best-effort heuristic in Task 5; spec allows `null` fallback.
- `GetSummary` availability — try/except fallback in Task 9.
- `wbVersionNumber` exposure — try/except fallback in Task 4 (omits the field if unavailable).
- CRLF→LF — `TFileStream.Write` of raw bytes in Task 4.

---
