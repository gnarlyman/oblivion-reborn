# Oblivion (32-bit) Memory Analysis — Tools, Workflow, Plugins

**Date:** 2026-05-06  
**Target:** Oblivion.exe 1.2.0.416 + LAA on Windows 11 Pro (WoW64)  
**Audience:** OBSE plugin author / Ghidra reverser  
**Scope:** Vanilla 2006 game, NOT the 2025 Remastered

Companion file: `D:\Modlists\Reborn\research\OBLIVION_MEMORY_MAP.md` (engine-internals deep dive — heap layout, BSA caching, NIF/scene-graph, FormID exhaustion, persistent-ref accumulation).

You also already have: **`oblivion-monitor`** (your own Go utility, per-process VRAM/RAM/CPU sampler, in `_clones/`) — that gives you the live timeseries; this report covers what to *do* with it.

---

## 1. Tool Quick Reference

| Question | Tool | Why it's the right one |
|---|---|---|
| What categories is memory in (Image / Heap / Mapped / Stack / Free)? | **VMMap** snapshot (`vmmap -p Oblivion.exe`) | Only tool that breaks committed memory into mutually exclusive types |
| Is the address space fragmented? | **VMMap → "Largest free block"** | Direct, single-number answer |
| Live memory + per-process **VRAM**? | **System Informer** (Process Hacker rebrand, `winsiderss/systeminformer`) | Only free tool with per-process dedicated-VRAM column |
| Which call stack allocated the leak? | **ETW heap trace + WPA**, group by Type=AIFO | Captures every alloc/free with stack on a closed-source binary; PerfView is the easy front-end |
| Catch buffer overrun in *your* OBSE plugin at the exact write? | **gflags pageheap** (use **standard** mode on 32-bit, not `/full`) | Full pageheap doubles VA cost — 32-bit OOMs before the bug |
| Slow leak that needs overnight capture? | **DebugDiag 2.3.2** leaktrack | Lighter than ETW, dumps + analyzes automatically |
| Live trend graph during a play session? | **System Informer** + your `oblivion-monitor` | Sub-second refresh, custom columns |

**What to ignore:** Task Manager (rounds, hides VRAM per-process), Process Explorer (superseded by System Informer), Dr. Memory on Windows (incomplete port), weOCPS (deprecated, *causes* crashes with xOBSE 22.9+).

---

## 2. Working Set vs Private Bytes vs Commit vs Virtual Size

| Metric | What grows it | True-leak signal? |
|---|---|---|
| **Virtual Size (VA)** | VirtualAlloc reserves, mapped files, paged-out pages | No — reserves don't consume RAM |
| **Commit Charge / Private Bytes** | malloc/new + page-file backing | **Yes** — sustained growth = leak |
| **Working Set** | Physical pages currently mapped in | **No** — shrinks just from minimizing the window |

Decision rule for a 30-min idle session:
- Private Bytes 600 → 800 MB steady = **leak**
- Private Bytes flat, Working Set oscillates = **paging, not a leak**
- Private Bytes flat, **Largest Free Block** drops 800 → 50 MB = **fragmentation**, not a leak

---

## 3. Workflow — "Is Oblivion Leaking Right Now?"

### Phase 1 — Baseline (T=0)
1. Fresh save in a stable interior (e.g., your TestCell, or Cheydinhal Tavern).
2. Wait ~60s for full settle (NPCs idle, no streaming).
3. VMMap snapshot → record `Private Bytes`, `Largest Free Block`, sum of Heap regions.
4. Optional: start `oblivion-monitor` CSV log @ 5s intervals.

### Phase 2 — Cell loop (T=0…20m, the plateau test)
1. Walk Cell A → Cell B → A, every 2 minutes, for 15–20 min.
2. Sample every 5 minutes: `Private`, `Largest Free`, ratio `Largest_Free / Total_Free`.
3. Expected: rapid growth in first 5 min, then **plateau**. If no plateau by T=20m, flag.

### Phase 3 — Soak (T=20m…90m)
1. Wander diverse terrain (city → wilderness → dungeon).
2. Continue sampling every 10 min.
3. **Save & immediately reload** at T=60m. Compare post-reload `Private` to pre-save:
   - Drops > 20% → leak was in script/quest state (mod misbehavior)
   - Drops < 5% → leak is in allocator/DLL state (engine or OBSE plugin)

### Phase 4 — Diagnosis matrix (read after the run)

| Private Bytes trend | Largest Free trend | Working Set | Verdict |
|---|---|---|---|
| Climbs continuously | Drops in lockstep | Climbs | **True leak** — go to ETW heap trace |
| Plateaus by T=15m | Stable | Oscillates | **Healthy** (cell streaming + LRU eviction working) |
| Plateaus | Drops sharply | Stable | **Fragmentation** (DLL layout). Restart every ~2h is the practical answer |
| Flat | Flat | Flat | **VRAM-only leak** (texture pool / shader cache) — check System Informer GPU column independently |

**Threshold numbers practitioners actually use:**
- Ratio `Largest_Free / Total_Free` > 0.30 → healthy
- < 0.10 → next big alloc will fail; CTD imminent
- 32-bit + LAA hard ceiling: ~3.5–3.8 GB private bytes (DLL layout dependent)
- Vanilla Oblivion (no LAA): ~1.6–1.75 GB before CTD

### Phase 5 — Find the call stack (only if Phase 4 = "True leak")

Capture an ETW heap trace (PerfView is the easiest front-end):
```
PerfView /AcceptEULA /CircularMB:500 /merge:true /zip:true collect
# play the leak scenario for 20 min
# Ctrl+C
PerfView <output.etl.zip>
# Memory > Heap Allocations > Stack/Type pivot
# Filter Type = AIFO  (Allocated Inside trace, Freed Outside) — these are leaks
# Sort by Impacting Size desc → top stack = your culprit
```

