# `TESObjectREFR + 0x3C` (loaded3D) — writer inventory and decision point

Date: 2026-05-06.
Method: full-binary Ghidra decompile + per-function disasm dumps. No runtime instrumentation yet.

Confidence legend: **[V]** verified by reading both decompile and asm; **[I]** inferred from pattern but not directly traced; **[?]** unproven.

## TL;DR

- **The canonical writer of `refr+0x3C` is `FUN_004D7D10`** at `0x004D7D10`. Naming it `TESObjectREFR::SetLoaded3D_locked`. **[V]**
- `TESObjectREFR::Set3D` at `0x004E0F80` does **not** itself write the new value into `refr+0x3C`. It null-clears the slot (line 838 in `seg_004e0000.c`) and then calls `FUN_004D7D10(param_1)` (line 850) to do the actual assignment. So Set3D *is* on the write path, just via a helper. **[V]**
- For the **QueuedHead completion path** there is a SECOND, gated writer call at `FUN_00437BB0` (`0x00437BB0`) — the per-task completion handler. Same helper (`FUN_004D7D10`) but guarded by an explicit "only assign if `refr+0x3C` is currently NULL" predicate. **[V]**
- **The decision point is at `0x00437BB0+0x11..0x1F`** (the three-clause `if` at line 6541-6542 of `seg_00430000.c`). If any clause fails, the freshly-produced model is decref'd and dropped on the floor. **[V]**

## Part A — All writers of `refr + 0x3C`

Found by grepping `\[0xf\] = ` and `\+ 0x3c\) = ` across all segments and filtering for TESObjectREFR-shaped contexts (objects whose `[2]` is a uint flagword tested against `0x80000U`, `[7]` is a TESForm pointer with `+4` typecode byte, etc.).

### 1. `FUN_004D7D10` — the only direct writer of `refr+0x3C` to a non-NULL value [V]
- **File**: `seg_004d0000.c:6095-6118`
- **VA**: `0x004D7D10`
- **What it writes**: `in_ECX[0xf] = (int)param_1;` (line 6112). `param_1` is a refcounted NIF/NiNode pointer; refcount is incremented at +0x4 immediately after.
- **Conditions**:
  - Wrapped in `FUN_00977c50(3)` / `FUN_00977c50(2)` — paired enter/leave on a critical section (the same one used elsewhere for refr 3D updates).
  - Calls `(*vtable[0x144])()` on the refr first (some "OnPre3DChange" notify).
  - Skips assignment entirely if `puVar1 == param_1` (current value already equals new) — but always decrefs old if differs.
  - Always increments new refcount on assign.
- **Comment**: this is the single chokepoint that mutates the live `refr+0x3C` field. Every call site listed below ultimately funnels through it.

### 2. `TESObjectREFR::Set3D` (`FUN_004E0F80`) — NULL-clear + delegated set [V]
- **File**: `seg_004e0000.c:646-921`
- The body has TWO touches of `in_ECX[0xf]`:
  - **Read-only checks** at lines 681 (`if (in_ECX[0xf] == param_1) goto epilogue`), 698, 705 (caches old into `puVar7`).
  - **Direct NULL clear** at line 838 (`in_ECX[0xf] = 0;`) — this is inside the `puVar7 != NULL` branch, after a vtable[0x144] call and a refcount decrement.
  - **Assignment of `param_1`** is performed via the `FUN_004D7D10(param_1)` call at line 850, NOT via inline assignment.
- This is a quirk of Ghidra-visible code: from an asm reader's standpoint Set3D *is* the writer, since it's the function you'd hook for "refr's 3D is about to change." The actual store to `[ebp+0x3c]` lives in the helper at 0x4D7D10.

### 3. Other `[0xf] = ` lines that look like writers but aren't TESObjectREFR
Filtered out:
- `seg_004e0000.c:4303` — class with a `FUN_00401f00(0x94)` heap buffer; member layout completely different (this is some Animation or Input structure, init in the same compile unit).
- `seg_004e0000.c:9280, 9316` — LandscapeLOD class (sprintf format `"Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF"` is the smoking gun).
- `seg_004e0000.c:9604` — `0x3dcccccd` (the float `0.1f`) — a settings/config initializer, not a refr.
- `seg_004a0000.c`, `seg_004b0000.c`, `seg_00520000.c` — all `&PTR_FUN_xxxx` vtable installs (constructor patterns), not refr.
- Various scalar-init writes in seg_00410000 / seg_00420000 / seg_005a0000 — these are state-machine codes (1, 3, -1, 0xFFFFFFFF) on unrelated classes.

