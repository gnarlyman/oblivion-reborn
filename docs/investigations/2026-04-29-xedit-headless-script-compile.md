# xEdit headless SCDA recompilation — investigation brief

**Date:** 2026-04-29
**For:** Fresh Claude Code session — self-contained, no prior conversation context required.
**Working directory likely:** `D:/Modlists/_clones/oblivion-conflicts/` and the xEdit fork.

---

## Problem

We need to author SCPT (script record) overrides in `Reborn Conflicts.esp` *headlessly* — driven by an xEdit Pascal script under `-autoload -autoexit`, with no GUI interaction. The immediate test case: change one line of source in `PSCharactergenStartingEquipmentScript` (FormID `1A012EAF`, master `PSMainQuestDelayer.esp`) and have the resulting override be **runtime-effective**, not just visually correct in xEdit.

The Oblivion engine runs the compiled bytecode in the **`SCDA`** subrecord. The text in **`SCTX`** is editor-only source — the engine does not parse it. So an override that only changes `SCTX` looks right when you open the .esp in xEdit but the engine still executes the master's bytecode. To produce a working override we have to also produce a recompiled `SCDA` whose bytecode reflects the new source.

xEdit's GUI does this automatically: when you edit a script in its script editor pane and save, `wbScriptAdapter` (or the equivalent compiler entry point — name to be confirmed) regenerates SCDA from SCTX. We don't know whether that compiler is reachable from headless JvInterpreter Pascal, and that is the central question for this session.

## Goal

Produce a reusable headless workflow that takes:
- A target plugin (`Reborn Conflicts.esp`)
- A source SCPT FormID (e.g. `1A012EAF`)
- A new SCTX (or a patch operation on the existing SCTX)

