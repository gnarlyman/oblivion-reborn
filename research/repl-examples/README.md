# oblivion-xedit-repl — agent guide

A persistent xEdit subprocess that an agent drives over stdio for fast
iterative Pascal-script work. Cold-boot the load order once (~25s on
Reborn-Base); every subsequent script returns in tens of milliseconds
against the same warm in-memory record tree.

Spec: `../../docs/superpowers/specs/2026-05-01-oblivion-xedit-repl-design.md`

## Quickstart

```bash
cd D:\Modlists\Reborn\research
python repl_client.py repl-examples/find_overrides.pas
```

Default profile is Reborn-Base. Override with `--profile NAME`. The
launcher spawns xEdit hooked under USVFS, waits for `===READY===`, then
submits the script and reads back the framed result envelope.

## Architecture in one paragraph

Two processes: `UsvfsLauncher.exe --repl-server` (C# / .NET 8) owns
xEdit's stdin/stdout pipes and the USVFS bootstrap, and speaks the
framing protocol on its own stdio. xEdit boots into a `-repl` tool mode
(fork at `gnarlyman/TES5Edit @ feat/repl-mode`) where it loads the
plugin tree, then enters a stdin-driven loop dispatching each submitted
source through `TxejviScriptHost.CreateScript` + `CallFunction('Initialize')`.

## Pascal-side conventions

A submitted script is a Pascal **unit** with an `Initialize` function:

```pascal
unit MyScript;
interface
implementation
function Initialize: Integer;
begin
  AddMessage('hi');
  Result := 0;     // 0 = ok; non-zero is logged but does NOT mark
                   // the result envelope as failed (only thrown
                   // exceptions do that).
end;
end.
```

Bare `begin ... end.` and `program X; ... end.` do NOT work —
JvInterpreter's `TJvInterpreterUnit.Compile` requires the `unit` keyword.

### Helper API (REPL-only — gated on `wbToolMode = tmRepl`)

```pascal
function  OpenOutput(name: string): string;          // returns absolute path
procedure EmitJSONLine(path: string; line: string);  // appends one JSONL row + LF
procedure CloseOutput(path: string);                 // flushes + drops cache
procedure WriteSummary(json: string);                // raw JSON for envelope
```

Output dir lives at `%TEMP%\xedit-repl-<launcher-pid>\` (or
`XEDIT_REPL_OUTPUT_DIR` if the agent set it). Paths returned by
`OpenOutput` are absolute and land in the result envelope's
`output_files` array. `WriteSummary` value is pasted verbatim into the
envelope's `summary` field; if never called, `summary` is `null`.

Streams cache per-path so repeated `EmitJSONLine` calls don't re-open.
At envelope time, ExecuteScript flushes + closes everything before
emitting `===END_RESULT===`, so the agent can read files immediately.

### USVFS write redirection

Writes through Win32 file APIs to virtual `Data\*` paths (any path under
`wbDataPath`) are redirected to `%TEMP%\xedit-repl-scratch-<launcher-pid>\`
via the launcher's `LinkFlags.CreateTarget` layer. xEdit's plugin save
path (`TFileStream.Create(fmCreate) + FileWriteToStream`) and any
`TStringList.SaveToFile` follow this. Real `Stock Game\Data\` is
untouched. To promote a save to real Data, copy from scratch
explicitly.

This means the canonical mutation flow looks like:

```pascal
fs := TFileStream.Create(wbDataPath + 'MyPatch.esp', fmCreate);
try
  FileWriteToStream(srcFile, fs, 0);  // 0 = don't reset modified
finally
  fs.Free;
end;
```

The bytes go to scratch. Agent inspects + promotes via plain file ops.

### Parameter-passing convention

There is no protocol-level param channel — the agent string-substitutes
constants at the top of the source before submission. Examples define
their parameters in a `const` block right after `implementation`:

```pascal
const
  TARGET_FID_HEX = '00000007';   // agent overrides via substitution
```

The agent reads the script template, replaces the literal default with
the real value, and submits. Done. No env vars, no preamble lines, no
wrapper — just text replacement.

### JvInterpreter quirks worth knowing

- **Brace comments don't nest.** `{ ... }` ends at the first `}`
  encountered, including ones inside JSON examples. Use `(* ... *)` for
  doc blocks that contain JSON.
- **No `s[i]` string indexing.** Use `Copy(s, i, 1)` instead.
- **No top-level array vars.** Wrap in a function-local var.
- **`uses` clauses** resolve from the xEdit install dir's `Edit Scripts\`
  folder. Most xEdit Pascal scripts work without any `uses` clause —
  the wb API is auto-injected.
- **Pascal user vars don't persist across script submissions.** Each
  `ExecuteScript` builds a fresh `TJvInterpreterProgram` whose symbol
  table is destroyed when it Frees. xEdit's wb-level state (loaded
  plugins, mutations, opened output files) DOES persist — it lives in
  globals, not the interpreter.
- **`GetTickCount` / `TEncoding.UTF8.GetBytes`** are NOT exposed via the
  JvI host. `TStringList.SaveToFile` and the helpers above are.

More: `feedback_pascal_script_quirks.md` in user memory.

## Driving from Python

```python
from repl_client import REPLSession

