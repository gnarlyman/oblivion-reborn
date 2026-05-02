# oblivion-xedit-repl Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build a persistent xEdit subprocess that accepts Pascal scripts via stdin, eliminating the ~25-second cold-boot cost paid by `xEdit -script:foo.pas -autoexit` invocations.

**Architecture:** New `-repl` CLI mode in the `gnarlyman/TES5Edit` fork (branch `feat/repl-mode`) runs a read-eval-print loop after normal init. A small Python wrapper owns the subprocess, frames stdin/stdout, and exposes `exec` for ad-hoc and persistent use. The existing `oblivion-usvfs-launcher` gains a `--scratch` flag that maps a write-redirect overlay so any `Save` lands in a scratch dir instead of `Data\`.

**Tech Stack:** Delphi 12 (xEdit fork), Python 3.11+ (wrapper), C# / .NET 8 (launcher patch), JvInterpreter (Pascal scripting host already inside xEdit), USVFS (Windows API hooking for the Data overlay).

**Spec:** `docs/superpowers/specs/2026-05-01-oblivion-xedit-repl-design.md`

---

## Pre-flight context for the engineer

**Repos and paths:**
- xEdit fork local clone: `C:\Users\mschon\repos\TES5Edit\` (current branch: `feat/tmconflicts`)
- xEdit deployed binary: `D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe`
- Launcher project: `D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\`
- Launcher binary: `D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\bin\Release\net8.0-windows10.0.17763.0\UsvfsLauncher.exe`
- New repo to create: `D:\Modlists\_clones\oblivion-xedit-repl\`
- Test profile: `D:\Modlists\Reborn\profiles\Reborn-Base\plugins.txt` (or a smaller fixture if available)

**Building xEdit:**
- Open `C:\Users\mschon\repos\TES5Edit\xEdit.dproj` in Delphi 12 IDE.
- Build → output is `Build\xEdit.exe`.
- Deploy by copying `Build\xEdit.exe` over the deployed binary path above (rename old one to `TES4Edit_patched_v0.2.exe` first as fallback).
- See memory `feedback_xedit_build_setup.md` if the build fails — package load order matters (JCL → JVCL → VirtualTrees → FileContainer; LiteDebug Active).

**Common Delphi gotchas (from prior fork patches, see `reference_xedit_fork.md`):**
- `tmrMessagesTimer` (the procedure containing the dispatch block in `xeMainForm.pas`) declares an outer `var i, dummy: Integer;` — inline `for var i := ...` in nested blocks fails with E2004 ("Identifier redeclared"). Drop the inline `var` or rename to `j`/`k`.
- `wbCommandLine` is not in default `uses`. `wbFindCmdLineParam` lives there. Add to implementation `uses` if needed.
- `Files: TwbFiles = TArray<IwbFile>` — use `Length(Files)` and `Files[i]`, NOT `Files.Count`.
- After a CLI tool-mode handler runs, `AutoDone` only auto-sets if `wbToolMode in wbPluginModes`. If your new mode isn't in that set, set `AutoDone := True` explicitly when the loop should terminate. Important for `-repl`: we do NOT set `AutoDone` until the loop actually exits (on stdin EOF).

**Pascal scripting (JvInterpreter) gotchas (from `feedback_pascal_script_quirks.md`):**
- Block `{}` comments are non-nestable.
- `s[i]` indexing of strings does NOT work; use `Copy(s, i, 1)` instead.
- No top-level array variables — declare arrays inside a procedure.
- `uses` clauses resolve from the xEdit install dir, not the script's dir.
- `Inc(x, n)` works; `x := x + n` also works. `RecordByIndex` vs `ElementByIndex` for SCPT iteration is a known divergence — see memory if iterating scripts.

**Disk-first I/O contract:** Scripts that produce non-trivial output write to files under the configured `--output` dir. The REPL response carries only a small JSON summary + the list of files written. Agent reads files with `Read`/`Grep`/`Bash`. This is the same convention `oblivion-conflicts` already uses.

---

## File Structure

### xEdit fork (`C:\Users\mschon\repos\TES5Edit\`, branch `feat/repl-mode`)

| File | Action | Responsibility |
|---|---|---|
| `Core/wbInterface.pas` | Modify | Add `tmRepl` to `TwbToolMode` enum; add to `wbAutoModes` and `wbAlwaysMode` |
| `xEdit/xeInit.pas` | Modify | Recognize `-repl` flag; set `wbToolMode := tmRepl`; configure run flags |
| `xEdit/xeMainForm.pas` | Modify | Add `tmRepl` dispatch branch that calls into the new REPL unit |
| `xEdit/wbREPLMode.pas` | Create | REPL loop: read framed stdin, dispatch to JvInterpreter, write framed stdout |
| `xEdit/wbREPLHelpers.pas` | Create | Pascal helper functions auto-mounted into JvInterpreter scope (`OpenOutput`, `EmitJSONLine`, `WriteSummary`) |

### New repo (`D:\Modlists\_clones\oblivion-xedit-repl\`)

| File | Action | Responsibility |
|---|---|---|
| `pyproject.toml` | Create | Python package metadata; entry points |
| `README.md` | Create | Setup, usage patterns, examples |
| `LICENSE` | Create | MPL-2.0 (matches xEdit fork license) |
| `xedit_repl/__init__.py` | Create | Empty package marker; version |
| `xedit_repl/markers.py` | Create | Frame marker constants; source-line escape logic |
| `xedit_repl/wrapper.py` | Create | `XEditReplProcess` class — subprocess + framing + result parsing |
| `xedit_repl/cli.py` | Create | CLI entry points: `start`, `exec`, `stop`, single-shot `--exec` |
| `examples/find_overrides.pas` | Create | Seed example: list overrides for a record by FormID |
| `examples/dump_record_full.pas` | Create | Port from `D:\Modlists\_clones\oblivion-conflicts\scripts\dump_record_full.pas` |
| `examples/README.md` | Create | How to write a script that returns structured output |
| `tests/conftest.py` | Create | pytest fixtures: paths, fake REPL subprocess |
| `tests/test_markers.py` | Create | Unit tests for marker escaping + matching |
| `tests/test_wrapper.py` | Create | Unit tests against a fake REPL (Python script that emits valid framing) |
| `tests/test_e2e.py` | Create | Integration: launch real xEdit-repl against a fixture profile |
| `tests/fake_repl.py` | Create | Stand-in REPL for unit tests (deterministic framing, no xEdit dependency) |
| `tests/fixtures/profile/plugins.txt` | Create | Tiny 3-plugin fixture set (Master.esm + 2 overrides) |

### Launcher patch (`D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\`)

| File | Action | Responsibility |
|---|---|---|
| `Program.cs` | Modify | Add `--scratch <dir>` flag; if set, add scratch as topmost overlay layer (writes go there) |

---

## Phase 0 — Probes (verify two assumptions before writing code)

Memory `feedback_test_before_design.md` says: empirically test undocumented primitives before locking architecture. Two assumptions in the design need a probe.

### Task 0.1: Probe — JvInterpreter can compile/run multiple scripts in one process without state leakage

**Files:**
- Probe script: `C:\Users\mschon\repos\TES5Edit\probes\repl_jvi_probe.pas` (new — deleted at end of phase)

- [ ] **Step 1: Write the probe script**

```pascal
{
  Probe: run two consecutive Pascal source blocks via JvInterpreter
  in the same xEdit process and verify there's no interpreter state
  carry-over.

  Block A defines a procedure `Foo` that AddMessage's "A".
  Block B defines a different procedure `Foo` that AddMessage's "B".
  If JvInterpreter holds onto the symbol table between blocks, B's
  redefinition will fail or A's body will run.
}
unit repl_jvi_probe;

interface
uses
  Classes, SysUtils, JvInterpreter;

procedure RunProbe;

implementation

procedure RunProbe;
var
  jvi: TJvInterpreterProgram;
  srcA, srcB: string;
begin
  srcA :=
    'unit u;' + sLineBreak +
    'procedure Foo;' + sLineBreak +
    'begin AddMessage(''A''); end;' + sLineBreak +
    'begin Foo; end.';
  srcB :=
    'unit u;' + sLineBreak +
    'procedure Foo;' + sLineBreak +
    'begin AddMessage(''B''); end;' + sLineBreak +
    'begin Foo; end.';

  // Iteration 1
  jvi := TJvInterpreterProgram.Create(nil);
  try
    jvi.Source.Text := srcA;
    jvi.Compile;
    jvi.Run;
  finally
    jvi.Free;
  end;

  // Iteration 2 — fresh instance
  jvi := TJvInterpreterProgram.Create(nil);
  try
    jvi.Source.Text := srcB;
    jvi.Compile;
    jvi.Run;
  finally
    jvi.Free;
  end;
end;

end.
```

- [ ] **Step 2: Wire into a temporary CLI flag**

Add `-jviprobe` to `xEdit/xeInit.pas` `ToolModes` and a `tmJVIProbe` enum value to `wbInterface.pas`. In `xeMainForm.pas` dispatch table, add a branch that calls `repl_jvi_probe.RunProbe` and sets `AutoDone := True`. This is throwaway scaffolding — delete after probe.

- [ ] **Step 3: Build and run**

Build xEdit in Delphi 12, deploy, then run:

```powershell
& "D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe" `
  -IKnowWhatImDoing -autoexit -jviprobe `
  "-D:D:\Modlists\Reborn\Stock Game\Data" `
  "-P:D:\Modlists\Reborn\profiles\Reborn-Base\plugins.txt"
```

Expected: xEdit's message log shows `A` then `B`. If it shows `A` then `A`, JvInterpreter is caching symbols across instances and we need a different reset strategy.

- [ ] **Step 4: Document result**