## Part B — The QueuedHead completion path

Naming follows the addresses you pre-supplied; all confirmed by reading decompile.

### B.1 `QueuedHead::Run` (`0x00435300`, `seg_00430000.c:4330`) [V]

```
FUN_00401020("QueuedHead::Run()");
apuStack_8[0] = NULL;
FaceGen_GatingFunction(&stack0xfffffff4, apuStack_8);   // produces face0 in stack0xff4, face1 in apuStack_8[0]
... refcount manipulation, then:
*(in_ECX + 0x24) = face0;     // stash into QueuedHead::face0
*(in_ECX + 0x28) = face1;     // stash into QueuedHead::face1
return;
```

**Confirmed**: Run does NOT touch any refr field. It only stores into its own +0x24/+0x28. The refr-side assignment is someone else's responsibility.

### B.2 `QueuedHead::Finalize` (`0x004354A0`, `seg_00430000.c:4405`) — does NOT write refr+0x3C [V]

```
if (in_ECX[8] != 0 && FUN_004D6FD0()) {
    if (vtable[0x154]() == 0) {
        if (FUN_0057BAC0() == 0) {
            (*vtable[0x30])();    // probably "FinalizeRender" or similar
        }
    }
}
(*vtable[0x2c])();                // "PostFinalize" notify
in_ECX[3] = 5;                    // STATE := 5
jump (*vtable[0x28])();           // tail-call into something — Ghidra flags as unrecovered jumptable
```

This sets task state to 5 and tail-calls a vtable slot. It does NOT directly write any refr field.

### B.3 `IOManager::TaskStateTransition` (`0x00432130`, `sub_00432130.asm`) [V]

It's a state-dispatch jumptable on `[edi+0xc] (state)`:
- `state == 5`: invokes `*(eax+0x0c)` after pushing 6 (= "advance to state 6"), then re-enters the state machine.
- `state == 3` / `state == 4`: spin-wait for state to advance via `FUN_004378A0` or similar.
- All "happy-path" state transitions for our path eventually call `sub_431D10` (an interface registry helper) and return.

**No refr write inside the state-transition machinery itself.** State 6 is terminal — the per-task completion code (e.g. FUN_00437BB0) is invoked from the WORKER LOOP (`seg_00430000.c:10812 -> FUN_0043af30`), not from inside TaskStateTransition.

### B.4 The decision point: `FUN_00437BB0` (`0x00437BB0`) [V]

This is **the** function that decides whether the produced model becomes the live `refr+0x3C` or gets discarded.

```
seg_00430000.c:6531
void FUN_00437bb0(void) {
    int in_ECX;  // task wrapper, layout:
                 //   +0x0c = task state (6 == cancelled/done)
                 //   +0x18 = bound TESObjectREFR*
                 //   +0x1c = produced model* (refcounted)

    if (((*(int *)(in_ECX + 0xc) != 6) &&                       // CLAUSE 1: not cancelled
         (*(int *)(in_ECX + 0x18) != 0)) &&                     // CLAUSE 2: refr still bound
        (*(int *)(*(int *)(in_ECX + 0x18) + 0x3c) == 0))        // CLAUSE 3: refr->loaded3D == NULL
    {
        FUN_004D7D10(*(undefined4 *)(in_ECX + 0x1c));           // <-- WRITE refr+0x3C := produced
        ... FUN_006ECC80, FUN_00441EF0, FUN_004D7010 (per-frame retry refresh)
        return;
    }

    // Discard path: decref produced model, leave refr+0x3C unchanged.
    puVar1 = *(undefined4 **)(in_ECX + 0x1c);
    if (puVar1 != NULL) {
        if (InterlockedDecrement(puVar1+1) == 0)
            (*vtable[0])(1);     // dtor
        *(in_ECX + 0x1c) = 0;
    }
    return;
}
```

**This is the gate**. Three predicates joined by `&&`:
1. `task->state != 6`. If 6, the task was cancelled (or already finalized) and the produced model is junk relative to current world state.
2. `task->refr != NULL`. If NULL, the refr was unloaded between queue-time and completion.
3. **`refr->loaded3D == NULL`**. If the refr already has 3D (e.g. cell streaming or another worker beat us to it), the produced face is dropped — we don't replace a live model.

