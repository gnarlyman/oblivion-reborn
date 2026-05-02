# oblivion-xedit-repl — Design

**Status:** Ready for implementation
**Date:** 2026-05-01
**Project:** APW Reborn tooling — new sibling repo `D:\Modlists\_clones\oblivion-xedit-repl\`
**Related:**
- xEdit fork: `gnarlyman/TES5Edit` branch `feat/repl-mode` (alongside existing `feat/tmconflicts`)
- Launcher: `oblivion-usvfs-launcher` (gains a new launch profile for the REPL)
- Subsumes some workflows from: `oblivion-conflicts` (its Pascal scripts become reusable inputs to the REPL)

---

## Goal

A persistent, warm xEdit subprocess that an agent can pipe Pascal scripts at over stdin, eliminating the ~25-second cold-boot cost paid by the current `xEdit -script:foo.pas -autoexit` workflow. The load order is loaded once; subsequent script invocations reuse the in-memory record tree and return in sub-second.

The agent writes Pascal scripts (or reuses ones from `oblivion-conflicts`), submits them via a thin wrapper command, and reads structured artifacts the scripts write to disk. No protocol invention beyond a stdin frame; no MCP server; no typed-tool catalog; no in-memory state machine to reason about beyond what xEdit itself maintains.

## Non-goals (v1)

- **MCP server / typed tool catalog.** Pascal-script-first by design. If repeated patterns prove useful, they get promoted to library functions in the helper unit, not to typed RPC tools.
- **In-process job queue / async execution.** Scripts run synchronously to completion. A long script blocks the REPL until done. Cancellation is "kill the subprocess and pay the boot cost on next launch."
- **Multi-tenant / concurrent script execution.** One REPL = one script at a time. Parallel work spawns parallel REPL processes against (typically) different profiles.
- **Hot-reload of load order.** One process = one frozen `plugins.txt`. Switching profiles = relaunch.
- **Cross-process record handles.** Scripts navigate `IInterface` references inside their own execution scope. Nothing crosses script boundaries except disk artifacts.
- **GUI of any kind.** REPL mode skips xEdit's VCL.
- **Game support beyond TES4.** Same as the rest of the family: Oblivion only for v1. The `-repl` mode is game-agnostic in principle but only exercised against `gmTES4`.
- **Custom mutation safety layer in xEdit.** Mutation safety is delegated entirely to USVFS write redirection. Saves go to a scratch dir; the agent moves files to Data when ready.

## Why custom

The current Pascal-script CLI workflow (`xEdit -script:foo.pas -autoexit`) pays ~20–30s of cold boot on every invocation: load game master, parse plugins.txt, load every plugin, build the in-memory record tree. For batch one-shot work (like `oblivion-conflicts -conflicts`) that overhead is fine — pay it once. For interactive iteration (write script → run → inspect → tweak → run, repeated 10× in one investigation) it dominates wall time.

A persistent subprocess that pre-loads once and accepts subsequent scripts via stdin captures most of the win at a fraction of the engineering cost of a full RPC server. xEdit's `JvInterpreter` integration already supports running arbitrary Pascal source with full access to the wb API; the only missing piece is a stdin-driven outer loop.

The xEdit fork is MPL-2.0, build chain is established (memory: `feedback_xedit_build_setup`), and the fork already carries narrow surgical patches in this style (`autoexit` fix, `-conflicts` CLI mode). A `-repl` mode follows the same pattern.

## Architecture

### Process topology

**Architecture pivot 2026-05-01:** original design had a separate Python wrapper between the launcher and xEdit. Empirical testing during Phase 1 showed that the launcher's `usvfsCreateProcessHooked` call uses `bInheritHandles=false`, which severs stdio between the launcher and xEdit. Patching the launcher to pass through stdio works but adds a flag and a conceptual layer for no benefit; merging the wrapper into the launcher itself is cleaner. New topology has two processes total instead of three.

```
agent  ──spawns──▶  oblivion-usvfs-launcher --repl-server \
                       --profile <plugins.txt> \
                       --scratch <scratch-dir> \
                       --output <output-dir>
                     (C# launcher, .NET 8)
                     (initializes USVFS hook with Data\ write redirect,
                      verifies USVFS interception, owns REPL framing,
                      spawns xEdit with bInheritHandles=true and explicit
                      stdin/stdout pipes:)
                       │
                       └─ TES4Edit_patched.exe -repl -tes4 -autoload \
                              -D:<data> -P:<plugins.txt>
                          (Delphi binary, USVFS-hooked, boots load order
                           once, enters read-eval-print loop on stdin
                           supplied by parent launcher)
```

The launcher process speaks the REPL framing protocol on its own stdin/stdout (which are connected to the agent — e.g. via `subprocess.Popen` pipes). It translates agent requests into stdin writes to xEdit and forwards xEdit's stdout marker frames back to the agent.

### Component 1: xEdit fork patch (`-repl` mode)

New CLI mode in `gnarlyman/TES5Edit` on branch `feat/repl-mode`. Sibling to existing `-autoexit`, `-conflicts`, etc. Composable with other CLI flags (`-D:`, `-P:`, `-IKnowWhatImDoing`, etc.).

**Behavior:**
1. Standard initialization path: `wbProgramPath` / `wbDataPath` / game detection / `LoadPlugins`. Reuses existing init code; no GUI is created.
2. Once load order is fully resident in memory, write a single line to stdout: `===READY=== <session-id>` and flush.
3. Enter the read-eval-print loop:
   - Read stdin lines until terminator `===END_SOURCE===` is seen on its own line. Accumulate everything before it as Pascal source.
   - Compile + run the source via `JvInterpreter`. `AddMessage` output streams to stdout as it happens, prefixed with `STDOUT: ` so the wrapper can demux.
   - On success: write `===RESULT=== {"ok":true,"summary":<value>,"output_files":[...]}` (single-line JSON), then `===END_RESULT===`.
   - On Pascal exception: write `===RESULT=== {"ok":false,"error":{"line":N,"col":N,"message":"...","source_excerpt":"..."}}`, then `===END_RESULT===`. Loop continues — exceptions do not terminate the REPL.
   - Loop.
4. On stdin EOF: shut down cleanly (no save attempts unless a script explicitly saved during the session).

**Implementation notes:**
- Frame markers (`===READY===`, `===END_SOURCE===`, `===RESULT===`, `===END_RESULT===`, `STDOUT:`) are printed at start-of-line and the source must not contain them as standalone lines. The wrapper enforces this by escaping any matching lines in submitted source.
- JSON framing uses xEdit's existing `lkJSON` unit.
- Pascal source executes on the main thread. A separate thread reads stdin and queues source blocks. Cancellation is not supported in v1; if needed, the wrapper kills the subprocess and the launcher restarts it.
- Estimated patch size: 200–400 lines of Delphi.

### Component 2: wrapper (extension to `oblivion-usvfs-launcher`)

The wrapper lives **inside the launcher** as a new mode `--repl-server`. Implementation language: C# (.NET 8, matching the existing launcher). No separate repo.

**Why merged:** the launcher's `usvfsCreateProcessHooked` call uses `bInheritHandles=false`, severing stdio across the launcher→xEdit hop. A separate Python wrapper sits *above* the launcher, so its pipes never reach xEdit. Patching the launcher to pass through stdio works but adds a flag and a layer. Owning the spawn directly from the wrapper-launcher means the C# code holds xEdit's pipe handles itself — no inheritance dance, no extra process.

**New launcher mode `--repl-server`:**

When `--repl-server` is set, the launcher activates wrapper behavior after USVFS bootstrap:
- Spawns xEdit with explicit `STARTF_USESTDHANDLES` + anonymous pipes for stdin/stdout, retains the read/write handles internally.
- Speaks the REPL framing protocol (`===READY===`, `===END_SOURCE===`, `===RESULT===`, `===END_RESULT===`) on its **own** stdin/stdout (which are connected to the agent that spawned the launcher).
- Reads agent input → escapes lines matching markers → writes to xEdit stdin → reads xEdit stdout until `===END_RESULT===` → forwards result envelope to agent stdout.

**CLI shapes:**

Ad-hoc single-shot (agent submits one script):
```bash
oblivion-usvfs-launcher --repl-server \
    <modlist-root> <profile> <usvfs-install-dir> \
    <xedit-exe> --tes4 -autoload -repl -D:<data> -P:<plugins> \
    --exec <script.pas>
```
The launcher boots xEdit, submits the script, prints the result envelope, exits. Useful for batch use.

Persistent (agent drives interactively):
```bash
oblivion-usvfs-launcher --repl-server \
    <modlist-root> <profile> <usvfs-install-dir> \
    <xedit-exe> --tes4 -autoload -repl -D:<data> -P:<plugins>
```
With no `--exec`, the launcher waits on its own stdin for source blocks (terminated by `===END_SOURCE===`), runs them, emits envelopes, loops. Stdin EOF triggers clean shutdown.

**Lifecycle:**
- On xEdit crash: launcher detects EOF on xEdit's stdout pipe, surfaces `{ok: false, error: "subprocess died"}` on the in-flight envelope, exits with a non-zero code so the agent knows.
- On launcher SIGTERM (Ctrl-C): send EOF to xEdit stdin, wait briefly, SIGKILL if needed.

**Existing positional CLI preserved:** without `--repl-server`, the launcher behaves exactly as today — same args, same behavior. `-conflicts`, GUI launches, etc. unchanged.

**Estimated size:** 200–300 additional lines of C# in the launcher.

### Component 3: Pascal helper library (mounted into REPL)

Reused from `oblivion-conflicts`: the `OpenOutput`, `EmitJSONLine`, `WriteSummary` conventions for disk-first output. Ported into a Pascal include file (e.g. `repl_helpers.pas`) that the `-repl` mode auto-loads into JvInterpreter scope before evaluating user source. This means submitted scripts can call helper functions without `uses`-style imports.

Conventions (all already proven in oblivion-conflicts):
- `OpenOutput(name)` opens a file under the configured `--output` dir, returns a stream + records the absolute path for inclusion in `output_files`.
- `EmitJSONLine(stream, key, value)` writes one JSONL record. JSONL is greppable, streamable, and the agent can `head` it without parsing the whole document.
- `WriteSummary(json)` writes the small JSON value that becomes the `summary` field of the result envelope (kept inline in the response, not on disk).

### USVFS / launcher integration

The `oblivion-usvfs-launcher` (existing — memory: `project_oblivion_usvfs_launcher`) gains a new launch profile for the REPL. It is responsible for:
1. Setting up the USVFS hook with the same VFS view as a normal xEdit launch (mods layered into Data\).
2. Adding a write redirect: any write under `Data\` → `<scratch>/`.
3. Verifying USVFS interception is active before spawning the wrapper. If interception is not in place, exit with a clear error — no launch under partial isolation.
4. Spawning the wrapper inside the USVFS context. The wrapper inherits the hook; the child xEdit binary it spawns also inherits it.

The launcher is also responsible for `--profile` resolution: an MO2 profile name is translated to its `plugins.txt` path before the wrapper is invoked. The wrapper itself only accepts an absolute path.

### Mutation flow (MO2-style scratch overwrite via USVFS)

xEdit's `Save` semantics inside the REPL are vanilla. Scripts that mutate in-memory records and call `Save` write to what xEdit thinks is `Data\Foo.esp`; USVFS redirects that write to `<scratch>/Foo.esp`. xEdit has no overlay-aware code; the safety property comes from the launcher.

Agent inspection and promotion of scratch contents are plain file operations:
- Inspect: `ls <scratch>` / `Read <scratch>/Foo.esp` / etc.
- Promote a single file to Data: `cp <scratch>/Foo.esp /game/Data/Foo.esp` (or via Bash from within the agent).
- Discard: `rm <scratch>/Foo.esp`.
- Promote all: shell glob.

No special tooling required; no xEdit-side overlay machinery.

## Data flow

**Read query (typical interactive case):**
```
agent writes find_overrides.pas  (or reuses one from oblivion-conflicts)
  → xedit-repl exec find_overrides.pas
       wrapper pipes source + ===END_SOURCE=== to running child
       child compiles + runs (sub-second; load order is warm)
       child emits AddMessage as STDOUT: lines
       script calls OpenOutput('overrides.jsonl'), EmitJSONLine repeatedly
       script calls WriteSummary({records: 17})
       child emits ===RESULT=== {"ok":true,"summary":{"records":17},"output_files":["<output>/overrides.jsonl"]}
       child emits ===END_RESULT===
  → wrapper returns result envelope
  → agent reads <output>/overrides.jsonl with Read/Grep/Bash
```

**Mutation flow:**
```
agent writes patch_npc.pas (loads NPC by FormID, modifies fields, Saves owning plugin)
  → xedit-repl exec patch_npc.pas
       child mutates in-memory record
       script calls Save → USVFS redirects → <scratch>/MyPatch.esp written
       script emits summary
  → agent inspects <scratch>/ via Bash
  → if happy: cp <scratch>/MyPatch.esp /game/Data/
  → if not: rm <scratch>/MyPatch.esp; agent's next exec sees clean state on next save
```

**Note on iterative mutation:** in-memory state persists across `exec` calls in the same REPL session. If script A modifies an in-memory record, script B sees the modification. This is the desired behavior for interactive iteration. To revert, scripts can reload a plugin from disk (xEdit Pascal API supports this) or the agent can kill + relaunch the REPL (paying the cold-boot cost once).

## Error handling

**Pascal compile/runtime errors:** caught inside the REPL loop, surfaced via `===RESULT=== {ok:false, error:{line, col, message, source_excerpt}}`. The REPL continues running — no boot cost is paid.

**Script-level errors with partial output:** if a script writes some output files before throwing, those files exist on disk and their paths are included in the error envelope's `output_files` (best-effort — script must `Close` streams before crashing for paths to be recorded).

**Subprocess crash (xEdit AV, OOM, etc.):** wrapper detects EOF on child stdout, surfaces `{ok: false, error: "subprocess died"}` on the in-flight `exec` and any subsequent calls. Caller (agent or human) decides whether to relaunch via the launcher. Crash artifacts (xEdit's own crash dumps if any) land in `<output>/crashes/`.

**USVFS not active:** launcher detects this before wrapper spawn and exits with a clear error. The wrapper never starts under partial isolation.

**Long-running script:** blocks the REPL. v1 has no cancellation. If a script is hung, the human kills the wrapper (which kills the child); next launch pays cold boot. The full conflict sweep (~30s) is the upper bound of what we expect to run interactively; anything longer should run as a one-shot batch script via `xedit-repl --exec`.

## Testing

**xEdit fork patch:**
- Manual smoke: `TES4Edit_patched.exe -repl -D:<test-data> -P:<test-plugins.txt>`, type a one-line `AddMessage` script + `===END_SOURCE===`, verify framing.
- Fixture-based: small 3-plugin fixture (carried over from oblivion-conflicts), submit known scripts via stdin, snapshot stdout including framing.

**Wrapper:**
- Unit tests for stdin escaping (lines containing `===END_SOURCE===` etc.), result-envelope parsing, partial-output capture.
- Integration: launch wrapper against fixture profile, submit known scripts, assert envelopes.

**End-to-end:**
- Launch via `oblivion-usvfs-launcher` against the small fixture profile.
- Exercise: read script, mutation script that Saves to scratch, error script, sequential scripts where state persists.
- Assert scratch dir contents after mutations; assert `cp` to Data succeeds and is visible to a subsequent fresh REPL launch.

**Performance:**
- Measure cold boot once. Assert that 10 sequential point-query scripts complete in under 10× their individual runtime + small overhead. (Sanity check that the boot is amortized.)

## Repo layout

No new repo. Wrapper code lives inside the existing launcher project:

```
D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\   (existing, will be split out per memory follow-up)
├── Program.cs           (existing — gains --repl-server arg parsing + dispatch)
├── UsvfsNative.cs       (existing — P/Invoke; no changes)
├── ReplServer.cs        (NEW — REPL framing, xEdit pipe ownership, exec loop)
├── Markers.cs           (NEW — frame marker constants, source escaping)
└── UsvfsLauncher.csproj (existing — no changes)

D:\Modlists\Reborn\research\repl-examples\   (NEW; or moved into launcher repo)
├── find_overrides.pas
├── dump_record_full.pas (port from oblivion-conflicts)
└── README.md

D:\Modlists\Reborn\research\repl-tests\      (NEW; xunit or simple .NET test project)
├── ReplServerTests.cs   (against a fake xEdit-stub)
└── E2ETests.cs          (against a real xEdit binary, opt-in via env var)
```

xEdit fork changes live in `gnarlyman/TES5Edit` on branch `feat/repl-mode`:
- New `-repl` CLI mode wiring (Tasks 1.1–1.4 — done as of 2026-05-01)
- REPL loop implementation in `xEdit\wbREPLMode.pas` (Tasks 1.5–1.7)
- Helper library auto-mount logic (`xEdit\wbREPLHelpers.pas`, Phase 2)
- Updated CLI docs in the fork

## v1 punch list

- [x] xEdit fork: `feat/repl-mode` branch with `-repl` CLI mode skeleton (Tasks 1.1–1.4 done)
- [ ] xEdit fork: stdin reader thread + read-eval-print loop body (Tasks 1.5–1.7)
- [ ] xEdit fork: Pascal helper library (`wbREPLHelpers.pas`) mounted on JvI global adapter
- [ ] `oblivion-usvfs-launcher` extended with `--repl-server` mode (REPL framing in C#)
- [ ] xEdit-stub tests (deterministic framing, no Delphi dependency required to run)
- [ ] End-to-end test: launch + mutation + scratch promotion via real xEdit binary
- [ ] README with: setup, common patterns, the 2–3 example scripts, "how to write a Pascal script that returns structured output"
- [ ] Two seed example scripts (`find_overrides.pas`, `dump_record_full.pas`) that the agent can crib from
- [ ] Performance smoke: cold boot + 10 sequential point queries timing

## Probe results

### Probe 0.1 — JvInterpreter multi-instance state isolation (resolved by source inspection, 2026-05-01)

Inspecting `External/jvcl/jvcl/run/JvInterpreter.pas`:

- `TJvInterpreterUnit.FUnitSection: TUnitSection` (line 1018) — symbol table for user-defined identifiers (procedures, types, vars from submitted source). **Instance field**, freed with `TJvInterpreterProgram.Free`. Cannot leak across instances.
- `FieldGlobalJvInterpreterAdapter: TJvInterpreterAdapter` (line 1328) — module-level singleton holding *registered externals* (host-provided callables like `AddMessage`, and our future `OpenOutput`/`EmitJSONLine`/`WriteSummary`). Persists for process lifetime. This is exactly the desired behavior: register helpers once at REPL startup, available to every script for free.

**Conclusion:** structural guarantee that user symbols don't leak across `TJvInterpreterProgram` instances. Live probe (planned task 0.1) skipped — source inspection gives a stronger guarantee than empirical "didn't leak this time" would.

### Probe 0.2 — threaded stdin reader (skipped as low-risk, 2026-05-01)

A `TThread` worker calling blocking `Readln(Input, line)` while the main thread runs JvInterpreter is standard Delphi RTL behavior with no xEdit-specific concerns. The worker doesn't touch wb globals, the VCL message pump, or any xEdit-internal state — it just appends to a critical-section-guarded `TStringList`. Live probe (planned task 0.2) skipped.

### Implementation note carried forward

Helper registration in REPL startup must call `TJvInterpreterAdapter.AddFunction` (etc.) on the **`GlobalJvInterpreterAdapter`** singleton — not on a per-instance adapter. Otherwise registrations would be lost on the first `Program.Free`.

## Open questions / explicit deferrals

- **Cancellation.** Not in v1. If interactive sessions hit "I started the wrong sweep" often, add a `cancel` operation that kills + relaunches. Fancier in-process cancel (cooperative checkpoint flag) is possible but adds complexity that's not justified by current usage patterns.
- **Multiple concurrent REPLs.** Supported by spawning multiple wrappers, each with its own profile. Not orchestrated.
- **Wrapper transport.** v1 wrapper exposes the daemon via a local pipe / socket (Python `multiprocessing.connection` or named pipe — to be picked at implementation time). MCP wrapper, if ever built, would sit on top of this.
- **Partial output capture on script crash.** Best-effort only. If reliability becomes important, scripts should flush after each `EmitJSONLine` (the helper can do this internally).
- **Threading inside REPL.** If a script spins off a worker thread that touches wb globals, behavior is undefined. We do not document threading helpers; scripts should stay single-threaded.

## Relationship to existing tooling

- **`oblivion-conflicts`:** mostly subsumed by example scripts here. The standalone `-conflicts` CLI mode in the xEdit fork stays — it's a useful one-shot batch tool that doesn't need REPL warmth. The Pascal scripts (`dump_record_full`, `query_record`, etc.) become reusable inputs to the REPL; their on-disk JSONL conventions carry over verbatim.
- **`oblivion-merge-plugins` (design phase):** continues independently. The REPL is a useful execution surface for merge probes during merger development; merger itself remains a separate xEdit-fork extension.
- **`oblivion-batch-compile`:** unrelated — different binary entirely (CSE + CS, not xEdit).
- **`oblivion-usvfs-launcher`:** gains the new launch profile described above. No other changes.