…and writes a working override into the target plugin, with SCDA recompiled to match. **Working** means: dump the override's SCDA bytes; they must differ from the master's SCDA, and the recompiled bytecode must encode the changed source. (We can verify the second part by re-loading the plugin and reading SCTX back, since xEdit can decompile-display SCDA — but the cleanest check is "does the actual game / a separate engine read the new bytecode?". For this investigation, byte-level diff + xEdit's own SCTX render of the override is acceptable evidence.)

Stretch goal: figure out save-on-exit semantics under `-autoexit`. Today the patched binary exits cleanly without prompting; we don't know if it saves modified plugins or discards them. May need an explicit `SaveFile` call from Pascal, or a new CLI flag.

## Constraints / advantages

- We have **full source control** of the xEdit fork: `github.com/gnarlyman/TES5Edit`, branch `feat/tmconflicts`. We already carry two local patches (autoexit fix, `-conflicts` CLI mode). Adding a third patch to expose the script compiler to JvInterpreter is on the table.
- We have a working Delphi 12 build setup for xEdit (4-package chain JCL→JVCL→VirtualTrees→FileContainer, LiteDebug must be Activated via Project Manager not just Target dropdown). Memory: `feedback_xedit_build_setup.md`.
- The patched binary lives at `D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe`.
- Existing Pascal scripts at `D:/Modlists/_clones/oblivion-conflicts/scripts/` (`query_record.pas`, `query_record_v2.pas`, `query_list.pas`, `query_between.pas`, `quest_flags.pas`, `references_to.pas`, `list_owned.pas`). The `_v2` variant carries a corrected cross-master FormID lookup; relevant memory: `feedback_query_record_cross_master_bug.md`.
- JvInterpreter quirks already catalogued in memory `feedback_pascal_script_quirks.md` — read that before writing new Pascal.

## Test case (validation target)

Patch `PSCharactergenStartingEquipmentScript` (SCPT `1A012EAF`) into `Reborn Conflicts.esp`. Change exactly one guard:

```
; before
if (IsModLoaded "Oblivion DLC Delayers.esp" == 1)
    set doOnce to 9
else
    set doOnce to 1
endif

; after
if (IsModLoaded "Oblivion DLC Delayers.esp" == 1) || (IsModLoaded "Delay DLC Start.esp" == 1)
    set doOnce to 9
else
    set doOnce to 1
endif
```

Background on why this fix matters: see `D:/Modlists/Reborn/docs/investigations/dlc-delay-mechanism.md`. Memory pointer: `feedback_psmqd_force_starts_dlc.md`. The bug is that PSMainQuestDelayer force-starts every DLC after chargen unless a specific delayer mod filename is loaded; Reborn ships a different filename, so the guard fails. This script-level fix is what we want to ship in `Reborn Conflicts.esp`.

**Critically: do not modify `Reborn Conflicts.esp` directly during this investigation.** Operate on a copy at `D:/tmp/Reborn Conflicts.test.esp` (or similar) until the workflow is proven. The live file should only be touched once the byte-diff verification passes and we're confident the override works.

## Suggested investigation order

### Step 1 — find the GUI compile entry point in xEdit source

Clone (or locate the existing checkout of) `gnarlyman/TES5Edit` `feat/tmconflicts`. Grep for the script editor / SCDA compilation path:

- Names to look for: `wbScriptAdapter`, `wbCompileScript`, `TwbScriptCompiler`, `CompileScript`, `wbScriptAdapter.CompileSource`. Also look in `wbHelpers.pas`, `wbInterface.pas`, the Oblivion definition unit, and any unit named `*Script*`.
- Find what the GUI's "Edit script" pane calls when the user closes it / when the file is saved with a dirty SCTX. Trace from there back to the compiler implementation.
- Note whether the compiler is a separate Delphi class with public methods, or whether it's tangled in GUI form code (e.g. tied to a TwbScriptEditor form). The former is much easier to expose.

Output: a concrete function/method name and the file/line where it lives. Establish whether it operates on SCTX strings + a master record (good — language-agnostic) or on UI state (bad — needs more refactoring to expose).

### Step 2 — check if the compiler is already reachable from JvInterpreter

xEdit's JvInterpreter adapter exposes a curated subset of internal functions to Pascal scripts. Find the registration list (likely in `wbScriptAdapter*` or a `RegisterFunctions` block in the JvInterpreter setup unit) and check whether the compiler entry point is registered.

If it IS exposed: write a tiny probe Pascal script that calls it on a one-record copy and dumps `Length(SCDA before)` vs `Length(SCDA after)`. If they differ, we're done — proceed to Step 4.

If it is NOT exposed: proceed to Step 3.

### Step 3 — patch xEdit to expose it

Add a new function to the JvInterpreter adapter: e.g. `function CompileScript(rec: IInterface; const sctx: string): boolean;`. Implementation calls the existing GUI compile path in non-GUI mode (the compiler itself almost certainly doesn't depend on the form — only the GUI's call site does). Register it in the JvInterpreter function list.

Build, swap in the new patched binary, and re-run the probe from Step 2.

Coordinate with the existing fork patches — the autoexit fix and `-conflicts` mode patches are already there; this would be a third. Keep it small and reviewable so it can land cleanly upstream if we ever want to PR it.

### Step 4 — handle save-on-exit

Determine what the patched binary does with a dirty plugin under `-autoexit`. Options:
- It silently saves dirty files. (Easiest case — nothing to do.)
- It silently discards changes. (Bad — need to call `SaveFile(plugin)` from Pascal explicitly, or add a CLI flag like `-autosave`.)
- It hangs on a save prompt. (Worst — `-autoexit` should already prevent this; verify.)

Probe by making a trivial change in Pascal (e.g. add a tag to the plugin's File Header) and check whether the on-disk file changed after exit. If saving needs to be explicit, expose `SaveFile` (or equivalent) to JvInterpreter the same way as the compiler.

### Step 5 — write the reusable Pascal driver

`scripts/apply_script_override.pas`:
- Args: `--target-plugin=`, `--src-formid=`, `--new-sctx-file=` (path to a file containing the new source — easier than passing huge strings on the CLI), `--out=` (path for a JSON status report).
- Behavior: load the master record by LO-formid (use the `LookupByLoFormID` helper from `query_record_v2.pas`), copy as override into target plugin (`wbCopyElementToFile` or similar), set SCTX to the new source, invoke the compiler, save.
- Emit a status JSON containing the new SCDA length, a SHA-256 of the new SCDA, and the master's SCDA SHA-256 for diff verification.

### Step 6 — verify against the PSMQD test case

1. Make a backup of `Reborn Conflicts.esp` (`*.esp.bak.<date>`).
2. Run the driver against a *copy* of `Reborn Conflicts.esp` first. Capture the JSON status.
3. Open the modified copy in xEdit GUI. Confirm:
   - The SCPT override appears under `Reborn Conflicts.esp`.
   - The SCTX shows the new guard line.
   - The SCDA hex differs from the master's.
4. (Optional, strongest evidence) Spin up a fresh Oblivion save with the modified `Reborn Conflicts.esp` and verify in-game that the DLC quests do NOT auto-fire after chargen.
5. Once verified, run the driver against the live `Reborn Conflicts.esp`. Re-run the in-game smoke check.

## What "done" looks like

- A Pascal script that produces a working SCPT override end-to-end, headlessly, with SCDA correctly recompiled.
- The PSMQD DLC guard is fixed in `Reborn Conflicts.esp`, with byte-level + in-game evidence.
- If we patched xEdit source to expose the compiler / save: a clean commit on `feat/tmconflicts` + an updated patched binary in `D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/`.
- Memory updates: replace `feedback_scda_vs_sctx_recompile.md`'s "investigation pending" line with the actual answer (compiler reachable / not / patched-to-be).

## Known unknowns / pitfalls

- **JvInterpreter type signatures.** Some xEdit functions can't be exposed via JvInterpreter due to interface-return-type limitations (we hit this with `ConflictAllForElements`). The compiler may have similar issues; if so, a thin wrapper that takes/returns simple types may be needed.
- **The compiler may pull in UI deps.** If `TwbScriptEditor` form imports leak into the compiler unit, Delphi may refuse to link without GUI. Audit imports before patching.
- **DLC quest StartGameEnabled flag dance.** Not relevant to this investigation, but if you happen to see DATA flag conflicts when verifying — that's expected; see `feedback_psmqd_force_starts_dlc.md`.
- **`-script:` argument parsing.** Args containing spaces in MO2-launch contexts get mangled. The `reborn-shortcut.sh` wrapper handles this with internal quoting; if you write a new wrapper, mirror that. See `reference_xedit_mo2_launch.md`.
- **Pascal block comments don't nest.** JvInterpreter ends `{ ... }` at the first `}`. Don't put curly braces inside doc comments. See `feedback_pascal_script_quirks.md`.
- **File backup discipline.** Never write to a live modlist plugin until the byte-diff verification has passed on a copy.

## Pointers (read these before starting)

- `D:/Modlists/Reborn/docs/investigations/dlc-delay-mechanism.md` — full writeup of the bug we're trying to fix; explains why the SCTX-only fix is insufficient.
- Memory `feedback_psmqd_force_starts_dlc.md` — one-paragraph version of the above.
- Memory `feedback_scda_vs_sctx_recompile.md` — the SCDA/SCTX nuance.
- Memory `feedback_xedit_build_setup.md` — Delphi 12 build environment.
- Memory `feedback_pascal_script_quirks.md` — JvInterpreter limitations.
- Memory `reference_xedit_fork.md` — fork repo + branch coordinates.
- Memory `reference_xedit_mo2_launch.md` — how to launch xEdit headlessly inside MO2's USVFS.
- Memory `feedback_query_record_cross_master_bug.md` — the LookupByLoFormID idiom you'll want to reuse.
- `D:/Modlists/_clones/oblivion-conflicts/scripts/query_record_v2.pas` — has the FormID-lookup helper, copy from there.
