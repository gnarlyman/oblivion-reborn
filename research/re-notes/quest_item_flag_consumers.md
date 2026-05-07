# Quest Item flag (TESForm.flags bit 0x400) — engine consumers

**Date:** 2026-05-06
**Source:** Ghidra full-binary decompile at `D:\Modlists\Reborn\research\ghidra-projects\segments\` (Oblivion.exe v1.2.0.416, 99 segment files).
**Scope of question:** Does the FaceGen path read `*((uint*)(thing+8)) & 0x400`?
**Methodology:** Grep `& 0x400[^0-9a-fA-F]` and friends across all segments; manually inspect each hit; classify by struct (offset +0x08 = TESForm.flags layout) vs. unrelated bitfields at other offsets that happen to use bit 0x400.

---

## TL;DR — answer to the FaceGen-path question

**The FaceGen path does NOT read TESForm.flags bit 0x400.**

I read every flag test and every function in the FaceGen / model-load / IO-manager region — `seg_00430000.c` (QueuedHead, ModelLoader_QueueReference, ModelLoader_CancelPendingForRefr, sub_4348B0/sub_43xxxx LFM/IOManager), `seg_004e0000.c` (TESObjectREFR_Set3D), `seg_00520000.c` (FaceGen_GatingFunction at 0x523220, FaceGen_ChokepointAlloc at 0x52DED0, sub_5227A0 NPC-headpart populator), `seg_00550000.c` (FaceGen_FallbackPopulator, FaceGen_SilentSkipLoop, BSFaceGen_DoSomething, FaceGen_HelperToOutStateMachine, FaceGen_SetEyeRefs_AVSite, BSFaceGenModel core).

**Total reads of `[+8] & 0x400` in those segments: ZERO.**

The bit is therefore a **correlation, not a consumption**. Every empirically-bad NPC has 0x400 set, but the FaceGen code never asks. Whatever distinguishes "bad NPCs that crash" from "healthy NPCs that don't" must be a side-effect — i.e. some other engine path keys off the QI flag and ends up populating, mutating, or omitting state on the TESNPC (or its TESRace/AVSite) that the FaceGen path then trips over. That side-effect is upstream of FaceGen.

---

## 1. Total consumers of TESForm.flags bit 0x400 (offset +0x08, 32-bit field)

I count **15 confirmed reads** of `[+8] & 0x400` on a TESForm-shaped object across the binary, plus **2 setters** (`TESForm::SetQuestItem(bool)` and a TESObjectREFR override of same).

### 1a. By region

| Segment | TESForm.flags+0x400 reads | Role |
|---------|---------------------------|------|
| `seg_004c0000.c` (0x4Cnnnn) | **9** | TESObjectCELL ref-list filtering & search; persistent vs. temp ref split |
| `seg_004d0000.c` (0x4Dnnnn) | **4** | TESObjectREFR cell attach/detach; ref-list collection |
| `seg_00430000.c` (FaceGen / ModelLoader / IOManager) | **0** | NONE |
| `seg_004e0000.c` (TESObjectREFR + Set3D) | **0** TESForm.flags reads (1 hit at +0x244 is a save-chunk parser flag, unrelated) |
| `seg_004f0000.c` | **0** TESForm.flags (1 hit at +0x244, same parser) |
| `seg_00520000.c` (FaceGen alloc / NPC populator) | **0** TESForm.flags reads (3 hits at +0x400 in `param_1` are TESForm Save/Load subrecord flags, see §1c) |
| `seg_00550000.c` (BSFaceGen* / FaceGen_*) | **0** |

**Conclusion: every TESForm-flags+0x400 read in the entire binary lives in TESObjectCELL / TESObjectREFR persistent-vs-temp routing. Cell-loading and reference iteration. None of it is on the FaceGen path.**

### 1b. Detailed call sites — TESForm.flags + 0x400 reads

(Function names are the Ghidra default `FUN_xxxxxxxx` unless renamed via the symbol catalog.)

| File:Line | Test | Containing fn (approx) | What it does | Face-gen? |
|-----------|------|------------------------|--------------|-----------|
| `seg_004c0000.c:10251` | `(*(uint*)(in_ECX+8) & 0x400) != 0` | TESObjectCELL ref-iteration helper (~0x4cd400) | Decides whether to include a ref in a result set (persistent-only filter) | NO — cell ref query |
| `seg_004c0000.c:10512` | `(in_ECX[2] & 0x400U) == 0` | TESObjectCELL::DetachReferences (~0x4cdb0) | Skip persistent refs when detaching cell temp content | NO |
| `seg_004c0000.c:10683` | `(in_ECX[2] & 0x400U) == 0` | TESObjectCELL detach loop | Persistent vs temp routing | NO |
| `seg_004c0000.c:10686` | same | (same fn) | (same) | NO |
| `seg_004c0000.c:10756` | `(in_ECX+8) & 0x400) == 0` | TESObjectREFR::IsKindFilter (~0x4ce0d0) | switch case 1 ("PersistentRef" search): require 0x400 | NO |
| `seg_004c0000.c:10764` | `!= 0` | (same fn) | switch case 2/4 ("TempRef"): reject 0x400 | NO |
| `seg_004c0000.c:10774` | `!= 0` | (same fn) | switch case 3/5: reject 0x400 | NO |
| `seg_004c0000.c:10844` | `[+0x24]&1 == 0 && [+8]&0x400 == 0` | FUN_004ce3c0 — REFR cached-cell-ref-data getter | Allocate cached ExtraData only for non-deleted, non-persistent refs (memory thrift) | NO |
| `seg_004c0000.c:11291` | `(in_ECX[2] & 0x400U) == 0` | Cell::AttachReference helper | Persistent split | NO |
| `seg_004c0000.c:11347` | `(*(uint*)(in_ECX+8) & 0x400) != 0 && DAT_00b33a98 != 0 && [global+0xcd4]==0` | Cell-attach finalization (~0x4cee00) | Special-case "is persistent ref AND world is loaded AND ???" | NO |
| `seg_004c0000.c:11361` | `== 0` | (same fn) | else branch | NO |
| `seg_004d0000.c:2454` | `(in_ECX[2] & 0x400U) != 0` | FUN_004d35d0 — TESObjectREFR::Attach3D / detach? | Persistent ref takes the "early" path; temp ref takes the "late" path with extra teardown | NO |
| `seg_004d0000.c:2557` | `== 0` | same fn | else branch | NO |
| `seg_004d0000.c:2606` | `(in_ECX[2] & 0x400U) != 0` | nearby helper | persistent-only branch | NO |
| `seg_004d0000.c:3916` | `(*(uint*)(in_ECX+8) & 0x400) != 0` (combined with `[+0x24]&1` deleted check) | TESObjectCELL ref-iteration / state-marker | Skip-collection condition for refs in this cell | NO |

**Bottom line: every single one is TESObjectCELL/TESObjectREFR cell-attach and persistent-vs-temp routing. None are face-gen.**

### 1c. Setters (for completeness)

| File:Line | Code | Containing fn |
|-----------|------|---------------|
| `seg_004c0000.c:9713` | `*(uint*)(in_ECX+8) = ... \| 0x400` | **`FUN_004ccba0` = `TESForm::SetQuestItem(bool)`** at 0x4ccba0 |
| `seg_004d0000.c:5191` | `in_ECX[2] = in_ECX[2] \| 0x400` | TESObjectREFR override of SetQuestItem (also calls a vtable method, then attaches/detaches cell) |

These are the writers; load-time esp parser routes through one of them when it sees the `(flags & 0x400)` bit on a `TESNPC`/`REFR` record.

### 1d. Save/load serialization sites that test BIT 0x400 of a *parameter* (NOT TESForm.flags!)

These are the **3 hits in seg_00520000.c** and **3 in seg_00510000.c**. Despite the address proximity to FaceGen, they are part of the generic TESForm-subclass Save/Load skeleton:

```c
// e.g. seg_00520000.c:2676  FUN_00523370 (TESForm subclass Save)
if ((flagsArg & 0x200) != 0) FUN_0046ac70(in_ECX + 0xec, 0x15);
if ((flagsArg & 0x400) != 0) {
   ... FUN_0046ac90(&fid, 4);   // write 4-byte FormID subrecord
}
```

Here `flagsArg` is the function's **first parameter** — a load/save change-record bitmap that the savegame stream brought in, NOT TESForm.flags. The matching "size" function pairs (`FUN_00521ba0`, `FUN_0051c6e0`) compute the change-record body length: when bit 0x400 is set in the change record, add 4 bytes for a saved FormID. This is the on-disk savegame change-record format, not an in-memory flags read.

Pattern shape: `+0x15 if 0x200 set, +4 if 0x400 set` → these are **distinct serialization flags** (not TESForm.flags). Matching read/write pairs:

| Save (write) | Load (read) | Subrecord at offset | Subclass |
|--------------|-------------|---------------------|----------|
| `FUN_00523370` (0x523370) | `FUN_00525380` (0x525380) | `*+0x1e4` (some pointer to a TESForm) | One TESForm subclass |
| `FUN_0051da50` (0x51da50) | `FUN_0051c710` (0x51c710) | `*+0x118` | Different subclass |

These tests look identical to the QI flag at first glance but operate on a different bitmask (change-record dirty mask). Save-game format, not the form's runtime flags.

### 1e. Other hits at offset 0x1c, 0xfc, 0x244, etc. (NOT TESForm.flags)

Found and dismissed: TESObjectREFR's secondary flag word at +0x1c (some RTTI/state byte set), some object's "dirty" cache bits at +0xfc, save-chunk parser state at +0x244, NiNode flags16 at +0x8 (16-bit, different size — distinguished by `*(ushort*)` vs `*(uint*)`). All clearly different fields from TESForm.flags.

---

## 2. Specific functions the user asked about

| Function (xOBSE label) | Address | Reads `flags & 0x400`? | Notes |
|------------------------|---------|------------------------|-------|
| `QueuedHead::Run` | `0x435300` | **NO** | seg_00430000.c:4330. Calls `FaceGen_GatingFunction`, then refcount-decrements `[+0x24]/[+0x28]`. |
| `FaceGen_GatingFunction` (a.k.a. "gating function") | `0x523220` | **NO** | seg_00520000.c:2623. Releases existing face0/face1 nodes at `[+0x1d4]/[+0x1d8]`, calls `FaceGen_ChokepointAlloc` if `[+0xe8]` is non-null. No flag check. |
| `FaceGen_ChokepointAlloc` (chokepoint) | `0x52DED0` | **NO** | seg_00520000.c:9545. Unconditional allocator: `BSFaceGenNiNodeBiped` + `BSFaceGenNiNodeSkinned`, each 0x1E0 / 0x118 bytes. Then `FaceGen_HelperPopulator` + `FaceGen_HelperToOutStateMachine` + conditional `BSFaceGen_DoSomething`. |
| `sub_5221C0` (TESNPC populator) | `0x5221c0` | **(no hits in 0x520 segment)** | Did not appear in `& 0x400` matches. |
| `sub_5227A0` (20-caller dispatcher) | `0x5227a0` | **NO** | seg_00520000.c:2231. Drives `FUN_0048c870` (headpart-by-slot lookup) and `FUN_0048d110` (TESRace fallback) for slots 0..0xd, unconditionally. No QI test. |
| `TESObjectREFR::Set3D` | `0x4E0F80` | **NO** (tests bit 0x4000 / 0xe and bit 0x80000 of `in_ECX[2]`, not 0x400) | seg_00450000.c — actually `seg_004e0000.c:646`. Reads `(uint)in_ECX[2] >> 0xe & 1` (line 721) and `(in_ECX[2] & 0x80000U) != 0` (line 843). **Bit 0xe (0x4000) is read; bit 0xa (0x400) is not.** |
| `ModelLoader_CancelPendingForRefr` | `0x439DC0` | **NO** | seg_00430000.c:8426. Pure IOManager teardown — calls `IOManager_TaskStateTransition` twice. No flag check. |
| `ModelLoader_QueueReference` | `0x438060` | **NO** | seg_00430000.c:6802. Dispatches by `*(char*)(typeinfo+4)` (typecode 0x1A/0x1E/0x23/0x24/default). Reads global `*(uint*)(DAT_00b33b00 + 0x18) >> 1 & 1` but NOT TESForm.flags. |
| `sub_4348B0` (LFM/BSTaskThread) | `0x4348B0` | (no hits in 0x430 segment for bit 0x400) | seg_00430000.c has zero `& 0x400` matches anywhere. |

---

## 3. Near-miss section: other TESForm.flags bits read on the FaceGen path

For comparison, the FaceGen path *does* test other bits. These are the bits the engine actually keys off:

### TESObjectREFR::Set3D (`seg_004e0000.c:646`)

```c
// line 721  -- bit 0xe (mask 0x4000)
if (((((uint)in_ECX[2] >> 0xe & 1) == 0) || (in_ECX[7] == 0)) ||
    (*(char *)(in_ECX[7] + 4) != '\x1e')) { ... }

