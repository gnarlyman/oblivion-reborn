# G5 `exec` — Console Output Capture

**Status:** design
**Date:** 2026-05-08
**Project:** G5 — Live RPC validator (Oblivion plugin)
**Repo path:** `research/plugin_detector/g5/`

## Problem

The G5 plugin's `exec` command currently fires a console line through `OBSEConsoleInterface::RunScriptLine` and discards everything except a useless boolean. There is no path back from the engine for commands that *produce* output:

- `getstage <quest>` → `Stage = 50.00`
- `getrace`, `getclass`, `getav`, `getpos`, `getlevel`
- diagnostic dumps like `sqv`, `tdt`

This blocks the predictor work from reading runtime engine state that's only available via console (quest progression, actor stats, ref properties).

## Goal

Enhance the existing `exec` command so it returns the lines printed to the console during the command's execution. Keep the existing call shape and don't break current callers.

## Non-goals

- No new structured-result path (no separate "return double from this command" mode). Strings are sufficient; the Python driver does any parsing.
- No async commands. Capture window equals the synchronous `RunScriptLine` window.
- No filtering of "what came from this command vs. background spam." Practically, nothing else prints during the synchronous main-thread window we hold.
- No new command name. `exec` gets enhanced; existing `exec_capture`-style separate command is rejected.

## Design

### Mechanism: hook the engine's console-print function

Install a hook on the engine function that emits text to the on-screen console. The hook reads two thread-local globals on entry:

```cpp
thread_local bool                     g_capturing  = false;
thread_local std::vector<std::string> g_captureBuf;
```

When `g_capturing == true`, append the formatted string to `g_captureBuf`; in all cases, forward to the original implementation so the user-visible console behavior is unchanged.

`HandleExec` runs on the main thread (via the existing WndProc-subclass queue in `command_queue.cpp`). The capture window is exactly:

```cpp
g_captureBuf.clear();
g_capturing = true;
bool ok = engine::ExecuteConsoleCommand(line);
g_capturing = false;
```

`RunScriptLine` is synchronous; the main thread is the only thread that prints to the console; thread-local state means zero locking; no other system races into the buffer because the main thread is busy running our command.

### Locating the print function

The plan-time research task is finding the engine address. Approach, in order:

1. Read xOBSE source — `Console_Print` plugin export (`Console.cpp` / `GameAPI.cpp`) wraps an internal engine function. Lift that address.
2. Cross-check against the Ghidra Oblivion project at `research/ghidra-projects/`.
3. If neither yields a clean target, walk back from `RunScriptLine`'s execution path and pick the print function at the bottom of the call chain (xref into the on-screen ring buffer).

The deliverable from this research step is a single address constant in `engine.cpp`, mirroring the style of `kCreateReferenceAddr`, `kLookupFormByIDAddr`, etc.

### Hook style

Same patch primitive as the existing `Wrap_CreateReference` machinery:

- Patch CALL sites if there are a small bounded number, or
- Splice the function head if it's the single funnel for all printed output.

The chosen calling convention will follow whatever the engine function uses (likely `cdecl` printf-style — vararg). The `__fastcall`-emulating-`__thiscall` trick from `Wrap_CreateReference` is a template if needed.

If the function is varargs (e.g., `Console_Print(const char* fmt, ...)`), the wrapper formats the va_list into a heap `std::string` via `_vscprintf`/`vsnprintf` before forwarding.

### Wire protocol

Request unchanged:

```jsonc
{"cmd": "exec", "line": "getstage MS40"}
```

Response gains a `lines` field:

```jsonc
{"ok": true, "lines": ["Stage = 50.00"]}
{"ok": true, "lines": []}                 // command printed nothing
```

Rules:

- `lines` is always present on `ok=true` responses (`[]` if no output).
- One entry per `Console_Print` call, **except**: if a single call's formatted string contains embedded `\n`, split on `\n` so each visual line is its own entry. Trailing empty entries from a final `\n` are dropped.
- Cap at **1024 entries OR 256 KiB total** per `exec` — whichever limit is hit first. On overflow, append `"...truncated..."` as the final entry and silently drop the rest of that exec's captured output.
- Existing `exec` callers (`Player.AddItem`, `Player.RemoveItem` in `g5/driver.py`) ignore the response body — non-breaking.

### Python driver

```python
# driver.py
async def exec_console(self, line: str) -> list[str]:
    resp = await self.proto.send_command({"cmd": "exec", "line": line})
    if not resp.get("ok"):
        raise RuntimeError(f"exec failed: {resp}")
    return resp.get("lines", [])

async def query(self, line: str) -> list[str]:
    """Sugar alias — same as exec_console, but reads better at call sites
    that consume the output (getstage, getrace, sqv, ...)."""
    return await self.exec_console(line)
```

`add_item` / `remove_item` keep working — the new return value is unused by them.

### Tests

New cases in `research/plugin_detector/g5/tests/`:

1. **Numeric output** — spawn a known active vanilla quest's stage via `getstage <quest>`, expect one line matching `r"^Stage = \d+(\.\d+)?$"`.
2. **String output** — spawn a vanilla NPC, run `getrace` against it (`prid <ref>; getrace`), expect one line containing the race EDID.
3. **No output** — `tfc` (toggle free camera) returns `[]`. Run twice to leave camera state untouched.
4. **Multi-line** — a command that prints multiple lines (candidate: `sqv <quest>`) returns >1 entry.
5. **Overflow truncation** — temporarily lower the cap behind a `#define G5_CAPTURE_CAP_OVERRIDE` test build, drive overflow with a long-printing command, assert final entry == `"...truncated..."`.

Documentation:

- `research/plugin_detector/g5/protocol.md` — add `lines` to the `exec` section, document cap and truncation marker.

## Open questions / risks

- **Engine print address may differ between Oblivion 1.2.0.416 and other supported builds.** G5 only targets 1.2.0.416 today; document the address and version assumption alongside the existing engine-address constants.
- **Vararg formatting bugs** could crash the engine if the wrapper mis-handles the `va_list`. Use `_vscprintf` for size first, then `vsnprintf` into an exact-size buffer; wrap the format call in `__try`/`__except` returning empty on fault, then forward to original.
- **Re-entrancy** — if the wrapped print function calls itself (unlikely but possible via assertions), the thread-local flag handles it cleanly: nested calls just append to the same buffer, which is the correct behavior.

## Out of scope (deferred)

- Capturing engine `_MESSAGE` / debug-log output (separate function, separate buffer).
- Async/script-driven prints that fire after `RunScriptLine` returns (would need a different windowing model — a "drain pending" command).
- Structured numeric return via direct command-table dispatch.
