# LFM / IOManager / BSTaskManager region map

Verified against `D:\Modlists\Reborn\research\oblivion-disasm\sub_*.asm` (raw disasm) and
`D:\Modlists\Reborn\research\ghidra-projects\segments\seg_00430000.c` (Ghidra decompile).
Symbol names below come from `ghidra-scripts\oblivion-symbols.tsv` plus this analysis.

---

## 1. Subsystem layout

There are **three coupled data structures** in the 0x430xxx-0x439xxx region:

1. **BSTaskManager / per-thread worker queue.** A `BSTaskThread` (vtable 0xA363FC) owns
   two semaphores at `[+0x14]` "wake" and `[+0x20]` "task-available", a thread handle at
   `[+4]`, and feeds off a per-thread "lockable" task slot (`[+0x10]/[+0x14]`).

2. **A "lock-free map" (LFM) instance** — actually a **lock-free hashtable of singly-linked
   buckets**, with deferred-free reclamation and per-thread hazard pointers. It is
   addressed by ECX in every LFM function listed below. Its instance fields:

   | Offset | Field                                                                |
   |--------|----------------------------------------------------------------------|
   | `+0x00` | vtable (signatures-only; `[+0xC]` = bucketCount, `[+0x14]` = stats) |
   | `+0x04` | hazard-pointer-1 slot for current thread                             |
   | `+0x08` | hazard-pointer-2 slot for current thread                             |
   | `+0x0C` | "iter limit" (used to trigger `LockFreeMap_CollectDeferredFrees`)    |
   | `+0x10` | bucket array (head pointers; `[+0x14]` count)                        |
   | `+0x1C` | head of deferred-free list (singly linked through node `[+8]`)      |
   | `+0x20` | deferred-free counter                                                |

   **Bucket node layout:**

   | Offset | Field                                                                            |
   |--------|----------------------------------------------------------------------------------|
   | `+0x00` | key0 (e.g. file/model handle low)                                              |
   | `+0x04` | key1                                                                            |
   | `+0x08` | hazard refcount (driven by `InterlockedIncrement`/`InterlockedDecrement` at `[a28078]/[a2807c]`) |
   | `+0x0C` | next pointer (low bit = "marked-for-deletion" flag, masked with `& 0xfffffffe`) |

3. **IOManager singleton** at `*0x00B33A10` — owns one BSTaskManager-style worker pool,
   a thread-specific interface manager (TLS-backed, registered via `TlsSetValue` at IAT
   0xA28148), and the LFM that holds outstanding I/O work. It also holds an array of
   per-class "task list" tails (`unk0xb / unk0xa`) into which `IOManager_TaskStateTransition`
   queues completed work.

The "QueuedHead/QueuedHelmet/QueuedReference" task objects are NOT stored in the LFM;
they're stored in **IOManager-owned task lists**, and the LFM is used by `ModelLoader`
for the model+resource lookup table.

---

## 2. Function table (verified)

