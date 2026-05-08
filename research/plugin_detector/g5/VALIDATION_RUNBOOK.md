# G5 Validator — In-Game Validation Runbook

This runbook covers the in-game smoke tests deferred during subagent-driven implementation, plus the T15 self-validation gate.

The Python and C++ code is implemented and the test suite (14 tests) passes. What's left is verifying the plugin actually works inside a running Oblivion process. None of this could be done by a subagent.

## Prerequisites

- Plugin DLL is deployed at `D:/Modlists/Reborn/mods/G5 Validator/OBSE/Plugins/g5.dll` (every build during the spike re-deploys it).
- "G5 Validator" is enabled in MO2 left pane (any profile — confirm in modlist).
- A working save file in any active profile, ideally with the player in an exterior cell so spawned NPCs are visible.

## Quick smoke tests (Python helper)

A handy PowerShell connect snippet — paste once:

```powershell
function G5Send($json) {
    $c = New-Object System.Net.Sockets.TcpClient("127.0.0.1", 13580)
    $s = $c.GetStream()
    $w = New-Object System.IO.StreamWriter($s); $w.AutoFlush = $true
    $r = New-Object System.IO.StreamReader($s)
    $w.WriteLine($json)
    $reply = $r.ReadLine()
    $c.Close()
    return $reply
}
```

## Test sequence

Run these in order. If any fails, **stop** — the next ones depend on it.

### T02 — Plugin loads

1. Launch Oblivion through MO2 (any profile with G5 Validator enabled).
2. Quit at the main menu.
3. Open `%USERPROFILE%\Documents\My Games\Oblivion\OBSE\Plugins\g5.log`.
4. **Expect:** lines like
   ```
   [HH:MM:SS] g5: log opened
   [HH:MM:SS] Query: obseVersion=0x...
   [HH:MM:SS] Load: plugin handle=...
   ```

If no log file: plugin didn't load. Check `obse.log` in the same dir for "g5" lines — likely a load-order or signature mismatch.

### T03 — Socket server

