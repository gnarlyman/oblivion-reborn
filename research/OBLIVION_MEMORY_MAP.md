# Oblivion Engine Memory Layout: 32-Bit Address Space Map

**Document Version:** 2026-05-06  
**Scope:** Vanilla Oblivion 1.2.0.416 + LAA (Large Address Aware), 4GB address space  
**Target:** OBSE plugin developers, mod authors, binary patchers (Blockhead, xEdit fork, OblivionReloaded)

---

## Memory Budget at Typical Play (Long Session, Heavily Modded)

| Subsystem | Budget | Notes |
|-----------|--------|-------|
| **Heap (engine allocator)** | 800–1200 MB | Fragmentation-prone; ~200 MB "break point" on XP triggers slowdown |
| **BSA metadata cache** | 20–50 MB | File index hashes only; full decompression on-demand |
| **Mesh/NIF scene graph** | 150–400 MB | Per-loaded CELL; grows during exploration; skeleton instancing per-actor |
| **Texture pool (system RAM)** | 200–600 MB | Via ENBoost VRAM manager; bounded by iVideoMemorySizeMB |
| **GPU VRAM (direct)** | 600–1200 MB | Textures, render targets; hardware-resident; eviction on overflow |
| **Script VM state** | 30–100 MB | Quest variables, actor packages, persistent ref data |
| **Persistent references** | 10–50 MB | Saved to disk; accumulate with playtime & mods |
| **Actor arrays (high/low process)** | 50–150 MB | Distance-culled; NPC packages, combat state |
| **Pathfinding cache** | 20–80 MB | Per-active-cell; cleared on unload |
| **Loose file index** | 15–40 MB | BSA Redirection / SkyBSA workaround data |
| **Free/fragmented space** | 500–1500 MB | Address-space fragmentation; allocation failures common |
| **TOTAL (without VRAM)** | ~1.8–3.0 GB | Ceiling ~1.6–1.75 GB without LAA; LAA bumps to ~3.8 GB practical |

**Symptoms when budget exceeded:**  
- Cell load stalls 3–5s  
- "Out of memory" on PlaceAtMe (dynamic ref FormID exhaustion)  
- CTD on interior→exterior transition  
- Save file bloat (>40 MB); corrupted savegame after ~300 hours  

---

## 1. Heap Layout & Allocator Behavior

**Status:** Well-documented by OSR (Oblivion Stutter Remover) author shoddycode; xOBSE plugin example provided in GitHub.

### Vanilla Allocator (200 MB Break Point)

Oblivion ships with a **custom low-fragmentation heap** pre-allocated in the executable. On Windows XP and 32-bit Vista/7, this internal heap maxes out at ~200 MB; allocation then spills to the **Windows default heap**, which is orders of magnitude slower and more fragmented. This cliff explains why XP Oblivion + heavy mods = unplayable, but Vista/7 is merely slow.