Bruce Dawson's heap-trace post is the canonical reference: <https://randomascii.wordpress.com/2015/04/27/etw-heap-tracingevery-allocation-recorded/>

---

## 4. Oblivion-Specific Memory Plugin Stack

### Recommended baseline (heavy modlist)
```
4GB Patch (NTCore, LAA flag on Oblivion.exe)
xOBSE 22.13+   (llde fork — fixes InventoryReference leak, ExtraWorn leak, GetInvRefsForItem O(n)→O(1))
OSR / Oblivion Stutter Remover  (iHeapAlgorithm=6 ThreadHeap3, iHeapSize=768–1024)
EngineBugFixes  (Tiawar — orthogonal heap-corruption guards)
ENBoost  (enblocal.ini [MEMORY] — VRAM virtualization, only if not running OR memory manager)
```

### What each touches
- **OSR heap**: replaces engine malloc with FastMM4 / TBBMalloc / ThreadHeap3 / tcmalloc. Algorithm 6 is the modern default. Most-impactful single fix for fragmentation.
- **EngineBugFixes**: surgical patches; mixed-allocator UB guards; cell-buffer overallocation cap.
- **ENBoost**: D3D9 wrapper; pages texture allocations to system RAM if VRAM exhausted. Mutually exclusive with ENB graphics presets and with Oblivion Reloaded's memory manager — pick one.
- **xOBSE 22.13** (vs xOBSE 22.10): InventoryReference fixed in 22.11 — if you're on 22.9 with old IR-using mods, upgrade.

### Known broken / deprecated
- **weOCPS** — deprecated; masks crashes with corrupted return values, *causes* crashes with xOBSE 22.9+. Remove.
- **Pluggy** — heavy persistent buffers, not recommended for new installs.
- **Sheson's Skyrim heap patch / NVTF / SSE Engine Fixes** — DO NOT port to Oblivion. Different allocator profile. (You already learned this lesson with the OverlayFix investigation — same answer here.)

### Vanilla leak classes you may hit
1. **Scene-graph reload on FaceGen** — addressed by your Blockhead-Reborn v569 stack
2. **Persistent-ref accumulation in saves** — quest items with bit 0x400 not deregistered (you're already tracking this)
3. **AI-package thrashing** (high-`Use Horse` PKDT bit churns LFM/IOManager) — your Patrol Walk Fix mitigates symptoms
4. **Cell-buffer cascade** — `purgecellbuffers` console / `bPreemptivelyUnloadCells=1` is the engine-side handle
5. **Shader cache accumulation** — Oblivion Reloaded's purger (or restart)

### Tunable Oblivion.ini handles
- `uInteriorCellBuffer=12` (vanilla); raise to 24 only with OSR/ENBoost
- `uExteriorCellBuffer=144` (vanilla); ceiling 288 with heap replacement, do not exceed 512
- `bPreemptivelyUnloadCells=1` — engine-driven LRU eviction; lighter than scripted PCB

---

## 5. 32-bit Address Space — Why Fragmentation Bites

User VA layout (no LAA, 0x00000000–0x7FFFFFFF, 2 GB):
```
0x00400000  .exe image
0x70000000  ntdll.dll
0x77000000  kernel32.dll
0x75000000  user32.dll
... gaps between rebased DLLs ...
allocatable space = the holes between fixed loads
```

DLL relocation by /DYNAMICBASE bisects the free hole repeatedly. With 100+ OBSE plugins each loading their own DLLs, you end up with 1 GB committed across 10+ disjoint pieces — `Largest Free` stuck at 100 MB even though `Free` is 900 MB. Mitigations: rebase your own DLLs explicitly with `editbin /BASE:0x65000000`, claim a contiguous heap arena early, and make sure LAA is on (extends ceiling to ~3.5 GB).

Inspect with VMMap → sort by Address column → look for the gap pattern.

---

## 6. Sources (selected, high-signal)

**Practitioner sources** (people who actually patched these binaries):
- xOBSE — <https://github.com/llde/xOBSE> — issues + release notes are the leak-fix log
- Bruce Dawson on ETW — <https://randomascii.wordpress.com/2015/04/27/etw-heap-tracingevery-allocation-recorded/>, <https://randomascii.wordpress.com/2015/09/24/etw-central/>
- ENBSeries — <https://enbdev.com> (ENBoost docs in `enblocal.ini` `[MEMORY]`)
- Oblivion Stutter Remover — <https://www.nexusmods.com/oblivion/mods/23208>

**Docs / canonical references:**
- Sysinternals VMMap — <https://learn.microsoft.com/en-us/sysinternals/downloads/vmmap>
- Microsoft heap tracing events — <https://learn.microsoft.com/en-us/windows/win32/memory/memory-management-tracing-events>
- DebugDiag 2.3.2 — <https://www.microsoft.com/en-us/download/details.aspx?id=103453>
- System Informer — <https://github.com/winsiderss/systeminformer>
- NTCore 4GB Patch — <https://www.ntcore.com/4gb_patch.php>
- UESP — Large Address Aware — <https://en.uesp.net/wiki/Oblivion_Mod:Large_Address_Aware_Patch>
- CS wiki — PurgeCellBuffers — <https://cs.uesp.net/wiki/PurgeCellBuffers>
- STEP — EngineBugFixes — <https://stepmodifications.org/wiki/Oblivion%3AEngineBugFixes>

**Lower-confidence, treat with care:**
- Generic Stack Overflow / aggregator pages on memory tools (no skin in the Oblivion game)
- Older Bethesda forum threads (technically right, but pre-xOBSE-22 advice is often stale)
