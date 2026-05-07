# FaceGen Call Chain — RE Notes

Source of truth: Ghidra decomp at `D:\Modlists\Reborn\research\ghidra-projects\segments\seg_*.c`,
cross-referenced with raw disasm at `D:\Modlists\Reborn\research\oblivion-disasm\sub_*.asm`.

Confidence legend: **[V]** verified in disasm; **[D]** decomp-only (consistent across both files); **[I]** inferred from naming/context; **[?]** guessed, needs more work.

---

## 1. sub_435300 — `QueuedHead::Run`

**Decomp name:** `QueuedHead_Run` (seg_00430000.c, line 4330).
**Signature (best-guess):** `void __thiscall QueuedHead::Run(void)` — `this` = ECX, struct holds two refcounted node ptrs at +0x24 and +0x28.

**What it does** [V from decomp; no separate asm dump]:
1. Logs `"QueuedHead::Run()"` via `FUN_00401020` (string-bracket helper, presumably a profiler push).
2. Calls `FaceGen_GatingFunction(&local, &outSlot)` — i.e. `sub_523220` — with two stack-locals; the gating function fills the two slots with face0/face1 BSFaceGenNiNodes via the chokepoint (sub_52DED0).
3. Refcount-releases `*(this+0x24)` (face0 slot) — `InterlockedDecrement` on `[ptr+4]`, vtable[0]/scalar destructor on zero. Then nulls `(this+0x24)`.
4. Refcount-replaces `*(this+0x28)` with `apuStack_8[0]` (= face1 produced by gating). Releases the old `(this+0x28)`, stores new pointer, `InterlockedIncrement` on the new ref.
5. Calls `FUN_00401040` (matching close of profiler bracket).