1. Launch Oblivion through MO2 (loaded save, doesn't matter which).
2. After the game is at the main menu OR in-game, open a PowerShell window and run:
   ```powershell
   G5Send "hello"
   ```
3. **Expect:** `{"ok":true,"main_thread_echo":"hello"}` (the main-thread echo from T04, since T04 replaced T03's worker-thread echo).
4. Check `g5.log` for `socket: listening on 127.0.0.1:13580` and either a `recv:` line or `queue: subclassed WndProc` (T04 produced this).

If the socket connect fails: plugin loaded but socket server didn't start. Check for `socket: bind to port 13580 failed` in the log — a port conflict or AV firewall.

### T04 — WndProc subclass

This is implicitly tested by T03 above (the response includes `main_thread_echo`, proving the message was processed on the main thread).

Also check `g5.log` for `init: main window = 0x...` — confirms the main window was found and subclassed.

### T05 — JSON dispatch (ping)

```powershell
G5Send '{"cmd":"ping"}'
```

**Expect:** `{"msg":"pong","ok":true}` (key order may differ — that's fine).

### T06 — Python driver

Already verified by the test suite (14 tests passing). Optional in-game validation:

```powershell
cd D:\Modlists\Reborn\_worktrees\g5-validator\research\plugin_detector\g5
python -c "import asyncio; from g5.protocol import Protocol; asyncio.run((async def m():
  p = Protocol('127.0.0.1', 13580)
  await p.connect()
  print(await p.send_command({'cmd':'ping'}))
  await p.close())())"
```

(The lambda-syntax above doesn't work in Python; use a small `.py` file if you want a one-liner.)

### T07 — coc (engine console execute)

**This is where the unverified address `0x005B5C70` could fail.**

In-game (load any save):
```powershell
G5Send '{"cmd":"coc","edid":"WeyeBoatHouse"}'
```

**Expect:** `{"ok":true}` and the player teleports to the Weye boat house exterior cell.

If response is `{"ok":false}`: SEH caught a fault — address 0x005B5C70 is likely wrong. Open Ghidra at `D:/Modlists/Reborn/research/ghidra-projects/` and search for the console-script execute helper. The function takes `(const char* cmd, void* targetRef)` and is called from the in-game console. xOBSE source at `D:/Modlists/_clones/xOBSE/obse/obse/` may have the canonical address.

### T08 — spawn

In-game (after T07 works):
```powershell
G5Send '{"cmd":"spawn","form_id":"00023F2A","count":1}'
```

(`00023F2A` is a vanilla Imperial Legion guard.)

**Expect:** `{"ok":true,"ref_id":<integer, typically 0xFF000000+>}` and a guard appears next to the player.

If `ref_id` is 0: the address `0x00B324CC` (last-created-ref global) is wrong. The spawn itself worked (NPC visible) — only the ref_id readback failed. T09's inspect_inventory will fail to find the NPC by the returned ref_id.

If `ok:false`: either T07 still doesn't work, or the form_id doesn't exist in this load order.

### T09 — inspect_inventory (riskiest task)

Capture the ref_id from T08, then:
```powershell
G5Send '{"cmd":"inspect_inventory","ref_id":<the_ref_id_int>}'
```

**Expect:** `{"ok":true,"items":[...]}` with at least 4–5 items (vanilla guard armor: helmet + cuirass + greaves + boots + weapon).

Possible failure modes:
- `{"ok":false,"error":"chase_faulted"}`: SEH caught a pointer fault. The struct offsets in `engine.cpp` are wrong, or `tList` head-node assumption is wrong. The implementer documented this risk in the T09 commit.
- `{"ok":false,"error":"not_a_reference"}`: The form type IDs were wrong at the time of build but were already fixed in commit `4fccc94`. Should not happen anymore.
- `{"ok":false,"error":"ref_not_found"}`: The ref_id doesn't resolve. Likely T08's address-readback issue.
- Empty items list `[]` for an actor with armor: probably the `tList` head-node walk is skipping every entry.
- Inventory items show but with garbage form_ids / negative counts: offsets are wrong by some bytes.

### T10 — delete

After T08 (using the same ref_id):
```powershell
G5Send '{"cmd":"delete","ref_id":<the_ref_id_int>}'
```

**Expect:** `{"ok":true}` and the spawned guard disappears from the world.

If you re-visit the cell later, the NPC should not reappear.

## T15 — Self-validation gate (50 vanilla NPCs)

Run only after T07/T08/T09/T10 each return `ok:true` for at least one hand test.

### Step 1 — pick 50 vanilla NPCs

The spec wants 50 NPC_ records from `Oblivion.esm` whose template flag does NOT set `Use Inventory` and which have a non-empty CNTO list.

You have existing tooling for this:

**Option A: REPL daemon + Pascal query.** Start a REPL daemon for the Reborn-OOO profile (`research/repl_daemon.py`) and run a Pascal script that walks Oblivion.esm's NPC_ group, filters by ACBS (template-flag check) and CNTO presence, and emits 50 sampled FormIDs. Reference the existing scripts in `D:/Modlists/_clones/oblivion-conflicts/scripts/`.

**Option B: xEdit GUI.** Open xEdit on Reborn-OOO, filter NPC_ records by source `Oblivion.esm`, scroll for ones with CNTO and no `Use Inventory` flag. Pick 50 by hand.

**Option C: known-good seed list.** Start with a smaller hand-curated set (Imperial Legion guards, bandits, Mythic Dawn agents, generic faction NPCs) and grow it as you validate. 20 NPCs is a decent floor.

Save the result to `tests/fixtures/vanilla_50.json` in this shape:

```json
[
  {"form_id": "00023F2A", "edid": "ImperialLegionGuard", "coc_cell": "WeyeBoatHouse", "ticks_wait": 30},
  {"form_id": "...", "edid": "...", "coc_cell": "...", "ticks_wait": 30}
]
```

`coc_cell` = a clean exterior cell to teleport to first.
`ticks_wait` = how long to wait after `placeatme` before reading inventory. Start with 30 (~1 second at 30fps); increase if `OnLoad` hasn't populated the inventory yet.

### Step 2 — run G5 against the 50

```powershell
cd D:\Modlists\Reborn\_worktrees\g5-validator\research\plugin_detector\g5
python g5_driver.py `
  --launcher D:\path\to\oblivion-usvfs-launcher.exe `
  --profile Reborn-OOO `
  --candidate-list tests/fixtures/vanilla_50.json `
  --output validation_vanilla.jsonl `
  --per-npc-timeout 30
```

The runner will launch Oblivion via the launcher, open a save/start state, and walk the 50 NPCs. Crashes auto-restart up to `--max-restarts` times.

If you don't have a `oblivion-usvfs-launcher` path handy, you can fall back to:
- Launching Oblivion through MO2 manually
- In a separate shell, running a smaller-loop Python script that talks to the existing socket and walks the candidate list

### Step 3 — compute pass rate

```powershell
python -c "import json; total=ok=empty=crashed=0
for line in open('validation_vanilla.jsonl'):
    e = json.loads(line); total += 1
    if e['outcome'] == 'ok':
        ok += 1
        if not e.get('inventory'): empty += 1
    elif e['outcome'] == 'crashed': crashed += 1
print(f'total={total} ok={ok} empty={empty} crashed={crashed}')"
```

For vanilla soldiers/bandits, expect `empty == 0` (all should have armor).
Crashed should be ≤ `total/50` (i.e., ≤ 1-in-50 spawn crash rate per the spec's failure exit).

### Step 4 — hand-spot-check 5

Pick 5 random `outcome=ok` entries from `validation_vanilla.jsonl`. For each:

1. Note the inventory list reported by G5.
2. In-game, send `{"cmd":"spawn","form_id":"<fid>","count":1}` to get a fresh ref_id.
3. Open the in-game console, type `prid <ref_id>; inv` — note what the engine reports.
4. Compare. They should match (modulo equipped state — `inv` doesn't always show that).

### Step 5 — write the validation report

Create `validation_report.md` with:
- Date
- Number of NPCs tested, ok/empty/crashed counts
- Hand-spot-check: 5 NPCs, X matched, Y mismatched (with details)
- Crash rate vs. spec target (≤1/50)
- Conclusion: G5 is trustworthy for the calibration corpus / G5 has bias type Z / G5 needs more work
- Known issues encountered (e.g., crashes on specific NPC types, OnLoad timing issues)

### Step 6 — commit

```powershell
cd D:\Modlists\Reborn\_worktrees\g5-validator
git add research/plugin_detector/g5/tests/fixtures/vanilla_50.json research/plugin_detector/g5/validation_report.md research/plugin_detector/g5/validation_vanilla.jsonl
git commit -m "g5: self-validation gate — 50 vanilla NPCs, hand-checked subsample"
```

## What's next after T15

If T15 passes:
- Move to Phase 2 of the spec: collect the full Reborn-OOO calibration corpus (G5 against active NPC list).
- Then write the next plan: predictor (Python) + VFS module (Python) + xEdit oracle (Pascal one-shot).
- After the predictor lands and runs, compute precision/recall against the corpus. That's the actual feasibility answer.

If T15 fails or shows the predictor needs more from G5:
- Patch the engine address(es) that turned out wrong.
- Add T15-class observability: log structured events from the plugin so we can diagnose patterns of failure.

## Branch state

- Branch: `feature/g5-validator` in worktree `D:/Modlists/Reborn/_worktrees/g5-validator/`
- 19 commits ahead of `main`
- 14 Python tests passing
- Plugin DLL building cleanly (Release|Win32, MSVC 18 Community)
- Plugin DLL deployed to MO2 mod folder via post-build copy

## Address verification cheatsheet

If T07/T08/T09 fail with SEH/fault errors, these are the addresses that need verification in Ghidra:

| File:Line (engine.cpp) | Constant | Purpose |
|---|---|---|
| ~21 | `kExecuteScriptAddr = 0x005B5C70` | Console script execute helper |
| ~36 | `kLastCreatedRefIdAddr = 0x00B324CC` | Last-created-ref global written by `placeatme` |
| ~30 (engine.cpp T09) | `LookupFormByID = 0x0046B250` | TESForm::LookupByFormID — VERIFIED via xOBSE GameAPI.cpp:110 |
| ~32 | `GetContainer = 0x004D6D40` | TESObjectREFR::GetContainer (thiscall) — VERIFIED via xOBSE GameObjects.cpp:502-505 |

xOBSE clone: `D:/Modlists/_clones/xOBSE/obse/obse/` — `GameAPI.cpp`, `GameObjects.cpp`, `GameForms.h`, `GameBSExtraData.h`, `GameExtraData.h`, `Commands_Inventory.cpp`.

Ghidra project: `D:/Modlists/Reborn/research/ghidra-projects/` (per memory).
