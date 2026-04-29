# oblivion-conflicts Sweep Query Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:executing-plans (recommended for this plan — see note below) or superpowers:subagent-driven-development. Steps use checkbox (`- [ ]`) syntax for tracking.
>
> **Inline execution recommended.** Per `feedback_subagent_overhead.md`, the per-task work here is small and prescriptive enough that subagent dispatch is pure ceremony; the v2 plan was executed inline for the same reason.

**Goal:** Add `query_sweep.pas` to oblivion-conflicts: one xEdit launch emits the whole-modlist conflict matrix as JSON, enabling sub-second cache queries via `jq` instead of per-question xEdit relaunches.

**Architecture:** A single new Pascal script applies xEdit's conflict-only filter (`FilterConflictAll` + `ApplyFilter`) in `Initialize`, then accumulates per-record JSON entries via `Process(e)` (driven by xEdit's filtered nav-tree iteration), then writes the envelope in `Finalize`. Cache lives at `cache/sweep.json`; queries are `jq` one-liners.

**Tech Stack:** Delphi/Pascal (JvInterpreter dialect), patched `TES4Edit_patched.exe`, bash, `jq`, Python (snapshot normalisation only).

**Spec:** `docs/superpowers/specs/2026-04-29-oblivion-conflicts-sweep-design.md` in the `Reborn` repo.

**Working repo:** `D:/Modlists/_clones/oblivion-conflicts/` — feature branch `feat/sweep-query` off `main` (1aff51a).

---

## File Structure

| File | Action | Purpose |
|---|---|---|
| `scripts/query_sweep.pas` | Create | The new sweep query — applies conflict filter, accumulates records via Process(e), writes JSON in Finalize |
| `tests/_spike/sweep_smoketest.pas` | Create then delete | Minimal spike to validate ApplyFilter+Process iteration in patched binary; deleted after Task 1 |
| `tests/run_tests.sh` | Modify | Add 4th `run_one` call for query_sweep |
| `tests/fixtures/expected/query_sweep.json` | Create | Snapshot baseline for sweep output |
| `cache/.gitkeep` | Create | Reserve `cache/` dir; sweep output is gitignored |
| `.gitignore` | Modify | Ignore `cache/*.json` |
| `README.md` | Modify | Add sweep to query table + jq recipes section |

---

## Task 0: Branch setup

**Files:**
- Modify: working tree (branch creation only)

- [ ] **Step 1: Confirm clean working tree on main**

Run: `cd D:/Modlists/_clones/oblivion-conflicts && git status --short && git rev-parse HEAD`
Expected: empty status output, HEAD = `1aff51a` (or current `main`).

- [ ] **Step 2: Create and switch to feature branch**

Run: `cd D:/Modlists/_clones/oblivion-conflicts && git checkout -b feat/sweep-query`
Expected: `Switched to a new branch 'feat/sweep-query'`.

- [ ] **Step 3: Sanity-check existing tests still green (baseline)**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
export OBLIVION_CONFLICTS_XEDIT="D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe"
./tests/run_tests.sh
```
Expected: `All snapshot tests passed.` Three cases (query_list, query_record, query_between) all green.

If a test fails here: stop and investigate before touching anything new — the baseline must be green before adding cases. Likely cause: stale `tests/.tmp/` or fixture data drift.

---

## Task 1: Smoketest the iteration model

**Goal:** Validate the load-bearing assumption that `ApplyFilter` from inside `Initialize` narrows iteration so `Process(e)` only fires for conflict-bearing main records. If this fails, the sweep design pivots to manual record walking (similar to `query_list`).

**Files:**
- Create: `tests/_spike/sweep_smoketest.pas`

- [ ] **Step 1: Create the spike directory**

Run: `mkdir -p D:/Modlists/_clones/oblivion-conflicts/tests/_spike`

- [ ] **Step 2: Write the smoketest script**

Create `tests/_spike/sweep_smoketest.pas`:

```pascal
{
  sweep_smoketest.pas — minimal spike. Counts Process(e) invocations
  with and without ApplyFilter, and reports GetSummary behaviour for
  each visited record. Used to validate the sweep design before
  committing to the full emitter. Deleted after Task 1.
}
unit UserScript;