Add a one-paragraph note to `D:\Modlists\Reborn\docs\superpowers\specs\2026-05-01-oblivion-xedit-repl-design.md` under a new "## Probe results" section, stating: probe succeeded / failed, what we observed, and (if failed) what the alternative is (likely: tear down + recreate the entire JvInterpreter unit cache between scripts).

- [ ] **Step 5: Remove probe scaffolding, commit**

Delete `repl_jvi_probe.pas`, revert `tmJVIProbe` enum value and the dispatch branch. Keep the `feat/repl-mode` branch creation (next task).

```bash
cd C:/Users/mschon/repos/TES5Edit
git checkout -b feat/repl-mode  # branched from feat/tmconflicts
# Probe scaffolding has been removed; nothing to commit yet
```

### Task 0.2: Probe — stdin reader thread works alongside main-thread JvInterpreter

**Files:**
- Probe script: `C:\Users\mschon\repos\TES5Edit\probes\repl_stdin_probe.pas` (new — deleted at end of phase)

- [ ] **Step 1: Write the probe**

```pascal
unit repl_stdin_probe;

interface
uses Classes, SysUtils, Windows;

procedure RunProbe;

implementation

type
  TStdinReader = class(TThread)
  private
    FQueue: TStringList;
    FLock: TRTLCriticalSection;
  protected
    procedure Execute; override;
  public
    constructor Create;
    destructor Destroy; override;
    function Drain: TStringList;  // caller frees
  end;

constructor TStdinReader.Create;
begin
  inherited Create(False);
  FQueue := TStringList.Create;
  InitializeCriticalSection(FLock);
end;

destructor TStdinReader.Destroy;
begin
  EnterCriticalSection(FLock);
  FQueue.Free;
  LeaveCriticalSection(FLock);
  DeleteCriticalSection(FLock);
  inherited;
end;

procedure TStdinReader.Execute;
var
  line: string;
begin
  while not Terminated do
  begin
    Readln(Input, line);
    if line = '__EXIT__' then begin Terminate; Exit; end;
    EnterCriticalSection(FLock);
    try FQueue.Add(line); finally LeaveCriticalSection(FLock); end;
  end;
end;

function TStdinReader.Drain: TStringList;
begin
  EnterCriticalSection(FLock);
  try
    Result := TStringList.Create;
    Result.Assign(FQueue);
    FQueue.Clear;
  finally
    LeaveCriticalSection(FLock);
  end;
end;

procedure RunProbe;
var
  reader: TStdinReader;
  drained: TStringList;
  i: Integer;
begin
  reader := TStdinReader.Create;
  try
    Writeln('READY (type lines, then __EXIT__):');
    Flush(Output);
    while not reader.Terminated do
    begin
      Sleep(200);
      drained := reader.Drain;
      try
        for i := 0 to drained.Count - 1 do
        begin
          Writeln('GOT: ' + drained[i]);
          Flush(Output);
        end;
      finally
        drained.Free;
      end;
    end;
  finally
    reader.WaitFor;
    reader.Free;
  end;
end;

end.
```

- [ ] **Step 2: Wire as `-stdinprobe`, build, run**

Same temporary-flag pattern as Task 0.1. Run the binary, type a few lines into stdin, verify each is echoed back as `GOT: <line>`, then `__EXIT__`. Confirms threaded stdin reading works in xEdit's process model.

- [ ] **Step 3: Document result and remove scaffolding**

Same as Task 0.1 step 4–5. Append probe result to spec.

```bash
cd C:/Users/mschon/repos/TES5Edit
# probe scaffolding deleted; on feat/repl-mode branch with no commits yet
```

---

## Phase 1 — xEdit `-repl` mode (the warm core)