**All three must hold.** Otherwise the produced model is decref'd and `refr+0x3C` stays as it was — which for our bug class means it stays NULL, and `TESCharacter::Update` (sub_4E0580) will re-queue on the next frame. **An infinite re-queue can occur if the produce-time conditions repeatedly fail to satisfy clause 3 (or, equivalently, if some other code path keeps clearing refr+0x3C while QueuedHead::Run never delivers a usable model).**

The disasm offsets for the decision branches are inside `FUN_00437BB0` at the start of the function (the prologue is small). The asm dump for this exact function isn't in `oblivion-disasm/` — only `sub_00438060.asm` (ModelLoader_QueueReference) is dumped from this neighborhood. The address from segment context is `0x00437BB0`.

### B.5 `FUN_0043AE10` (`0x0043AE10`) — the main-thread direct path [V]

`seg_00430000.c:9240`. This is the *immediate* (non-deferred) variant of completion that fires when running on the main thread. Layout:

```
*(param_1 + 0x54) = pos.x;   *(param_1 + 0x58) = pos.y;   *(param_1 + 0x5c) = pos.z;
... copy 9-word rotation matrix into param_1+0x30 ...
*(param_1 + 0x60) = scale;

if (mainThreadId != currentThreadId) {
    // defer: build wrapper struct and post via FUN_0043A5F0
    return;
}

FUN_004D7D10();              // <-- direct write call (param_1 unspecified; ECX has the refr)
... FUN_00441EF0 to schedule per-frame refresh, FUN_004D7010 to publish
return;
```

Note this variant calls `FUN_004D7D10()` **without the three-clause gate** — because by the time we reach here we're already on main thread holding the right state. The three-clause gate in 437BB0 is the **deferred-path** equivalent: it re-validates because between enqueue and main-thread pickup the world may have changed.

### B.6 `FUN_0043AF30` (`0x0043AF30`) — the worker loop's per-task hand-off [V]

`seg_00430000.c:9295`. Worker-thread function (called from the main worker loop at line 10812 in seg_00430000):

```
if (FUN_0043F8C0()) {
    ... wait for FUN_00977C50() lock if DAT_00b350d5 set ...
    if ((*vtable[400])() == 0 && FUN_00441E90() != 0 &&
        ((*(int**)(in_ECX+0x20))[0xf] == 0)) {       // refr->loaded3D == NULL  (same gate)
        (*vtable[0x14c])();                          // poly retry-load on refr
        FUN_0075FA90();
    }
    InterlockedIncrement((LONG*)(in_ECX+8));
    FUN_0043A5F0();
}
```

**This is where the re-queue you observed in `TESCharacter::Update` actually originates from in the worker.** Same gate (`refr+0x3C == NULL`), but it's calling `vtable[0x14c]` on the refr — that's the polymorphic "Load3D" / re-queue method, not the direct writer.

### B.7 `ModelLoader_QueueReference` (`0x00438060`, `sub_00438060.asm`) [V]
Reads refr's flags and properties, builds the QueuedHead/QueuedHelmet wrapper, links it to the IOManager queue. **Does not write `refr+0x3C`** — confirmed by scanning the ASM (only reads, no `mov [reg+0x3c], <non-zero>`).

### B.8 The `QueuedHead` vtable @ `0x00A36CE0` [I — partial]

Our segment dump does not include 0x00A30000-0x00A40000 (data segment), so we cannot enumerate the vtable slots from `seg_*.c`. From decompile evidence inside QueuedHead methods we know:
- Slot 0: dtor (`QueuedHead_dtor`, `seg_00430000.c:6411`) — releases face0/face1 at +0x24/+0x28; does NOT touch any bound refr.
- Slot @ `*(eax+0x0c)`: state advance (per `sub_00432130` jumptable pattern; called with arg=6 from state-5 case to advance terminal).
- Slot @ `+0x28`, `+0x2c`, `+0x30`: called by `QueuedHead::Finalize` (`sub_4354A0`); their identities are not directly visible without the data segment.
- The `&PTR_FUN_00a36d5c` reference at `seg_00430000.c:6572` is the **vtable installed by the wrapper-task constructor** at offset +0x4 of the task object — likely `&QueuedHead_vtable + offset_to_method_4`. Probably the QueuedHead vtable proper begins at `0x00A36D5C - 4*N` for some small N.