| VA          | Name (this analysis)                  | Role                                                                              |
|-------------|---------------------------------------|-----------------------------------------------------------------------------------|
| 0x00430DE0  | BSTaskThread::Runnable                | 6-byte thunk: `call [param[0]+4]` — vtable slot 1 of the BSTaskThread instance.   |
| 0x00430E00  | BSTaskThread::ctor                    | Creates two semaphores + worker thread starting at BSTaskThread::Runnable.        |
| 0x00431D10  | LockFreeMap::DispatchVtblFn           | Calls `vtbl[0x10](k0,k1)`; on true, `vtbl[0x1C]` returns bucket idx, `Decrement`. |
| 0x00431D60  | ThreadSpecificInterfaceManager::AddInterface | Allocates per-thread interface slot, stores TID, `TlsSetValue` registers it.|
| 0x00431E10  | LockFreeMap::TraversalHelper          | Bucket-scan with hazard pointer set/release on each visited node.                 |
| 0x00432130  | IOManager::TaskStateTransition        | CMPXCHG-driven 6-state machine on `[task+0xC]` (jump table at 0x432204).          |
| 0x00432740  | LockFreeMap::CompactDeferredQueue     | Helper called when collect counter `[+3]` hits limit; halves the deferred list.   |
| 0x00432820  | IOManager::sub_432820                 | Sets task class id (low 32 bits of `[+0x10]`) then transitions state.             |
| 0x004328B0  | LockFreeMap::CollectDeferredFrees     | Walks `[+0x1C]` list; for nodes not in active scan-set, calls vtable destructor.  |
| 0x00432A00  | LFM::DeferredListWalkHelper           | Helper that splices a single node out of the bucket and onto the deferred list.   |
| 0x00432A60  | LockFreeMap::FindOrErase              | CAS-guarded bucket scan; on match, calls vtbl[0x28] (compare) and vtbl[0x2C] (act). |
| 0x00432C30  | LockFreeMap::IteratorAdvance          | Reentrant CAS scan with explicit hazard refcount on each visited node.            |
| 0x00432ED0  | LFM::IteratorReseek                   | Wraps `LockFreeMap::FindOrErase` with hazard-pointer tracking on `param_3`.       |
| 0x00433380  | LFM::IterHelper1                      | Composite: FindOrErase + CAS-mark + free-old-prev.                                |
| 0x004334B0  | LFM::IterHelper1b                     | Same idea using `LockFreeMap::IteratorAdvance` + `LFM::DeferredListWalkHelper`.   |
| 0x00433760  | LFM::EraseFirstMatching               | Pop-front-with-predicate; used by `LFM::IterHelper2`.                             |
| 0x00433BC0  | LFM::IterHelper2 (worker drain loop)  | The worker-thread drain entry: WaitForSingleObject + EraseFirstMatching loop.     |
| 0x00433D70  | LFM::Reset                            | Tears down all buckets and rebuilds an empty map.                                 |
| 0x00433FD0  | LFM::ReSeed                           | Allocates a fresh thread-specific iface and reseeds.                              |
| 0x004343C0  | IOManager::dtor (via 0x4345E0/0x434550) | tearing down IOManager state + LFM.                                              |
| 0x004348B0  | **LFM::HazardPointerAssign**          | Stores new node into `*ECX[hpSlot]`, `Decrement` previous, `Increment` new. **Misnamed in symbol catalog as "DoublyLinkedQueueInsert" — this is NOT a queue insert.** |
| 0x00435060  | (per-frame "attach particle" helper, not LFM) | Calls into renderer; uses Increment/Decrement on a generic refcount field. |
| 0x00435300  | QueuedHead::Run (BSTaskThread payload) | Calls `FaceGen_GatingFunction` (0x523220), stores results into `[+0x24]/[+0x28]` with refcount swap. **No re-queue here.** |
| 0x004354A0  | QueuedHead::Finalize                  | Sets state=5, dispatches vtable[0x28] (the IOManager finalizer thunk).            |
| 0x00438060  | ModelLoader::QueueReference           | Allocates one of 5 `Queued*` tasks (5 ctors at 0x437c30, 0x437e20, 0x437f00, 0x437fe0, 0x438020) then enqueues via vtable+0xC. |
| 0x004392E0  | ModelLoader::CancelPending_helper2    | Iterator over LFM bucket releasing pending refs.                                  |
| 0x00439B90  | ModelLoader::CancelPending_helper     | Same, calls IOManager.                                                            |
| 0x00439DC0  | ModelLoader::CancelPendingForRefr     | Called from `TESObjectREFR::Set3D` (0x4E0FC3) when refr's prior 3D matches new.   |

---

## 3. Hazard-pointer / deferred-free protocol (the LFM)

### Acquire a hazard pointer to bucket node N
(verified against `LockFreeMap_TraversalHelper` at 0x431E10 and `LockFreeMap::FindOrErase` at 0x432A60):

1. `ECX[2] := node` (publishes hazard pointer slot 2; `ECX[1]` is slot 1).
2. CAS-validate: re-read `*bucket_head_addr`; if it changed, retry from step 1
   (`while (*ECX[4] != ECX[5] & ~1)`).
3. Use the node — read key (`*N`,`N[1]`), call vtbl predicate `vtbl[0x28]`.
4. To release: `ECX[1]/ECX[2] := 0` (no Decrement; the Decrement happens only when the
   slot is *overwritten* with a different live ptr — this is the lazy-RCU convention).

### Schedule a node for deferred free
(verified against `LockFreeMap_DeferredListWalkHelper` at 0x432A00 and the inner
"otherwise" branch of `LockFreeMap_IteratorAdvance` at 0x432C30):

1. CAS-mark the node's `next` field with the low bit (`old | 1`).
2. CAS-splice it out: `*bucket_head = old.next & ~1`.
3. `node.next := ECX[7]` (push onto deferred-free list head).
4. `ECX[8] += 1`.
5. `ECX[7] := node`.
6. If `ECX[8] == [vtable+0x10]` → `LockFreeMap::CollectDeferredFrees` (sub_4328B0).

### Reclaim deferred-free nodes
(verified against `LockFreeMap::CollectDeferredFrees` at 0x4328B0):

1. Snapshot the global "active hazard set" by `memcpy([vtable+4], buf, count*0xC)` (3
   pointers per slot × `[vtable+0x14]->[0]` slot count).
2. Walk the per-thread deferred list (head at `ECX[7]`, linked via `[node+8]`):
   for each node, `memcmp` against the hazard set;