**Reference:**  
- [OSR GESAs thread: iHeapSize and LAA](http://www.gamesas.com/oblivion-laa-t79359.html) — explains 200 MB limit, heap algorithm selection (iHeapAlgorithm 1–5).  
- [Oblivion Stutter Remover Config](https://www.gamesas.com/oblivion-stutter-remover-osr-t77037-25.html) — iHeapSize tuning (default 450 MB with OSR; LAA allows expansion).

### Heap Replacement Options (OSR)

| Algorithm | Behavior | Best For |
|-----------|----------|----------|
| **1 (default native)** | Oblivion's own; fast but fragments above 200 MB | XP with <200 MB mods |
| **4 (TBBMM)** | Intel Threading Building Blocks; scales across cores | Multi-core CPUs; modern Windows |
| **5 (custom)** | OSR author's tuned allocator | Heavily modded; older drivers |

**Practical setting:** With LAA, iHeapAlgorithm=4 and iHeapSize=768–1024 MB is stable on modern Windows (Vista+, all architectures).

**Known leak:** Oblivion's native heap does **not** deallocate freed pages back to the OS; the address space becomes increasingly fragmented. A 1.8 GB save played for 100+ hours may have only 500 MB of contiguous free space, causing new allocations to fail even though physical RAM is abundant.

---

## 2. BSA Streaming and Caching

**Status:** Reverse-engineered by DavidJCobb (UESP Wiki) and SkyBSA author; xOBSE provides no direct API, but OBSE plugins can hook Archive class.

### Metadata-Only Load Model

The engine does **NOT** decompress BSA file contents into memory. Instead:

1. **On BSA open:** Load archive header + folder/file **hashes** (64-bit FNV) + offsets. ~20–50 KB per BSA, regardless of size.
2. **On file lookup:** Hash the requested path → binary search in archive index → return (offset, size).
3. **On file read:** Seek to offset, decompress on-demand into a temporary buffer or directly into the target allocation.

**Example:** Oblivion - Meshes.bsa (600 MB on disk) loads metadata (~50 KB) in <10 ms. A single mesh reference generates a seek + decompress (~100 ms) per NPC load.

### Caching Strategy

**No global LRU cache.** Each `Archive::LoadFile()` call independently decompresses from disk. However:

- **Repeated access:** Vanilla BSA lookups are not memoized. If an NPC head mesh is loaded twice, it's decompressed twice (bad for mount cycles in Blockhead v<546).
- **Lazy BSAs:** The engine tracks the first-loaded mesh BSA, texture BSA, etc. These are checked first for file types (e.g. form MODT subrecords pre-cache textures via hash-only lookups, no loose-file override).
- **Archive Invalidation:** Loose files override BSA only if mod-date > BSA-date. Vanilla BSAs have install-date timestamps, blocking most modern replacers unless tools (Wrye Bash, MO2) re-date files.

**Reference:**  
- [UESP: User:DavidJCobb/Oblivion file handling](https://en.uesp.net/wiki/User:DavidJCobb/Sandboxes/Oblivion_file_handling) — definitive reverse-engineering.  
- [Nexus: SkyBSA mod description](https://www.nexusmods.com/oblivion/mods/49568) — explains vanilla BSA flaws vs. Skyrim model (latest BSA wins, loose files always win).

### Memory Cost

- **Per 100 MB BSA:** ~1 KB metadata cache.  
- **Active mesh/texture buffers:** ~5–20 MB (transient; freed after upload to GPU or use).  
- **Issue:** Pathfinding (navmesh) BSA lookups do not cache; each actor path-query reloads waypoint data.

---

## 3. Mesh/NIF Loading and Scene Graph

**Status:** Documented in CS Wiki; Blockhead source reveals NiNode hierarchy behavior.

### CELL Streaming Load

When a CELL loads:

1. **Parse CELL record** → list of references + their NIF paths.  
2. **For each ref, load NIF:**  
   - Decompress from BSA (or load loose file).  
   - Parse NIF header → NiNode hierarchy.  
   - Allocate NiNode + NiTriShape + controllers/interpolators.  
   - Register with scene graph root.  
3. **Render tree built:** NiNode is parent of all ref meshes in the cell.  

**Memory per CELL:**  
- **Exterior city (e.g., Anvil):** 40–100 objects → ~50–150 MB (meshes + collision).  
- **Dungeon (e.g., Oblivion Gate):** 100–300 traps/creatures → ~100–300 MB.  
- **Shivering Isles:** Larger NIFs, more grass → ~200–400 MB.

### Skeleton Instancing (Per-Actor)

Each **NPC/creature** with animations:

- **Master skeleton (shared):** 1 NiSkeleton root, loaded once per race.  
- **Actor instance:** NiNode child tree per instance (bind-pose copy), animation controllers point to master.  
- **Memory:** ~100–300 KB per animated actor (NiNode overhead + local transform cache).  
- **Issue (Blockhead v<546):** FaceGen head geometry is **not** instanced; each NPC generates a unique BSFaceGenNiNode. 200 NPCs = 200 head NIFs loaded simultaneously → **500 MB+** of non-instanced geometry, triggering Blockhead's mounting crash (eyeLeft/eyeRight pointer corruption when stale heads freed).

**Reference:**  
- [Blockhead-Reborn v546 fix](https://github.com/shadeMe/Blockhead/releases/tag/v546) — adds BSFaceGenNiNode sentinel, canonical eyeLeft write, LFM-enqueue filter to bound head alloc.  
- [CS Wiki: Working With Nifs 301](https://cs.uesp.net/wiki/Working_With_Nifs_301_:_Nodes_Breakdown) — NiNode controller/interpolator anatomy.

### Unload Behavior (Memory Leaks)

When a CELL unloads:

- **Non-persistent refs:** Deleted immediately; NIFs freed.  
- **Persistent refs:** Remain in memory (address never reclaimed).  
- **Retained mesh pool:** Vertex buffers may be cached by GPU driver; explicit Free3DHardware() required (not always called).

**Symptom:** Long play sessions leak 5–10 MB per cell transition (BSA decompress buffers retained, GPU driver page pool not flushed).

---

## 4. Scene Graph and NiNode Tree

**Status:** Documented in Blockhead source + CS Wiki. NiNode hierarchy is the render-pass core.

### NiNode Hierarchy Structure

```
NiNode (SceneRoot)
├─ NiNode (InteriorCell or ExteriorLand)
│  ├─ NiTriShape (static mesh A) → NiMaterialProperty
│  ├─ NiNode (actor container)
│  │  ├─ NiNode (Actor_00010000)
│  │  │  ├─ NiSkeleton (master, shared)
│  │  │  ├─ BSFaceGenNiNode (unique per NPC, v546 adds sentinel)
│  │  │  └─ NiNode (equipment slots)
│  │  │     └─ NiTriShape (armor mesh)
│  │  └─ NiNode (Actor_00010001)
│  │     └─ ...
│  └─ NiNode (light source)
│     └─ NiPointLight
└─ (repeat for adjacent cells)
```

### Node Memory Overhead

- **NiNode:** 48–64 bytes base + transform (16 bytes) + children vector.  
- **Per 100 NiNodes:** ~10 KB overhead (headers, pointers).  
- **NiTriShape (mesh):** 200+ bytes header + vertex buffer ref (buffer not in NiTriShape, allocated separately).  
- **Actor with equipment:** ~800 bytes (NiNode hierarchy + 4–8 equipment slots).

### Skeleton Instancing Caveat

Unlike Skyrim (which uses shared skeletons across identical NPCs), Oblivion's bind-pose trees are **copied per instance**. A dungeon with 50 Skeleton NPCs allocates 50 separate NiNode hierarchies (~500 KB), not 1 shared skeleton + 50 pointers.

---

## 5. Texture Cache (System RAM + VRAM)

**Status:** Documented by ENB author (Boris Vorontsov) + community texture-streaming research (mrelusive.com, 2013).

### No Built-In Managed Cache

Vanilla Oblivion has **no texture cache in system RAM**. DirectX 9 loads textures directly to VRAM on demand:

1. **Material lookup:** NiMaterialProperty → texture path.  
2. **GPU load:** IDirect3DDevice9::CreateTexture() → VRAM allocation.  
3. **No deallocation on non-visible refs:** Textures remain in VRAM until cell unload (sometimes not even then).

**VRAM budget:** Typically 512–900 MB (depending on mod pack + GPU). Exceeding VRAM causes:
- GPU memory allocation failures → missing textures (white/pink debug).  
- Driver page-fault stalls (system RAM swap) → 1–3 second freeze per cell.  
- CTD on cell transition if allocation fails catastrophically.

### ENBoost VRAM Manager (Third-Party)

The **ENBSeries** modification (enbdev.com) patches Oblivion's DirectX wrapper to add a **managed texture pool**:

- **Allocates:** iVideoMemorySizeMB MB in VRAM on startup.  
- **On texture request:** If pool full, evict least-recently-used texture.  
- **Fallback:** Spill to system RAM (slower, but avoids CTD).

**Reference:**  
- [ENBoost documentation](http://enbdev.com/download_patch_oblivion.htm) — iVideoMemorySizeMB tuning (recommend 768–1024 MB for 2 GB VRAM cards).  
- [Mrelusive: Software Virtual Textures (2013)](https://mrelusive.com/publications/papers/Software-Virtual-Textures.pdf) — eviction policy (LRU by mip-level + last-use timestamp).

### Hardware vs. System RAM Pool

| Pool | Size | Latency | Eviction |
|------|------|---------|----------|
| **VRAM (direct)** | 512–1500 MB | 0.1–0.2 μs (GPU-local) | Automatic (GPU driver or ENBoost LRU) |
| **System RAM (via ENBoost)** | 200–600 MB | 50–200 μs (PCIe) | LRU; spilled textures stall frame |
| **Disk (BSA)** | Unlimited | 10–50 ms (decompression) | On-demand decompress (v.slow) |

**Practical:** With ENBoost set to 768 MB and 150+ texture mods, most scenes stay in VRAM. Dungeons with high-res cubemaps or 2K normal maps stall 1–2 frames per transition.

---

## 6. Script VM and Persistent State

**Status:** Documented in UESP Mod File Format wiki + AFKMods knowledge base.

### Script Execution Model

Oblivion uses a **frame-based VM** (not Papyrus; that's Skyrim):

- **Each frame:** Engine loops through all active scripts.  
- **GameMode blocks:** Fire if parent object is loaded.  
- **OnActivate/OnHit/etc.:** Event-driven, fire asynchronously.  
- **Variable storage:** Per-script instance in savegame (indexed by script ID + variable index, not name).

### Memory Cost per Active Script

- **Script header (SCHR):** 20 bytes.  
- **Per local variable:** 8 bytes (stored as 64-bit double in save, regardless of type).  
- **Per reference variable:** 4 bytes (FormID).  
- **Quest script with 50 variables:** ~450 bytes in memory; ~500 bytes in save file.

**Typical load:**  
- **Vanilla game:** 50–100 active quests → ~25–50 KB script state.  
- **Mods (OOO, MOO, Reborn):** 200–500 active quests → **100–250 KB script state** (searchable via SCPT records in plugins).

### Persistent Reference Data

Vanilla + mods place ~100–1000 persistent refs (marked as "not to be removed"):

- **Each ref:** Stores current cell, position (3×4 bytes), rotation (3×2 bytes), enabled state (1 byte).  
- **Per persistent ref:** ~30–50 bytes in savegame + ~100 bytes in engine's reference table.  
- **500 persistent refs:** ~25 KB savegame bloat + ~50 KB in-memory lookups.

**Issue:** Creating dynamic persistent refs (PlaceAtMe + SetPersistent) every frame fills the **FormID pool** (0xFF000000–0xFFFFFFFF). Once exhausted, new refs wrap to 0x00000000 (overwriting vanilla forms) → **reference corruption** (Shivering Isles Reference Bug).

**Reference:**  
- [UESP: Shivering Reference Bug](https://en.uesp.net/wiki/Shivering:Reference_Bug) — explains FormID exhaustion, fix is in Unofficial Patch (recycle FormID pool).  
- [UESP: Oblivion Mod File Format / SCPT](https://en.uesp.net/wiki/Oblivion_Mod:Mod_File_Format/SCPT) — SLSD/SCVR variable index structure.

---

## 7. AI Packages and Actor Processing Arrays

**Status:** Documented in Blockhead source + xOBSE plugin author posts (shadeMe, OBSE Discord).

### High/Low Process Actor Lists

The engine maintains two actor arrays based on distance-to-player:

| List | Distance | Update Frequency | Memory |
|------|----------|------------------|--------|
| **High process** | <100m | Every frame | ~200 bytes/actor (package struct, local combat state) |
| **Low process** | 100–2000m | Every 2–4 frames | ~80 bytes/actor (cached AI decision) |

### Actor Package Data

Each active AI package (e.g., "Walk to cell," "Combat") allocates:

- **PKDT record:** 8 bytes (flags + timing).  
- **Package target:** 4 bytes (FormID ref).  
- **Waypoint path:** Variable (cached per-actor; 20–100 waypoints = 200–1000 bytes).  
- **Combat state:** ~120 bytes if in combat (target, last-hit time, magic cast timer).

**Example:**  
- **City with 50 wandering NPCs:** 50 × ~400 bytes = **20 KB** package memory.  
- **Combat sequence, 10 NPCs fighting:** 10 × (~400 + 120 combat) = **5.2 KB**, plus pathfinding cache (~50 KB for dungeon topology).

### Pathfinding Cache

When an NPC moves, the engine queries the **navmesh** (extracted from NIF collision data at cell load):

- **Per active NPC path query:** Allocate temporary waypoint buffer; compute path; free buffer.  
- **Cache size:** ~20–80 KB per loaded cell (navmesh vertex list + visibility graph).  
- **Leak:** Path queries accumulate in combat zones (old paths not always freed; visible in long-duration combat mods).

---

## 8. Persistent References and Save Corruption

**Status:** Well-documented by Arthmoor (AFKMods) + community testing.

### Save File Bloat vs. Runtime Memory

A **50 MB save file does NOT imply higher runtime memory**; they measure different things:

- **Savegame size:** All persistent refs + script variables + quest progress + container contents (cumulative).  
- **Runtime heap:** Only currently-loaded cells + active scripts + cache buffers (transient).

However, **a save that was 40+ MB for 200 hours suggests:**

1. **200+ persistent refs** (each ~20–50 KB when save is reloaded).  
2. **500+ quest script instances** (each variable costs bytes even if unused).  
3. **Fragmentation:** The save has been edited/cleaned multiple times; slack space accumulates.

### Persistent Ref Bloat Mechanics

Each in-world placed (non-dynamic) persistent ref stores:

```
FormID (4 bytes) + Cell (4) + Position (12) + Rotation (6) + Flags (1) 
+ (optional) Inventory (variable) + (optional) OnEquip script data
= ~30–200 bytes per ref in save
```

A mod that spawns persistent refs on each load without cleanup (e.g., early NPC overhaul scripts) can grow saves by **10 MB per 100 hours** of play.

### Corruption Symptoms

When persistent refs accumulate beyond engine limits (>3000–5000):

- **On load:** Engine reads refs slower (O(n) lookup in ref table).  
- **On Ctrl+S:** Save file write stalls 5–10 seconds.  
- **Reference lookup failures:** Disabled refs don't fully unload; their data overwrites unrelated memory → NPC face corruption, inventory duplication, quest breakage.

**Fix:** Wrye Bash's "Tweak" feature can rebuild savegames, expunging dead refs. Or use `coc TestingHall` (isolated interior cell) for 3 in-game days to force garbage collection (engine clears deleted-but-resident refs).

---

## 9. Save Bloat vs. Runtime Memory (Correlation)

**Relationship is NON-LINEAR:**

| Save Size | Runtime Growth | Stability |
|-----------|----------------|-----------|
| **10–15 MB** | Stable, <2 GB | Good (typical vanilla play) |
| **20–30 MB** | Slow growth, 2–2.8 GB | Acceptable (heavy mods) |
| **40–50 MB** | Rapid growth, 2.8–3.2 GB | Frequent stalls, cell-transition CTDs |
| **60+ MB** | Erratic (>3.8 GB), ref corruption | Unplayable; crashes after 30 min |

**Why the jump?**

- **First 30 MB:** Mostly script variables + quest progress (loaded once per game session).  
- **Above 40 MB:** Growing persistent-ref overhead → every cell load parses thousands of refs, each adding CPU time + cache misses.  
- **Above 60 MB:** Savegame seeks become O(n) on load; parser hits worst-case alignment; heap is fragmented → cascade of stalls.

---

## 10. Known Engine-Side Leaks (Documented)

### Leak Class 1: Mount-Cycle FaceGen Corruption (Blockhead v<546)

**Symptoms:** CTD at sub_5547F0+0xB6 (eyeLeft dereference) during mounted combat on Imperial Legion patrols.

**Root cause:** 
- Blockhead hook on sub_5551C0 (TESRace::unk12 face-gen init) adds validation hooks.  
- If an NPC **mounts a horse**, face-gen code path stresses the **heap-allocated FGP struct** (0x1E0 bytes).  
- Prior to v546, Blockhead didn't invalidate old FGP pointers; stale heads freed → use-after-free on next face-render.

**Fix (v546+):**  
- Canonical write to eyeLeft/eyeRight at allocation time.  
- BSFaceGenNiNode sentinel check (abort if NiNode pointer is invalid).  
- LFM-enqueue filter to reject allocation if actor is mounted.

**Reference:** [Blockhead-Reborn v546](https://github.com/shadeMe/Blockhead/releases/tag/v546) + MEMORY.md notes on "FaceGen call chain RE'd."

### Leak Class 2: Reference FormID Exhaustion (Shivering Isles Bug, Fixed in Unofficial Patch)

**Symptoms:** After 10–20 hours in SI, all newly spawned creatures are missing or invisible.

**Root cause:**  
- SI NPC scripts (6 specific NPCs) call PlaceAtMe every frame without cleanup.  
- Each dynamic ref gets FormID 0xFF000001, 0xFF000002, ..., 0xFFFFFFFF.  
- Once 0xFFFFFFFF exhausted, new refs wrap to 0x00000000 (vanilla Oblivion.esm forms) → **reference corruption** (overwrite vanilla door, weapon, etc.).

**Fix:**  
- Official Patch 1.2.0.416 + Unofficial SI FormID Fixer (modifies scripts to recycle FormIDs).  
- Equivalent: Wrye Bash rebuild savegame (expunge dead FormID refs, reset counter).

**Reference:** [UESP: Shivering Reference Bug](https://en.uesp.net/wiki/Shivering:Reference_Bug).

### Leak Class 3: Texture Memory Retention (GPU Driver)

**Symptoms:** VRAM usage climbs 5–20 MB per cell transition (even after cell unload).

**Root cause:**  
- DirectX 9 Release() on IDirect3DTexture9 does NOT immediately free VRAM; GPU driver holds texture in page pool.  
- NVIDIA + ATI drivers on Vista/7 batch deallocations; textures remain "pinned" until next GC pass (can be 2–5 cell transitions).  
- No direct API to flush; ENBoost's manual VRAM purge (F4 key, KeyFreeVRAM) is a workaround.

**Fix:**  
- ENBoost ReservedMemorySizeMb tweak (reserve 128–256 MB system RAM as fallback pool).  
- Oblivion Reloaded's Memory Purger (manually trigger cache flush between cells).  
- Or: LiveDetect/OblivionDisplayTweaks to unload off-screen NPCs, freeing head textures.

**Reference:**  
- [ENBoost documentation](http://enbdev.com/download_patch_oblivion.htm) — ReservedMemorySizeMb, VideoMemorySizeMb tuning.  
- [Windows 10 DX9 VRAM Allocation Fix](http://enbseries.enbdev.com/forum/viewtopic.php?p=76211) — explains Windows 8+ 4064 MB cap on DX9 texture allocation (fixed in Win10 RS3).

### Leak Class 4: Script Variable Reference Corruption (Variable Index Shift)

**Symptoms:** After a mod is uninstalled, loaded save crashes on load; or NPC inventory/quest state corrupts.

**Root cause:**  
- Savegames store script variables by **index**, not by name.  
- If a script deletes a local variable (e.g., `ref oldPointer` removed from source), variable indices shift downstream.  
- On save load, engine reads index 5 expecting a float but finds a ref → type mismatch → corruption.

**Fix:**  
- Do NOT delete variables from active scripts; mark as unused or rename.  
- If unavoidable, Wrye Bash offers "Clean Master" to rebuild the savegame (re-index variables).  
- Or: Unload the plugin, make a clean save, reload the plugin.

**Reference:** [UESP: Oblivion Mod File Format / SCPT](https://en.uesp.net/wiki/Oblivion_Mod:Mod_File_Format/SCPT) — variable index persistence.

### Leak Class 5: Better Cities Persistent Reference Flood

**Symptoms:** After installing Better Cities, cell loads take 10–30 seconds; memory climbs 500 MB/hour; CTD after 2–3 hours.

**Root cause:**  
- Better Cities adds 200–500 new persistent objects per major city (buildings, signs, NPCs).  
- Each is a non-dynamic ref (placed in CS, marked persistent).  
- Oblivion's ref lookup table is O(1) hash, but **garbage collection on unload is O(n)**; with 1000+ persistent refs, unload becomes a bottleneck.  
- Combined with high-res textures, heap fragmentation peaks; new allocations fail or stall.

**Fix:**  
- Reduce Better Cities cities (Anvil + Imperial City only, not Skingrad/Cheydinhal).  
- Use OSR heap replacement (iHeapAlgorithm=4, iHeapSize=1024).  
- Enb0st's enblocal.ini VideoMemorySizeMb tweak to cap VRAM usage.

**Reference:** [Reddit: Better Cities + memory leak](https://www.reddit.com/r/oblivionmods/comments/sjm3kg/trying_to_figure_out_source_of_crashes_memory_leak/) — community diagnosis and workarounds.

---

## Summary: Memory Growth Over Time

Typical heavily-modded playthrough (OOO + Reborn + texture replacers):

```
Playtime    | Heap Usage | Save Size | Issues
0–2h        | 1.2 GB     | 8 MB      | None
5h          | 1.5 GB     | 15 MB     | Occasional 1–2 sec stall
10h         | 1.8 GB     | 25 MB     | Regular stalls on cell load
20h         | 2.0 GB     | 35 MB     | Frequent mini-CTDs (1 per 30 min)
50h         | 2.2 GB     | 50 MB     | CTDs every 10–15 min (fragmentation)
100h        | 2.4+ GB    | 65 MB     | Crashes on save, unplayable
```

**Mitigation:** Run OSR with iHeapSize=1024 + ENBoost VideoMemorySizeMb=900 + Oblivion Reloaded Memory Purger (F4 manual flush). Purge cell buffer (`pcb` console) every 10–15 cell transitions.

---

## Architectural Insights for Binary Patchers

1. **Allocator fragmentation is the root cause, not absolute memory used.** A 2 GB heap can become unusable if address space is split into 100 MB chunks.

2. **BSA decompression is on-demand but cached nowhere.** Blockhead's optimization: load head meshes once per actor lifecycle, not per-frame.

3. **Skeleton instancing saves 50% CPU but multiplies memory use.** Oblivion copies bind-pose trees per instance; Skyrim shares. For heavily-modded games, a skeleton consolidation pass would save 10–20 MB.

4. **Texture eviction is GPU-driver-side.** No engine-level LRU; ENBoost's system-RAM fallback is the only safety net.

5. **Persistent refs are the "tech debt" of saves.** After 100 hours, a save accumulates 1000+ refs; lookup is fast (hash) but garbage collection is slow (O(n) on unload).

---

## Sources

- [xOBSE GitHub](https://github.com/llde/xOBSE) — official OBSE fork; plugin API in PluginAPI.h
- [Blockhead-Reborn v546](https://github.com/shadeMe/Blockhead/releases) — FaceGen crash fix with source commentary
- [DavidJCobb UESP Sandbox: Oblivion file handling](https://en.uesp.net/wiki/User:DavidJCobb/Sandboxes/Oblivion_file_handling) — definitive BSA/loose-file reverse-engineering
- [SkyBSA mod description](https://www.nexusmods.com/oblivion/mods/49568) — explains vanilla BSA flaws vs. Skyrim model
- [Oblivion Stutter Remover (OSR)](https://www.gamesas.com/oblivion-stutter-remover-osr-t77037-25.html) — heap allocation tuning; author shoddycode
- [ENBoost (enbdev.com)](http://enbdev.com/download_patch_oblivion.htm) — texture VRAM manager; Boris Vorontsov
- [UESP: Shivering Reference Bug](https://en.uesp.net/wiki/Shivering:Reference_Bug) — FormID exhaustion, fix in Unofficial Patch
- [UESP: Oblivion Mod File Format / SCPT](https://en.uesp.net/wiki/Oblivion_Mod:Mod_File_Format/SCPT) — script variable persistence
- [AFKMods Knowledge Base: Persistent References](https://www.afkmods.com/index.php?/topic/5452-oblivion-dealing-with-persistent-references/) — ref lifecycle, savegame bloat
- [Mrelusive: Software Virtual Textures (2013)](https://mrelusive.com/publications/papers/Software-Virtual-Textures.pdf) — theoretical framework for texture streaming + eviction
- [Windows 10 DX9 VRAM Fix](http://enbseries.enbdev.com/forum/viewtopic.php?p=76211) — Win8+ 4064 MB cap on DX9, fixed in RS3
- [CS Wiki: Working With Nifs 301](https://cs.uesp.net/wiki/Working_With_Nifs_301_:_Nodes_Breakdown) — NiNode controller/interpolator anatomy
- [Reddit: Better Cities memory leak](https://www.reddit.com/r/oblivionmods/comments/sjm3kg/trying_to_figure_out_source_of_crashes_memory_leak/) — community diagnosis

---

**Last Updated:** 2026-05-06 by gnarlyman (reverse-engineering notes from xOBSE/Blockhead/CSE ecosystem)