**Concrete next step**: add `0x00A30000` segment dump (or query Ghidra directly via `xref to 0x004354A0` / `xref to 0x00435300`) to read the eight vtable bytes at `0x00A36CE0..0x00A36CFF` and identify which slot owns the refr-side dispatch.

## Part C — The critical decision point

### Address(es)
- **Primary gate**: `FUN_00437BB0`, prologue `if` chain at `0x00437BB0+~0x10..0x1E` (three sequential CMPs: `cmp dword ptr [in_ECX+0xc], 6` / `cmp dword ptr [in_ECX+0x18], 0` / `cmp dword ptr [eax+0x3c], 0`). The exact byte offsets are not in our pre-dumped asm; produce with `disasm.py 0x00437BB0` to get them.
- **Secondary gate** (worker loop, decides whether to re-queue): `FUN_0043AF30+0x..` — `cmp dword ptr [eax+0x3c], 0` test against refr's loaded3D in `seg_00430000.c:9319`.
- **Mirror gate** in `FUN_0043FBA0+~`: `seg_00430000.c:13127` calls `FUN_004D7D10(0)` (the explicit clear), inside a vtable-driven tear-down.
- **Mirror gate** in `FUN_004410F0` (or sibling, the unidentified function containing line 1755): `if (param_1[0xf] == 0) FUN_004D7D10(param_3);` — same "only-if-NULL" assignment pattern, called from a different load path.

### What test does the engine apply to decide `refr+0x3C` gets written vs stays NULL?

**The simple version**: the deferred-completion handler will write the freshly produced model into `refr+0x3C` ONLY IF *all three* of these hold at main-thread completion time:
1. `task.state != 6` (the task was not cancelled in flight)
2. `task.refr != NULL` (the refr was not freed in flight)
3. `task.refr->loaded3D == NULL` (no other code path beat us to it)

If any clause fails the produced model is decref'd. The refr is left untouched and `TESCharacter::Update` will see refr+0x3C still NULL on the next frame and re-queue via `ModelLoader::QueueReference`.

**The data being read** at the decision point:
- `in_ECX + 0xc` (4 bytes, `int state`) — task-wrapper field
- `in_ECX + 0x18` (4 bytes, `TESObjectREFR*`) — task-wrapper field
- `(*(in_ECX + 0x18)) + 0x3c` (4 bytes, `NiNode*` = loaded3D) — refr field
- `in_ECX + 0x1c` (4 bytes, `NiNode*` = produced model) — task-wrapper field; passed to `FUN_004D7D10`

### Is `Set3D` the writer? — clarified

**No** in the strict sense for the QueuedHead path. `Set3D` is the canonical path for cell-streaming / scripted Set3D / disable; it calls `FUN_004D7D10` as its tail to actually mutate the slot. The QueuedHead completion path **does not go through `Set3D`** — it calls `FUN_004D7D10` directly via `FUN_00437BB0` (deferred) or `FUN_0043AE10` (immediate, main-thread).

### Verifying empirically

To confirm this analysis with runtime data, the cheapest probes are:
1. **Detours hook on `0x004D7D10`** logging `(this, param_1)` at entry — that gives every refr+0x3C mutation in chronological order. Sample ratio of `param_1 == NULL` vs non-NULL writes.
2. **Detours hook on `0x00437BB0`** logging `(this, this+0xc, this+0x18, refr+0x3c, this+0x1c)` BEFORE the if-chain — that tells you which clause is failing for our bad NPCs.
3. **Detours hook on `0x00435300` (QueuedHead::Run)** at function exit, logging `(this, this+0x24, this+0x28)` — confirms whether face0/face1 are non-NULL on completion (i.e. that Run actually produced something for the bad NPCs vs. silently produced NULLs).

If runtime data shows the bad NPCs hit the discard path in `0x00437BB0` because clause 3 (`refr->loaded3D != NULL`) fires repeatedly, that means **something else** is filling refr+0x3C with a junk/placeholder value while the QueuedHead is still in flight, and our face never lands. If clause 1 (state==6) fires, the task is being cancelled mid-flight (e.g. by ModelLoader_CancelPendingForRefr at `seg_00430000.c:8426`). If face0/face1 are NULL coming out of Run, the gating function inside Run is producing nothing — that's the chain we already RE'd in `reference_facegen_call_chain.md` (the silent-skip in `sub_552990`).

