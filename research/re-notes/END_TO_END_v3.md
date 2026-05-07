# Imperial Legion patrol crash — end-to-end RE writeup v3 (RESOLVED)

**Date:** 2026-05-06 (evening session)
**Status:** ✅ FIX SHIPPED in Blockhead-Reborn v11.2.10.567. No crash, faces render, mounted patrols visible.
**Supersedes:** END_TO_END_v2.md (RE'd the cancellation cycle but mistook it for the root cause)

---

## TL;DR — what was actually wrong

The crash on Imperial Legion mounted patrols (NPCs `0x000700C0..0x000700CD`, including VirtueRider `0x000700CC`) had been chased through nine layers of symptoms and workarounds. The actual root cause was a small interaction inside Blockhead-Reborn's own retry-loop guard:

| | |
|---|---|
| The crash signature | `sub_5547F0+0xB6` AV: `call edx` where `edx = vtable[5]` of FGP.eyeLeft |
| The corruption | `FGP.eyeLeft` (offset +0xB8) contained a Blockhead-DLL code address (`0x73130C58`) instead of the canonical `&race->unk9[7]` |
| The mechanism | `sub_527C90` (FGP ctor) doesn't initialize +0xB8/+0xBC. `sub_52CD50` writes the canonical values. When Blockhead's `TESRaceGetFaceGenHeadParametersHook` (Fix 9, 2026-05-05) detected a (NPC, FGP) dupe and returned without calling orig sub_52CD50, the eyeLeft/eyeRight fields retained stale data from previous unrelated stack usage — including, on the failing case, an address inside Blockhead's own DLL code section. Downstream `sub_5547F0` then deref'd that as a vtable. |
| The fix | When the dupe-skip path runs, replicate `sub_52CD50`'s canonical writes in two lines: `FGP.eyeLeft = race+0x188; FGP.eyeRight = race+0x1A0;`. Two pointer assignments, no QueuedHead enqueue side effect. |

Diff: ~6 lines in `HeadOverride.cpp`. Stable across 30+ FaceGen events including 4 RETRY-LOOP detections, no crash, faces render correctly on the mounted patrols.

---

## How v2 was wrong

v2 traced the LFM hazard-pointer UAF at `sub_4328B0+0x5A` to a Set3D(NULL) cancellation cycle, and concluded the real bug was a per-frame `TESCharacter::Update` storm reading `refr.flags & (0x20 | 0x800)`. That description is *true* — the storm is real and v557 + v558 do prevent the LFM stress — but the LFM stress was a SECOND-ORDER consequence, not the actual crash that visible patrols hit on Reborn-Base.

The visible patrols' crash came through a different chain: `sub_555A80 → sub_5547F0 → AV deref FGP.eyeLeft`, and that chain runs whether or not the cancellation storm fires. v557/v558 stopped the LFM symptom but left the FGP-corruption symptom intact, which manifested as "no crash but no face."

v3 traced the FGP-corruption symptom to its actual source.

---

## The actual call chain

```
TESRace::GetFaceGenHeadParameters         <-- engine vtbl entry, addr = 0x52CD50
  ←  Blockhead patches the call site at 0x0052E03B (inside sub_52DED0)
  →  TESRaceGetFaceGenHeadParametersHook  (HeadOverride.cpp:797 / DoTESRaceGetFaceGenHeadParametersHook:754)
       if (NPC, FGP) is a dupe of the previous call on this thread:
          [Fix 9, 2026-05-05] return WITHOUT calling thisCall(orig sub_52CD50)
       else:
          thisCall(orig sub_52CD50, ...)   ; populates FGP including eyeLeft/eyeRight
          SwapFaceGenHeadData(...)         ; Blockhead's per-NPC override application

sub_52DED0 (engine chokepoint, calls sub_52CD50 via the patched site)
  → sub_527C90  ; FGP ctor — initializes most fields BUT NOT +0xB8/+0xBC
  → call 0x52CD50 (now redirected to TESRaceGetFaceGenHeadParametersHook)
  → sub_555A80  ; reads FGP.eyeLeft/eyeRight, gates the eye-load on both non-zero
       → sub_5547F0  ; if eyeLeft && eyeRight, dereferences eyeLeft as TESModel*
                       AV at +0xB6: call vtable[5] when eyeLeft is garbage

Failure scenario:
  - Frame N call:    NPC=X, FGP=Y, dupe=false → orig sub_52CD50 runs → eyeLeft = race+0x188 (OK)
  - Frame N+1 call:  NPC=X, FGP=Y, dupe=true  → orig SKIPPED → eyeLeft retains... what?
```

That last "what" is the bug. It depends on what wrote to that stack offset since the previous FGP construction. In v566 instrumentation, between events #23 (last successful canonical write) and #24 (the AV), it became `0x73130C58` — inside Blockhead's own DLL.

`sub_527C90` decompile (verified):

```c
// FGP ctor — writes to:
//   +0x60, +0x64, +0x68, +0x6C, +0x70, +0x74, +0x78, +0x7C, +0x7E, +0x80, +0x82,
//   +0x84, +0x88, +0x8C, +0x8E, +0x90, +0x92, +0x94, +0x98, +0x9C, +0x9E, +0xA0,
//   +0xA2, +0xA4, +0xA8, +0xAC, +0xAE, +0xB0, +0xB2, +0xB4, +0xC0
// Notably MISSING: +0xB8 (eyeLeft), +0xBC (eyeRight)
```

These two fields are initialized by `sub_52CD50` (`TESRace::GetFaceGenHeadParameters`) line 136:

```c
*(int *)(param_2 + 0xb8) = in_ECX + 0x188;   // helper.eyeLeft  = race + 0x188
*(int *)(param_2 + 0xbc) = in_ECX + 0x1a0;   // helper.eyeRight = race + 0x1A0
```

These are interior pointers into `TESRace.unk9[7]` and `TESRace.unk9[8]` — embedded `TESModel` instances inside the static TESRace record. Always valid, always have TESModel vtable `0x00A3C24C` at offset 0.

When Blockhead's hook short-circuits sub_52CD50, those two writes don't happen. The FGP retains whatever was at those stack offsets from prior frame usage.

---

## The investigation that found it

Six iterations across one evening.

| Build | Change | Outcome |
|---|---|---|
| v558 | Set3D(NULL) cancel-block + FUN_004D6BF0 detach3D-block (storm refrs only) | No crash, but visible patrols had no face |
| v560 | Disabled bad-actor blacklist hooks (sub_4348B0/sub_435300/sub_522260/sub_528D90) via `kBypassBadActorLogic = true` | Same: no crash, no face |
| v561 | Stripped to "minimum fix" = LFM NOPs only | **Crashed** (Blockhead's RetryLogic spiral on `0x000700CC`) |
| v562 | Restored Layer 1-5 + narrowed v557 to tracked-only + dropped Layer 6 attaches | No crash, no face — `sub_52DED0 mutex skip #1: bad actor 000700C0` was hiding face-gen |
| v563 | Removed bad-actor short-circuit from `hook_sub_52DED0` | Crashed quickly; sub_52DED0 ran for bad actors → empty B1/B2 → AV chain |
| v564 | Removed Layer 2 (sub_52DED0 mutex hook) entirely | Not tested before pivoting |
| v565 | Added probes at sub_52CD50 EXIT, sub_555A80 ENTRY, sub_5547F0 ENTRY (filtered to bad actors) | 3 sub_52CD50 EXIT events fired with eyeLeft = canonical OK; ZERO sub_555A80/sub_5547F0 events; crashed |
| v566 | Switched probes to **unconditional first-30 logging** + added sub_52DED0 entry probe | 24 events captured before crash; **event #24 showed eyeL = `0x73130C58` while every prior event showed canonical** — the corruption signature |
| v567 | Patch `DoTESRaceGetFaceGenHeadParametersHook` to write canonical eyeLeft/eyeRight on the dupe-skip return path | **No crash. Faces render. Patrols visible.** |

The pivotal data was v566 event #24. Identical NPC and race as event #23, same helper address — but #23 had eyeLeft = canonical and #24 had eyeLeft inside Blockhead's DLL. The only thing different between them was that #24 was a *dupe* and Blockhead's hook returned early without calling orig sub_52CD50.

---

## What v567's hook now looks like

```c
bool isDupe = (NPC == lastNPC && FaceGenParams == lastFGP);
if (isDupe) {
    dupeCount++;
    if (dupeCount == 1) {
        _MESSAGE("[RBRN] RETRY-LOOP detected for NPC=%08X FGP=%p - hard-skipping (no engine call)",
            NPC ? NPC->refID : 0, FaceGenParams);
    }
    // [RBRN] v567 FIX: Fix 9 skipped sub_52CD50 (the original) entirely on dupes,
    // to avoid the engine queueing extra QueuedHead tasks. But the helper struct
    // the engine populates is on a worker-thread stack region that gets reused
    // across calls, AND its ctor (sub_527C90) does NOT initialize +0xB8/+0xBC
    // (eyeLeft/eyeRight). When we skip sub_52CD50, those fields retain stale
    // data — sometimes a Blockhead DLL address (0x73130C58 observed v566 #24).
    // Downstream sub_5547F0 then derefs the stale eyeLeft → AV.
    //
    // Fix: replicate sub_52CD50's CANONICAL eyeLeft/eyeRight write (race+0x188
    // and race+0x1A0, an interior pointer into TESRace.unk9[7] and unk9[8]).
    // Two pointer assignments. No QueuedHead enqueue (still skip thisCall).
    if (Race && FaceGenParams) {
        *(UInt32*)((char*)FaceGenParams + 0xB8) = (UInt32)((char*)Race + 0x188);
        *(UInt32*)((char*)FaceGenParams + 0xBC) = (UInt32)((char*)Race + 0x1A0);
    }
    return;
}
```

That's the entire fix. ~6 lines of code (4 if you don't count comments).

---

## What v567 keeps from prior layers (and why)

The fix above is the only NEW behavior. The previous layers in v558–v566 are all still present, because each addresses a real symptom:

| Layer | Status | Reason |
|---|---|---|
| 1: LFM bucket-array `FormHeapFree` NOPs | KEEP | Per `feedback_facegen_storm_root_cause.md` v515 testing it was "confirmed redundant," but cheap and not load-bearing for face rendering, so leave |
| 2: `sub_52DED0` mutex + bad-actor skip | DROPPED in v562 | The bad-actor skip was hiding faces; the mutex was unnecessary once the cancellation cycle was fixed upstream |
| 3: AgeMorphTable validation-failure redirect | KEEP | Prevents a separate validation-failure crash signature seen in v511 |
| 4: DoSomething FGP NULL-array validator | KEEP | Generic safety net for any unhooked NULL-array path; fires 0 times in healthy runs |
| 5: `sub_5547F0+0x9D` / `+0x4EF` eye validity binary patches | KEEP | Defense-in-depth: catches NULL or below-`0x01000000` eyeLeft. v567 prevents the corruption upstream, but Layer 5 stays in case some other code path produces corruption we haven't found |
| 6: Bad-actor blacklist (4 sentinel-install hooks) | DROPPED in v562 | These were the "give up on FaceGen for these NPCs" workaround that hid faces. Not needed once v567 prevents the actual corruption |
| v557: `Set3D(NULL,NULL)` skip for tracked refrs | KEEP | Prevents the LFM cancellation-cycle UAF for refrs `0x70106/0x70107` and `0x700C0..0x700CD`. Independent of v567's fix |
| v558: `FUN_004D6BF0` direct-clear skip for tracked refrs | KEEP | Same as v557, second cancellation path |

The v565/v566 probes are still attached as well. They're passive observers and produce useful diagnostic logs. They can be retired in a future build once the fix is proven stable in extended play.

---

## Why earlier framings missed this

A few honest mistakes from the trail of memory notes:

1. `feedback_facegen_storm_root_cause.md` (2026-05-04) traced the crash to `sub_5227A0` hardcoding `push 1` flag and concluded the fix lived at "Layer 4." That was correct for *that specific symptom* (empty B1/B2 → DoSomething AV) but missed the eyeLeft-stale-data symptom that v567 actually fixes.

2. `reference_facegen_call_chain.md` (2026-05-05) RE'd the call chain through `sub_555A80 → sub_5547F0` and identified the AV site, but framed the bug as "TESRace.unk12 NULL pointer pairs causing silent skip in sub_552990." The data scanner showed all races have valid slot[0..2], so that framing was data-irrelevant for vanilla. The actual problem was upstream of the helper-populator chain, in Blockhead's own retry guard.

3. `feedback_oblivion_facegen_corruption_diagnosis.md` (2026-05-04) correctly identified that FGP+0xB8 was being overwritten with garbage, and listed three plausible mechanisms. The third — "TESRace memory corruption ... unrelated code scribbles into &race+0x188.0" — was *closer* to the actual bug than the first two: it's not that anything writes into the race; it's that the FGP slot that should *point* into the race is left uninitialized when our own dupe-guard skips the writer.

4. The 2026-05-06 evening session in END_TO_END_v2 traced the cancellation cycle correctly but assumed the cancellation cycle WAS the crash. It was a coexisting symptom that had been masked by v558. The crash that survived v558 came through a different code path entirely.

---

## Lessons for future RE

1. **Trust unconditional probes over filtered probes.** v565's probes filtered to bad-actor NPCs and showed zero events for sub_555A80/sub_5547F0 — making me think those functions weren't being called. v566's switch to unconditional first-30 logging revealed that they fired 24 times before the crash, and that the bad-actor filter was rejecting them because the helper-context lookup was finding the wrong thread context. Always start with unconditional probes; add filters only after you see the volume.

2. **An "early return without calling orig" is not the same as "no effect."** Blockhead's Fix 9 changed retry-dupe behavior from "call orig" to "skip orig" to avoid an unrelated QueuedHead-enqueue side effect. That eliminated one bug and introduced another, because the function being skipped was the *initializer* for two fields the caller's ctor doesn't initialize. Removing a write changes downstream consumers' inputs even if the write was a no-op for the caller's intent.

3. **Stack residue from "this is on the stack so it's safe" thinking is real.** The FGP helper is a stack-allocated struct on a worker thread. Each `sub_52DED0` invocation reuses the same stack region, and the ctor doesn't fully wipe. Anything that wrote to that offset on a previous unrelated frame survives across calls. In v566 #24, the surviving value happened to be inside Blockhead's own DLL code section — which only happens because Blockhead is itself heavily injected into the worker thread's call stack via Detours hooks pushing return addresses onto the stack.

4. **Layer-stripping the wrong direction wastes time.** v561 ("strip to minimum fix = LFM NOPs only") was the wrong direction; the LFM NOPs are the layer that *isn't* load-bearing per v515 testing. The load-bearing layers are 2/3/4 + Fix 9 + Fix 8 + Fix 11. Reading the existing memory more carefully would have skipped v561 and v562's wasted iterations.

5. **The actual fix was always going to be ~6 lines.** Once we had the corruption-window data from v566 (the IDENTITY of the stale value pinpointed to Blockhead's own DLL), the fix was obvious. The eight builds preceding it were all about getting the right diagnostic data. Spending more time on instrumentation up front would have shortened the path.

---

## Files touched in v567

- `D:\Modlists\_clones\Blockhead\HeadOverride.cpp` lines 766–790 — the dupe-skip path in `DoTESRaceGetFaceGenHeadParametersHook` now writes canonical eyeLeft/eyeRight before returning.
- `D:\Modlists\_clones\Blockhead\BuildInfo.h` — `VERSION_BUILD = 567`.
- `D:\Modlists\_clones\Blockhead\EngineRaceFix.cpp` — version-string update only (the v565/v566 instrumentation hooks remain attached for verification).

Build artifact: `D:\Modlists\_clones\Blockhead\Release\Blockhead.dll` (234,496 bytes, FileVersion `11.2.10.567`).

Deployed to:
- `D:\Modlists\Reborn\mods\Blockhead\OBSE\Plugins\Blockhead.dll`
- `D:\Modlists\Reborn\mods\Blockhead-Reborn\OBSE\Plugins\Blockhead.dll`

---

## Verification log evidence (post-v567)

Single Reborn-Base playtest:

```
log mtime: 2026-05-06 19:0X PM
size: ~22 KB

V565 52CD50 EXIT:   3       (bad-actor canonical writes — non-dupe calls)
V565 555A80 ENTRY:  30      (eyeL = race+0x188 in EVERY entry)
V565 5547F0 ENTRY:  30      (eyeL = race+0x188 in EVERY entry; [eyeL] = 0x00A3C24C TESModel vtable)
V566 52DED0 ENTRY:  30      (worker chain healthy)
RETRY-LOOP detections:   4  (Blockhead's dupe guard fired 4 times, v567 fix patched eyeLeft)
FIX 4E0F80 SKIP:    6342    (v557 still suppressing the LFM cancellation cycle; orthogonal fix)

eyeL = 0x73130C58 (v566 #24 corruption signature):  0 occurrences
eyeL outside FormHeap range (0x01000000–0x02000000): 0 occurrences
Crashes: 0
```

User-visible result: VirtueRider and his horse render with a face on the road. Other Imperial Legion mounted patrols (NPCs `0x000700C0..0x000700CD`) likewise.