var
  visitCount: integer;
  summaryNonEmpty: integer;
  summaryEmpty: integer;
  visitedNames: TStringList;

function SafeSummary(elem: IInterface): string;
begin
  Result := '';
  try
    Result := GetSummary(elem);
  except
    Result := '';
  end;
end;

function Initialize: integer;
begin
  visitCount := 0;
  summaryNonEmpty := 0;
  summaryEmpty := 0;
  visitedNames := TStringList.Create;

  AddMessage('SMOKETEST: applying conflict-only filter');

  FilterPreset             := True;
  FilterConflictAll        := True;
  FilterConflictAllSet     := [4, 5, 3, 6];  { caOverride, caConflict, caConflictBenign, caConflictCritical }
  FilterConflictThis       := False;
  FilterByInjectStatus     := False;
  FilterByNotReachableStatus := False;
  FilterByReferencesInjectedStatus := False;
  FilterByEditorID         := False;
  FilterByName             := False;
  FilterByBaseEditorID     := False;
  FilterByBaseName         := False;
  FilterScaledActors       := False;
  FilterByPersistent       := False;
  FilterUnnecessaryPersistent := False;
  FilterMasterIsTemporary  := False;
  FilterIsMaster           := False;
  FilterPersistentPosChanged := False;
  FilterDeleted            := False;
  FilterByVWD              := False;
  FilterByHasVWDMesh       := False;
  FilterBySignature        := False;
  FlattenBlocks            := False;
  FlattenCellChilds        := False;
  AssignPersWrldChild      := False;
  InheritConflictByParent  := True;

  ApplyFilter;

  AddMessage('SMOKETEST: filter applied; iteration begins');
  Result := 0;
end;

function Process(e: IInterface): integer;
var
  s: string;
begin
  Inc(visitCount);
  s := SafeSummary(e);
  if s = '' then Inc(summaryEmpty) else Inc(summaryNonEmpty);
  visitedNames.Add(Name(e) + ' | summary="' + s + '"');
  Result := 0;
end;

function Finalize: integer;
var
  i: integer;
begin
  AddMessage('SMOKETEST RESULT: visited ' + IntToStr(visitCount) + ' records');
  AddMessage('SMOKETEST RESULT: summary non-empty=' + IntToStr(summaryNonEmpty)
             + ', empty=' + IntToStr(summaryEmpty));
  for i := 0 to visitedNames.Count - 1 do
    AddMessage('  visited: ' + visitedNames[i]);
  visitedNames.Free;
  Result := 0;
end;

end.
```

- [ ] **Step 3: Run the smoketest against fixtures**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"tests/fixtures/data" \
  -P:"tests/fixtures/loadorder.txt" \
  -script:"tests/_spike/sweep_smoketest.pas" 2>&1 | tee tests/.tmp/smoketest.log
```

- [ ] **Step 4: Verify expected counts**

Open `tests/.tmp/smoketest.log` and grep for `SMOKETEST RESULT`.

**Expected outcomes (success path):**
- `visited 4 records` — TestSword, TestArmor, TestChest, TestDagger (the four records with caOverride or higher across all three fixture plugins).
- `summary non-empty=4, empty=0` — all four have FULL set (ideal).

**Acceptable but worse outcomes (still proceed to Task 2):**
- `visited 4 records` with `summary non-empty=0, empty=4` — confirms the v0.1 query_between empty-summary observation generalises beyond `-vqsc`. Sweep falls back to `Name(e)` for the summary field; design unchanged.

**Failure outcomes (stop and pivot):**
- `visited > 4 records` — filter didn't narrow iteration. Design pivot: skip ApplyFilter entirely; in Initialize manually walk every plugin's records, filter master-only + `ConflictAllForMainRecord >= caOverride`, emit each unique record once. (This is the query_list pattern applied across all plugins.) Update the spec inline before Task 2.
- `visited 0 records` — filter blocked everything OR Process(e) isn't being called. Likely cause: `ApplyFilter` requires GUI context not present in headless. Same pivot as above.
- xEdit hangs / crashes / no output file — capture log, surface to user before continuing.

- [ ] **Step 5: Commit the smoketest result for the record**