**Reads/writes on `this`:**
- `+0x24` (face0 node ptr): released, then nulled.
- `+0x28` (face1 node ptr): released, replaced with the second result from gating function.
- (Note: face0 result `apuStack_8` first slot is *thrown away* — it's the local stack slot. Only the second result is propagated. **[I]** — this looks intentional but is interesting because the gating function fills *two* slots.)

Wait — re-reading the decomp: `puVar1 = *(undefined4 **)(in_ECX + 0x24)`, then nulled, but **not** replaced. Only `+0x28` is replaced (with `apuStack_8[0]` = face0 from chokepoint). So `+0x24` is just released. **[D]**

**Calls:**
- `FUN_00401020` / `FUN_00401040` — profile-bracket helpers.
- `FaceGen_GatingFunction` (sub_523220) — the gate.
- `InterlockedDecrement` / `InterlockedIncrement` — refcount.
- vtable[0](1) for scalar destructor when refcount hits 0.

**Crash potential:** Low. NULL checks present on both `puVar1` ptrs before deref. The function trusts whatever the gating function returns; if gating writes garbage into `apuStack_8[0]`, the refcount inc/dec will run on garbage.

---

## 2. sub_523220 — `FaceGen_GatingFunction`

**Decomp:** seg_00520000.c, line 2623. **Asm:** `oblivion-disasm/sub_005227A0.asm` covers it (it's a tail function in that dump). **[V]**
**Caller count:** 1 (called by `QueuedHead::Run`).
**Signature:** `void __thiscall FaceGen_GatingFunction(BSFaceGenNiNode** outFace0, BSFaceGenNiNode** outFace1)` — `this` (ECX) = some "owner" struct (NOT the TESNPC; see below), arg2/arg3 are out-params filled by chokepoint.

### Step by step (asm-verified, addresses 0x523220–0x5232CA):

1. Load `[esi+0x1d4]` (= face0 slot). If non-NULL: `InterlockedDecrement` on `[ptr+4]`; if hit 0, vtable[0](1). Then **null `[esi+0x1d4]`**.
2. Same for `[esi+0x1d8]` (= face1 slot).
3. Gate check: `if [esi+0x1d4]==0 && [esi+0x1d8]==0 && [esi+0xe8]!=0`:
   - `push 0; push 1; push esi; push edx; push eax; call sub_52DED0` — the chokepoint, with **flag1 = 1** (the "do DoSomething" flag) and **flag2 = 0**.
   - Then `mov dx, word ptr [ecx+0x2fc]; mov [esi+0x1e0], dx` — copy a 16-bit field from `[esi+0xe8]+0x2fc` (= a TESRace field?) into `[esi+0x1e0]`.

### Field meanings (verified offsets):

| Offset | Decomp | Meaning (inferred) |
|---|---|---|
| `[esi+0x1d4]` | `puVar1` slot 1 | **face0 BSFaceGenNiNodeBiped*** — out target |
| `[esi+0x1d8]` | `puVar1` slot 2 | **face1 BSFaceGenNiNodeSkinned*** — out target |
| `[esi+0xe8]` | `[esi+0xe8] != 0` | **TESRace*** (gated NPCs must have a race) |
| `[esi+0x1e0]` | `*(undefined2*)` | 16-bit field copied from TESRace+0x2fc — **[I]** likely a "race revision" or similar tag |

### Does it read TESForm.flags (TESForm+0x08)?

**No.** [V] — the asm reads only `[esi+0x1d4]`, `[esi+0x1d8]`, `[esi+0xe8]`, and `[esi+0xe8]+0x2fc`. It never reads `[esi+0x08]`. The `this` (esi) is *not* a TESForm or TESNPC — based on the +0xe8 race pointer it looks like a TESActor or higher-level container.

### Does it read bit 0x400 anywhere?

**No.** [V] — there is no `test ... 0x400` or `and ... 0x400` instruction in the disasm of 0x523220–0x5232CA.
**The "Quest Item flag is the trigger" memory note is a discrimination signal at the data layer (TESNPC record flags); the gating function in the engine doesn't check it. The flag's effect on bad NPCs must be propagating via some other field — most plausibly, Quest Item NPCs are persistent → their TESActor wrappers exist with `[esi+0xe8]` set and `[esi+0x1d4/0x1d8]` cleared in conditions where vanilla NPCs wouldn't be (since persistent refs are loaded eagerly). [?]**

### Crash potential:

- All three field reads are unguarded against `esi` itself being garbage (it's `this`).
- The `+0xe8` deref at `[ecx+0x2fc]` after the chokepoint call is unguarded — but only happens if `[esi+0xe8]` was non-NULL on entry.
- The flag passed to chokepoint is **hardcoded `push 1`** at 0x5232A9. This is what the user's older memory note flagged as the "bug" — there's no condition under which the flag is 0 *from this caller*. (Other callers of sub_52DED0 do pass 0; see decomp at line 3891 of seg_00520000.c.)

---

## 3. sub_52DED0 — `FaceGen_ChokepointAlloc`

**Decomp:** seg_00520000.c, line 9545. **Asm:** `sub_0052DED0.asm`. **[V]**
**Signature:** `int __thiscall FaceGen_ChokepointAlloc(BSFaceGenNiNode** outFace0, BSFaceGenNiNode** outFace1, ?, char doDoSomethingFlag, ?)` — flag is on stack at `[esp+0xfc]`, see asm 0x52E057.

### What happens [V from asm 0x52DED0–0x52E0C5]:

1. `*outFace0 = 0; *outFace1 = 0`.
2. `iVar2 = FUN_00401f00(0x1e0)` — heap-alloc 0x1e0 bytes ("game heap" allocator). If non-NULL, **call `sub_54CAF0` (= `FaceGen_Struct1E0_ctor`) on it** to make `uVar3` (a BSFaceGenNiNode-ish base?). [V]
3. `iVar2 = FUN_00401f00(0x118)` — alloc 0x118 bytes. If non-NULL, **call `sub_55CD70` (= `FaceGen_Struct118_ctor`)**, store as iVar2. [V]
4. `*outFace0 = iVar2`. Look up class string `"BSFaceGenNiNodeBiped"` (`FUN_006FF420`, [V] this is the runtime-class registration helper — `0xa46ec0` is the static class descriptor).
5. Vtable calls on `*outFace0`: `vtbl[0xa0](uVar3)` (probably "set parent / init"), `vtbl[0xb0](1)`, `vtbl[0xb8](1)`. [V]
6. Second 0x118 alloc + ctor → `iVar2 = sub_55CD70(...)`.
7. `*outFace1 = iVar2`. Class string `"BSFaceGenNiNodeSkinned"` (`0xa46ed8`).
8. Same vtbl calls on `*outFace1`, but **with arg `0` instead of `1`** — `vtbl[0xa0](uVar3)`, `vtbl[0xb0](0)`, `vtbl[0xb8](0)`. [V]
9. **Construct local helper struct on stack at [esp+0x1c]** via `sub_527C90` (= `FaceGen_LocalHelperCtor`).
10. `sub_52CD50(localHelper, this, ebp_param)` — ebp comes from `[esp+0xf8]` which is param 5; this is the **upstream populator** that fills the helper from the TESNPC. **This is sub_5221C0's job in the standalone case but here it appears as `sub_52CD50` from this caller.** [V] — different populator path?
   - Actually: looking again — `sub_52CD50` is called with `(localHelper, this_owner_at_esp+0x18, ebp)`. Likely `sub_52CD50` is a wrapper that internally dispatches to TESNPC populator (`sub_5221C0`). [I, ?]
11. `sub_555A80(outFace0, outFace1, localHelper, ebp_param)` — `FaceGen_HelperToOutStateMachine` — produces the actual eye/hair/etc. ref state in the BSFaceGenNiNodes. [V]
12. **If flag != 0** (`cmp byte ptr [esp+0xfc], 0; je`): call `sub_5551C0` twice — once on `*outFace0`, once on `*outFace1`. **This is `BSFaceGen_DoSomething`, the AV site.** [V]
13. Special `[ebp+0xc] == 7` case: write `1` into `[*outFace0+0x111]` and `[*outFace1+0x111]` (a "ready/hairsync" flag). [V]
14. Destruct local helper via `sub_526CE0`. Return 1.

### What's the FLAG argument?

**[V]** — Hardcoded `push 1` from `sub_523220` (gating function), but other call sites (e.g. seg_00520000.c line 3891) pass `0`. **Flag=1 means "after building the BSFaceGenNiNodes, call BSFaceGen_DoSomething on them"**, which is the AV-prone step. Flag=0 skips that.

### Dispatched callees (verified addresses):

| Decomp name | Addr | Role |
|---|---|---|
| `sub_54CAF0` | 0x54CAF0 | 0x1E0-byte struct ctor (base node) |
| `sub_55CD70` | 0x55CD70 | 0x118-byte struct ctor (face0/face1 node) |
| `sub_555A80` | 0x555A80 | `FaceGen_HelperToOutStateMachine` — emits eye/hair/etc. children |
| `sub_5551C0` | 0x5551C0 | `BSFaceGen_DoSomething` — gated by flag, the AV site |
| `sub_527C90` | 0x527C90 | local helper ctor |
| `sub_52CD50` | 0x52CD50 | helper populator wrapper |
| `sub_526CE0` | 0x526CE0 | local helper dtor |

### Crash potential:

- All allocations checked: NULL alloc → struct pointer set to 0, vtable calls would AV.
- The AV-prone `sub_5551C0` is *only* called when flag=1.
- The `[ebp+0xc]==7` block dereferences `*outFace0`/`*outFace1` *unconditionally*, but earlier code guarantees they were filled.

---

## 4. sub_5221C0 — `TESNPC_FaceGenFiller`

**Decomp:** seg_00520000.c, line 1971. **Asm:** `sub_005221C0.asm`. **[V]**
**Signature:** `void __thiscall TESNPC_FaceGenFiller(TESNPC* this_via_ECX, ? param_1)`.

### Branches:

**Path A — race == NULL fallback** (`[esi+0xe8] == 0`):
1. `sub_552880(param_1)` — preamble.
2. `sub_5538D0(param_1)` — get a default-data pointer (`FaceGen_DefaultGetter`).
3. `sub_5528F0(eax, param_1)` — populate with defaults (`FaceGen_FallbackPopulator`).
4. Return.

**Path B — race != NULL main path:**
1. `sub_552880(param_1)`.
2. **vtable[0x4A] call**: `(*(*esi)[0x128])(0x45)` — `[0x128] / 4 = 0x4A`. The arg `0x45` is an actor-value or attribute index. **[V]** — verified in asm at 0x5221F0–0x5221FA.
3. Result selects helper offset:
   - `result != 0` → `eax = esi + 0x168` (= `in_ECX + 0x5A` in 4-byte units)
   - `result == 0` → `eax = esi + 0x108` (= `in_ECX + 0x42` in 4-byte units)
4. Push `0.0f`, push `0`, push `param_1`, push `eax_helper`, push `[esi+0xe8] + 0x29c` (= TESRace+0x29c, the FaceGen template array).
5. `sub_552990(...)` — the silent-skip loop.
6. Return.

### `vtbl[0x4A]`'s purpose (the "0x45 flag selector"):

Vtable index 0x4A is `(*(*esi)[0x128])` in Ghidra's word-indexed view. The arg `0x45` (decimal 69) is a **TESActorBase virtual flag/attribute query** — given the offsets `+0x108` vs `+0x168` are 0x60 bytes apart, exactly two consecutive 0x60-byte FaceGen template arrays in the TESNPC, this is choosing between **female slot (0x108) and male slot (0x168)** based on some predicate. The `0x45` arg is likely the **"Female" actor flag bit**. **[I]** — naming convention: this is what shadeMe's source comments would call "isFemale".

### Crash potential:

- Path A: only NULL-checks `[esi+0xe8]`. If `param_1` is bad, `sub_552880` will crash before the check (it's called in both paths). [I]
- Path B: trusts the vtable to be valid (it's a TESNPC virtual). Doesn't NULL-check the result before using it as a discriminator (only branches on it).
- **Critical:** the silent-skip loop receives `[esi+0xe8] + 0x29c` *unconditionally* — if the race struct is malformed at +0x29c onward, downstream pays.

---

## 5. sub_552990 — `FaceGen_SilentSkipLoop_TESRace_unk12`

**Decomp:** seg_00550000.c, line 2199. **Asm:** `sub_00552990.asm`. **[V]**
**Signature:** `void __cdecl FaceGen_SilentSkipLoop(int* dst, int* src, int* helper, char doMutation, float capScalar)` — 5 stack args (no thiscall).

### Loop structure (the user asked: 2 or 4 times? 0x18 or 0x30?)

**[V]** From asm 0x5529A1 (outer init `xor ebx,ebx`), 0x5529F5–0x552BEC:
- **Outer loop:** `ebx = 0..2` (2 iterations). `lea esi,[ebx+ebx*2]; shl esi,4` → `esi = ebx * 0x30`. So **outer stride = 0x30 bytes**, starting from `dst`.
- **Inner loop:** counter at `[esp+0x18]`, init 2, decrement to 0 (2 iterations). After body: `add esi, 0x18; add ebp, 0x18`. So **inner stride = 0x18 bytes**.
- **Total entries: 2 outer × 2 inner = 4**, each 0x18 bytes. The 2x2 array spans 0x60 bytes total per `dst` row, with **two rows of 0x30**.

### Per-entry behavior:

For each (row, col) in 2x2:
- Read `[ecx+esi]` and `[ecx+esi+4]` from the *source* (where `ecx = src - dst` shifted, so the addressing is `(src + ebx*0x30) + col*0x18`).
- **If either source word is NULL** (`je 0x552BB4`):
  - `[esi+0] = 0; [esi+4] = 0` — **writes zeros to the helper** (NOT untouched).
  - `sub_527160(0, 0)` — call with zeros.
  - Continue.
- **If both non-NULL:**
  - Copy `[src] → [dst]`, `[src+4] → [dst+4]`.
  - `sub_527160(src_a * src_b, ...)` — multiply (looks like a "size/area" calc).
  - On the second outer iteration with `doMutation != 0`: do extra mutation (`sub_5520E0`, `sub_551D40`).
  - Otherwise: build a temp via `sub_552530`, push to `sub_5520E0`, free the temp.

### Answer to user's question:

**4 entries. 0x18 bytes each. NULL pointers cause the helper to be written with zeros — NOT left untouched.** [V from asm 0x552BB4–0x552BCF]

The "silent skip" name is a misnomer if my reading is right: it does *not* leave the slot untouched on NULL — it actively zeros the dst slot and calls a downstream init with zeros. The "silent" part is that the loop never raises an error or breaks; downstream consumers see a zeroed entry. **[D] — needs a small Pascal probe to confirm with a deliberately corrupt TESRace+0x29c.**

### Crash potential:

- No NULL check on `dst`/`src`/`helper` themselves.
- `helper` is dereferenced inside `sub_527160` (passed as ECX). [I]
- The "silent skip" path produces zeroed dst entries which downstream functions (in `FaceGen_HelperToOutStateMachine`) may then dereference, leading to AVs further down the chain.

---

## 6. sub_5547F0 — `FaceGen_SetEyeRefs_AVSite`

**Decomp:** seg_00550000.c, line 3647. **Asm:** *no dump file* — relying on decomp only. **[D]**
**Signature:** `void __cdecl FaceGen_SetEyeRefs_AVSite(int* outNode_a, int* outNode_b, int* helper_param3, char isLeftEye)`.

### Caller chain:

Called from **`FaceGen_HelperToOutStateMachine` (sub_555A80) at line 4839**, NOT directly from `BSFaceGen_DoSomething` (sub_5551C0):

```c
if ((*(int *)(param_3 + 0xb8) != 0) && (*(int *)(param_3 + 0xbc) != 0)) {
  FaceGen_SetEyeRefs_AVSite(param_1, param_2, param_3, param_4);
}
```

So **the `+0xB8` / `+0xBC` reads happen in the CALLER (sub_555A80) before sub_5547F0 is entered.** [V]

### What param_3 (the helper) at +0xB8/+0xBC is:

`param_3` here is the local helper struct built by `sub_527C90` and populated by `sub_52CD50`/`sub_5221C0`. Its layout (extracted from sub_553140 ctor at asm 0x553140 onward and sub_555A80 reads):
- `+0x70`: an int (used as predicate for "skip iter 2 unless it equals expected value")
- `+0x78`: pointer to **9-entry array of 4-byte ptrs** (one per child node — eye/hair/ear/mouth/etc.)
- `+0x88`: pointer to a **parallel 9-entry array of 4-byte ptrs** (probably model files or sibling object pointers)
- `+0xB8`: **eyeLeft pointer** [I — name from `"FaceGenEyeLeft"` string usage at line 4120]
- `+0xBC`: **eyeRight pointer** [I — name from `"FaceGenEyeRight"` string usage at line 4142]

### Where do the +0xB8/+0xBC values come from upstream?

[I, needs probe] — Three candidates, I cannot disambiguate without runtime tracing:
1. They are *FGP fields* (FaceGen-Parameters) populated from the TESRace's FaceGen template at `[esi+0xe8]+0x29c` via the silent-skip loop.
2. They are *interior pointers* into TESRace's static eye-mesh array, set during `sub_52CD50` (helper populator).
3. They are *re-exposed* TESNPC head-asset slot pointers.

The Blockhead-Reborn fix history (`feedback_oblivion_facegen_corruption_diagnosis.md` in user memory) says "eyeLeft is normally an interior pointer into TESRace's static array" — that's option 2. **[I]** — consistent with the populator passing `[esi+0xe8]+0x29c` (TESRace data block) into sub_552990 and the silent-skip loop's writes ending up in helper offsets.

### Inside sub_5547F0:

- `param_3[0x2e]` (= `*(int*)(param_3+0xB8)` since 0x2e * 4 = 0xB8) is dereferenced *unconditionally* — vtable[0x14/4] = vtable[0x5] called on it via `(**(code **)(*(int *)param_3[0x2e] + 0x14))()`. [V from decomp line 3714]
- Builds a path string `"Meshes\\%s"` from the result.
- Looks up the model in a global registry (`DAT_00b39b80`'s NiNode pool).
- If not found: alloc 0x20-byte tracker, link it.
- Call sub_551E80 (deserializer).
- Final: `sub_00559870(param_3, &local_6c)` — node insertion into target tree.

### Crash potential:

- The caller (sub_555A80) **does** NULL-check `+0xB8` and `+0xBC` *together* (`!= 0 && != 0`) before calling. So sub_5547F0 only runs if both are non-NULL.
- BUT inside sub_5547F0, `param_3[0x2e]` is treated as a real object pointer and `**ptr + 0x14` dereferenced. **If +0xB8 is non-NULL but stale/freed (dangling), this is the AV.** [I — matches the original v513–v517 corruption model.]
- The actual offset 0x5547F0+0xB6 in the user's question would map to roughly inside the "build path string" block (line 3714). The dangling-vtable AV happens at the `(**(code**)(*ptr + 0x14))` call. **[I]**

---

## 7. sub_5551C0 — `BSFaceGen_DoSomething`

**Decomp:** seg_00550000.c, line 4095. **Asm:** *no dump file*. **[D]**
**Signature:** `void __cdecl BSFaceGen_DoSomething(BSFaceGenNiNode* faceNode, void* helper)`.

This is the AV site the user pointed at. Called from `FaceGen_ChokepointAlloc` (sub_52DED0) twice when flag=1.

### Body structure:

Outer NULL guard: `if (param_1 == NULL || param_2 == NULL) goto cleanup`.
Then a **loop `local_60 = 0..8`** (9 iterations, one per face child slot — eye, hair, ears, etc.):
```c
do {
  uVar4 = local_60;
  // dispatch on uVar4 (per-slot logic)
  if (uVar4 == 2) { ... }
  else if (uVar4 == 1) { ... }
  else if (uVar4 != 7 && uVar4 != 8) { ... }
  ...
  local_60 = uVar4 + 1;
} while (local_60 < 9);
```

### What's at +0x179?

[I, no asm dump available] — Address 0x5551C0 + 0x179 = **0x555339**. That offset lies within the **first iteration of the inner block where `iVar8 = uVar4 * 4`** is computed and the array of pointers at `*(param_2 + 0x88)` is indexed. The exact decompiled line that AVs (around line 4252):

```c
(**(code **)(**(int **)(iVar8 + *(int *)(local_80 + 0x88)) + 0x10))();
```

Triple deref:
1. `local_80 + 0x88` → fetch the 9-entry "child node ptr-array" pointer from helper.
2. `iVar8 + that` → index into the array by `uVar4 * 4`.
3. Dereference that slot to get a node pointer; deref again to get its vtable; call vtable[4] (= +0x10).

### What's `[edi+eax]`?

[I] — In the asm dump pattern this likely corresponds to: `edi = *(local_80 + 0x88)` (the child-array base, materialized into a register), `eax = uVar4 * 4` (the index in bytes). `[edi+eax]` = `child_array[uVar4]` — the slot pointer for the current child (eye/hair/whatever).

The AV happens because that slot pointer is **either NULL, freed, or was zeroed by the silent-skip loop** in step 5 above. The first guard at line 4206–4207 *does* check `*(int *)(iVar8 + *(int *)(param_2 + 0x78)) != 0 && *(int *)(iVar8 + *(int *)(param_2 + 0x88)) != 0` — **so a NULL slot would be filtered**. The bug must be a *freed* (dangling) pointer, not NULL. **[I, matches "FGP corruption" diagnosis]**

### Crash potential:

- Guards present for: `param_1 == NULL`, `param_2 == NULL`, `param_2+0x70`, `param_2+0xae`, `param_2+0xb4`, both arrays' slot-NULL.
- **No guard against freed-but-non-NULL pointers**. The vtable[4] call at line 4252 will AV on a dangling node.
- The "stack #3 TESNPC" pattern from crash logs: the dangling pointer in `*(local_80+0x88)[uVar4]` is a node that *was* valid for a previous TESNPC and was freed when that NPC's FGP was destroyed, but the slot pointer wasn't cleared in the helper struct.

---

## Chain Summary — Data Flow

```
QueuedHead (some object with a TESNPC and a context)
  this->npc                     → carried in param_1 across the chain
  this->+0x24, this->+0x28      ← receive face0/face1 BSFaceGenNiNodes
  
QueuedHead::Run (sub_435300)
  ├ FaceGen_GatingFunction (sub_523220)         this = some owner with TESRace at +0xe8
  │  └ if face0/face1 slots empty AND race set:
  │     └ FaceGen_ChokepointAlloc (sub_52DED0)  flag=1 (HARDCODED here)
  │        ├ alloc 0x1E0 + ctor (sub_54CAF0)    → base node uVar3
  │        ├ alloc 0x118 + ctor (sub_55CD70)    → outFace0 BSFaceGenNiNodeBiped
  │        ├ alloc 0x118 + ctor (sub_55CD70)    → outFace1 BSFaceGenNiNodeSkinned
  │        ├ FaceGen_LocalHelperCtor (sub_527C90)  → 0x?-byte helper on stack
  │        ├ HelperPopulator (sub_52CD50)       fills helper from TESNPC; internally
  │        │   may dispatch to TESNPC_FaceGenFiller (sub_5221C0), which:
  │        │   ├ if race==NULL: FaceGen_FallbackPopulator
  │        │   └ if race!=NULL: vtbl[0x4A](0x45) selects female/male slot,
  │        │                     then FaceGen_SilentSkipLoop (sub_552990)
  │        │                     reads TESRace+0x29c (FaceGen template),
  │        │                     2x2 = 4 entries, 0x18 each, ZEROES helper
  │        │                     slots on NULL source
  │        ├ HelperToOutStateMachine (sub_555A80)
  │        │   for each 9 child slots: validate helper+0x78[i] and helper+0x88[i],
  │        │   if helper+0xB8 && helper+0xBC: FaceGen_SetEyeRefs_AVSite (sub_5547F0)
  │        │     → AV if +0xB8/+0xBC are dangling
  │        └ if flag==1: BSFaceGen_DoSomething (sub_5551C0) twice
  │                       → AV at +0x179 (= 0x555339) on
  │                         (*helper->childArray[uVar4])->vtbl[4]()
  │                         when childArray[uVar4] is dangling
  │
  └ release old this+0x24, replace this+0x28 with face0
```

### TESNPC.npc → AV path:

1. QueuedHead carries `npc` (TESNPC*). When `Run` fires, gating reads `this+0xe8` (TESRace*) — NOT directly the npc.
2. The chokepoint receives `param 5 = ebp` (the npc-or-actor context); `sub_52CD50` populates the helper using TESNPC fields.
3. Inside `TESNPC_FaceGenFiller`, the **TESRace template at +0x29c** drives `sub_552990`'s 2x2 silent-skip loop.
4. The silent-skip loop **zeros helper slots** when the race template has NULL FGP entries.
5. `HelperToOutStateMachine` and `BSFaceGen_DoSomething` then iterate **9 child slots**, dereferencing `helper->arr_at_88[i]` and `helper->arr_at_78[i]`.
6. If those array entries are **stale pointers from a previous TESNPC's helper** (left over by an allocator bug or by sub_552990 not zeroing the *array* slots — only the (a,b) pair entries), the vtable call AVs.

The "Quest Item flag" data signal almost certainly correlates with **persistent references**: persistent NPCs are loaded eagerly and have their TESActor wrappers (with `+0xe8` race set, `+0x1d4/0x1d8` empty) created in batch, increasing the chance that helper-array slots from a previous batch are stale. **[?]** — needs runtime tracing to confirm.

---

## What I couldn't figure out (open questions)

1. **Is sub_5547F0 (and its caller sub_555A80) reading helper+0xB8/+0xBC, where do those values originate?** Three candidate sources — needs a Pascal probe that watches helper construction and traces the populator path. The user memory says "interior pointer into TESRace's static array" but I couldn't verify that from decomp alone.

2. **What does sub_52CD50 actually do, and does it always call sub_5221C0?** The chokepoint's populator path goes through sub_52CD50, not directly to sub_5221C0. I don't have decomp for sub_52CD50 in my reading — only the asm exists at `sub_0052CD50.asm`. Worth dumping to confirm the populator dispatch.

3. **Is `vtbl[0x4A](0x45)` definitely the "female" check?** The 0x60-byte array spacing (0x108 vs 0x168) is consistent with two FaceGen template slots, but the arg `0x45` (= 69) doesn't match standard Oblivion Actor Value indices (sex would be 0x12 or so). Could be a custom flag query. Needs confirming via Blockhead source or runtime probe.

4. **Why is the FLAG hardcoded to 1 in sub_523220?** The other call site (line 3891) passes 0. There may be an older code path that passed flag=0 from the gating function and was lost, or this was always intentional for the QueuedHead path.

5. **What is `[esi+0x1e0]` (the 16-bit field copied from TESRace+0x2fc)?** Race version? Skeleton revision? Unknown without cross-referencing race-data writers.

6. **Quest Item flag (record-flag bit 0x400) — how does it actually propagate to the gating?** The gating function does NOT read TESForm.flags. The discriminator must be reaching here via a *secondary* effect of persistence — most likely "persistent ref → TESActor instantiated → TESActor.race+0xe8 is set in batch with face0/face1 not yet built". The actual bit-0x400 read happens *somewhere* in the TESForm load pipeline, not in this chain. Needs a different RE direction.

7. **The "freed-but-non-NULL" theory for the AV is unproven.** It's the most plausible reading of the guards present at sub_5551C0, but the alternative — silent-skip loop zeroing only `[esi]`/`[esi+4]` of the (a,b) entry while leaving the *child-array entry* untouched — should be checked against the actual helper struct layout.

8. **No disasm dump for sub_5547F0 or sub_5551C0.** All my analysis of the AV site is decomp-only. A targeted dump would help confirm the exact instruction at +0x179 and +0xB6.