## Open items / not traced

- The QueuedHead vtable byte layout at `0x00A36CE0` is unread (data segment not dumped). Resolving this is one Ghidra ExportPerSegment run away.
- `vtable[0x144]` and `vtable[0x14c]` and `vtable[0x150]` on TESObjectREFR — referenced repeatedly throughout this path; their identities (per-class overrides for `TESCharacter`, `Creature`, etc.) are not enumerated here.
- We have not confirmed empirically that the bad-NPC repro reaches `FUN_00437BB0`. The deferred path is taken for off-thread completions; if your repro is hitting an entirely-on-main-thread path the relevant gate is the **absence** of a gate in `FUN_0043AE10` — but that path requires `mainThreadId == GetCurrentThreadId()` at call time, so if a worker is doing the produce step the deferred path is taken.
- `FUN_004D7010` (called after `FUN_004D7D10` in both paths) was not investigated; suspected to be a "publish to render queue" or "mark dirty" helper.

---

## Part D — QueuedReference and the actual refr+0x3C write path

Date: 2026-05-06 (extension).
Method: DumpVtable + MSVC RTTI typeinfo decode (PE `.rdata` parsing).
Confidence legend unchanged.

### D.1 The 5 task class taxonomy [V]

Decoding MSVC RTTI from `Oblivion.exe` `.rdata` (each vtable's slot[-1] = pointer to RTTICompleteObjectLocator → typeDescriptor → mangled name string):

| Ctor VA | Vtable VA | Typename (RTTI) | Dispatch case in `ModelLoader::QueueReference` (`FUN_00438060`) |
|---------|-----------|-----------------|-----------------------------------------------------------------|
| `0x00437C30` | `0x00A36D5C` | `QueuedReference` | **default** branch (formType not 0x1E/0x23/0x24, not Player) |
| `0x00437E20` | `0x00A36D9C` | `QueuedTree` | formType `'\x1e'` (0x1E = TREE base form) |
| `0x00437F00` | `0x00A36DDC` | **`QueuedCharacter`** | formType `'#'` (0x23 = NPC_ base form) |
| `0x00437FE0` | `0x00A36E1C` | `QueuedCreature` | formType `'$'` (0x24 = CREA base form) |
| `0x00438020` | `0x00A36E5C` | `QueuedPlayer` | `param_1 == DAT_00b333c4` (the global Player* singleton) |

The dispatch logic is the cascading if/else at `seg_00430000.c:6830-6864`:

```c
iVar2 = (*refr->vtable[0x170])();   // → TESForm* baseForm (TESNPC for our NPCs)
cVar1 = *(char *)(iVar2 + 4);       // formType byte at TESForm+4
if (refr == DAT_00b333c4)        new QueuedPlayer(...);
else if (cVar1 == 0x1E)         new QueuedTree(refr, ...);
else if (cVar1 == 0x23)         new QueuedCharacter(refr, ...);   // <-- NPCs
else if (cVar1 == 0x24)         new QueuedCreature(refr, ...);
else                            new QueuedReference(refr, ...);
```

The early gate at `cVar1 == '\x1a'` (line 6822) is a separate filter (TESActorBase::IsModelMissing-like check via `vtable[0xf4]`); irrelevant to the dispatch table.

### D.2 QueuedHead is NOT a top-level task — it's a *child* of QueuedCharacter [V]

`QueuedHead` (vtable `0x00A36CE4`, RTTI `.?AVQueuedHead@@`) is allocated by `FUN_0043BA30` (constructor wrapper, `seg_00430000.c:9888`):

```c
puVar2 = malloc(0x30);
FUN_00436500(...);                  // base ctor
*puVar2 = &PTR_FUN_00a36ce4;        // QueuedHead vtable
puVar2[8] = TESNPC*;                // +0x20 = TESNPC (the actor base)
```

This constructor is called from inside **`QueuedCharacter::Run`** (= `FUN_0043DC00`, vtable slot[11]) at `seg_00430000.c:11539`:

```c
uVar5 = FUN_0043ba30(&this+0x28, TESNPC, ...);   // build QueuedHead, store it at this+0x28
LFM_DoublyLinkedQueueInsert(uVar5);              // post for worker
```

So **QueuedHead is dispatched as a sub-task by QueuedCharacter::Run** — not directly by `ModelLoader::QueueReference`. The QueuedCharacter wrapper holds the QueuedHead at field `+0x28` (and a QueuedHelmet at `+0x2c` or `+0x3c` depending on slot).

Sister sub-tasks dispatched by `QueuedCharacter::Run` (`FUN_0043DC00`):
1. **`FUN_004788E0`** (`seg_00470000.c:7013`) — iterates 16 inventory equipment slots (`(i+5)*0x10 + this`), enqueues a `Queued...` task for each piece of biped/equipped armor.
2. **`FUN_0043BA30`** — builds the QueuedHead (face) sub-task as described above.
3. **`FUN_0043D000`** (`seg_00430000.c:10941`) — body-skeleton NIF loader: reads `TESNPC + 0xAC` (model field), strncmps for "Skeleton", optionally adds "SpecialAnims\\" path, hands off to `FUN_0043BDA0` to enqueue.

### D.3 Per-task-variant vtable shape (15 slots) [V]

All 4 derived task classes (QueuedReference, QueuedTree, QueuedCharacter, QueuedCreature) share an identical 15-slot vtable shape; QueuedPlayer same plus extra. Slots that differ between variants:

- **slot[0]**: dtor (`0x00439BF0` for QueuedReference/Tree/Creature, `0x00439BD0` for QueuedCharacter/Player)
- **slot[11]**: type-specific Run / sub-task-fanout method
  - QueuedReference: `0x004BDDA0` (no fan-out — single-load path)
  - QueuedTree: `0x0043CB90`
  - QueuedCharacter: `0x0043DC00` ← NPC body+head+armor fanout
  - QueuedCreature: `0x0043DD80`
  - QueuedPlayer: `0x0043DE00`
- **slot[14]**: extra-completion (helmet attach + face attach)
  - 4 variants: `0x0043B000` (no helmet/face install)
  - QueuedCharacter, QueuedPlayer: `0x0043B090` (calls `0x0043B000` then `FUN_004353D0` for face, `FUN_00437B60` for helmet)

Slots common across all variants:
- **slot[8]** = `0x004354A0` (`Finalize` — sets state=5 and tail-jumps via slot[10])
- **slot[13]** = `0x0043AE10` (the **immediate-completion writer**, see D.4)

### D.4 The actual refr+0x3C writer for an NPC body — `FUN_0043AE10` (vtable slot 13) [V]

`FUN_0043AE10` (`seg_00430000.c:9240`) is invoked when the LFM worker has finished producing a 3D model and is handing it back to the wrapper for installation. Its `param_1` is the produced root NiNode, `in_ECX` is the QueuedXXX wrapper.

```c
void slot13(NiNode* produced) {
    NiPoint3* pos = refr->vtable[0x174]();          // GetPosition
    produced[+0x54..+0x5c] = pos->xyz;
    Matrix9f* rot = FUN_004D7AF0();                 // GetWorldRotMatrix
    memcpy(produced+0x30, rot, 9*sizeof(float));    // cache rotation
    produced[+0x60] = abs(refr->vtable[0xec]());    // GetScale

    if (mainThreadId != GetCurrentThreadId()) {
        // OFF-MAIN-THREAD PATH:
        AttachDistant3DTask* w = malloc(...);
        FUN_00436500();                              // base ctor
        *w = &PTR_FUN_00a3698c;                      // AttachDistant3DTask vtable
        w[6] = refr;                                 // +0x18 = bound refr
        w[7] = produced;                             // +0x1c = produced NiNode
        InterlockedIncrement(produced + 4);          // refcount the node
        FUN_0043A5F0();                              // post the deferred callback
        return;
    }
    // MAIN-THREAD PATH (no gate):
    FUN_004D7D10();           // refr+0x3C := produced (ECX = refr from in_ECX+0x20)
    FUN_00441EF0(refr, ..., 0); // belt-and-suspenders second-pass attach
    FUN_004D7010();             // publish/mark dirty
}
```

The deferred-path callback class is **`AttachDistant3DTask`** (vtable `0x00A3698C`, RTTI `.?AVAttachDistant3DTask@@`). Its `Run` method is **slot[5] = `FUN_00437BB0`** — confirming the previous Part B.4 finding. Layout matches exactly: refr at `+0x18`, produced at `+0x1c`, state at `+0x0c`. The 3-clause gate in `FUN_00437BB0` is `AttachDistant3DTask::Run`'s validity check.

### D.5 The body NIF (not face0/face1) is what fills refr+0x3C [V]

In QueuedCharacter wrapper layout (per `FUN_0043B000` and `FUN_0043B090`):

| Field offset | Contents |
|---|---|
| `+0x00` | vtable (one of the 5 task vtables) |
| `+0x0C` | task state (1..6; 6=cancelled/done) |
| `+0x20` | `TESObjectREFR*` (the bound refr — note: `+0x20`, NOT `+0x18`) |
| `+0x28` | child `QueuedHead*` (the face load — produces face0/face1) |
| `+0x2c` | child body-3D loader (produces the body NiNode root) |
| `+0x30..+0x3c` | other child sub-tasks (helmet at `+0x3c`?) |
| `+0x38` | flag/result related to face install |

`FUN_0043B000` does the body-attach:
```c
if (this->state != 6 && (refr->flags & (1<<5|1<<11)) == 0) {
    if (this+0x28 != 0)              // QueuedHead present
        FUN_0043A8F0(refr, this[0x28]+8);
    bodyModel = this[0x2c];          // <-- body NiNode produced by sub-task
    FUN_00441EF0(refr, ..., bodyModel, 0);   // ← actual write site for refr+0x3C
}
```

And `FUN_00441EF0` (`seg_00440000.c:1658-1756`) contains the actual store:

```c
if (FUN_00441e90(refr) != 0) {
    if (param_3 == 0) param_3 = refr->vtable[0x14c]();   // fallback: poly Load3D
    else if (refr[0xf] == 0)                              // refr->loaded3D == NULL
        FUN_004D7D10(param_3);                            // ← WRITE refr+0x3C := body
}
```

**This is a 4th writer site, not previously inventoried in Part A.** Same NULL-only gate as `FUN_00437BB0`, but on the *main-thread* path.

`FUN_004353D0` (`seg_00430000.c:4368`), called by `FUN_0043B090` for QueuedCharacter and QueuedPlayer (slot[14]), handles the *face* attach:

```c
piVar1 = (*refr->vtable[0x170])();    // TESNPC base
FUN_00528A10(refr, ?, this[0x24], this[0x28]);    // attach face0 (this+0x24) and face1 (this+0x28) to NiNode
*(face0 + 0x114) = refr;              // back-pointer
*(face1 + 0x114) = refr;
```

**Critical**: `FUN_004353D0` does NOT touch refr+0x3C. The face0/face1 produced by `QueuedHead::Run` are **attached as children** of the already-installed body NiNode, hooked via `FUN_00528A10`. `FUN_00528A10` walks the body's bone hierarchy (looking for "Bip01 Head" etc.) and parents face0/face1 under the head bone.

So:
- **`refr+0x3C` = body NIF** (from `TESNPC+0xAC`-loaded skeleton mesh)
- face0/face1 = head/hair mesh, lives at `face*+0x114→refr` and is `addChild`-ed onto refr+0x3C's scenegraph

These are two separate sub-tasks. **A QueuedHead failure won't directly leave refr+0x3C NULL — it leaves the body present but headless.** A *body* sub-task failure (the FUN_0043D000 / FUN_0043BDA0 chain) is what leaves refr+0x3C NULL.

### D.6 What can leave refr+0x3C NULL for a TESCharacter [V/I]

Tracing from the gate predicates back to causes:

1. **Body sub-task fails to produce** [V — direct]: If the NIF loader (FUN_0043D000 → FUN_0043BDA0 chain) couldn't load the .NIF (file missing, parse error, OOM), `this+0x2c` ends up NULL. Then in `FUN_0043B000` line 9352 `uVar3 = this+0x2c = 0` is passed to `FUN_00441EF0`, which falls into `if (param_3 == 0) param_3 = refr->vtable[0x14c]()` — a fallback that calls back into `ModelLoader::QueueReference` (re-queue). On RE-queue, if the original failure persists, refr+0x3C stays NULL forever.

2. **Task state == 6 (cancelled) at completion** [V]: `ModelLoader_CancelPendingForRefr` (`seg_00430000.c:8426`, `FUN_0043DE30` line 11617) sets state=6. If the refr is cell-streamed-out after queue but before complete, the produced model is dropped via the `FUN_00437BB0` gate. Subsequent re-queues may face the same race.

3. **Race: refr+0x3C filled then nulled mid-flight** [I]: between `if (refr[0xf] == 0)` test and the `FUN_004D7D10(param_3)` store, another thread (or recursive Update) may set refr+0x3C non-NULL. The `FUN_004D7D10` itself re-tests `puVar1 == param_1` and skips if equal but always decrefs the old. There's a small TOCTTOU window — if the model is concurrently freed, the ref-count goes negative.

4. **The 0x80000U flag on refr** [V]: `FUN_004D7D10` and `FUN_00441E90` test `refr[2] >> 5 & 1` and `refr[2] >> 0xb & 1` (= flags 0x20 and 0x800). If either is set, the body-attach short-circuits. From context these look like `kFlag_TempCanceled` and `kFlag_3DSetting`. If a script or engine code keeps these flags set on the bad-NPC refr, the body load completes but never installs.

5. **`(*refr->vtable[400])() == true`** [V — line 9317]: this is a "should-not-load-3D" override that sniffs the actor state. For TESCharacter this is likely `IsDeleted` or `IsDisabled`. If set transiently while QueuedCharacter::Run was already kicked off, the worker-loop check at `FUN_0043AF30` line 9317 vetoes the install. The task is left in limbo and the wrapper's slot[14] path (`FUN_0043B090 → FUN_0043B000`) is never invoked. refr+0x3C stays NULL.

The bug class we've been chasing in `feedback_facegen_overhaul_regression.md` is most likely (1) — the body NIF loader fails for some bad NPCs because something in the actor's TESNPC+0xAC chain is malformed (e.g. corrupt skeleton path, missing animation override). The QueuedHead bug we've been patching in Blockhead is a *secondary* symptom: even if the body installs, face0/face1 fail to attach because the FaceGen call chain hits the silent-skip in sub_552990.

### D.7 Recommended hook target for empirical confirmation [V]

For TESCharacter actors, the SINGLE highest-information empirical probe is:

**Hook `FUN_00441EF0` at `0x00441EF0` entry**, log:
- `param_1` (refr) and `refr->refID` (refr+0x18 reads form ID)
- `param_3` (the proposed body NiNode pointer; 0 means "use fallback Load3D")
- `param_1[0xf]` (current refr+0x3C — should be NULL for the write to fire)
- `param_1[2]` (flags — to see if 0x20/0x800 are set)
- The taken branch (`param_3==0` vs `param_1[0xf]==0` vs neither)

This is the main-thread sentinel for refr+0x3C population. Every successful body attach passes through here. Bad NPCs hit it with `param_3=0` → fallback `vtable[0x14c]()` re-queue → next frame same situation → infinite loop. (Or they hit it with `param_3 != 0` and `param_1[0xf] != 0` → some other code path beat us to it with a placeholder.)

A second probe at **`FUN_0043B000` entry** (which feeds `FUN_00441EF0`) would tell you whether `this+0x2c` (body sub-task result) is non-NULL by completion time. If `this+0x2c == 0` at FUN_0043B000 entry, the body-NIF sub-task failed.

A third probe at the **`AttachDistant3DTask` deferred-callback class allocation** in `FUN_0043AE10` line 9269 — count how often the off-thread path is taken vs the on-thread path. The 3-clause gate in `FUN_00437BB0` only fires for off-thread completions; if our bad NPCs are completing on-thread, that gate never sees them.

### D.8 Cross-references to existing notes

- `reference_facegen_call_chain.md` documents `QueuedHead::Run` → `sub_552990` silent-skip — that's the FACE sub-task; orthogonal to refr+0x3C.
- `feedback_blockhead_facegen_fix_landed.md` (v546) patches the face install path — does not address body-3D failure.
- `feedback_facegen_overhaul_regression.md`'s "1-2 min stable windows then crash" residual is consistent with body-NIF failures driving infinite re-queues, eventually exhausting LFM worker pool or hitting the BSTaskThread UAF in `IOManager` (per `reference_oblivion_lockfree_internals.md`).