Don't commit the smoketest script itself (it's a spike, not production). Commit only the result interpretation as a note:

```bash
cd D:/Modlists/_clones/oblivion-conflicts
mkdir -p docs
cat > docs/sweep-smoketest-2026-04-29.md <<'EOF'
# query_sweep smoketest result — 2026-04-29

[FILL IN BASED ON STEP 4 OUTCOME, e.g.]
- visited 4 records (expected 4)
- summary non-empty: 4
- summary empty:     0
- iteration model: ApplyFilter + Process(e) confirmed working in patched
  binary against 3-plugin fixture. Proceeding with sweep design as spec'd.
EOF
git add docs/sweep-smoketest-2026-04-29.md
git commit -m "docs: query_sweep smoketest — ApplyFilter+Process confirmed"
```

- [ ] **Step 6: Delete the spike**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
rm -rf tests/_spike
```

(No commit yet — the spike was never committed; just remove the working-tree files.)

---

## Task 2: Implement `scripts/query_sweep.pas`

**Files:**
- Create: `scripts/query_sweep.pas`

- [ ] **Step 1: Write `scripts/query_sweep.pas`**

Create the file with the full implementation. Reuses the v0.1 preamble (Esc, ConflictName, GetArg, NowIso8601, WriteOutput, MetaContent) — copy-paste from `scripts/query_list.pas` lines 26-119. The query-specific code follows.

```pascal
{
  query_sweep.pas — emit every conflict-bearing main record across the
  full load order in a single xEdit launch.

  Args:
    --out=<path>  required

  Output: JSON envelope { meta, results } where results is an array of
  { fid, sig, edid, status, winner, chain: [{plugin, summary}, ...] }.

  Iteration model: Initialize applies xEdit's conflict-only filter, which
  narrows the nav tree. xEdit's ApplyScriptToSelection then drives
  Process(e) per filtered MainRecord (one call per unique record, by
  master). Finalize writes the JSON envelope.

  IMPORTANT: Pascal `(curly-brace)` block comments are NOT nestable in
  JvInterpreter. The first close-curly-brace ends the comment.
}
unit UserScript;

const
  TOOL_VERSION = '0.2.0';
  CA_OVERRIDE  = 4;

{ ---------- inlined helpers (copy-paste from query_list.pas) ---------- }

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

function NowIso8601: string;
begin
  Result := FormatDateTime('yyyy"-"mm"-"dd"T"hh":"nn":"ss"Z"', Now);
end;

procedure WriteOutput(const path, content: string);
var
  sl: TStringList;
begin
  sl := TStringList.Create;
  try
    sl.Text := content;
    sl.SaveToFile(path);
  finally
    sl.Free;
  end;
end;

function MetaContent(const query, argsJson, startedAt: string;
                     durationMs, recordCount: integer): string;
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
  Result := Result + '"tool_version":' + Esc(TOOL_VERSION);
  if xeditVer <> '' then
    Result := Result + ',"xedit_version":' + Esc(xeditVer);
  Result := Result + ',"query":' + Esc(query);
  Result := Result + ',"args":' + argsJson;
  Result := Result + ',"load_order":[' + loStr + ']';
  Result := Result + ',"plugin_count":' + IntToStr(FileCount);
  Result := Result + ',"record_count":' + IntToStr(recordCount);
  Result := Result + ',"started_at":' + Esc(startedAt);
  Result := Result + ',"duration_ms":' + IntToStr(durationMs);
  Result := Result + '}';
end;

{ ---------- query-specific helpers ---------- }

function SafeSummary(elem: IInterface): string;
begin
  Result := '';
  try
    Result := GetSummary(elem);
  except
    Result := '';
  end;
  if Result = '' then begin
    try
      Result := Name(elem);
    except
      Result := '';
    end;
  end;
end;

function ChainEntries(master: IInterface; ovrCount: integer): string;
var
  i: integer;
  link: IInterface;
begin
  Result := '{"plugin":' + Esc(GetFileName(GetFile(master)))
          + ',"summary":' + Esc(SafeSummary(master)) + '}';
  for i := 0 to ovrCount - 1 do begin
    link := OverrideByIndex(master, i);
    Result := Result + ',{"plugin":' + Esc(GetFileName(GetFile(link)))
                     + ',"summary":' + Esc(SafeSummary(link)) + '}';
  end;