// line 843  -- bit 0x13 (mask 0x80000)
if ((in_ECX[2] & 0x80000U) != 0) goto LAB_004e13c0;  // -> CancelPendingForRefr

// line 752  -- bit 0x5  (mask 0x20)  "deleted"
if (((uint)in_ECX[2] >> 5 & 1) == 0) { ... full teardown ... }
```

So Set3D consumes bits 0x20, 0x4000, 0x80000 of TESForm.flags. **Not 0x400.**

### FaceGen_GatingFunction / FaceGen_ChokepointAlloc / FaceGen_FallbackPopulator

No TESForm.flags reads at all. They route purely on:
- `*(int *)(in_ECX + 0xe8)` non-null (the "Race or AVSite ptr" — empirically the QueuedHead's TESNPC owner)
- `*(int *)(in_ECX + 0x1d4)` / `+0x1d8` (existing face0/face1 nodes — refcount decrement)
- vtable dispatches at `+0xa0`, `+0xb0`, `+0xb8` on the freshly allocated BSFaceGenNiNode struct

### sub_5227A0 (NPC headpart populator)

Tests are by **slot index** (`0`..`0xd`) and parameter `param_2`/`param_4`/`param_5` flags, never by TESForm.flags.

### sub_435300 / QueuedHead::Run

Reads `*(undefined4 **)(in_ECX + 0x24)` and `+0x28` (the two struct-1E0/118 nodes). No flag tests at all.

### ModelLoader_QueueReference

Dispatches by **typecode** at offset `+0x4` of the form's RTTI block (`'\x1a' \x1e \x23 \x24`). Tests one global flag at `*(uint*)(DAT_00b33b00 + 0x18) >> 1 & 1`. **Never reads TESForm.flags directly.**

---

## 4. Why "every bad NPC has 0x400 set" if FaceGen never reads 0x400

Two architecturally plausible explanations (the data does not yet pin down which):

1. **Cell-attachment side-effect.** TESObjectCELL persistent-vs-temp routing is the heaviest consumer of bit 0x400. If a TESNPC marked QI is loaded into the persistent ref bucket of every cell in the worldspace (rather than instantiated only when its cell becomes active), the engine's reference graph sees that NPC at far more times — with very different reference-counting and `Set3D`/teardown semantics — than a non-QI NPC that gets created/destroyed on cell-cross. The FaceGen *trigger* count for QI NPCs is therefore dramatically higher even though FaceGen itself doesn't check the bit.

2. **Persistent-ref backing-store reuse.** `FUN_004ce3c0` (the cached cell-extra-data getter at 0x4ce3c0) explicitly **only allocates** the `+0x40` cache for non-deleted, non-QI refs. Persistent (QI) refs deliberately do **not** get this cached state. If the FaceGen path or one of its callers (Set3D, QueueReference) touches `+0x40` and silently no-ops/returns 0 for QI refs while expecting non-null, it would create exactly the kind of invariant violation that crashes downstream — *without* the FaceGen function itself ever reading 0x400.

Both hypotheses are upstream of `seg_00430000`/`seg_00520000`/`seg_00550000`. Neither is testable by adding more grep — they need dynamic instrumentation (counter at QueueReference / hit tally at FaceGen_ChokepointAlloc, segmented by `(form.flags >> 10) & 1`).

---

## Appendix A. Search methodology

Patterns used (all via Grep -i, ripgrep underneath):

```
& 0x400[^0-9a-fA-F]               -- bit 0x400 test, all forms
\[2\] & 0x400U                    -- ECX[2] cast as int*
\(in_ECX \+ 8\) & 0x400            -- int* cast at +0x08
| 0x400[^0-9a-fA-F]               -- writes (setters)
0x4[0-9a-fA-F]+                   -- combined-flag tests (ruled out)
```

Coverage: all 99 segment files in `D:\Modlists\Reborn\research\ghidra-projects\segments\`.

False positives ruled out: `0x4000` (bit 14), `0x40000` (bit 18), `0x4000_0000` (bit 30), `0x40400000` (float constant 3.0), `0x49742400` and similar IEEE-754 constants, `0x40` (bit 6), `0x400000` (bit 22), `GetLocaleInfoA(... | 0x400)` (locale flag).

## Appendix B. xOBSE TESForm.flags layout reference

Confirmed against this binary's xref pattern: TESForm at +0x08 holds a 32-bit flags word. Standard TESForm record-flag bit definitions (as used by xEdit / CK / CSE) include bit 0x400 = "Quest Item" / "Persistent Reference" depending on subclass — and the binary carries **two** SetQuestItem implementations (one base TESForm at 0x4CCBA0, one TESObjectREFR override at ~0x4D5180) that confirm this.