with REPLSession(profile="Reborn-Base") as repl:
    print(f"cold boot: {repl.cold_boot_seconds:.1f}s")
    r = repl.exec_path("repl-examples/find_overrides.pas")
    print(f"records: {r.envelope['summary']['records_with_overrides']}")
    # Re-use the warm process for as many follow-ups as you like:
    r = repl.exec_path("repl-examples/dump_record_full.pas")
```

`exec_source(source: str)` accepts a string instead of a path — useful
when the agent has already done parameter substitution. Returns
`ExecResult(envelope, stdout_lines, wall_seconds)`.

For a perf-style demo: `python repl_perf_smoke.py`.

## Troubleshooting

| Symptom | Likely cause |
|---|---|
| `Declaration expected but 'X' found` on a comment line | Stray `}` in a `{...}` block comment closed it early. Switch to `(*...*)` |
| `===RESULT=== {"ok": false, "error": ...}` with `Undeclared Identifier` | API not exposed via JvI host. Check `xejviScriptHost.pas` / `xejviScriptAdapter.pas` for the actual surface |
| Script hangs forever | A `ShowMessage` / `MessageDlg` call. xEdit's GUI message pump isn't running in REPL mode; modal dialogs never close |
| File appears in real `Stock Game\Data\` | Either: writing outside `wbDataPath`, or running the launcher WITHOUT `--repl-server` (CREATETARGET layer is REPL-only) |
| `===READY===` never arrives | Re-deploy the xEdit fork build — `Build\xEdit.exe` over `mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe` |

## Examples in this directory

- **`find_overrides.pas`** — full-load-order scan. Emits one JSONL row
  per master record with at least one override. Demonstrates iteration
  over `Files`, master-vs-override discrimination, and the disk-output
  helpers. Wall time ~150s on Reborn-Base (1.3M records).
- **`dump_record_full.pas`** — single-record chain dump. Emits one
  JSONL row per chain link with every top-level subrecord's edit value.
  Demonstrates `RecordByHexFormID` (O(1) hash lookup, in contrast to the
  linear scan that `RecordByEditorID` falls back to without a built
  index). Sub-second runtime.

## Related projects

- `oblivion-conflicts` (`D:\Modlists\_clones\oblivion-conflicts`) — the
  canonical home for one-shot Pascal-script analysis tools. Many of its
  scripts will run unchanged inside the REPL with helpers added.
- `oblivion-merge-plugins` — separate xEdit-fork extension; design phase.
- The `-conflicts` CLI mode in the same xEdit fork is independent: it's
  a one-shot batch tool that doesn't need REPL warmth.