end;

function RecordEntry(rec: IInterface): string;
var
  master, win: IInterface;
  ovrCount, status: integer;
  edid: string;
begin
  master    := MasterOrSelf(rec);
  win       := WinningOverride(rec);
  ovrCount  := OverrideCount(master);
  status    := ConflictAllForMainRecord(rec);

  edid := EditorID(rec);
  if edid = '' then edid := EditorID(master);

  Result := '{';
  Result := Result + '"fid":'    + Esc(IntToHex(GetLoadOrderFormID(master), 8));
  Result := Result + ',"sig":'   + Esc(Signature(master));
  Result := Result + ',"edid":'  + Esc(edid);
  Result := Result + ',"status":' + Esc(ConflictName(status));
  Result := Result + ',"winner":' + Esc(GetFileName(GetFile(win)));
  Result := Result + ',"chain":[' + ChainEntries(master, ovrCount) + ']';
  Result := Result + '}';
end;

function BuildArgsJson(const outPath: string): string;
begin
  Result := '{"out":' + Esc(outPath) + '}';
end;

function ErrorEnvelope(const argsJson, startedAt: string;
                      durationMs, recordCount: integer;
                      const code, msg: string): string;
begin
  Result := '{';
  Result := Result + '"meta":' + MetaContent('sweep', argsJson, startedAt, durationMs, recordCount);
  Result := Result + ',"error":{"code":' + Esc(code) + ',"message":' + Esc(msg) + '}';
  Result := Result + '}';
end;

{ ---------- globals for accumulation across Initialize/Process/Finalize ---------- }

var
  gOutPath:    string;
  gStartedAt:  string;
  gStartD:     TDateTime;
  gArgsJson:   string;
  gErrMsg:     string;
  gResults:    string;       { joined JSON entries with commas }
  gEmittedOne: boolean;
  gCount:      integer;

function Initialize: integer;
begin
  Result := 0;
  gStartD     := Now;
  gStartedAt  := NowIso8601;
  gOutPath    := GetArg('out');
  gArgsJson   := BuildArgsJson(gOutPath);
  gResults    := '';
  gEmittedOne := False;
  gCount      := 0;
  gErrMsg     := '';

  if gOutPath = '' then begin
    gErrMsg := 'missing_arg:--out is required';
    Exit;
  end;

  AddMessage('query_sweep: applying conflict-only filter across '
             + IntToStr(FileCount) + ' loaded plugins');

  FilterPreset             := True;
  FilterConflictAll        := True;
  FilterConflictAllSet     := [3, 4, 5, 6];  { caConflictBenign, caOverride, caConflict, caConflictCritical }
  FilterConflictThis       := False;
  FilterByInjectStatus     := False;
  FilterByNotReachableStatus := False;
  FilterByReferencesInjectedStatus := False;
  FilterByEditorID         := False;
  FilterByName             := False;
  FilterByBaseEditorID     := False;
  FilterByBaseName         := False;
  FilterScaledActors       := False;
  FilterByPersistent       := False;
  FilterUnnecessaryPersistent := False;
  FilterMasterIsTemporary  := False;
  FilterIsMaster           := False;
  FilterPersistentPosChanged := False;
  FilterDeleted            := False;
  FilterByVWD              := False;
  FilterByHasVWDMesh       := False;
  FilterBySignature        := False;
  FlattenBlocks            := False;
  FlattenCellChilds        := False;
  AssignPersWrldChild      := False;
  InheritConflictByParent  := True;

  try
    ApplyFilter;
  except
    on E: Exception do gErrMsg := 'apply_filter_failed:' + E.Message;
  end;
end;

function Process(e: IInterface): integer;
var
  entry: string;
begin
  Result := 0;
  if gErrMsg <> '' then Exit;
  if Signature(e) = 'TES4' then Exit;

  try
    entry := RecordEntry(e);
  except
    on Ex: Exception do begin
      AddMessage('query_sweep: skipping record due to exception: ' + Ex.Message);
      Exit;
    end;
  end;

  if gEmittedOne then gResults := gResults + ',';
  gResults := gResults + entry;
  gEmittedOne := True;
  Inc(gCount);