3. If no thread holds it: clear `[node+8]`, call vtable dtor `vtbl[0x20](k0,k1)`, free.
4. If any thread holds it: re-link onto the kept list, increment retained count.

### State machine (CMPXCHG jump table)
(verified against `IOManager_TaskStateTransition` at 0x432130, jump table at 0x432204):

`[task+0xC]` is the state, values 0..5 dispatch to:

| State | Transition                                                                |
|-------|---------------------------------------------------------------------------|
| 0     | CAS 0→6, then call `vtbl[0xC]()` (TaskRun) and return.                   |
| 1     | CAS 1→6, then `vtbl[0xC](0)` + `LockFreeMap::DispatchVtblFn`.            |
| 2     | (jump-table "default") CAS to 6, dispatch+register.                      |
| 3     | Spin Sleep(1) until state≠3.                                              |
| 4     | Spin Sleep(1) until state≠4.                                              |
| 5     | CAS 5→6, dispatch.                                                        |

State 6 is the terminal "running / claimed by thread" state.

---

## 4. The crash-site map

All addresses verified against the disasm dumps. Each crash hits a load of a
node-or-bucket pointer that the protocol *just verified* with CAS — meaning the AV
implies the node was reclaimed-and-reused (UAF) between the verification and the use.

| Crash signature       | VA        | Instruction                              | Phase / what's being read                                                  |
|-----------------------|-----------|------------------------------------------|----------------------------------------------------------------------------|
| `sub_4328B0+0x5A`     | 0x43290A  | `mov eax, [esi+8]`                       | **CollectDeferredFrees**: walking the kept-list, reading `next` of node `esi`. AV ⇒ node freed by another thread mid-walk. |
| `sub_4328B0+0x75`     | 0x432925  | `mov [esi+8], ecx` (after `mov edx,[esi+4]`) | **CollectDeferredFrees**: writing to a node whose vtable dtor `vtbl[0x20]` we just dispatched — fault on next-link clear of a freed node. |
| `sub_4328B0+0xAE`     | 0x43295E  | `mov ebx, [esp+0x1c]`                    | Same function, register reload landmark; the actual fault is the previous instruction's `call vtbl[0x20]` against a stale pointer. |
| `sub_433BC0+0x191`    | 0x433D51  | `mov edx, [eax]`                         | **IterHelper2 worker drain**: vtable read on the result-node returned by `EraseFirstMatching`. Node was freed before the Decrement window closed. |
| `sub_432C30+0x44`     | 0x432C74  | `mov eax, [edx]`                         | **IteratorAdvance**: snapshotting bucket head — bucket array storage moved/freed. |
| `sub_432A60+0x29`     | 0x432A89  | `mov eax, [edx]`                         | **FindOrErase**: same load as above (sister function); same root cause.    |
| `sub_432130+0x72`     | 0x4321A2  | `pop ebp` (epilogue)                     | **TaskStateTransition**: stack-walker reports the epilogue but the fault is in the indirect `vtbl[0xC]` dispatch on a freed task in the case-1/case-5 branch. The pop is the symbolic-frame pin. |

Pattern: **every site is the load of a value that *should* be hazard-pointer-protected
but isn't, because the deferred-free list collected the node in a window where another
thread re-dereferenced it.** The protocol assumes load-traffic on each node is bounded
per render-frame; the FaceGen storm violates that bound by feeding the same NPCs back
in faster than `CollectDeferredFrees` can drain.

---

## 5. The FaceGen storm: where re-queue happens

### How a QueuedHead task is built and run