### Task 1.1: Add `tmRepl` enum value

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\Core\wbInterface.pas`

- [ ] **Step 1: Locate `TwbToolMode` enum and `wbAutoModes` / `wbAlwaysMode` sets**

Open `Core/wbInterface.pas`. Search for `TwbToolMode = (`. The enum already includes `tmConflicts` (added by `feat/tmconflicts`).

- [ ] **Step 2: Add `tmRepl` to enum**

Add `tmRepl` after `tmConflicts`. Then locate `wbAutoModes` and `wbAlwaysMode` constant sets (they list the modes that bypass certain validation). Add `tmRepl` to both.

Do NOT add `tmRepl` to `wbPluginModes` — that triggers a "requires a valid plugin name" validation. Same lesson as `tmConflicts`.

- [ ] **Step 3: Build to confirm it compiles**

Build in Delphi 12. No new behavior yet, just enum wiring. Confirm clean compile.

- [ ] **Step 4: Commit**

```bash
cd C:/Users/mschon/repos/TES5Edit
git add Core/wbInterface.pas
git commit -m "repl: add tmRepl tool mode enum value"
```

### Task 1.2: Recognize `-repl` CLI flag

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\xeInit.pas`

- [ ] **Step 1: Find ToolModes array and add 'repl'**

Locate the `ToolModes: array[...] of string = (...)` declaration. Add `'repl'` to the array (in the same place tmConflicts has its `'conflicts'` entry, alphabetical or matching enum order).

- [ ] **Step 2: Find isMode dispatch and add Repl block**

Locate the chain of `if isMode('Conflicts') then begin ... end` clauses. Add an analogous block:

```pascal
if isMode('Repl') then begin
  wbToolMode    := tmRepl;
  wbToolName    := 'REPL';
  wbEditAllowed := True;       // scripts may mutate in-memory state
  wbDontSave    := False;      // scripts may explicitly Save
end;
```

`wbEditAllowed := True` is intentional: scripts the REPL hosts may mutate. Mutation safety is delegated to USVFS write redirect (Phase 4), not to xEdit-side flags.

- [ ] **Step 3: Add to wbBuildRefs := False group**

Locate the block setting `wbBuildRefs := False` for auto-check tool modes (tmCheck, tmConflicts, etc.). Add `tmRepl` to that group — REPL doesn't need ref-building unless a script asks for it.

- [ ] **Step 4: Build, confirm `-repl` is recognized**

Build, deploy, run `xEdit.exe -IKnowWhatImDoing -repl ...` (no other args). Should fail with a downstream error about missing dispatch (next task fixes that), but should NOT fail with "unrecognized flag."

- [ ] **Step 5: Commit**

```bash
git add xEdit/xeInit.pas
git commit -m "repl: recognize -repl CLI flag"
```

### Task 1.3: Create `wbREPLMode` unit skeleton

**Files:**
- Create: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLMode.pas`

- [ ] **Step 1: Write skeleton with marker constants and stub procedure**

```pascal
unit wbREPLMode;

{
  REPL mode for xEdit. After normal init + plugin load, enters a
  read-eval-print loop that consumes Pascal source from stdin,
  evaluates via JvInterpreter, and emits framed results to stdout.

  Frame markers (column-0, bare lines, no surrounding whitespace):
    ===READY=== <session-id>      (one-shot, after init)
    ===END_SOURCE===              (terminator for client-supplied source)
    ===RESULT=== <one-line-json>  (start of result envelope)
    ===END_RESULT===              (terminator for result)

  Stdout from AddMessage is interleaved as:
    STDOUT: <line>

  Anything not prefixed and not a recognized frame marker is treated
  as a server-internal log line and ignored by clients.
}

interface

procedure RunREPL;

implementation

uses
  Classes, SysUtils, Windows;

const
  MARKER_READY       = '===READY===';
  MARKER_END_SOURCE  = '===END_SOURCE===';
  MARKER_RESULT      = '===RESULT===';
  MARKER_END_RESULT  = '===END_RESULT===';
  STDOUT_PREFIX      = 'STDOUT: ';

procedure RunREPL;
begin
  Writeln(MARKER_READY + ' ' + IntToStr(GetTickCount));
  Flush(Output);
  // TODO: Tasks 1.5–1.7 fill in the loop body
end;

end.
```

- [ ] **Step 2: Add wbREPLMode to xEdit project**

Open `xEdit\xEdit.dproj` in Delphi 12 (or edit the .dpr). Add `wbREPLMode.pas` to the project's source files. Verify it appears in the Project Manager.

- [ ] **Step 3: Build, confirm clean compile**

Build. The skeleton compiles but is not yet called.

- [ ] **Step 4: Commit**

```bash
git add xEdit/wbREPLMode.pas xEdit/xEdit.dproj  # or .dpr if that's what you edit
git commit -m "repl: scaffold wbREPLMode unit"
```

### Task 1.4: Wire `tmRepl` dispatch in xeMainForm

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\xeMainForm.pas`

- [ ] **Step 1: Locate the dispatch block in tmrMessagesTimer**

Search for `tmConflicts` in `xeMainForm.pas`. The dispatch lives inside `tmrMessagesTimer` (a Timer event) around line 17580 (per `reference_xedit_fork.md`; verify current line). The block looks like a chain of `if wbToolMode = tmXxx then ...` cases.

- [ ] **Step 2: Add wbREPLMode to implementation uses**

Locate `implementation` section's `uses` clause. Add `wbREPLMode` to it.

- [ ] **Step 3: Add the dispatch branch**

Inside the dispatch try block, add:

```pascal
if wbToolMode = tmRepl then begin
  RunREPL;
  AutoDone := True;
end;
```

Note: `AutoDone := True` only fires after `RunREPL` returns (on stdin EOF in the eventual loop). Until then, the REPL keeps the process alive serving requests.

- [ ] **Step 4: Build, deploy, smoke test**

Build, deploy, run:

```powershell
& "D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe" `
  -IKnowWhatImDoing -repl `
  "-D:D:\Modlists\Reborn\Stock Game\Data" `
  "-P:D:\Modlists\Reborn\profiles\Reborn-Base\plugins.txt"
```

Expected: xEdit boots normally (~25s for Reborn-Base), then prints `===READY=== <ticks>` to stdout and exits (because the loop body is still TODO).

- [ ] **Step 5: Commit**

```bash
git add xEdit/xeMainForm.pas
git commit -m "repl: dispatch tmRepl to RunREPL"
```

### Task 1.5: Implement stdin reader thread

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLMode.pas`

- [ ] **Step 1: Add TStdinReader class**

Inside `wbREPLMode.pas`, in the `implementation` section, add (based on probe 0.2):

```pascal
type
  TStdinReader = class(TThread)
  private
    FLines: TStringList;
    FLock: TRTLCriticalSection;
    FEOF: Boolean;
  protected
    procedure Execute; override;
  public
    constructor Create;
    destructor Destroy; override;
    function ReadLineBlocking(TimeoutMs: Integer): string;
    // returns line if available within timeout; '' if timeout; '__EOF__' if stdin closed
  end;

constructor TStdinReader.Create;
begin
  inherited Create(False);
  FLines := TStringList.Create;
  InitializeCriticalSection(FLock);
  FEOF := False;
end;

destructor TStdinReader.Destroy;
begin
  EnterCriticalSection(FLock);
  FLines.Free;
  LeaveCriticalSection(FLock);
  DeleteCriticalSection(FLock);
  inherited;
end;

procedure TStdinReader.Execute;
var
  line: string;
begin
  while not Terminated do
  begin
    if Eof(Input) then
    begin
      EnterCriticalSection(FLock);
      try FEOF := True; finally LeaveCriticalSection(FLock); end;
      Exit;
    end;
    Readln(Input, line);
    EnterCriticalSection(FLock);
    try FLines.Add(line); finally LeaveCriticalSection(FLock); end;
  end;
end;

function TStdinReader.ReadLineBlocking(TimeoutMs: Integer): string;
var
  waited: Integer;
begin
  Result := '';
  waited := 0;
  while waited < TimeoutMs do
  begin
    EnterCriticalSection(FLock);
    try
      if FEOF and (FLines.Count = 0) then begin Result := '__EOF__'; Exit; end;
      if FLines.Count > 0 then
      begin
        Result := FLines[0];
        FLines.Delete(0);
        Exit;
      end;
    finally
      LeaveCriticalSection(FLock);
    end;
    Sleep(20);
    Inc(waited, 20);
  end;
end;
```

- [ ] **Step 2: Build, confirm compile**

Build. No behavior change yet.

- [ ] **Step 3: Commit**

```bash
git add xEdit/wbREPLMode.pas
git commit -m "repl: add stdin reader thread"
```

### Task 1.6: Implement the REPL loop body (no JvInterpreter yet — echo only)

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLMode.pas`

- [ ] **Step 1: Replace RunREPL body with echo loop**

```pascal
procedure RunREPL;
var
  reader: TStdinReader;
  source: TStringList;
  line: string;
begin
  Writeln(MARKER_READY + ' ' + IntToStr(GetTickCount));
  Flush(Output);

  reader := TStdinReader.Create;
  source := TStringList.Create;
  try
    while True do
    begin
      line := reader.ReadLineBlocking(MaxInt);
      if line = '__EOF__' then Break;
      if line = MARKER_END_SOURCE then
      begin
        // For now, just echo back the source as the result.
        Writeln(MARKER_RESULT + ' {"ok":true,"summary":{"lines":' + IntToStr(source.Count) + '},"output_files":[]}');
        Writeln(MARKER_END_RESULT);
        Flush(Output);
        source.Clear;
      end
      else
        source.Add(line);
    end;
  finally
    reader.Terminate;
    reader.WaitFor;
    reader.Free;
    source.Free;
  end;
end;
```

- [ ] **Step 2: Build, deploy, smoke**

Build, deploy, run with `-repl`, then in the same console type:

```
AddMessage('hi');
===END_SOURCE===
```

Expected output after `===END_SOURCE===`:
```
===RESULT=== {"ok":true,"summary":{"lines":1},"output_files":[]}
===END_RESULT===
```

Then type Ctrl-Z + Enter (Windows EOF) and the process should exit cleanly.

- [ ] **Step 3: Commit**

```bash
git add xEdit/wbREPLMode.pas
git commit -m "repl: stdin loop with framing (echo-only)"
```

### Task 1.7: Wire JvInterpreter into the loop

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLMode.pas`

- [ ] **Step 1: Add JvInterpreter to uses, replace echo with execution**

```pascal
unit wbREPLMode;

interface
procedure RunREPL;

implementation

uses
  Classes, SysUtils, Windows, JvInterpreter,
  wbInterface, wbImplementation, wbHelpers;
  // Add whatever xEdit units the script bootstrapping needs;
  // mirror the uses list that wbScriptAdapter uses for -script: mode.

const
  MARKER_READY       = '===READY===';
  MARKER_END_SOURCE  = '===END_SOURCE===';
  MARKER_RESULT      = '===RESULT===';
  MARKER_END_RESULT  = '===END_RESULT===';
  STDOUT_PREFIX      = 'STDOUT: ';

// (TStdinReader from Task 1.5 unchanged)

procedure ExecuteScript(const Source: string);
var
  jvi: TJvInterpreterProgram;
  exMsg: string;
  exLine: Integer;
begin
  jvi := TJvInterpreterProgram.Create(nil);
  try
    try
      jvi.Source.Text := Source;
      jvi.Compile;
      jvi.Run;
      Writeln(MARKER_RESULT + ' {"ok":true,"summary":null,"output_files":[]}');
    except
      on E: Exception do
      begin
        exMsg := E.Message;
        // JvInterpreter exceptions sometimes carry a line number; best-effort
        if jvi.LastErrorMessage <> '' then exMsg := jvi.LastErrorMessage;
        exLine := jvi.LastErrorLine;
        Writeln(MARKER_RESULT + ' {"ok":false,"error":{"line":' + IntToStr(exLine) +
          ',"message":' + JsonEscapeString(exMsg) + '}}');
      end;
    end;
    Writeln(MARKER_END_RESULT);
    Flush(Output);
  finally
    jvi.Free;
  end;
end;

// JsonEscapeString: minimal — wrap in quotes, escape \ and ".
// xEdit ships lkJSON; if its escaper is callable here, prefer it.
// Otherwise inline this:
function JsonEscapeString(const s: string): string;
var i: Integer; c: Char; sb: string;
begin
  sb := '"';
  for i := 1 to Length(s) do
  begin
    c := s[i];
    case c of
      '\': sb := sb + '\\';
      '"': sb := sb + '\"';
      #8:  sb := sb + '\b';
      #9:  sb := sb + '\t';
      #10: sb := sb + '\n';
      #13: sb := sb + '\r';
    else
      if c < #32 then sb := sb + '\u00' + IntToHex(Ord(c), 2)
      else sb := sb + c;
    end;
  end;
  Result := sb + '"';
end;

procedure RunREPL;
var
  reader: TStdinReader;
  source: TStringList;
  line: string;
begin
  Writeln(MARKER_READY + ' ' + IntToStr(GetTickCount));
  Flush(Output);

  reader := TStdinReader.Create;
  source := TStringList.Create;
  try
    while True do
    begin
      line := reader.ReadLineBlocking(MaxInt);
      if line = '__EOF__' then Break;
      if line = MARKER_END_SOURCE then
      begin
        ExecuteScript(source.Text);
        source.Clear;
      end
      else
        source.Add(line);
    end;
  finally
    reader.Terminate;
    reader.WaitFor;
    reader.Free;
    source.Free;
  end;
end;

end.
```

- [ ] **Step 2: AddMessage redirection**

Critical: `AddMessage` in xEdit normally writes to the message pane (GUI). In CLI tool modes it goes to stdout via `Writeln`. Verify by searching `wbHelpers.pas` (or wherever `AddMessage` is defined) for the GUI-vs-CLI branching. We need `AddMessage` to emit `STDOUT: <line>` in REPL mode. If the existing CLI path emits bare `<line>`, override or wrap.

Probably the cleanest: keep `AddMessage` as-is (bare lines to stdout), and have the wrapper treat any line not matching a frame marker as stdout. Re-evaluate after Task 1.8 manual test.

For now, leave `AddMessage` behavior unchanged and document that the wrapper considers any non-marker, non-`STDOUT:`-prefixed line as stdout.

- [ ] **Step 3: Build, deploy, smoke test with a real script**

```
AddMessage('hello from script');
===END_SOURCE===
```

Expected:
```
hello from script
===RESULT=== {"ok":true,"summary":null,"output_files":[]}
===END_RESULT===
```

Then submit a script that throws:
```
raise Exception.Create('boom');
===END_SOURCE===
```

Expected: `===RESULT=== {"ok":false,"error":{"line":1,"message":"boom"}}` (line number may be off; that's fine for v1).

Then submit a script that touches the load order:

```
var f: IInterface;
f := FileByIndex(0);
AddMessage('loaded plugin: ' + GetFileName(f));
===END_SOURCE===
```

Expected: prints the first plugin's name. Confirms the script context has access to xEdit's wb API and the load order is resident.

- [ ] **Step 4: Commit**

```bash
git add xEdit/wbREPLMode.pas
git commit -m "repl: execute Pascal source via JvInterpreter"
```

### Task 1.8: Verify state persistence across consecutive scripts

This is a manual verification, not a code change. The whole point of the REPL is to keep load order warm. Confirm.

- [ ] **Step 1: Submit two scripts in one session**

In a single REPL session, type:

Script A:
```
AddMessage('first call');
===END_SOURCE===
```

Script B (immediately after the first result envelope):
```
var f: IInterface;
f := FileByIndex(0);
AddMessage('second call sees plugin: ' + GetFileName(f));
===END_SOURCE===
```

- [ ] **Step 2: Time both calls**

The second call should be sub-second (since boot is already done). The first call's response is gated by manual typing speed; what matters is the absence of a 25s gap between `===END_SOURCE===` and `===RESULT===` for either.

- [ ] **Step 3: Document in spec's probe-results section**

Append a note: "Verified state persistence: N consecutive scripts in one REPL session, second-and-later return in <T ms; load order remains resident."

No commit — verification only.

---

## Phase 2 — Pascal helper library

### Task 2.1: Create wbREPLHelpers unit

**Files:**
- Create: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLHelpers.pas`

- [ ] **Step 1: Write helpers**

```pascal
unit wbREPLHelpers;

{
  Helper procedures auto-mounted into JvInterpreter scope by the REPL.
  Submitted scripts can call OpenOutput, EmitJSONLine, WriteSummary
  without `uses` clauses.

  Output convention: scripts emit JSONL files under the configured
  output directory. The REPL response carries only paths + a small
  summary, never the bulk data.
}

interface

uses
  Classes, SysUtils;

// Module-level config
procedure REPLHelpers_SetOutputDir(const Path: string);
function  REPLHelpers_OutputFiles: TStringList;  // paths emitted this script
function  REPLHelpers_Summary: string;           // JSON value, default 'null'
procedure REPLHelpers_Reset;                     // call before each script

// Script-callable
function  OpenOutput(const Name: string): TFileStream;
procedure EmitJSONLine(Stream: TFileStream; const JsonLine: string);
procedure WriteSummary(const JsonValue: string);

implementation

var
  GOutputDir: string = '';
  GOutputFiles: TStringList = nil;
  GSummary: string = 'null';

procedure REPLHelpers_SetOutputDir(const Path: string);
begin
  GOutputDir := Path;
  ForceDirectories(GOutputDir);
end;

function REPLHelpers_OutputFiles: TStringList;
begin
  if GOutputFiles = nil then GOutputFiles := TStringList.Create;
  Result := GOutputFiles;
end;

function REPLHelpers_Summary: string;
begin
  Result := GSummary;
end;

procedure REPLHelpers_Reset;
begin
  if GOutputFiles <> nil then GOutputFiles.Clear;
  GSummary := 'null';
end;

function OpenOutput(const Name: string): TFileStream;
var
  fullPath: string;
begin
  if GOutputDir = '' then
    raise Exception.Create('OpenOutput: REPL output dir not configured');
  fullPath := IncludeTrailingPathDelimiter(GOutputDir) + Name;
  Result := TFileStream.Create(fullPath, fmCreate or fmShareDenyWrite);
  REPLHelpers_OutputFiles.Add(fullPath);
end;

procedure EmitJSONLine(Stream: TFileStream; const JsonLine: string);
var
  bytes: TBytes;
  withNewline: string;
begin
  withNewline := JsonLine + sLineBreak;
  bytes := TEncoding.UTF8.GetBytes(withNewline);
  if Length(bytes) > 0 then
    Stream.WriteBuffer(bytes[0], Length(bytes));
end;

procedure WriteSummary(const JsonValue: string);
begin
  GSummary := JsonValue;
end;

initialization

finalization
  if GOutputFiles <> nil then GOutputFiles.Free;
end.
```

- [ ] **Step 2: Add to project, build**

Add `wbREPLHelpers.pas` to the xEdit project. Build to confirm compile.

- [ ] **Step 3: Commit**

```bash
git add xEdit/wbREPLHelpers.pas xEdit/xEdit.dproj
git commit -m "repl: helper unit for output file management"
```

### Task 2.2: Mount helpers into JvInterpreter scope and use in result envelope

**Files:**
- Modify: `C:\Users\mschon\repos\TES5Edit\xEdit\wbREPLMode.pas`

- [ ] **Step 1: Register helpers as JvInterpreter externals**

JvInterpreter exposes external procedures via adapter units (e.g. `JvInterpreter_System.pas`). xEdit's existing `-script:` mode already registers a host of external functions (`AddMessage`, `FileByIndex`, etc.). Find the registration code (search for `AddFunction` or `JvInterpreterAdapter`).

Create a small adapter that registers `OpenOutput`, `EmitJSONLine`, `WriteSummary` so JvI programs can call them. Pattern (rough):

```pascal
// At top of wbREPLMode.pas implementation:
uses
  ..., wbREPLHelpers, JvInterpreter_Adapter;

procedure RegisterREPLHelpers(Adapter: TJvInterpreterAdapter);
begin
  // Adapt this to xEdit's actual JvI registration mechanism.
  // The fork already uses TJvInterpreterAdapter for -script: mode.
  Adapter.AddFunction('REPL', 'OpenOutput', OpenOutput, 1, [varString], varVariant);
  Adapter.AddProcedure('REPL', 'EmitJSONLine', EmitJSONLine, 2, [varVariant, varString]);
  Adapter.AddProcedure('REPL', 'WriteSummary', WriteSummary, 1, [varString]);
end;
```

The exact API is xEdit-specific. Look at `wbScriptAdapter.pas` (if present) or grep for `AddFunction` / `AddProcedure` calls. Mirror what's done for `AddMessage`.

- [ ] **Step 2: Configure output dir from CLI flag**

In `wbREPLMode.pas` `RunREPL`, before the loop, read the `-output:<dir>` flag:

```pascal
var
  outputDir: string;
begin
  if not wbFindCmdLineParam('output', outputDir) then
    outputDir := IncludeTrailingPathDelimiter(GetCurrentDir) + 'repl-output';
  REPLHelpers_SetOutputDir(outputDir);
  Writeln(MARKER_READY + ' ' + IntToStr(GetTickCount));
  // ...
```

Add `wbCommandLine` to the implementation `uses` if not already present (per fork gotcha).

- [ ] **Step 3: Reset helpers before each script; emit output_files in result**

Modify `ExecuteScript` to call `REPLHelpers_Reset` before run, and use the captured files + summary in the result envelope:

```pascal
procedure ExecuteScript(const Source: string);
var
  jvi: TJvInterpreterProgram;
  exMsg, filesJson, summaryJson: string;
  files: TStringList;
  i: Integer;
begin
  REPLHelpers_Reset;
  jvi := TJvInterpreterProgram.Create(nil);
  try
    try
      jvi.Source.Text := Source;
      jvi.Compile;
      jvi.Run;

      files := REPLHelpers_OutputFiles;
      filesJson := '[';
      for i := 0 to files.Count - 1 do
      begin
        if i > 0 then filesJson := filesJson + ',';
        filesJson := filesJson + JsonEscapeString(files[i]);
      end;
      filesJson := filesJson + ']';

      summaryJson := REPLHelpers_Summary;
      Writeln(MARKER_RESULT + ' {"ok":true,"summary":' + summaryJson +
              ',"output_files":' + filesJson + '}');
    except
      on E: Exception do
      begin
        // Same error handling as before
        Writeln(MARKER_RESULT + ' {"ok":false,"error":{"line":' +
          IntToStr(jvi.LastErrorLine) + ',"message":' +
          JsonEscapeString(E.Message) + '}}');
      end;
    end;
    Writeln(MARKER_END_RESULT);
    Flush(Output);
  finally
    jvi.Free;
  end;
end;
```

- [ ] **Step 4: Build, deploy, smoke**

Submit a script that uses the helpers:

```
var s: TFileStream;
s := OpenOutput('hello.jsonl');
try
  EmitJSONLine(s, '{"k":"v"}');
finally
  s.Free;
end;
WriteSummary('{"emitted":1}');
===END_SOURCE===
```

Expected envelope:
```
===RESULT=== {"ok":true,"summary":{"emitted":1},"output_files":["<output_dir>/hello.jsonl"]}
===END_RESULT===
```

Verify `hello.jsonl` exists with `{"k":"v"}\n` content.

- [ ] **Step 5: Commit**

```bash
git add xEdit/wbREPLMode.pas
git commit -m "repl: mount helpers, surface output_files + summary in envelope"
```

---

## Phase 3 — Python wrapper

### Task 3.1: Initialize new repo

**Files:**
- Create: `D:\Modlists\_clones\oblivion-xedit-repl\` (new dir)

- [ ] **Step 1: Create directory and initialize git**

```bash
mkdir -p D:/Modlists/_clones/oblivion-xedit-repl
cd D:/Modlists/_clones/oblivion-xedit-repl
git init
```

- [ ] **Step 2: Create LICENSE (MPL-2.0)**

Copy MPL-2.0 license text from `D:\Modlists\_clones\oblivion-conflicts\LICENSE` (same family, same license).

```bash
cp D:/Modlists/_clones/oblivion-conflicts/LICENSE ./LICENSE
```

- [ ] **Step 3: Create pyproject.toml**

```toml
[build-system]
requires = ["setuptools>=68"]
build-backend = "setuptools.build_meta"

[project]
name = "oblivion-xedit-repl"
version = "0.1.0"
description = "Persistent xEdit subprocess wrapper for fast Pascal-script iteration"
license = {text = "MPL-2.0"}
requires-python = ">=3.11"

[project.scripts]
xedit-repl = "xedit_repl.cli:main"

[tool.setuptools.packages.find]
include = ["xedit_repl*"]
```

- [ ] **Step 4: Create empty package**

```bash
mkdir -p xedit_repl tests examples
echo '__version__ = "0.1.0"' > xedit_repl/__init__.py
```

- [ ] **Step 5: Initial commit**

```bash
git add LICENSE pyproject.toml xedit_repl/
git commit -m "init: empty package scaffold"
```

### Task 3.2: Frame markers + source escaping (TDD)

**Files:**
- Create: `xedit_repl/markers.py`
- Create: `tests/test_markers.py`

- [ ] **Step 1: Write failing tests**

`tests/test_markers.py`:

```python
import pytest
from xedit_repl.markers import (
    READY, END_SOURCE, RESULT, END_RESULT,
    escape_source, is_marker_line,
)


def test_marker_constants_are_column_zero_strings():
    assert READY == "===READY==="
    assert END_SOURCE == "===END_SOURCE==="
    assert RESULT == "===RESULT==="
    assert END_RESULT == "===END_RESULT==="


def test_is_marker_line_recognizes_bare_markers():
    assert is_marker_line("===END_SOURCE===") is True
    assert is_marker_line("===END_RESULT===") is True


def test_is_marker_line_rejects_non_column_zero():
    assert is_marker_line(" ===END_SOURCE===") is False
    assert is_marker_line("AddMessage('===END_SOURCE===');") is False


def test_is_marker_line_handles_marker_with_payload():
    # READY and RESULT have trailing payload after the marker
    assert is_marker_line("===READY=== 12345") is True
    assert is_marker_line("===RESULT=== {\"ok\":true}") is True


def test_escape_source_escapes_lines_that_look_like_markers():
    src = "AddMessage('hi');\n===END_SOURCE===\nAddMessage('bye');\n"
    escaped = escape_source(src)
    # The bare marker line in user source must be neutralized so the
    # subprocess doesn't see it as an end-of-source signal.
    lines = escaped.splitlines()
    assert "===END_SOURCE===" not in lines
    # Original behavior preserved: still has 3 logical lines worth
    assert len(lines) == 3


def test_escape_source_preserves_non_marker_content():
    src = "AddMessage('plain');\nvar x: Integer;\n"
    assert escape_source(src) == src
```

- [ ] **Step 2: Run test, expect ImportError**

```bash
cd D:/Modlists/_clones/oblivion-xedit-repl
python -m pytest tests/test_markers.py -v
```

Expected: ImportError (markers module doesn't exist).

- [ ] **Step 3: Implement markers.py**

```python
"""Frame markers and source escaping for the xEdit REPL wire protocol."""

READY = "===READY==="
END_SOURCE = "===END_SOURCE==="
RESULT = "===RESULT==="
END_RESULT = "===END_RESULT==="
STDOUT_PREFIX = "STDOUT: "

_BARE_MARKERS = (END_SOURCE, END_RESULT)
_PAYLOAD_MARKERS = (READY, RESULT)


def is_marker_line(line: str) -> bool:
    """True if this line is a frame marker (bare or with payload)."""
    if line in _BARE_MARKERS:
        return True
    for marker in _PAYLOAD_MARKERS:
        if line == marker or line.startswith(marker + " "):
            return True
    return False


def escape_source(source: str) -> str:
    """Neutralize any user-source line that exactly matches a marker.

    Strategy: append a zero-width-space hack would be invisible, but
    cleaner is to comment-prefix. Any line that matches a marker
    becomes `{ ' + line + ' }` (a Pascal block comment). The script
    semantics are preserved (the line was already executable Pascal,
    and a stray marker-shaped line wouldn't be valid Pascal anyway).
    For lines that are valid Pascal but happen to match (e.g. a
    string literal on a line by itself), this loses the line — but
    that's a degenerate case.
    """
    out_lines = []
    for line in source.splitlines():
        if is_marker_line(line):
            out_lines.append("{ neutralized: " + line + " }")
        else:
            out_lines.append(line)
    # Preserve trailing newline if the original had one
    if source.endswith("\n"):
        return "\n".join(out_lines) + "\n"
    return "\n".join(out_lines)
```

- [ ] **Step 4: Run tests, expect pass**

```bash
python -m pytest tests/test_markers.py -v
```

Expected: 5 passed.

- [ ] **Step 5: Commit**

```bash
git add xedit_repl/markers.py tests/test_markers.py
git commit -m "feat: frame markers and source escaping"
```

### Task 3.3: Fake REPL for unit testing

**Files:**
- Create: `tests/fake_repl.py`

- [ ] **Step 1: Write the fake REPL script**

```python
"""A fake xEdit REPL subprocess for unit testing the wrapper.

Speaks the same wire protocol as the real xEdit -repl mode but
executes trivial Python instead of Pascal:

  - Lines starting with `EMIT_STDOUT:` are echoed to stdout (sans prefix)
  - Lines starting with `EMIT_OUTFILE:` cause us to record a fake output file path
  - Lines starting with `SET_SUMMARY:` set the summary JSON
  - Lines starting with `THROW:` cause an error result with the rest as message
  - Anything else is ignored

Usage in tests:
    proc = subprocess.Popen([sys.executable, str(FAKE_REPL_PATH)], ...)
"""

import sys
import json


READY = "===READY==="
END_SOURCE = "===END_SOURCE==="
RESULT = "===RESULT==="
END_RESULT = "===END_RESULT==="


def main():
    print(f"{READY} fake-session")
    sys.stdout.flush()

    source_lines: list[str] = []
    for raw in sys.stdin:
        line = raw.rstrip("\n").rstrip("\r")
        if line == END_SOURCE:
            execute(source_lines)
            source_lines = []
        else:
            source_lines.append(line)


def execute(lines: list[str]) -> None:
    output_files: list[str] = []
    summary: object = None
    error_msg: str | None = None

    for line in lines:
        if line.startswith("EMIT_STDOUT:"):
            print(line[len("EMIT_STDOUT:"):].lstrip())
        elif line.startswith("EMIT_OUTFILE:"):
            output_files.append(line[len("EMIT_OUTFILE:"):].strip())
        elif line.startswith("SET_SUMMARY:"):
            summary = json.loads(line[len("SET_SUMMARY:"):].strip())
        elif line.startswith("THROW:"):
            error_msg = line[len("THROW:"):].strip()
            break

    if error_msg:
        envelope = {"ok": False, "error": {"line": 1, "message": error_msg}}
    else:
        envelope = {"ok": True, "summary": summary, "output_files": output_files}

    print(f"{RESULT} {json.dumps(envelope)}")
    print(END_RESULT)
    sys.stdout.flush()


if __name__ == "__main__":
    main()
```

- [ ] **Step 2: Smoke test the fake REPL manually**

```bash
echo "EMIT_STDOUT: hi
SET_SUMMARY: {\"k\":\"v\"}
===END_SOURCE===" | python tests/fake_repl.py
```

Expected output:
```
===READY=== fake-session
hi
===RESULT=== {"ok": true, "summary": {"k": "v"}, "output_files": []}
===END_RESULT===
```

- [ ] **Step 3: Commit**

```bash
git add tests/fake_repl.py
git commit -m "test: fake REPL for wrapper unit tests"
```

### Task 3.4: Wrapper subprocess + result parsing (TDD)

**Files:**
- Create: `xedit_repl/wrapper.py`
- Create: `tests/conftest.py`
- Create: `tests/test_wrapper.py`

- [ ] **Step 1: conftest.py with fake-REPL fixture**

```python
import sys
from pathlib import Path
import pytest


@pytest.fixture
def fake_repl_cmd():
    fake = Path(__file__).parent / "fake_repl.py"
    return [sys.executable, str(fake)]
```

- [ ] **Step 2: Write failing tests**

`tests/test_wrapper.py`:

```python
import pytest
from xedit_repl.wrapper import XEditReplProcess, ExecResult


def test_starts_and_reaches_ready(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        assert proc.session_id == "fake-session"
    finally:
        proc.stop()


def test_exec_returns_summary_and_files(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        source = (
            "EMIT_OUTFILE: /tmp/foo.jsonl\n"
            "SET_SUMMARY: {\"records\": 17}\n"
        )
        result = proc.exec(source)
        assert isinstance(result, ExecResult)
        assert result.ok is True
        assert result.summary == {"records": 17}
        assert result.output_files == ["/tmp/foo.jsonl"]
        assert result.error is None
    finally:
        proc.stop()


def test_exec_captures_stdout(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        result = proc.exec("EMIT_STDOUT: hello world\n")
        assert "hello world" in result.stdout
    finally:
        proc.stop()


def test_exec_surfaces_errors(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        result = proc.exec("THROW: deliberate failure\n")
        assert result.ok is False
        assert result.error is not None
        assert "deliberate failure" in result.error["message"]
    finally:
        proc.stop()


def test_two_consecutive_execs_isolate_state(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        r1 = proc.exec("EMIT_OUTFILE: /tmp/a\nSET_SUMMARY: 1\n")
        r2 = proc.exec("EMIT_OUTFILE: /tmp/b\nSET_SUMMARY: 2\n")
        assert r1.output_files == ["/tmp/a"]
        assert r2.output_files == ["/tmp/b"]
        assert r1.summary == 1
        assert r2.summary == 2
    finally:
        proc.stop()


def test_source_escaping_does_not_break_framing(fake_repl_cmd):
    proc = XEditReplProcess(fake_repl_cmd)
    proc.start()
    try:
        # User source contains a stray marker line that would break framing
        result = proc.exec("EMIT_STDOUT: before\n===END_SOURCE===\nEMIT_STDOUT: after\n")
        # The wrapper should have neutralized the bare marker before sending
        # Result is ok, and both EMIT_STDOUT lines should have run
        assert result.ok is True
        assert "before" in result.stdout
        # The bare marker was neutralized, so "after" line runs in the same script
        assert "after" in result.stdout
    finally:
        proc.stop()
```

- [ ] **Step 3: Run tests, expect ImportError**

```bash
python -m pytest tests/test_wrapper.py -v
```

Expected: ImportError (wrapper module doesn't exist).

- [ ] **Step 4: Implement wrapper.py**

```python
"""Wrapper around an xEdit `-repl` subprocess.

Manages process lifetime, frames stdin/stdout, and parses result envelopes.
"""

from __future__ import annotations

import json
import subprocess
import threading
from dataclasses import dataclass, field
from queue import Queue, Empty
from typing import Any, Optional

from . import markers


@dataclass
class ExecResult:
    ok: bool
    stdout: str = ""
    summary: Any = None
    output_files: list[str] = field(default_factory=list)
    error: Optional[dict[str, Any]] = None


class ReplError(Exception):
    pass


class XEditReplProcess:
    """Owns one xEdit REPL subprocess.

    Use as: proc = XEditReplProcess(cmd); proc.start(); proc.exec(...); proc.stop().
    Or as a context manager.
    """

    def __init__(self, cmd: list[str], cwd: str | None = None):
        self._cmd = cmd
        self._cwd = cwd
        self._proc: subprocess.Popen[str] | None = None
        self._reader_thread: threading.Thread | None = None
        self._line_queue: Queue[str | None] = Queue()
        self.session_id: str | None = None

    def __enter__(self):
        self.start()
        return self

    def __exit__(self, *exc):
        self.stop()

    def start(self) -> None:
        self._proc = subprocess.Popen(
            self._cmd,
            cwd=self._cwd,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
            bufsize=1,  # line-buffered
        )
        self._reader_thread = threading.Thread(
            target=self._read_loop, daemon=True
        )
        self._reader_thread.start()
        self._await_ready(timeout=60.0)

    def _read_loop(self) -> None:
        assert self._proc is not None and self._proc.stdout is not None
        for raw in self._proc.stdout:
            self._line_queue.put(raw.rstrip("\n").rstrip("\r"))
        self._line_queue.put(None)  # sentinel: EOF

    def _await_ready(self, timeout: float) -> None:
        line = self._read_one(timeout)
        if line is None:
            raise ReplError("subprocess died before READY")
        if not line.startswith(markers.READY):
            raise ReplError(f"expected {markers.READY}, got: {line!r}")
        # Parse session id (everything after the marker + space)
        parts = line.split(" ", 1)
        self.session_id = parts[1] if len(parts) > 1 else ""

    def _read_one(self, timeout: float) -> str | None:
        try:
            return self._line_queue.get(timeout=timeout)
        except Empty:
            raise ReplError(f"timeout after {timeout}s waiting for line")

    def exec(self, source: str, exec_timeout: float = 600.0) -> ExecResult:
        if self._proc is None or self._proc.stdin is None:
            raise ReplError("not started")

        escaped = markers.escape_source(source)
        # Submit
        self._proc.stdin.write(escaped)
        if not escaped.endswith("\n"):
            self._proc.stdin.write("\n")
        self._proc.stdin.write(markers.END_SOURCE + "\n")
        self._proc.stdin.flush()

        # Read until RESULT, accumulating stdout
        stdout_lines: list[str] = []
        result_envelope: dict[str, Any] | None = None

        while True:
            line = self._read_one(exec_timeout)
            if line is None:
                raise ReplError("subprocess died during exec")
            if line == markers.END_RESULT:
                if result_envelope is None:
                    raise ReplError("got END_RESULT before RESULT")
                break
            if line.startswith(markers.RESULT + " "):
                payload = line[len(markers.RESULT) + 1:]
                try:
                    result_envelope = json.loads(payload)
                except json.JSONDecodeError as e:
                    raise ReplError(f"bad result JSON: {payload!r}") from e
                continue
            # Anything else is stdout (server-side AddMessage output)
            stdout_lines.append(line)

        return ExecResult(
            ok=result_envelope.get("ok", False),
            stdout="\n".join(stdout_lines),
            summary=result_envelope.get("summary"),
            output_files=result_envelope.get("output_files", []),
            error=result_envelope.get("error"),
        )

    def stop(self) -> None:
        if self._proc is None:
            return
        try:
            if self._proc.stdin is not None:
                self._proc.stdin.close()
            self._proc.wait(timeout=5)
        except subprocess.TimeoutExpired:
            self._proc.kill()
            self._proc.wait()
        finally:
            self._proc = None
```

- [ ] **Step 5: Run tests, expect pass**

```bash
python -m pytest tests/test_wrapper.py -v
```

Expected: 6 passed.

- [ ] **Step 6: Commit**

```bash
git add xedit_repl/wrapper.py tests/conftest.py tests/test_wrapper.py
git commit -m "feat: REPL subprocess wrapper with framing + result parsing"
```

### Task 3.5: CLI entry points

**Files:**
- Create: `xedit_repl/cli.py`

- [ ] **Step 1: Implement single-shot CLI first**

The persistent-daemon mode (`start`/`exec`/`stop`) is a stretch goal — needs IPC plumbing. Single-shot covers most agent use:

```python
"""xedit-repl CLI.

Single-shot:
    xedit-repl --xedit <path> --profile <plugins.txt> --output <dir> --exec <script.pas>
    Spawns a fresh REPL, submits one script, prints the result envelope, exits.

Daemon mode (TODO — not in v1):
    xedit-repl start ...
    xedit-repl exec <script.pas>
    xedit-repl stop
"""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .wrapper import XEditReplProcess, ReplError


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="xedit-repl")
    parser.add_argument("--xedit", required=True, help="Path to TES4Edit_patched.exe")
    parser.add_argument("--data", required=True, help="Path to game Data dir")
    parser.add_argument("--profile", required=True, help="Path to plugins.txt")
    parser.add_argument("--output", required=True, help="Output directory for script artifacts")
    parser.add_argument("--exec", dest="script", required=True, help="Path to Pascal script to run")
    parser.add_argument("--launcher", help="Optional UsvfsLauncher.exe path; if set, wraps the xedit invocation")
    parser.add_argument("--launcher-modlist-root", help="MO2 modlist root (required if --launcher set)")
    parser.add_argument("--launcher-profile", help="MO2 profile name (required if --launcher set)")
    parser.add_argument("--launcher-usvfs-dir", help="USVFS install dir (required if --launcher set)")
    parser.add_argument("--launcher-scratch", help="Scratch dir for Save redirects (optional)")
    args = parser.parse_args(argv)

    script_path = Path(args.script)
    if not script_path.is_file():
        print(f"error: script not found: {script_path}", file=sys.stderr)
        return 2

    source = script_path.read_text(encoding="utf-8")

    if args.launcher:
        cmd = [
            args.launcher,
            args.launcher_modlist_root,
            args.launcher_profile,
            args.launcher_usvfs_dir,
        ]
        if args.launcher_scratch:
            cmd.extend(["--scratch", args.launcher_scratch])
        cmd.extend([
            args.xedit,
            "-IKnowWhatImDoing", "-repl",
            f"-D:{args.data}",
            f"-P:{args.profile}",
            f"-output:{args.output}",
        ])
    else:
        cmd = [
            args.xedit,
            "-IKnowWhatImDoing", "-repl",
            f"-D:{args.data}",
            f"-P:{args.profile}",
            f"-output:{args.output}",
        ]

    try:
        with XEditReplProcess(cmd) as proc:
            result = proc.exec(source)
    except ReplError as e:
        print(json.dumps({"ok": False, "error": {"message": str(e)}}), file=sys.stderr)
        return 1

    envelope = {
        "ok": result.ok,
        "summary": result.summary,
        "output_files": result.output_files,
        "error": result.error,
        "stdout": result.stdout,
    }
    print(json.dumps(envelope, indent=2))
    return 0 if result.ok else 1


if __name__ == "__main__":
    sys.exit(main())
```

- [ ] **Step 2: Verify pip install puts the entry point on PATH**

```bash
cd D:/Modlists/_clones/oblivion-xedit-repl
pip install -e .
xedit-repl --help
```

Expected: usage output.

- [ ] **Step 3: Commit**

```bash
git add xedit_repl/cli.py
git commit -m "feat: single-shot CLI entry point"
```

---

## Phase 4 — USVFS launcher integration

### Task 4.1: Add `--scratch` flag to launcher

**Files:**
- Modify: `D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\Program.cs`

- [ ] **Step 1: Read Program.cs to understand existing arg parsing**

```bash
cat "D:/Modlists/Reborn/research/usvfs-poc/UsvfsLauncher/Program.cs" | head -80
```

Identify where positional args are parsed and where the VFS overlay is set up via `usvfsVirtualLinkDirectoryStatic` calls.

- [ ] **Step 2: Parse `--scratch <dir>` from args**

The launcher's existing CLI is positional: `<modlist-root> <profile> <usvfs-dir> <child-exe> [child-args...]`. Extending with a flag means scanning args for `--scratch` and pulling it out before the positional parse:

```csharp
string? scratchDir = null;
var argsList = args.ToList();
for (int i = 0; i < argsList.Count - 1; i++)
{
    if (argsList[i] == "--scratch")
    {
        scratchDir = argsList[i + 1];
        argsList.RemoveAt(i + 1);
        argsList.RemoveAt(i);
        break;
    }
}
args = argsList.ToArray();
```

Place this at the very top of `Main` before the positional parse.

- [ ] **Step 3: Map scratch as topmost overlay layer**

After the existing loop that maps mod layers, but before `usvfsCreateProcessHooked`:

```csharp
if (scratchDir != null)
{
    Directory.CreateDirectory(scratchDir);
    UsvfsNative.usvfsVirtualLinkDirectoryStatic(
        scratchDir,
        stockGameDataPath,
        UsvfsNative.LINKFLAG_RECURSIVE
    );
    Console.Error.WriteLine($"[launcher] scratch overlay: {scratchDir} -> {stockGameDataPath}");
}
```

(Verify the actual variable name for `stockGameDataPath` in the existing code; rename as needed.)

The "last call wins" property of `usvfsVirtualLinkDirectoryStatic` (per memory `project_oblivion_usvfs_launcher.md`) means scratch lands as highest priority — saves go there first.

- [ ] **Step 4: Build the launcher**

```bash
cd D:/Modlists/Reborn/research/usvfs-poc/UsvfsLauncher
dotnet build -c Release
```

- [ ] **Step 5: Manual smoke test — verify scratch redirect**

Run the launcher with `--scratch` pointing at an empty dir, launch xEdit-repl, submit a script that calls `Save` on a small plugin, and verify the saved file appears in the scratch dir, NOT in real Data.

```powershell
& "D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\bin\Release\net8.0-windows10.0.17763.0\UsvfsLauncher.exe" `
  --scratch "D:\Modlists\Reborn\research\repl-scratch-test" `
  D:\Modlists\Reborn Reborn-Base D:\Modlists\Reborn `
  "D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe" `
  -IKnowWhatImDoing -repl `
  "-D:D:\Modlists\Reborn\Stock Game\Data" `
  "-P:D:\Modlists\Reborn\profiles\Reborn-Base\plugins.txt" `
  "-output:D:\Modlists\Reborn\research\repl-output-test"
```

Submit a no-op save:

```
var f: IInterface;
f := FileByIndex(FileCount - 1);  { last loaded plugin }
SetIsModified(f, True);            { mark dirty }
SaveFile(f);
===END_SOURCE===
```

Expected: `D:\Modlists\Reborn\research\repl-scratch-test\<plugin-name>.esp` exists. Real `Stock Game\Data\<plugin-name>.esp` is unchanged (compare hash before and after).

- [ ] **Step 6: Commit (in the Reborn repo, since launcher lives under research/)**

```bash
cd D:/Modlists/Reborn
git add research/usvfs-poc/UsvfsLauncher/Program.cs
git commit -m "launcher: add --scratch flag for write-redirect overlay"
```

---

## Phase 5 — Examples + tests + perf smoke

### Task 5.1: Port `dump_record_full.pas` from oblivion-conflicts as an example

**Files:**
- Create: `D:\Modlists\_clones\oblivion-xedit-repl\examples\dump_record_full.pas`

- [ ] **Step 1: Copy and adapt**

The original at `D:\Modlists\_clones\oblivion-conflicts\scripts\dump_record_full.pas` is a `-script:` mode script that uses argv-style `--key=value` parsing. Adapt it to REPL conventions:

- Remove argv parsing; the agent passes inputs by editing the script source (or via a `var inputEDID := '...';` line at the top — REPL is so cheap that passing args via source-mutation is fine).
- Use `OpenOutput`/`EmitJSONLine`/`WriteSummary` instead of the original output mechanism.

```pascal
{
  Example REPL script: dump full record contents by EDID.

  Usage: edit `kInputEDID` below to the target record EDID, then submit
  this script to xedit-repl. Output JSONL lands at `dump_<edid>.jsonl`
  in the configured --output dir.
}

const
  kInputEDID = 'PLAYER';   { EDID }

var
  i: Integer;
  rec: IInterface;
  outStream: TFileStream;
  found: Integer;

procedure DumpRec(r: IInterface);
begin
  EmitJSONLine(outStream,
    '{"plugin":' + JsonString(GetFileName(GetFile(r))) +
    ',"sig":' + JsonString(Signature(r)) +
    ',"edid":' + JsonString(EditorID(r)) +
    ',"fid":' + JsonString(IntToHex(GetLoadOrderFormID(r), 8)) +
    '}');
end;

begin
  outStream := OpenOutput('dump_' + kInputEDID + '.jsonl');
  try
    found := 0;
    for i := 0 to FileCount - 1 do
    begin
      rec := MainRecordByEditorID(GroupBySignature(FileByIndex(i), 'NPC_'), kInputEDID);
      if Assigned(rec) then
      begin
        DumpRec(rec);
        Inc(found);
      end;
    end;
    WriteSummary('{"edid":"' + kInputEDID + '","matches":' + IntToStr(found) + '}');
  finally
    outStream.Free;
  end;
end.
```

- [ ] **Step 2: Note: `JsonString` is a script-side helper assumed available**

If xEdit doesn't provide one, scripts can inline-escape via the same logic as the wrapper's `markers.py` `escape_source`. For v1, document this limitation and fall back to manual escaping.

- [ ] **Step 3: Commit**

```bash
cd D:/Modlists/_clones/oblivion-xedit-repl
git add examples/dump_record_full.pas
git commit -m "examples: port dump_record_full from oblivion-conflicts"
```

### Task 5.2: Write `find_overrides.pas` as a second example

**Files:**
- Create: `D:\Modlists\_clones\oblivion-xedit-repl\examples\find_overrides.pas`

- [ ] **Step 1: Implement**

```pascal
{
  Example REPL script: find every plugin that overrides a record by FormID.

  Usage: edit kInputFormID (load-order FormID, hex string with leading
  zeros for the load-order byte). Output: overrides_<fid>.jsonl, one
  line per overriding plugin, in load order.
}

const
  kInputFormID = '01000800';   { 8-hex-digit load-order FormID }

var
  rec, ovr: IInterface;
  outStream: TFileStream;
  i, count: Integer;
  fid: Cardinal;

begin
  fid := StrToInt('$' + kInputFormID);
  rec := RecordByFormID(FileByIndex(0), fid, True);
  if not Assigned(rec) then
  begin
    WriteSummary('{"error":"record not found","fid":"' + kInputFormID + '"}');
    Exit;
  end;

  outStream := OpenOutput('overrides_' + kInputFormID + '.jsonl');
  try
    count := 0;
    for i := 0 to OverrideCount(rec) - 1 do
    begin
      ovr := OverrideByIndex(rec, i);
      EmitJSONLine(outStream,
        '{"plugin":' + JsonString(GetFileName(GetFile(ovr))) +
        ',"index":' + IntToStr(i) + '}');
      Inc(count);
    end;
    WriteSummary('{"fid":"' + kInputFormID + '","overrides":' + IntToStr(count) + '}');
  finally
    outStream.Free;
  end;
end.
```

Note: `RecordByFormID` cross-master bug (memory: `feedback_query_record_cross_master_bug`) — the FID resolution may need the local-FID conversion applied if the input is a load-order FID. The note in memory says oblivion-conflicts main has a fixed implementation as of 2026-04-30 — port that pattern when implementing.

- [ ] **Step 2: Commit**

```bash
git add examples/find_overrides.pas
git commit -m "examples: find_overrides script"
```

### Task 5.3: examples/README.md

**Files:**
- Create: `D:\Modlists\_clones\oblivion-xedit-repl\examples\README.md`

- [ ] **Step 1: Write**

```markdown
# Example REPL scripts

Each script under this directory is a complete Pascal program ready to submit to a running `xedit-repl` subprocess.

## Pattern

```pascal
{ docstring describing what the script does }

const
  kInputX = 'value';   { edit this for your inputs }

var
  outStream: TFileStream;

begin
  outStream := OpenOutput('result_<descriptor>.jsonl');
  try
    { ... do work, EmitJSONLine repeatedly ... }
    WriteSummary('{"records": N}');
  finally
    outStream.Free;
  end;
end.
```

## Conventions

- Inputs go in `const` block at the top — agents edit the source rather than passing args.
- Output goes to `OpenOutput(name)` files — JSONL preferred (one JSON object per line).
- Always call `WriteSummary` with a small JSON value — it lands in the result envelope.
- Catch known empty-result cases and `WriteSummary` with an `error` field rather than throwing.

## Available globals

The REPL pre-loads xEdit's `wb*` API (same as `-script:` mode) plus three helpers:

- `OpenOutput(name: string): TFileStream` — opens a file under the configured output dir.
- `EmitJSONLine(stream, line: string)` — appends `line + LF` UTF-8.
- `WriteSummary(jsonValue: string)` — sets the `summary` field of the result envelope.

See `dump_record_full.pas` and `find_overrides.pas` for working examples.
```

- [ ] **Step 2: Commit**

```bash
git add examples/README.md
git commit -m "docs: examples README"
```

### Task 5.4: End-to-end test

**Files:**
- Create: `tests/test_e2e.py`

This test requires a real xEdit binary and a profile to run. It is opt-in (skipped by default unless env vars are set).

- [ ] **Step 1: Write the test**

```python
"""End-to-end test against a real xEdit -repl subprocess.

Skipped unless the following env vars are set:
  XEDIT_REPL_E2E_BINARY     path to TES4Edit_patched.exe
  XEDIT_REPL_E2E_DATA       path to Data dir
  XEDIT_REPL_E2E_PROFILE    path to plugins.txt
"""

import os
import json
import tempfile
from pathlib import Path

import pytest

from xedit_repl.wrapper import XEditReplProcess


pytestmark = pytest.mark.skipif(
    not os.environ.get("XEDIT_REPL_E2E_BINARY"),
    reason="E2E env vars not set",
)


@pytest.fixture
def repl():
    output_dir = tempfile.mkdtemp(prefix="xedit-repl-test-")
    cmd = [
        os.environ["XEDIT_REPL_E2E_BINARY"],
        "-IKnowWhatImDoing", "-repl",
        f"-D:{os.environ['XEDIT_REPL_E2E_DATA']}",
        f"-P:{os.environ['XEDIT_REPL_E2E_PROFILE']}",
        f"-output:{output_dir}",
    ]
    proc = XEditReplProcess(cmd)
    proc.start()
    yield proc, Path(output_dir)
    proc.stop()


def test_first_plugin_name(repl):
    proc, _ = repl
    result = proc.exec(
        "AddMessage('plugin0: ' + GetFileName(FileByIndex(0)));\n"
    )
    assert result.ok is True
    assert "plugin0:" in result.stdout


def test_summary_round_trip(repl):
    proc, _ = repl
    result = proc.exec(
        "WriteSummary('{\"plugin_count\":' + IntToStr(FileCount) + '}');\n"
    )
    assert result.ok is True
    assert isinstance(result.summary, dict)
    assert result.summary["plugin_count"] > 0


def test_output_file_round_trip(repl):
    proc, output_dir = repl
    result = proc.exec(
        "var s: TFileStream;\n"
        "s := OpenOutput('e2e.jsonl');\n"
        "try EmitJSONLine(s, '{\"k\":\"v\"}'); finally s.Free; end;\n"
    )
    assert result.ok is True
    assert len(result.output_files) == 1
    out = Path(result.output_files[0])
    assert out.exists()
    content = out.read_text().strip()
    assert json.loads(content) == {"k": "v"}


def test_state_persists_across_execs(repl):
    proc, _ = repl
    # First exec: capture file count
    r1 = proc.exec("WriteSummary(IntToStr(FileCount));\n")
    # Second exec: must see same file count without reload
    r2 = proc.exec("WriteSummary(IntToStr(FileCount));\n")
    assert r1.summary == r2.summary
```

- [ ] **Step 2: Run with env vars set**

```bash
export XEDIT_REPL_E2E_BINARY="D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe"
export XEDIT_REPL_E2E_DATA="D:/Modlists/Reborn/Stock Game/Data"
export XEDIT_REPL_E2E_PROFILE="D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt"
python -m pytest tests/test_e2e.py -v
```

Expected: 4 passed. First test pays cold boot (~25s). Remaining tests are sub-second.

- [ ] **Step 3: Commit**

```bash
git add tests/test_e2e.py
git commit -m "test: end-to-end against real xEdit -repl"
```

### Task 5.5: Performance smoke

This is a manual measurement, no code committed. Verifies the architectural premise.

- [ ] **Step 1: Write a tiny perf script**

Create `tests/perf_smoke.py` (NOT committed, just for measurement):

```python
"""Measure cold boot cost vs warm exec cost.

Skipped unless XEDIT_REPL_E2E_BINARY etc. are set (same as test_e2e).
"""
import os, time, sys
from xedit_repl.wrapper import XEditReplProcess

cmd = [
    os.environ["XEDIT_REPL_E2E_BINARY"],
    "-IKnowWhatImDoing", "-repl",
    f"-D:{os.environ['XEDIT_REPL_E2E_DATA']}",
    f"-P:{os.environ['XEDIT_REPL_E2E_PROFILE']}",
    "-output:./perf-output",
]

t0 = time.perf_counter()
with XEditReplProcess(cmd) as proc:
    boot_done = time.perf_counter()
    timings = []
    for i in range(10):
        t1 = time.perf_counter()
        proc.exec("WriteSummary(IntToStr(FileCount));\n")
        timings.append(time.perf_counter() - t1)

print(f"Cold boot:           {boot_done - t0:.2f}s")
for i, t in enumerate(timings):
    print(f"Exec {i+1}:              {t*1000:.0f}ms")
print(f"Mean exec:           {sum(timings)/len(timings)*1000:.0f}ms")
```

- [ ] **Step 2: Run and record results**

```bash
python tests/perf_smoke.py
```

Expected: cold boot ~25s, each subsequent exec under 100ms. If exec times grow with N, there's a leak in JvInterpreter cleanup — investigate.

- [ ] **Step 3: Append results to spec**

Add the recorded timings to the `## Probe results` section of the design doc. Confirms the architectural premise (boot amortization) on real load order.

```bash
cd D:/Modlists/Reborn
git add docs/superpowers/specs/2026-05-01-oblivion-xedit-repl-design.md
git commit -m "spec: record perf smoke results"
```

### Task 5.6: README

**Files:**
- Create: `D:\Modlists\_clones\oblivion-xedit-repl\README.md`

- [ ] **Step 1: Write**

```markdown
# oblivion-xedit-repl

Persistent xEdit subprocess wrapper for fast Pascal-script iteration. Eliminates the ~25s cold-boot xEdit pays on every `-script:foo.pas -autoexit` invocation by keeping the load order resident across many script submissions.

Built against the [`gnarlyman/TES5Edit`](https://github.com/gnarlyman/TES5Edit) fork, branch `feat/repl-mode`.

## Quick start

Single-shot (boots xEdit, runs one script, exits):

```bash
xedit-repl \
  --xedit "/path/to/TES4Edit_patched.exe" \
  --data "/path/to/Stock Game/Data" \
  --profile "/path/to/plugins.txt" \
  --output ./repl-output \
  --exec examples/find_overrides.pas
```

The result envelope (JSON) is printed to stdout. Bulky output lands as files under `--output`.

## With USVFS launcher (recommended for mutations)

If your scripts call `Save`, route through `oblivion-usvfs-launcher` with a scratch dir to keep real `Data\` untouched:

```bash
xedit-repl \
  --launcher "/path/to/UsvfsLauncher.exe" \
  --launcher-modlist-root /path/to/modlist \
  --launcher-profile MyProfile \
  --launcher-usvfs-dir /path/to/usvfs/dlls \
  --launcher-scratch ./scratch \
  --xedit ... --data ... --profile ... --output ... \
  --exec my_mutation.pas
```

Saved plugins land under `./scratch/`. Promote to real Data with `cp` / `mv`. Discard with `rm`.

## Writing scripts

See `examples/README.md` for the disk-first JSONL convention. Scripts have access to xEdit's full `wb*` API plus three helpers (`OpenOutput`, `EmitJSONLine`, `WriteSummary`).

## Architecture

See `docs/superpowers/specs/2026-05-01-oblivion-xedit-repl-design.md` in the Reborn repo.

## License

MPL-2.0 (matches xEdit upstream).
```

- [ ] **Step 2: Commit**

```bash
git add README.md
git commit -m "docs: README"
```

---

## Phase 6 — xEdit fork PR/release

### Task 6.1: Squash and tag the fork branch

- [ ] **Step 1: Review the commit graph on `feat/repl-mode`**

```bash
cd C:/Users/mschon/repos/TES5Edit
git log --oneline feat/tmconflicts..feat/repl-mode
```

- [ ] **Step 2: Decide squash vs keep-separate**

Per memory: fork patches stay private, narrow, surgical. Match the existing pattern — `feat/tmconflicts` keeps logical commits separate. Keep separate here too unless there are >10 fixup commits. Optionally rebase to clean history.

- [ ] **Step 3: Push branch**

```bash
git push -u origin feat/repl-mode
```

- [ ] **Step 4: Tag the deployed binary**

```bash
git tag -a v0.3-repl -m "REPL mode: persistent stdin-driven Pascal script execution"
git push origin v0.3-repl
```

- [ ] **Step 5: Update spec with deployed-binary tag**

Append to spec's "Probe results" / "Deployment" section: `xEdit binary: gnarlyman/TES5Edit @ v0.3-repl, deployed at <path>`.

```bash
cd D:/Modlists/Reborn
git add docs/superpowers/specs/2026-05-01-oblivion-xedit-repl-design.md
git commit -m "spec: record deployed xEdit fork tag"
```

---

## Self-review

Run through this checklist after the plan is written; fix issues inline.

**Spec coverage:** Each spec section maps to phase(s):
- Goal/architecture/topology → Phase 1 (xEdit `-repl` mode) + Phase 3 (wrapper) + Phase 4 (launcher)
- Component 1 (xEdit fork patch) → Tasks 1.1–1.7
- Component 2 (Python wrapper) → Tasks 3.1–3.5
- Component 3 (Pascal helper library) → Tasks 2.1–2.2
- USVFS / launcher integration → Task 4.1
- Mutation flow → covered by Task 4.1 manual verification
- Data flow / error handling → Tasks 1.6, 1.7, 3.4
- Testing → Tasks 3.2, 3.4, 5.4, 5.5
- Repo layout → Tasks 3.1 (init), 5.6 (README)
- v1 punch list — all bullets covered above

**Placeholder scan:** No `TBD`/`TODO` in steps. Two known-incomplete spots flagged with concrete deferral: (a) the JvI registration pattern in Task 2.2 step 1 says "the exact API is xEdit-specific; mirror what's done for AddMessage" — engineer must verify against the codebase. (b) `JsonString` in example scripts (Tasks 5.1, 5.2) is assumed available; if xEdit doesn't provide one, README/example calls out the inline-escape fallback.

**Type/method consistency:** `XEditReplProcess.exec()` returns `ExecResult` everywhere it's referenced. Frame markers `READY`/`END_SOURCE`/`RESULT`/`END_RESULT` are consistent across markers.py, wrapper.py, fake_repl.py, and the Delphi side. `OpenOutput`/`EmitJSONLine`/`WriteSummary` signatures match between Pascal helpers and example usage.

**Probe-first discipline:** Phase 0 verifies the two load-bearing assumptions (JvI multi-instance, threaded stdin) before any production code. Per memory `feedback_test_before_design`.

---

## Open / deferred items (not in v1)

- Persistent daemon mode for the wrapper (`xedit-repl start/exec/stop` over a local socket). Single-shot covers most use; add when interactive sessions repeatedly pay the boot cost.
- Cancellation: kill-and-relaunch only. In-process cooperative cancel deferred.
- BSA repack / archived-data writes: not exercised by `-repl`; if needed, separate tooling.
- Cross-platform: Windows-only. xEdit, USVFS, and CSE are all Windows-bound, so this is fine indefinitely.