end;

function Finalize: integer;
var
  durationMs, colonPos: integer;
  buf, code, msg: string;
begin
  Result := 0;
  durationMs := Round((Now - gStartD) * 86400000);

  if gErrMsg <> '' then begin
    colonPos := Pos(':', gErrMsg);
    if colonPos > 0 then begin
      code := Copy(gErrMsg, 1, colonPos - 1);
      msg  := Copy(gErrMsg, colonPos + 1, Length(gErrMsg));
    end else begin
      code := 'xedit_internal';
      msg  := gErrMsg;
    end;
    if gOutPath <> '' then
      WriteOutput(gOutPath, ErrorEnvelope(gArgsJson, gStartedAt, durationMs, gCount, code, msg));
    Exit;
  end;

  buf := '{';
  buf := buf + '"meta":' + MetaContent('sweep', gArgsJson, gStartedAt, durationMs, gCount);
  buf := buf + ',"results":[' + gResults + ']';
  buf := buf + '}';
  WriteOutput(gOutPath, buf);

  AddMessage('query_sweep: emitted ' + IntToStr(gCount) + ' records in '
             + IntToStr(durationMs) + 'ms');
end;

end.
```

- [ ] **Step 2: Run query_sweep manually against fixtures**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
mkdir -p tests/.tmp
"$OBLIVION_CONFLICTS_XEDIT" -IKnowWhatImDoing -autoload -autoexit \
  -D:"tests/fixtures/data" \
  -P:"tests/fixtures/loadorder.txt" \
  -script:"scripts/query_sweep.pas" \
  --out="tests/.tmp/sweep_manual.json"
```

Expected: `tests/.tmp/sweep_manual.json` exists, valid JSON.

- [ ] **Step 3: Verify the output structure**

Run: `python -m json.tool tests/.tmp/sweep_manual.json | head -80`

Expected:
- `meta.query == "sweep"`
- `meta.tool_version == "0.2.0"`
- `meta.plugin_count == 3`
- `meta.record_count == 4`
- `results` array with 4 entries
- Each result entry has fields: `fid`, `sig`, `edid`, `status`, `winner`, `chain` (array)
- Each chain entry has fields: `plugin`, `summary`

If `record_count != 4`: re-check Task 1's smoketest interpretation. If smoketest passed but sweep emits a different count, the divergence is a Process(e) iteration difference between smoketest and full script — investigate before continuing.

- [ ] **Step 4: Commit the script**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git add scripts/query_sweep.pas
git commit -m "feat(query_sweep): whole-modlist conflict matrix in one xEdit launch

Applies xEdit's conflict-only filter in Initialize, accumulates
per-record entries via Process(e), writes JSON envelope in Finalize.
Per-record fields: fid, sig, edid, status, winner, chain (with summary
per chain link)."
```

---

## Task 3: Add to snapshot test harness

**Files:**
- Modify: `tests/run_tests.sh`
- Create: `tests/fixtures/expected/query_sweep.json`

- [ ] **Step 1: Add the run_one call to tests/run_tests.sh**

Edit `tests/run_tests.sh`. Find the existing `run_one` block (lines 97-99):

```bash
run_one query_list query_list.pas --target=OverrideA.esp
run_one query_record query_record.pas --formid=00001001 --formid=00001002
run_one query_between query_between.pas --a=OverrideA.esp --b=OverrideB.esp
```

Add a fourth line immediately after:

```bash
run_one query_sweep query_sweep.pas
```

(No extra args — sweep takes only `--out`, which `run_one` already supplies.)

- [ ] **Step 2: Generate the expected snapshot**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
UPDATE_SNAPSHOTS=1 ./tests/run_tests.sh
```

Expected: `=== query_sweep ===` followed by `updated: ...expected/query_sweep.json`. All four cases (including the original three) finish without errors.

- [ ] **Step 3: Inspect the generated snapshot**

Run: `cat tests/fixtures/expected/query_sweep.json`