1. **Enqueue (main thread, per-frame)**: `ModelLoader::QueueReference` (sub_438060)
   is called from the per-frame Update path on each TESObjectREFR. It allocates one of
   five `Queued*` task instances (the appropriate ctor for the refr's record type), then
   calls `vtable+0xC` on the IOManager which routes the new task into IOManager's task
   list.

2. **Worker thread pulls task**: `BSTaskThread::Runnable` (sub_430DE0) calls
   `vtable+4` on the BSTaskThread. The dequeue path (in IOManager) state-transitions
   the task to `state=6` and calls its run function `vtbl[0xC]`.

3. **QueuedHead::Run** (sub_435300) calls `FaceGen_GatingFunction` (sub_523220) — the
   well-known gating function that, for "bad actors" (Quest-Item flagged TESNPCs whose
   `TESRace.unk12` array is empty), returns NULL/empty B1+B2 face structs.
   QueuedHead then writes those into `[task+0x24]` and `[task+0x28]`, refcount-decrementing
   the previous values.

4. **No re-queue inside the task**: `QueuedHead::Run` does NOT re-enqueue itself.
   It returns; finalizer (`QueuedHead::Finalize` at 0x4354A0) sets state=5 and
   the IOManager removes the task.

### The re-queue is in `FUN_004e0580` (per-frame TESCharacter::Update)

This is the critical finding. **Located at 0x4E0580**, called by `FUN_0065A7F0`
(`Character::Update` per-frame tick) → which is itself called from the Actor Update
chain. The body (decompile, lines 188-198 of seg_004e0000.c):

```c
if (((g_GameSettings >> 6 & 1) != 0) && ((param_1 & 0x40000000) != 0)) {
    if ((((uint)in_ECX[2] >> 0xb & 1) == 0) && (((uint)in_ECX[2] >> 5 & 1) == 0)) {
      if (((in_ECX[0xf] == 0) && (in_ECX[0x10] != 0)) &&
         ((cVar2 = *(char *)(in_ECX[0x10] + 0x26), cVar2 == '\x06' || (cVar2 == '\x03')))) {
        cVar2 = FUN_004354f0(in_ECX);          // "is QueuedHead already pending?"
        if (cVar2 == '\0') {                   // not pending
          uVar3 = FUN_00440c80(in_ECX[0x10],0);
          ModelLoader_QueueReference(in_ECX,uVar3);   // RE-QUEUE
        }
      }
    }
}
```

Decoded:

* `param_1 & 0x40000000` — the "needs 3D refresh" bit in the per-frame flag word.
* `in_ECX[0xf] == 0` — refr's `[+0x3C]` (the QueuedReference output slot) is **NULL**.
* `in_ECX[0x10] != 0` and `*(in_ECX[0x10]+0x26) == 6 or 3` — the refr's actorbase is
  set, and is a TESNPC (type 6) or TESCreature (type 3).
* `FUN_004354f0` is QueuedHead::IsPending — returns true if already in the queue.
* If the slot is empty AND nothing pending, **re-queue**.

This loop is **synchronous, main-thread, render-frame-rate**. It does not depend on
the task thread; the task thread's failure to populate `[+0x3C]` is exactly what
keeps this branch firing. With ~10 visible bad-actor refrs at 60 fps, this is
~600 ModelLoader::QueueReference calls per second → 600 LFM/IOManager state machine
runs per second → enough deferred-free traffic to outpace `CollectDeferredFrees`'s
hazard-pointer reconciliation.

Why an empty face-gen result causes re-queue (the answer to the user's question):
- `QueuedHead::Run` sees empty B1/B2 from the gating function.
- It writes those (NULL) into `[task+0x24]/[task+0x28]`.
- The per-frame Update sees `refr[0xf] == 0` (slot still empty).
- Update calls `IsPending` — task already finalized, returns false.
- Update re-queues. Repeat next frame.

### Synchronicity

The re-queue site is **synchronous on the main render thread**. The task thread
(`BSTaskThread::Runnable`) is a passive consumer that does not initiate re-queues.
Therefore:

* The producer (main thread / `Character::Update`) bombards the LFM with new task
  insertions at frame-rate.
* The consumer (BSTaskThread) drains them at task-completion rate.
* The deferred-free protocol's invariant is "hazard-pointer hold time is short relative
  to the rate at which a bucket churns." The storm violates this: nodes are inserted,
  marked, queued for free, and overwritten faster than `CollectDeferredFrees`'s scan
  can keep their pointers visible to the hazard set.

This is a classic reclamation-races-allocation UAF, exposed only by abnormally high
turnover.

---

## 6. New / corrected findings vs prior memory

* **sub_4348B0 was misnamed**: prior catalog (`oblivion-symbols.tsv`) calls it
  `LFM_DoublyLinkedQueueInsert`. Wrong. It's a single hazard-pointer slot reassign
  (3 lines of C: decrement old, store new, increment new). Update the catalog.
* **The re-queue is NOT in the task path**, contrary to the "respawn task on
  incomplete completion" hypothesis in the brief. There is no such path inside
  `QueuedHead::Run` or `IOManager::TaskStateTransition`. The re-queue is entirely
  on the main render thread, in `FUN_004e0580` (TESCharacter::Update flag-0x40000000
  branch).
* **Quest-Item flag is not even checked at re-queue time** — the re-queue gates on
  `refr[0xf]==0` (face slot empty) and base-form type 3/6 (NPC/Creature). Quest-Item
  flag drives whether `FaceGen_GatingFunction` returns empty; once empty, the
  re-queue trigger is purely "face slot still NULL."
* **Crash sites cluster in three functions, not eleven**: `CollectDeferredFrees`
  (sub_4328B0), `IterHelper2` (sub_433BC0), and the FindOrErase/IteratorAdvance
  pair (sub_432A60/sub_432C30). The other listed VAs are sibling helpers that
  appear in stacks because they share inlined accessors — but the actual faulting
  load is in those four.