Verify by eye:
- `meta.query == "sweep"`, `meta.plugin_count == 3`, `meta.record_count == 4`
- `results` has 4 entries: TestSword, TestArmor, TestChest, TestDagger
- TestSword has `status: "caConflict"`, `chain` has 3 entries
- TestArmor, TestDagger have `status: "caOverride"`, `chain` has 2 entries
- TestChest has `status: "caOverride"`, `chain` has 2 entries (Master + OverrideB)
- TestDagger entry includes `winner: "OverrideA.esp"` (deleted record still has a winner)

If anything looks wrong: do not commit. Investigate the script output before proceeding.

- [ ] **Step 4: Run tests in non-update mode to confirm stability**

Run: `./tests/run_tests.sh`

Expected: `All snapshot tests passed.` (Without `UPDATE_SNAPSHOTS=1` it diffs against the just-saved snapshot, which should match exactly.)

- [ ] **Step 5: Commit harness + snapshot**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git add tests/run_tests.sh tests/fixtures/expected/query_sweep.json
git commit -m "test(query_sweep): snapshot harness wired up against 3-plugin fixture

Expected: 4 records (TestSword, TestArmor, TestChest, TestDagger).
TestSword is the only 3-way conflict (caConflict); the other three
are caOverride."
```

---

## Task 4: Real-modlist verification (Reborn-Base)

**Goal:** Confirm the sweep works against a realistic load order (51 plugins) and capture timing/size data for the README.

**Files:**
- None modified; this is a verification task that produces data for the README in Task 5.

- [ ] **Step 1: Add `cache/.gitkeep` and gitignore**

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
mkdir -p cache
touch cache/.gitkeep
```

Edit `.gitignore` (create if missing) to include:
```
# sweep cache (regenerable)
cache/*.json
!cache/.gitkeep
```

- [ ] **Step 2: Run sweep against Reborn-Base**

This requires the MO2 setup from v0.1 (custom executable already registered for the patched binary).

Run:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
time ./examples/reborn-shortcut.sh sweep --out=cache/sweep.json
```

Expected: completes successfully (no error envelope), produces `cache/sweep.json`.

Capture:
- Wall-clock duration (from `time` output) — record for README perf table.
- File size: `ls -lh cache/sweep.json`
- Record count: `python -c "import json; d=json.load(open('cache/sweep.json')); print('records:', len(d['results']), 'plugins:', d['meta']['plugin_count'])"`

If sweep errors: the JSON's `meta.error` will tell you the code. Common possibilities:
- `apply_filter_failed:...` → ApplyFilter behaviour differs against a real load order vs fixture; capture the message and surface to user before continuing.
- `xedit_internal:...` → unexpected exception; check log.

- [ ] **Step 3: Spot-check a known conflict**

Run a `jq` query against the result. Pick a known APW-style override pattern from memory or the user's previous investigation. Example (substitute actual plugin names from the load order):

```bash
jq '.results[] | select(.winner == "Maskar'\''s Oblivion Overhaul.esp") | {fid, sig, edid, chain: [.chain[].plugin]}' cache/sweep.json | head -30
```

Confirm the output is non-empty and the chain looks plausible (master first, override last).

- [ ] **Step 4: Verify summaries are non-empty (or document otherwise)**

Run:
```bash
python <<'PY'
import json
d = json.load(open('cache/sweep.json'))
total = sum(len(r['chain']) for r in d['results'])
empty = sum(1 for r in d['results'] for c in r['chain'] if c['summary'] == '')
print(f'chain links total: {total}, empty summary: {empty} ({100*empty/total:.1f}%)')
PY
```

Note the result for the README. If empty% is high (>20%), document the limitation in the README — readers should know that `summary` may fall back to `Name(e)` for some record types.

- [ ] **Step 5: Capture the data for the README**

Save the numbers somewhere you'll reference in Task 5 — a scratch note in `docs/sweep-perf-2026-04-29.md` works:

```bash
cd D:/Modlists/_clones/oblivion-conflicts
cat > docs/sweep-perf-2026-04-29.md <<'EOF'
# query_sweep performance — Reborn-Base — 2026-04-29

- Plugin count:       [from step 2]
- Record count:       [from step 2]
- Wall clock:         [from step 2 `time` output]
- Cache size on disk: [from step 2 `ls -lh`]
- Summary fill rate:  [from step 4]
EOF
git add docs/sweep-perf-2026-04-29.md
git commit -m "docs: query_sweep perf measurements against Reborn-Base"
```

---

## Task 5: README updates

**Files:**
- Modify: `README.md`

- [ ] **Step 1: Add query_sweep row to the queries table**

Edit `README.md`. Find the existing query table (currently 3 rows: `query_list`, `query_between`, `query_record`). Add a fourth row at the top (sweep is the highest-leverage entry now):

```markdown
| Query | What it answers |
|---|---|
| `query_sweep`   | One launch → every conflict-bearing record in the load order. The basis for cache-driven workflows. |
| `query_list`    | Which records does plugin X define-or-override that someone else also touches, and how serious is each conflict? |
| `query_between` | What records do plugins A and B both touch, and which subrecords disagree? |
| `query_record`  | Show the full chain and per-subrecord values for one or more FormIDs. |
```

- [ ] **Step 2: Add a `query_sweep` usage section**

After the existing `query_record` usage section, add:

```markdown
### `query_sweep --out=<path>`

Walks the entire loaded load order with xEdit's conflict-only filter, emits
one entry per conflict-bearing main record. Designed to be run once per
modlist (or whenever the modlist changes); cache-based queries answer
"what does X override" / "who overrides X" / category roll-ups without
re-launching xEdit.

Output: array of records with `fid`, `sig`, `edid`, `status`, `winner`,
and `chain` (one entry per plugin in the override chain, each with
`plugin` and `summary`). Filters out `caOnlyOne` and `caNoConflict`
records (xEdit's filter does this for us).

**Run via the MO2 wrapper:**

\`\`\`bash
./examples/reborn-shortcut.sh sweep --out=cache/sweep.json
\`\`\`

**Run direct (no MO2):**

\`\`\`bash
TES4Edit_patched.exe -IKnowWhatImDoing -autoload -autoexit \\
  -D:"<DataDir>" -P:"<plugins.txt>" \\
  -script:scripts/query_sweep.pas --out=cache/sweep.json
\`\`\`

**Performance** (Reborn-Base profile, [N] plugins): [DURATION]s wall clock,
[SIZE] cache file, [RECORD_COUNT] records emitted. Summaries non-empty
[FILL_RATE]% of chain links (the rest fall back to `Name(record)`).

[Substitute actual numbers from `docs/sweep-perf-2026-04-29.md` before committing.]
```

(In the actual file, the backticks should not be escaped — they're escaped here for plan readability.)

- [ ] **Step 3: Add a "Querying the cache" section with jq recipes**

After the `query_sweep` section, add:

```markdown
## Querying the sweep cache

The sweep output is a single JSON file. `jq` answers most questions
directly — no CLI needed.

**What does plugin X override?**

\`\`\`bash
jq '.results[] | select(.winner == "APW - Conflict Resolution.esp")' cache/sweep.json
\`\`\`

**What does X override, grouped by overridden plugin (with category counts):**

\`\`\`bash
jq '[.results[] | select(.winner == "APW - Conflict Resolution.esp")]
    | group_by(.chain[-2].plugin)
    | map({plugin: .[0].chain[-2].plugin,
           count: length,
           sigs: ([.[].sig] | unique)})' cache/sweep.json
\`\`\`

**Who overrides records in plugin X?**

\`\`\`bash
jq '.results[] | select(any(.chain[]; .plugin == "PSMainQuestDelayer.esp")
                        and .winner != "PSMainQuestDelayer.esp")' cache/sweep.json
\`\`\`

**Category roll-up of one plugin's overrides:**

\`\`\`bash
jq '[.results[] | select(.winner == "APW - Conflict Resolution.esp")]
    | group_by(.sig)
    | map({sig: .[0].sig, count: length})' cache/sweep.json
\`\`\`

For per-subrecord drill-down on a specific record, use `query_record`:

\`\`\`bash
./examples/reborn-shortcut.sh record --formid=1E012345 --out=/tmp/r.json
\`\`\`
```

- [ ] **Step 4: Update the Reborn shortcut example list**

In the `## Reborn shortcut` section, find the `./examples/reborn-shortcut.sh` usage block and add `sweep` as a recognised query name. Find the existing example list:

```bash
./examples/reborn-shortcut.sh list   --target="Maskar's Oblivion Overhaul.esp" --out=/tmp/moo.json
./examples/reborn-shortcut.sh record --formid=1E012345 --out=/tmp/rec.json
./examples/reborn-shortcut.sh between --a=MOO.esp --b=OOO.esp --out=/tmp/diff.json
./examples/reborn-shortcut.sh /full/path/to/custom.pas --foo=bar --out=/tmp/x.json
```

Add a `sweep` line at the top:

```bash
./examples/reborn-shortcut.sh sweep --out=cache/sweep.json
```

Verify `examples/reborn-shortcut.sh` already routes a `sweep` first-arg to `scripts/query_sweep.pas` (per its v0.1 design — it should accept any name corresponding to `scripts/query_<name>.pas`). If not, the shortcut script needs a one-line update; make it.

- [ ] **Step 5: Update the Status section**

Change the version line in the `## Status` section from `v0.1 — three queries...` to `v0.2 — four queries: sweep is the basis for cache-driven workflows; the other three remain available for one-off questions and per-record drill.`

- [ ] **Step 6: Final tests run**

Run: `./tests/run_tests.sh`

Expected: `All snapshot tests passed.` (Four cases now.)

- [ ] **Step 7: Commit README changes**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git add README.md examples/reborn-shortcut.sh
git commit -m "docs: README + reborn-shortcut updates for query_sweep

- query_sweep added to query table
- usage section with MO2 wrapper + direct invocation
- jq recipes for cache queries (overrides, overridden-in, category roll-ups)
- shortcut script: sweep accepted as a query name
- Status bumped to v0.2"
```

---

## Task 6: Merge to main

**Files:**
- None directly; branch operations only.

- [ ] **Step 1: Final smoke check**

Run: `./tests/run_tests.sh && echo OK`
Expected: `All snapshot tests passed.` followed by `OK`.

- [ ] **Step 2: Review the branch as a whole**

Run: `git log --oneline main..feat/sweep-query`

Expected (in order, oldest first):
1. `docs: query_sweep smoketest — ApplyFilter+Process confirmed`
2. `feat(query_sweep): whole-modlist conflict matrix in one xEdit launch`
3. `test(query_sweep): snapshot harness wired up against 3-plugin fixture`
4. `docs: query_sweep perf measurements against Reborn-Base`
5. `docs: README + reborn-shortcut updates for query_sweep`

If any commits are missing or out of order: stop and review. Otherwise:

- [ ] **Step 3: Merge to main**

```bash
cd D:/Modlists/_clones/oblivion-conflicts
git checkout main
git merge --no-ff feat/sweep-query -m "Merge feat/sweep-query: query_sweep + cache workflow

Adds query_sweep.pas (whole-modlist conflict matrix in one xEdit launch),
snapshot test against the 3-plugin fixture, and README jq recipes for
cache-based queries. Per-record drill remains on query_record."
```

- [ ] **Step 4: Push to origin**

```bash
git push origin main feat/sweep-query
```

(Pushes both main and the feature branch for history.)

---

## Self-Review Notes

- **Spec coverage:** every section of the spec maps to a task. Sweep script (Task 2), cache convention (Task 4 step 1), no CLI (intentionally absent — README jq recipes in Task 5), drill unchanged (no task — verified by Task 3's existing-tests-still-pass step), error handling (Task 2's Finalize logic), testing (Tasks 3 + 4).
- **Type consistency:** field names (`fid`/`sig`/`edid`/`status`/`winner`/`chain`/`plugin`/`summary`) are consistent across the script, the verification steps, the snapshot expectations, and the README jq recipes.
- **Placeholders:** The Task 5 step 2 README content has `[N]`, `[DURATION]`, `[SIZE]`, `[RECORD_COUNT]`, `[FILL_RATE]` placeholders for the engineer to fill in from the Task 4 perf notes — these are intentional substitution points, called out explicitly. Task 1 step 5 has a `[FILL IN BASED ON STEP 4 OUTCOME]` placeholder for the same reason. Both are "fill in the measured value" placeholders, not unspecified-design placeholders.
- **No code outside this plan should change.** Existing scripts (query_list, query_record, query_between) are untouched.
