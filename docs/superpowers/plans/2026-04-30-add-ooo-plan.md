# Add OOO 1.7 to Reborn — Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.
>
> **Note for this plan specifically:** Per `feedback_subagent_overhead.md`, when writing-plans output is highly prescriptive, dispatching subagents per task is pure ceremony. This plan is highly prescriptive (MO2 GUI actions, file-system edits, Pascal scripts with full code). Inline execution via `superpowers:executing-plans` is the better fit.

**Goal:** Land OOO 1.7.0.0 + supporting patches into Reborn-Base alongside MOO, with documented conflict resolution and Wabbajack-packaged release, by progressing through 12 ordered tasks across 8 spec phases (A–H).

**Architecture:** Develop in a new `Reborn-OOO` MO2 profile. Install OOO suite (Phase B). Re-tag for Bashed Patch (Phase C). Build two new xEdit Pascal scripts — `analyze_apw_cr_ooo_overrides.pas` (Phase D) and `build_reborn_ooo_cr.pas` (Phase E) — to subset APW's CR ESP into a Reborn-specific CR ESP via human-curated decisions. Run conflict sweep (Phase F). Playtest soak (Phase G). Promote to `Reborn-Base` and recompile Wabbajack release (Phase H).

**Tech Stack:** Mod Organizer 2 (portable), Oblivion Stock Game, Wrye Bash 315.RC2, xEdit fork (`gnarlyman/TES5Edit` branch `feat/tmconflicts` per `reference_xedit_fork.md`), JvInterpreter Pascal (xEdit scripting), `oblivion-conflicts` v0.2 (per `project_oblivion_conflicts.md`), `oblivion-batch-compile` (per `reference_oblivion_batch_compile.md`), Wabbajack 4.2.1.3 CLI, Python 3 (existing `analyze_apw_cr.py`/`rebuild_manifest.py` patterns), Git for Windows.

**Spec:** `docs/superpowers/specs/2026-04-30-add-ooo-design.md` (commit `0049499`)

---

## File Structure

**New files created by this plan:**
- `D:\Modlists\Reborn\research\analyze_apw_cr_ooo_overrides.pas` — xEdit Pascal analyzer (Tasks 5–6)
- `D:\Modlists\Reborn\research\build_reborn_ooo_cr.pas` — xEdit Pascal builder (Tasks 8–9)
- `D:\Modlists\Reborn\research\apw_cr_ooo_overrides.csv` — analyzer output, long-form (Task 6)
- `D:\Modlists\Reborn\research\apw_cr_ooo_patterns.csv` — analyzer output, pattern groups (Task 6)
- `D:\Modlists\Reborn\research\cr_decisions.csv` — user-curated review decisions (Task 7)
- `D:\Modlists\Reborn\mods\Reborn - OOO Conflict Resolution\Reborn - OOO Conflict Resolution.esp` — final CR ESP (Task 9)
- `D:\Modlists\Reborn\mods\Reborn - OOO Conflict Resolution\meta.ini` — MO2 metadata (Task 9)
- `D:\Modlists\Reborn\profiles\Reborn-OOO\` — new MO2 profile dir (Task 1)

**Modified files:**
- `D:\Modlists\Reborn\research\manifest.csv` — multiple row updates + appends (Tasks 3, 4, 12)
- `D:\Modlists\Reborn\mods\SB_WeaponDropFix\` — file move from `optional/` to root (Task 1)
- `D:\Modlists\Reborn\profiles\Reborn-Base\modlist.txt` + `plugins.txt` + `loadorder.txt` (Task 12 promote only)

**Files used but not modified:**
- `D:\Modlists\Reborn\research\apw_cr_breakdown.csv` (reference data)
- `D:\Modlists\APW\mods\A Painted World Configs\APW - Conflict Resolution.esp` (analyzer input)
- `D:\Modlists\Reborn\mods\Reborn Configs\Maskar's Oblivion Overhaul.ini` (verified, not edited)

---

## Task 1: Phase A — Profile setup and SB Weapon Drop Fix relocation

**Files:**
- Create: `D:\Modlists\Reborn\profiles\Reborn-OOO\` (clone of Reborn-Base)
- Move: `D:\Modlists\Reborn\mods\SB_WeaponDropFix\optional\SB_WeaponDropFix_OOOFilterPatch.esp` → `D:\Modlists\Reborn\mods\SB_WeaponDropFix\SB_WeaponDropFix_OOOFilterPatch.esp`

- [ ] **Step 1: Verify Reborn-Base profile state before clone**

Run:
```bash
ls "D:/Modlists/Reborn/profiles/Reborn-Base/"
```
Expected output includes: `modlist.txt`, `plugins.txt`, `loadorder.txt`, `archives.txt`. If any are missing, stop and ask user.

- [ ] **Step 2: Verify MO2 is not running**

Run:
```bash
tasklist 2>/dev/null | grep -iE "ModOrganizer|Oblivion\.exe" || echo "OK - none running"
```
Expected: `OK - none running`. If MO2 or Oblivion is running, instruct user to close them before continuing (see `feedback_mo2_live_edits.md`).

- [ ] **Step 3: Clone Reborn-Base profile to Reborn-OOO**

Run:
```bash
cp -r "D:/Modlists/Reborn/profiles/Reborn-Base/" "D:/Modlists/Reborn/profiles/Reborn-OOO/"
ls "D:/Modlists/Reborn/profiles/Reborn-OOO/"
```
Expected: same files as Reborn-Base. If MO2 stores per-profile binary state files (`game_oblivion.bin`, `*.dat`), these are copied too — fine for a fresh dev profile.

- [ ] **Step 4: Verify clone byte-identical**

Run:
```bash
diff -r "D:/Modlists/Reborn/profiles/Reborn-Base/" "D:/Modlists/Reborn/profiles/Reborn-OOO/" && echo "IDENTICAL"
```
Expected: `IDENTICAL`. If diffs reported, investigate (likely a missing file in Base or a copy error).

- [ ] **Step 5: Relocate SB Weapon Drop Fix OOO Filter Patch**

The file lives in `optional/` (invisible to MO2 USVFS). Move it to mod root.

Run:
```bash
mv "D:/Modlists/Reborn/mods/SB_WeaponDropFix/optional/SB_WeaponDropFix_OOOFilterPatch.esp" \
   "D:/Modlists/Reborn/mods/SB_WeaponDropFix/SB_WeaponDropFix_OOOFilterPatch.esp"
ls "D:/Modlists/Reborn/mods/SB_WeaponDropFix/"
```
Expected: `SB_WeaponDropFix.esp`, `SB_WeaponDropFix_OOOFilterPatch.esp`, `ini/`, `optional/` (now empty).

- [ ] **Step 6: Verify the optional/ directory is now empty**

Run:
```bash
ls "D:/Modlists/Reborn/mods/SB_WeaponDropFix/optional/"
```
Expected: empty output. If files remain, they're unrelated to OOO and stay parked.

- [ ] **Step 7: Boot MO2, switch to Reborn-OOO profile, verify it loads identically to Reborn-Base**

Manual GUI step. Open MO2, click profile dropdown (top-left), select `Reborn-OOO`. Verify:
- Mod list left pane: same 92 enabled (`+`) entries as Reborn-Base
- Plugins right pane: `SB_WeaponDropFix.esp` shows enabled, `SB_WeaponDropFix_OOOFilterPatch.esp` shows in plugin list (now visible because it moved out of `optional/`) — leave it disabled for now (will activate in Task 3)

If the OOOFilterPatch ESP doesn't appear in the right pane, MO2 hasn't picked up the file move — refresh (F5) or restart MO2.

- [ ] **Step 8: Commit profile + relocation**

Run:
```bash
cd "D:/Modlists/Reborn"
git add profiles/Reborn-OOO/ mods/SB_WeaponDropFix/
git status
```
Expected: new profile dir staged + SB_WeaponDropFix file move staged.

```bash
git commit -m "phase A: clone Reborn-OOO profile, relocate SB OOO Filter Patch out of optional/"
```

---

## Task 2: Phase A.5 — Pre-flight verification

**Files:** read-only checks on existing downloads.

- [ ] **Step 1: Verify OOO BSA mtime matches OOO ESM mtime**

Run:
```bash
"C:/Program Files/7-Zip/7z.exe" l "D:/Modlists/Reborn/downloads/OOO Esps-46199-1-7-1777224018.7z" 2>/dev/null | grep "Oscuro's_Oblivion_Overhaul.esm"
"C:/Program Files/7-Zip/7z.exe" l "D:/Modlists/Reborn/downloads/OOO BSA-46199-1-7-1777223944.7z" 2>/dev/null | grep "Oscuro's_Oblivion_Overhaul.bsa"
```
Expected: both lines show `2026-04-26` mtime. If they differ, the BSA is out-of-date with the ESM — re-download the matching BSA from Nexus 46199.

- [ ] **Step 2: Read OOO Unofficial Patch v2b readme/changelog**

Run:
```bash
"C:/Program Files/7-Zip/7z.exe" l "D:/Modlists/Reborn/downloads/OOO_Update_Patch_Compatable-54069-2b-1741691402.7z" 2>/dev/null | grep -iE "readme|changelog|\.txt"
```
Expected: at least one readme/txt file. Extract any found readme to stdout:
```bash
"C:/Program Files/7-Zip/7z.exe" e -so "D:/Modlists/Reborn/downloads/OOO_Update_Patch_Compatable-54069-2b-1741691402.7z" "*.txt" 2>/dev/null
```
Read what it claims to fix. **Default decision: keep the patch in the install set** unless the readme explicitly says "obsolete with OOO 1.7+". Record the decision in a brief one-liner.

- [ ] **Step 3: Verify OOO 1.7 readme is accessible (already extracted earlier)**

Run:
```bash
"C:/Program Files/7-Zip/7z.exe" e -so "D:/Modlists/Reborn/downloads/OOO Esps-46199-1-7-1777224018.7z" "OOO Readme.txt" 2>/dev/null | head -40
```
Confirms 1.7 changelog is readable. No action — just verifying file integrity.

- [ ] **Step 4: Verify all expected install archives are present**

Run:
```bash
for f in \
  "OOO Esps-46199-1-7-1777224018.7z" \
  "OOO BSA-46199-1-7-1777223944.7z" \
  "OOO - KotN Patch-46199-1-0-1702397495.7z" \
  "OOO Voice FIles-46199-1-0-1722704975.7z" \
  "OOO Custom Golem  Meshes-46199-2-0-1547315928.7z" \
  "OOO Shivering Isles-46508-V3-4-1765827274.7z" \
  "OOO_Update_Patch_Compatable-54069-2b-1741691402.7z"; do
    if [ -f "D:/Modlists/Reborn/downloads/$f" ]; then echo "OK $f"; else echo "MISSING $f"; fi
done
```
Expected: 7 OK lines. Note the double-space in "OOO Custom Golem  Meshes" filename — that's the actual Nexus filename, not a typo. If any MISSING, download from Nexus before proceeding.

- [ ] **Step 5: Capture pre-install plugin count baseline**

Run:
```bash
wc -l "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
grep -c "^[^#]" "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
```
Record both numbers. Will reference at end of Task 3 to confirm expected plugin count delta.

---

## Task 3: Phase B — Install OOO suite, activate ESPs, smoke-test

**Files:**
- Install via MO2 to `D:\Modlists\Reborn\mods\<modname>\` (MO2 manages directory creation)
- Modify: `D:\Modlists\Reborn\profiles\Reborn-OOO\plugins.txt`, `loadorder.txt` (LOOT will rewrite)
- Modify: `D:\Modlists\Reborn\profiles\Reborn-OOO\modlist.txt` (MO2 writes mod activations)

- [ ] **Step 1: Open MO2 with Reborn-OOO profile active**

Manual GUI step. Confirm top-left profile dropdown shows `Reborn-OOO`.

- [ ] **Step 2: Install OOO Esps via MO2**

Manual GUI step. Right pane → Downloads tab → double-click `OOO Esps-46199-1-7`. Choose:
- Mod name: `OOO - Oscuro's Oblivion Overhaul - Updated` (matches manifest line 241)
- If MO2 asks "FOMOD or simple install", choose simple

Verify mod appears in left pane (should be near bottom = lowest priority initially).

- [ ] **Step 3: Install OOO BSA via MO2**

Same procedure. Mod name: same as above (MO2 will ask to merge — yes, merge into existing mod). Verify the BSA appears under the mod's file tree in MO2's right-pane Filetree view.

- [ ] **Step 4: Install OOO KotN Patch**

Mod name: `OOO KotN Patch` (Reborn-added, new row).

- [ ] **Step 5: Install OOO Voice Files**

Mod name: `OOO Voice Files` (Reborn-added, new row).

- [ ] **Step 6: Install OOO Custom Golem Meshes**

Mod name: `OOO Custom Golem Meshes` (Reborn-added, new row).

- [ ] **Step 7: Install OOO Shivering Isles**

Mod name: `OOO Shivering Isles` (matches manifest line 243).

- [ ] **Step 8: Install OOO Updated Unofficial Patch**

Mod name: `OOO - Oscuro's Oblivion Overhaul - Updated (Unofficial patch)` (matches manifest line 242).

- [ ] **Step 9: Order new mods in MO2 left pane**

Position the new mods in priority order (per `project_apw_reborn.md` convention: top = highest priority). Drag in MO2 left pane:

```
... existing mods ...
+ OOO - Oscuro's Oblivion Overhaul - Updated
+ OOO Shivering Isles
+ OOO - Oscuro's Oblivion Overhaul - Updated (Unofficial patch)
+ OOO KotN Patch
+ OOO Voice Files
+ OOO Custom Golem Meshes
... rest ...
```

LOOT will sort the plugins (right pane) separately — this is just mod-folder priority for VFS file conflicts.

- [ ] **Step 10: Activate plugins in MO2 right pane**

Tick checkboxes on:
- `Oscuro's_Oblivion_Overhaul.esm`
- `Oscuro's_Oblivion_Overhaul.esp`
- `OOOShiveringIsles.esp`
- `OOO_Unoficial-Patch.esp`
- `Oscuro's_Oblivion_Overhaul - Knights of Nine.esp`
- `Cobl Tweaks - OOO.esp` (was disabled, enable now)
- `Cobl Tweaks - OOO Mergeable.esp` (was disabled, enable now — will be merged into Bashed Patch in Task 4)
- `MercerIngredientsOOO.esp` (was disabled, enable now)
- `SB_WeaponDropFix_OOOFilterPatch.esp` (now visible from Task 1 relocation, enable now)

Voice Files and Golem Meshes have no ESPs — only meshes/textures/sound, which deploy via VFS automatically once the mod folder is enabled in left pane.

- [ ] **Step 11: Run LOOT sort from within MO2**

Manual GUI step. Click "Sort" button in MO2's right pane (uses bundled LOOT). Per `project_apw_reborn.md`, LOOT works fine for Oblivion now; BOSS not needed.

Expected: plugins reorder. OOO.esm goes high (after vanilla ESMs); OOO patches sort after their masters.

- [ ] **Step 12: Smoke test — launch Oblivion via MO2**

Manual GUI step. Click "Run" → Oblivion (or whichever launch profile is configured). Wait for main menu.

Expected: game reaches main menu without crash. If CTD on launch, check `D:\Modlists\Reborn\overwrite\` for crash logs (Crash Logger Improved is enabled per `project_apw_reborn.md`).

- [ ] **Step 13: Smoke test — start a new game, reach starting cell**

In-game: New Game → use Skip Intro and Random Start (already installed per memory `feedback_alt_start_required_for_ul_moo.md` — never use `coc weye`, alt-start handles UL/MOO init). Reach a playable cell.

- [ ] **Step 14: Smoke test — verify MOO+OOO compat fired**

In-game console (`~`):
```
getstage MOO
```
Expected: `>= 30`. If `0`, MOO compat block didn't run — check `Maskars Oblivion Overhaul 5_0_5/Maskar's Oblivion Overhaul for compatibility.ini` is being deployed by MO2.

```
show MOO.ini_traps
```
Expected: `0.000000` (OOO compat flipped it to 0). If `1`, the compat ESP-detection didn't catch OOO — verify `Oscuro's_Oblivion_Overhaul.esp` is in `plugins.txt`.

- [ ] **Step 15: Smoke test — save and reload**

In-game: save to a fresh slot. Quit to main menu. Load that save. Verify reload succeeds without crash.

- [ ] **Step 16: Capture post-install state**

Run:
```bash
grep -c "^[^#]" "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
```
Expected delta vs Task 2 step 5 baseline: `+9` plugins (counted in spec under "Net load order delta"). If less, an activation was missed; if more, an unexpected ESP got enabled.

- [ ] **Step 17: Manifest update — flip status for the 3 APW-tracked OOO mods**

Edit `D:\Modlists\Reborn\research\manifest.csv`:
- Line 241 (`OOO - Oscuro's Oblivion Overhaul - Updated`): change `status` from `skipped` to `installed`. Leave other columns alone for now (will fill in Task 4).
- Line 242 (`OOO - Oscuro's Oblivion Overhaul - Updated (Unofficial patch)`): change `status` from `skipped` to `installed`.
- Line 243 (`OOO Shivering Isles`): change `status` from `skipped` to `installed`.

Use Edit tool with exact line content match (read the lines first to get exact text including trailing fields).

- [ ] **Step 18: Manifest update — append 3 new Reborn-added rows**

For OOO KotN Patch, OOO Voice Files, OOO Custom Golem Meshes — append rows at end of `manifest.csv` following the pattern from existing Reborn-added rows (lines 779–792 per the spec). Each row needs:
- `apw_name`: the mod name
- `notes`: `Reborn-added (not in APW)`
- `status`: `installed`
- `mo2_order`: empty (per Reborn-added pattern)
- `section`: `UTILITIES (Reborn-added)`
- `nexus_category`: best-effort (e.g. `Patches` for KotN, `Audio` for Voice, `Models and Textures` for Golem)
- `mod_kind`: `esp` for KotN, `sound` for Voice, `meshes` for Golem
- `loose_files`: count via `find mods/<name>/ -type f | wc -l` (excluding meta.ini)
- `bash_mergeable`, `apw_merged`, `apw_cr`, `apw_enabled`: empty
- `nexus_url`: `https://www.nexusmods.com/oblivion/mods/46199`

- [ ] **Step 19: Commit phase B**

```bash
cd "D:/Modlists/Reborn"
git add research/manifest.csv profiles/Reborn-OOO/
git status
git commit -m "phase B: install OOO 1.7 suite, activate dormant patch ESPs, smoke-test pass"
```

---

## Task 4: Phase C — Bashed Patch retag and rebuild

**Files:**
- Modify: `D:\Modlists\Reborn\research\manifest.csv` (bash_mergeable columns)
- Modify: bash patch ESP via Wrye Bash GUI (Wrye Bash is staged via Root Builder per `feedback_mo2_root_builder.md`)

- [ ] **Step 1: Update manifest bash_mergeable for OOO mods**

Edit each row's `bash_mergeable` column:

Line 241 OOO Updated: set to
```
Oscuro's_Oblivion_Overhaul.esm=no:has BSA; has new records | Oscuro's_Oblivion_Overhaul.esp=yes:LVLI/CONT auto-merge
```

Line 242 OOO Unofficial Patch: set to
```
OOO_Unoficial-Patch.esp=yes
```

Line 243 OOO Shivering Isles: set to
```
OOOShiveringIsles.esp=no:has BSA; has new records
```

For Cobl (line 19), the `bash_mergeable` field already lists OOO ESPs but `Cobl Tweaks - OOO Mergeable.esp` is parked as `MERGE ONLY`. Update to:
```
Cobl Filter Late MERGE ONLY.esp;Cobl Tweaks - OOO Mergeable.esp;Cobl Tweaks - SI.esp;Cobl Tweaks - Vanilla.esp
```
(adding `Cobl Tweaks - OOO Mergeable.esp` to the merge-only list — only enable when an overhaul like OOO is loaded, which is now the case)

For Mercer's Ingredient Effect Overhaul (line 164), update the `bash_mergeable` field's `MercerIngredientsOOO.esp` segment from `MercerIngredientsOOO.esp=yes` (already correct in manifest — verify).

For SB_WeaponDropFix (line 51 + line 789): already shows `SB_WeaponDropFix_OOOFilterPatch.esp=yes`. Add a note in `notes` column: `OOOFilterPatch relocated from optional/ to mod root 2026-04-30`.

- [ ] **Step 2: Launch Wrye Bash via MO2**

Manual GUI step. MO2 → Run dropdown → Wrye Bash 315.RC2 (per `feedback_mo2_root_builder.md`, Wrye Bash is Root-Builder-staged).

Wait for Bash to load all plugins (~15-30s for ~110 plugins).

- [ ] **Step 3: Verify Bashed Patch exists**

In Wrye Bash → Mods tab → look for `Bashed Patch, 0.esp` near bottom. If missing, create one: right-click in mods list → New → Bashed Patch.

- [ ] **Step 4: Configure Bashed Patch — Mergeable plugins**

Right-click `Bashed Patch, 0.esp` → "Rebuild Patch...". The patcher dialog opens.

Tick `Cobl Tweaks - OOO Mergeable.esp` under "Merge Patches" (it should appear because of the manifest's MERGE ONLY tag). Other MERGE-ONLY ESPs should already be ticked from prior bash builds.

- [ ] **Step 5: Configure Bashed Patch — Re-enable Leveled Lists patcher**

In the same dialog, tick "Leveled Lists" patcher. Per the spec, OOO satisfies the precondition that previously caused the WB 315.RC2 LeveledListsPatcher crash (UOP `OverhaulUOPSkips` tag now has an overhaul to consume it).

- [ ] **Step 6: Configure Bashed Patch — NPC Level Capping**

Tick "NPC Level Capping". In its config sub-panel, select source CSV: `OOO, 1.23 Mincapped_NPC_Levels.csv` (lives in Wrye Bash's `Bash Patches/Oblivion/` folder, already shipped).

- [ ] **Step 7: Configure Bashed Patch — Names Tweaker (Potion Names)**

Tick "Names Tweaker" → "Potion Names". Select CSV: `OOO_Potion_Names.csv`.

- [ ] **Step 8: Build Bashed Patch**

Click "Build Patch" in the dialog. Watch for crashes — particularly during the Leveled Lists step.

If LeveledListsPatcher crashes:
1. Cancel.
2. Re-open Rebuild dialog.
3. Untick "Leveled Lists".
4. Build with reduced coverage.
5. Document the failure (capture the WB log from `D:\Modlists\Reborn\mods\Wrye Bash\Root\Mopy\bash.log` or wherever Bash writes its log) for follow-up.

If build completes: proceed.

- [ ] **Step 9: Smoke test the rebuilt Bashed Patch**

Close Wrye Bash. In MO2, verify `Bashed Patch, 0.esp` is enabled in plugins.txt and `Cobl Tweaks - OOO Mergeable.esp` is now disabled (merged in).

Launch Oblivion via MO2. Reach main menu, load the save from Task 3 (or start a new game). Verify game runs without crash.

In-game console:
```
player.additem F 100
```
(or any vanilla potion). Verify the potion's name reflects OOO's renaming convention (e.g. "Potion of Strong Healing" instead of vanilla "Potion of Healing").

- [ ] **Step 10: Commit phase C**

```bash
cd "D:/Modlists/Reborn"
git add research/manifest.csv profiles/Reborn-OOO/
git status
git commit -m "phase C: re-tag for OOO + bash patch rebuild w/ leveled lists + OOO CSVs"
```

---

## Task 5: Build the analyzer Pascal script — `analyze_apw_cr_ooo_overrides.pas`

**Files:**
- Create: `D:\Modlists\Reborn\research\analyze_apw_cr_ooo_overrides.pas`

This is incremental script development. Each step adds one capability and verifies via xEdit run. Per `feedback_pascal_script_quirks.md`: no nested `{}` comments, no string-indexing `s[i]`, no top-level array vars, `uses`-unit resolves from xEdit install dir.

xEdit launch pattern: per `reference_xedit_mo2_launch.md`, run via MO2 custom-exec with `moshortcut://`. Args (script path) baked into the .ini.

- [ ] **Step 1: Create the script stub**

Create `D:\Modlists\Reborn\research\analyze_apw_cr_ooo_overrides.pas`:

```pascal
unit AnalyzeAPWCROOOOverrides;

// Analyzer for APW - Conflict Resolution.esp.
// Walks every override record, filters to ones that:
//   (a) target a master loaded by current xEdit session (Reborn-OOO masters), AND
//   (b) "touch" OOO (record owned by OOO or references an OOO-owned FormID).
// Emits two CSVs:
//   apw_cr_ooo_overrides.csv   - long-form, one row per record
//   apw_cr_ooo_patterns.csv    - one row per unique diff_pattern_hash

const
  OUT_DIR = 'D:\Modlists\Reborn\research\';
  APW_CR_NAME = 'APW - Conflict Resolution.esp';

function Initialize: Integer;
begin
  AddMessage('analyze_apw_cr_ooo_overrides: starting');
  Result := 0;
end;

function Process(e: IInterface): Integer;
begin
  // Stub - no per-record processing yet, return 0 (continue)
  Result := 0;
end;

function Finalize: Integer;
begin
  AddMessage('analyze_apw_cr_ooo_overrides: done');
  Result := 0;
end;

end.
```

- [ ] **Step 2: Run xEdit with the stub script — verify it loads and runs**

Per `reference_xedit_mo2_launch.md`, set up a custom-exec entry pointing the analyzer .pas. Or run xEdit GUI manually (faster for iterative dev):

1. Launch xEdit via MO2 (Reborn-OOO profile active so APW CR ESP is in the load order — wait, APW CR is in APW profile, not Reborn-OOO. **Stop**).

Actually, the analyzer needs APW CR ESP loaded. It's not in Reborn's mod set; it's in APW's. Two options:
- (a) Launch xEdit against APW profile (has APW CR loaded, but masters are different — Reborn-OOO masters won't be there)
- (b) Copy `APW - Conflict Resolution.esp` into a temp Reborn mod folder for the duration of the analyzer run, then remove

**Choose (b)**: gives us both APW CR ESP AND Reborn-OOO masters in the same xEdit session.

Set up:
```bash
mkdir -p "D:/Modlists/Reborn/mods/_TEMP_APW_CR_for_analysis/"
cp "D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp" \
   "D:/Modlists/Reborn/mods/_TEMP_APW_CR_for_analysis/"
```

In MO2 (Reborn-OOO profile), enable `_TEMP_APW_CR_for_analysis` in left pane and tick `APW - Conflict Resolution.esp` in right pane. **Don't sort with LOOT** — we don't want to commit this temp ESP to the load order.

Launch xEdit via MO2 (use the existing xEdit MO2 launcher entry per `reference_xedit_mo2_launch.md`). Wait for masters to load.

In xEdit: right-click `APW - Conflict Resolution.esp` in left pane → Apply Script... → select `analyze_apw_cr_ooo_overrides.pas` from the file picker (point at `D:\Modlists\Reborn\research\`).

Expected: status bar shows "starting" then "done". If syntax error, JvInterpreter throws — fix and retry.

- [ ] **Step 3: Add: enumerate all override records in APW CR**

Replace the script body:

```pascal
unit AnalyzeAPWCROOOOverrides;

const
  OUT_DIR = 'D:\Modlists\Reborn\research\';
  APW_CR_NAME = 'APW - Conflict Resolution.esp';

var
  apwCR: IInterface;
  recordCount: Integer;

function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
begin
  apwCR := nil;
  recordCount := 0;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if GetFileName(f) = APW_CR_NAME then begin
      apwCR := f;
      Break;
    end;
  end;
  if not Assigned(apwCR) then begin
    AddMessage('ERROR: ' + APW_CR_NAME + ' not loaded');
    Result := 1;
    Exit;
  end;
  AddMessage('Found ' + APW_CR_NAME + ', enumerating records...');
  Result := 0;
end;

procedure WalkRecords(e: IInterface);
var
  i: Integer;
begin
  if Signature(e) <> '' then begin
    if IsMaster(e) = False then begin
      // It's an override (not a new record)
      Inc(recordCount);
    end;
  end;
  for i := 0 to Pred(ElementCount(e)) do
    WalkRecords(ElementByIndex(e, i));
end;

function Process(e: IInterface): Integer;
begin
  // Use Apply Script per-file mode? No, easier to walk from Initialize.
  Result := 0;
end;

function Finalize: Integer;
begin
  WalkRecords(apwCR);
  AddMessage('Override records in APW CR: ' + IntToStr(recordCount));
  Result := 0;
end;

end.
```

- [ ] **Step 4: Run and verify enumeration count**

Apply script in xEdit. Expected: a message like `Override records in APW CR: NNNNN` where NNNNN is in the tens of thousands (APW CR has 30k+ overrides per spec).

If 0: the IsMaster check is inverted or the recursion isn't finding records — debug.

If matches expected magnitude: proceed.

- [ ] **Step 5: Add: identify Reborn master set + filter records by target master**

Add at top:

```pascal
var
  rebornMasters: TStringList;  // file names of all loaded plugins except APW CR + DLCs we want to skip filtering
  apwCROverrides: Integer;
  inRebornMasters: Integer;
```

Modify Initialize to populate `rebornMasters`:

```pascal
function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
  fname: string;
begin
  rebornMasters := TStringList.Create;
  apwCROverrides := 0;
  inRebornMasters := 0;
  apwCR := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    fname := GetFileName(f);
    if fname = APW_CR_NAME then
      apwCR := f
    else
      rebornMasters.Add(fname);
  end;
  if not Assigned(apwCR) then begin
    AddMessage('ERROR: ' + APW_CR_NAME + ' not loaded');
    Result := 1;
    Exit;
  end;
  AddMessage('Reborn masters: ' + IntToStr(rebornMasters.Count));
  Result := 0;
end;
```

In `WalkRecords`, when an override is found, look up its target master:

```pascal
procedure WalkRecords(e: IInterface);
var
  i: Integer;
  master: IInterface;
  masterName: string;
begin
  if (Signature(e) <> '') and (IsMaster(e) = False) then begin
    Inc(apwCROverrides);
    master := MasterOrSelf(e);
    if Assigned(master) then begin
      masterName := GetFileName(GetFile(master));
      if rebornMasters.IndexOf(masterName) >= 0 then
        Inc(inRebornMasters);
    end;
  end;
  for i := 0 to Pred(ElementCount(e)) do
    WalkRecords(ElementByIndex(e, i));
end;
```

Update Finalize to print both counts:

```pascal
function Finalize: Integer;
begin
  WalkRecords(apwCR);
  AddMessage('APW CR overrides: ' + IntToStr(apwCROverrides));
  AddMessage('Targeting Reborn masters: ' + IntToStr(inRebornMasters));
  rebornMasters.Free;
  Result := 0;
end;
```

- [ ] **Step 6: Run and verify**

Apply script. Expected:
- `APW CR overrides: ~30000+` (whatever Step 4 found)
- `Targeting Reborn masters: <much smaller>` — most APW CR overrides target masters Reborn doesn't load (BC, UL, etc.)

If `Targeting Reborn masters` is suspiciously low (single digits) or equal to total: debug — `MasterOrSelf` may not behave as expected; try `OverrideRecords` API or `MasterRecord(e)` instead.

- [ ] **Step 7: Add: identify OOO-touching records**

Add OOO master set:

```pascal
const
  OOO_MASTERS = 'Oscuro''s_Oblivion_Overhaul.esm,Oscuro''s_Oblivion_Overhaul.esp,OOOShiveringIsles.esp';

var
  oooMasters: TStringList;
  oooTouching: Integer;
```

In Initialize:
```pascal
  oooMasters := TStringList.Create;
  oooMasters.CommaText := OOO_MASTERS;
  oooTouching := 0;
```

Add helper to detect OOO touch:

```pascal
function RecordTouchesOOO(e: IInterface): Boolean;
var
  master: IInterface;
  masterName: string;
  i: Integer;
  refs: IInterface;
  ref: IInterface;
  refMaster: IInterface;
begin
  Result := False;
  // (a) record's own master is OOO
  master := MasterOrSelf(e);
  if Assigned(master) then begin
    masterName := GetFileName(GetFile(master));
    if oooMasters.IndexOf(masterName) >= 0 then begin
      Result := True;
      Exit;
    end;
  end;
  // (b) any referenced FormID is OOO-owned
  // ReferencedBy walks records that reference e; we want the inverse — what e references.
  // Use ElementBySignature(e, 'XXXX') for known fields, or walk all elements looking for FormIDs.
  // Simplest approach: walk all child elements; for any Element with edType = etReference, check the linked record.
  // (Implementation detail expanded in next step)
end;
```

Step 7 leaves the (b) helper as a stub returning False for the master-only check. We'll expand the FormID walk in step 8.

In `WalkRecords`, gate on both filters:

```pascal
if (Signature(e) <> '') and (IsMaster(e) = False) then begin
  Inc(apwCROverrides);
  master := MasterOrSelf(e);
  if Assigned(master) then begin
    masterName := GetFileName(GetFile(master));
    if rebornMasters.IndexOf(masterName) >= 0 then begin
      Inc(inRebornMasters);
      if RecordTouchesOOO(e) then
        Inc(oooTouching);
    end;
  end;
end;
```

Print `oooTouching` in Finalize.

- [ ] **Step 8: Run and verify Step 7 baseline**

Apply script. Expected: `oooTouching` is small but >0 (records APW CR overrides where the record itself is owned by OOO).

If 0: the OOO master name comparison may have case issues or character-encoding issues. Print one master's `GetFileName` result to verify exact case.

- [ ] **Step 9: Add: walk referenced FormIDs (the (b) clause)**

Expand `RecordTouchesOOO`:

```pascal
function ElementReferencesOOO(elem: IInterface): Boolean;
var
  i: Integer;
  refRec: IInterface;
  refMaster: IInterface;
  refMasterName: string;
begin
  Result := False;
  if not Assigned(elem) then Exit;
  // If this element is a FormID reference, check what it points at
  if (DefType(elem) = dtInteger) and (Pos('FormID', GetEditValue(elem)) > 0) then begin
    // Heuristic: GetEditValue returns "01045A12 <Editor>" - try LinksTo
    refRec := LinksTo(elem);
    if Assigned(refRec) then begin
      refMaster := MasterOrSelf(refRec);
      if Assigned(refMaster) then begin
        refMasterName := GetFileName(GetFile(refMaster));
        if oooMasters.IndexOf(refMasterName) >= 0 then begin
          Result := True;
          Exit;
        end;
      end;
    end;
  end;
  // Recurse into child elements
  for i := 0 to Pred(ElementCount(elem)) do begin
    if ElementReferencesOOO(ElementByIndex(elem, i)) then begin
      Result := True;
      Exit;
    end;
  end;
end;
```

Update `RecordTouchesOOO` (b) clause:
```pascal
  // (b) any referenced FormID is OOO-owned
  Result := ElementReferencesOOO(e);
```

- [ ] **Step 10: Run and verify Step 9**

Apply script. Expected: `oooTouching` jumps to ~2400-2500 (matches spec's "~2466 OOO-related override records" estimate from `apw_cr_breakdown.csv`).

If much smaller: the FormID walk isn't finding references. Inspect `DefType` heuristic — try `etReference` constant or check for `dtFormID` enum.

If much larger: false-positive matches; tighten the FormID detection (e.g. only certain dtype values).

- [ ] **Step 11: Add: emit per-record CSV row**

Add CSV output handling. Open file in Initialize, write header. Write one line per touching record. Close in Finalize.

```pascal
var
  outOverrides: TStringList;

// In Initialize:
  outOverrides := TStringList.Create;
  outOverrides.Add('target_fid,target_master,signature,editor_id,record_name,change_summary,diff_pattern_hash,ooo_touch_reason,target_record_in_current_ooo,recommend');

// In WalkRecords, when both filters pass:
  if RecordTouchesOOO(e) then begin
    Inc(oooTouching);
    EmitRow(e);
  end;

// New:
procedure EmitRow(e: IInterface);
var
  fid: string;
  sig: string;
  edid: string;
  fname: string;
  master: IInterface;
  masterName: string;
begin
  fid := IntToHex(FormID(e), 8);
  sig := Signature(e);
  edid := EditorID(e);
  fname := Name(e);
  master := MasterOrSelf(e);
  masterName := '';
  if Assigned(master) then masterName := GetFileName(GetFile(master));
  // CSV-escape fields that might contain commas/quotes
  outOverrides.Add(
    fid + ',' +
    masterName + ',' +
    sig + ',' +
    CSVEscape(edid) + ',' +
    CSVEscape(fname) + ',' +
    ',,,,,'   // change_summary, hash, touch_reason, drift, recommend - filled in next steps
  );
end;

function CSVEscape(s: string): string;
begin
  if (Pos(',', s) > 0) or (Pos('"', s) > 0) or (Pos(#10, s) > 0) then
    Result := '"' + StringReplace(s, '"', '""', [rfReplaceAll]) + '"'
  else
    Result := s;
end;

// In Finalize:
  outOverrides.SaveToFile(OUT_DIR + 'apw_cr_ooo_overrides.csv');
  outOverrides.Free;
```

- [ ] **Step 12: Run and verify CSV emission**

Apply script. Open `D:\Modlists\Reborn\research\apw_cr_ooo_overrides.csv` in a viewer. Expected:
- Header row present
- ~2400-2500 data rows
- Each row has FormID, master name, signature, editor ID, record name (and 5 trailing empty fields placeholdering for next steps)

- [ ] **Step 13: Add: change_summary derivation**

For each touching record, walk the override's modified fields. Use `Compare` API or walk both `MasterOrSelf` and the override, diff field-by-field.

This is the most complex step. Reasonable approximation for v1: list which top-level subrecord signatures differ between master and override. Example output: `"FULL,DATA,LVLD,LVLF"`.

```pascal
function ChangeSummary(e: IInterface): string;
var
  master: IInterface;
  i: Integer;
  child: IInterface;
  masterChild: IInterface;
  diffs: TStringList;
begin
  Result := '';
  master := MasterOrSelf(e);
  if not Assigned(master) or Equals(master, e) then Exit;
  diffs := TStringList.Create;
  try
    for i := 0 to Pred(ElementCount(e)) do begin
      child := ElementByIndex(e, i);
      masterChild := ElementBySignature(master, Signature(child));
      if not Assigned(masterChild) then begin
        diffs.Add(Signature(child) + '+');  // added in override
      end else if GetEditValue(child) <> GetEditValue(masterChild) then begin
        diffs.Add(Signature(child));  // changed
      end;
    end;
    Result := diffs.CommaText;
  finally
    diffs.Free;
  end;
end;
```

Wire into `EmitRow`. Note: `GetEditValue` flattens nested structures to a string — adequate for top-level signature diff but not field-precise.

- [ ] **Step 14: Run and verify change_summary populates**

Apply script. Open CSV. Expected: change_summary column shows comma-separated subrecord signatures like `"FULL,DATA"` or `"LVLD,LVLF"` for most rows. Empty/null is OK for records that look identical to master (rare — probably ITPOs in APW CR).

- [ ] **Step 15: Add: diff_pattern_hash (strict)**

Hash the per-field changes using a deterministic representation. SHA1 is overkill in JvI; use a simple hash of `change_summary + concatenated field values`.

```pascal
function DiffPatternHash(e: IInterface): string;
var
  master: IInterface;
  i: Integer;
  child: IInterface;
  masterChild: IInterface;
  buf: string;
begin
  Result := '';
  master := MasterOrSelf(e);
  if not Assigned(master) or Equals(master, e) then Exit;
  buf := '';
  for i := 0 to Pred(ElementCount(e)) do begin
    child := ElementByIndex(e, i);
    masterChild := ElementBySignature(master, Signature(child));
    buf := buf + Signature(child) + '|';
    if not Assigned(masterChild) then
      buf := buf + 'ADD|' + GetEditValue(child) + ';'
    else if GetEditValue(child) <> GetEditValue(masterChild) then
      buf := buf + 'CHG|' + GetEditValue(masterChild) + '->' + GetEditValue(child) + ';';
  end;
  Result := IntToHex(StringHash(buf), 8);  // 32-bit hash, hex
end;

function StringHash(s: string): Cardinal;
var
  i: Integer;
begin
  Result := 5381;
  for i := 1 to Length(s) do
    Result := ((Result shl 5) + Result) + Ord(s[i]);  // djb2
end;
```

Wire into EmitRow. Note: per `feedback_pascal_script_quirks.md`, no `s[i]` indexing — but wait, this is `s[i]` which IS the prohibited form. Use `Length(s)` and a workaround:

Actually re-reading the memory: "no s[i] indexing" — this is exactly the issue. Replace with character-by-character via string functions. Use `Copy(s, i, 1)` and `Ord(Copy(s, i, 1)[1])` — or precompute via TStringStream.

Safer alternative: use Delphi's built-in `HashName` or just emit the string itself as the "hash" (longer but functional). For v1, just emit the truncated buf string as the hash:

```pascal
function DiffPatternHash(e: IInterface): string;
begin
  // ... build buf as above ...
  Result := Copy(buf, 1, 64);  // truncate as a "hash"
end;
```

Not a true hash, but pattern-equivalent edits will produce identical buf strings → same "hash" key. Trade-off: longer keys.

- [ ] **Step 16: Add: ooo_touch_reason and target_record_in_current_ooo**

`ooo_touch_reason`: was the record itself owned by OOO (`owns record`), or did it reference OOO records (`owns N of M referenced FormIDs`)? Track the count during `RecordTouchesOOO` walk.

`target_record_in_current_ooo`: look up the record's MasterRecord — is it `present`/`changed`/`removed` in the currently-loaded OOO 1.7 ESM?

```pascal
function RecordDriftStatus(e: IInterface): string;
var
  master: IInterface;
  current: IInterface;
begin
  Result := 'present';
  master := MasterOrSelf(e);
  if not Assigned(master) then begin
    Result := 'unknown';
    Exit;
  end;
  // OverrideCount and OverrideByIndex give the chain; the last one is the winning override.
  // For drift detection, compare master's GetEditValue against APW CR's override value...
  // Simpler proxy: if the record exists in the loaded OOO ESM at the same FormID, it's present;
  // if not, removed. "changed" detection requires field-level compare which is heavy.
  // For v1, emit "present" or "removed" only.
  if FormID(master) = FormID(e) then
    Result := 'present'
  else
    Result := 'present';  // override always has same FormID as master in xEdit's model
  // TODO: improve drift detection in a follow-up.
end;
```

This is a minimum-viable drift column. Real drift detection (does field X in OOO 1.7 differ from what APW CR overrode?) needs comparing master record's current value vs APW CR's override value. Defer that to a follow-up if Phase E review reveals it's needed.

`recommend`: heuristic. Default `review`. Bump to `merge` for LVLI/CONT signatures (Bashed Patch handles them); bump to `review` for SCPT/QUST always.

```pascal
function Recommend(sig: string): string;
begin
  if (sig = 'LVLI') or (sig = 'LVLC') or (sig = 'CONT') or (sig = 'FACT') then
    Result := 'merge'
  else if (sig = 'SCPT') or (sig = 'QUST') then
    Result := 'review'
  else
    Result := 'review';
end;
```

Update EmitRow to include all 5 trailing fields.

- [ ] **Step 17: Add: pattern aggregation (apw_cr_ooo_patterns.csv)**

In Finalize, aggregate `outOverrides` rows by `diff_pattern_hash`:

```pascal
// In Finalize, after writing apw_cr_ooo_overrides.csv:
var
  patterns: TStringList;
  patternCounts: TStringList;
  i, j: Integer;
  row: string;
  hash: string;
  fields: TStringList;

  patterns := TStringList.Create;
  patterns.Add('diff_pattern_hash,count,sample_target_fid,sample_target_master,sample_signature,sample_change_summary');

  patternCounts := TStringList.Create;
  patternCounts.Sorted := True;
  patternCounts.Duplicates := dupIgnore;

  fields := TStringList.Create;
  for i := 1 to Pred(outOverrides.Count) do begin  // skip header
    row := outOverrides[i];
    fields.Clear;
    fields.CommaText := row;
    if fields.Count >= 7 then begin
      hash := fields[6];  // index of diff_pattern_hash
      // count how many rows share this hash; emit one pattern row per unique hash
      // (simpler: collect unique hashes, then loop)
    end;
  end;

  // Pseudo-completion: walk outOverrides twice — first pass collect unique hashes, second pass count + sample.
  // Implement straightforwardly:
  // ... TStringList of hash counts ...

  patterns.SaveToFile(OUT_DIR + 'apw_cr_ooo_patterns.csv');
  patterns.Free;
  patternCounts.Free;
  fields.Free;
```

Full pattern aggregation is finicky in JvI Pascal — for v1, keep it as: `patterns.csv` contains one row per unique hash with count and one sample row's identifying fields. Implementation expanded inline:

```pascal
// Replacement: walk outOverrides once, build hash->count and hash->sample maps via TStringList tricks.
var
  hashSamples: TStringList;  // hash -> sample CSV row text
  hashCounts: TStringList;   // hash -> count (as strings)

  hashSamples := TStringList.Create;
  hashCounts := TStringList.Create;

  fields := TStringList.Create;
  for i := 1 to Pred(outOverrides.Count) do begin
    fields.CommaText := outOverrides[i];
    if fields.Count >= 7 then begin
      hash := fields[6];
      j := hashCounts.IndexOfName(hash);
      if j < 0 then begin
        hashCounts.Add(hash + '=1');
        hashSamples.Add(hash + '=' + fields[0] + ',' + fields[1] + ',' + fields[2] + ',' + CSVEscape(fields[5]));
      end else begin
        hashCounts[j] := hash + '=' + IntToStr(StrToInt(hashCounts.ValueFromIndex[j]) + 1);
      end;
    end;
  end;

  for i := 0 to Pred(hashCounts.Count) do begin
    hash := hashCounts.Names[i];
    patterns.Add(hash + ',' + hashCounts.ValueFromIndex[i] + ',' + hashSamples.Values[hash]);
  end;
```

- [ ] **Step 18: Run final analyzer; verify both CSVs**

Apply script. Verify:
- `apw_cr_ooo_overrides.csv` has ~2400-2500 rows + header
- `apw_cr_ooo_patterns.csv` has 30-200 rows + header (per spec estimate of 30-80, give some headroom)
- Open in Excel/LibreOffice; sanity check a few rows: do the change_summaries make sense for the signature?

If pattern count is in 1000s: hash is too strict (probably hashing FormIDs or other unique values). Inspect hash function — should hash field-difference patterns, not record-unique values.

If pattern count is <10: hash is too loose. Tighten.

- [ ] **Step 19: Commit Pascal analyzer**

```bash
cd "D:/Modlists/Reborn"
git add research/analyze_apw_cr_ooo_overrides.pas research/apw_cr_ooo_overrides.csv research/apw_cr_ooo_patterns.csv
git status
git commit -m "phase D: APW CR OOO-touch analyzer + first run output"
```

---

## Task 6: Phase D — (covered by Task 5 verification steps)

Task 5 includes the analyzer build AND its first verified run (Steps 11–18). The output CSVs in `D:\Modlists\Reborn\research\` are the Phase D deliverable. No separate task needed.

---

## Task 7: Phase E.1 — User decision review

**Files:**
- Create: `D:\Modlists\Reborn\research\cr_decisions.csv`

This task is human-curated. Provides a structured way for the user to walk patterns and record keep/drop/modify per pattern.

- [ ] **Step 1: Create decisions CSV with header and pattern rows**

Generate the initial `cr_decisions.csv` from `apw_cr_ooo_patterns.csv` so the user has a row per pattern to fill in:

```bash
cd "D:/Modlists/Reborn"
{
  echo "diff_pattern_hash,count,sample_target_fid,sample_target_master,sample_signature,sample_change_summary,decision,notes"
  tail -n +2 research/apw_cr_ooo_patterns.csv | while IFS= read -r line; do
    echo "${line},," # decision and notes empty, ready for user input
  done
} > research/cr_decisions.csv
wc -l research/cr_decisions.csv
```

- [ ] **Step 2: Generate per-record decisions for SCPT/QUST/SPEL/GMST (individual review)**

For these signatures, the spec says individual review (small counts, behavior changes don't pattern-match well). Append per-record rows:

```bash
awk -F',' 'NR>1 && ($3 == "SCPT" || $3 == "QUST" || $3 == "SPEL" || $3 == "ENCH" || $3 == "GMST") {
  print $1","$2","$3","$4","$5",""individual"",""""
}' research/apw_cr_ooo_overrides.csv >> research/cr_decisions.csv
wc -l research/cr_decisions.csv
```

Note: this format diverges from the pattern-row format. Document the schema in a header comment.

- [ ] **Step 3: User walks decisions, fills `decision` column**

Manual step. Open `research/cr_decisions.csv` in a spreadsheet. For each row:
- `decision = keep`: include in Reborn CR ESP as-is from APW CR
- `decision = drop`: skip (we don't want this resolution)
- `decision = modify`: include but with a tweak — note the tweak in `notes` column
- For SCPT/QUST individual rows: same options, plus `recompile` for SCPT records that need SCDA recompile via `oblivion-batch-compile`

User sets a default first if helpful (e.g. `keep` for all LVLI patterns), then reviews exceptions.

Estimated review time: 1-3 hours depending on pattern count and SCPT depth.

- [ ] **Step 4: Validate decisions CSV**

Run:
```bash
awk -F',' 'NR>1 && $7 == "" {print "EMPTY DECISION: "$0}' research/cr_decisions.csv
awk -F',' 'NR>1 {print $7}' research/cr_decisions.csv | sort | uniq -c
```

Expected: no EMPTY lines (all decisions filled). Counts of keep/drop/modify/recompile printed for confidence.

- [ ] **Step 5: Commit decisions**

```bash
git add research/cr_decisions.csv
git commit -m "phase E1: user-curated CR decisions for OOO-touching APW CR overrides"
```

---

## Task 8: Build the builder Pascal script — `build_reborn_ooo_cr.pas`

**Files:**
- Create: `D:\Modlists\Reborn\research\build_reborn_ooo_cr.pas`

Reads `cr_decisions.csv`, copies kept records as overrides into a new Reborn CR ESP, applies modify tweaks where specified, skips drops.

- [ ] **Step 1: Create script stub**

Create `D:\Modlists\Reborn\research\build_reborn_ooo_cr.pas`:

```pascal
unit BuildRebornOOOCR;

const
  DECISIONS_CSV = 'D:\Modlists\Reborn\research\cr_decisions.csv';
  OUT_ESP_NAME = 'Reborn - OOO Conflict Resolution.esp';
  APW_CR_NAME = 'APW - Conflict Resolution.esp';

var
  apwCR: IInterface;
  newCR: IInterface;
  decisions: TStringList;
  copied, dropped, modified: Integer;

function Initialize: Integer;
begin
  apwCR := nil;
  copied := 0;
  dropped := 0;
  modified := 0;
  decisions := TStringList.Create;
  AddMessage('build_reborn_ooo_cr: starting');
  Result := 0;
end;

function Finalize: Integer;
begin
  AddMessage('build_reborn_ooo_cr: copied=' + IntToStr(copied) +
             ' modified=' + IntToStr(modified) +
             ' dropped=' + IntToStr(dropped));
  decisions.Free;
  Result := 0;
end;

end.
```

- [ ] **Step 2: Add: load APW CR + new ESP creation**

Modify Initialize:

```pascal
function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
begin
  // ... existing init ...

  // Find APW CR
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if GetFileName(f) = APW_CR_NAME then begin
      apwCR := f;
      Break;
    end;
  end;
  if not Assigned(apwCR) then begin
    AddMessage('ERROR: ' + APW_CR_NAME + ' not loaded');
    Result := 1;
    Exit;
  end;

  // Create new ESP for Reborn CR. xEdit AddNewFileName API.
  newCR := AddNewFileName(OUT_ESP_NAME);
  if not Assigned(newCR) then begin
    AddMessage('ERROR: failed to create ' + OUT_ESP_NAME);
    Result := 1;
    Exit;
  end;
  AddMessage('Created ' + OUT_ESP_NAME);

  Result := 0;
end;
```

- [ ] **Step 3: Add: load decisions CSV**

```pascal
function Initialize: Integer;
// ...
  if FileExists(DECISIONS_CSV) then begin
    decisions.LoadFromFile(DECISIONS_CSV);
    AddMessage('Loaded ' + IntToStr(decisions.Count) + ' decision rows');
  end else begin
    AddMessage('ERROR: missing ' + DECISIONS_CSV);
    Result := 1;
    Exit;
  end;
```

- [ ] **Step 4: Add: parse decision CSV into hash-keyed lookup**

Build a lookup of `diff_pattern_hash` → `decision` and `target_fid` → `decision`:

```pascal
var
  patternDecisions: TStringList;  // hash=decision
  recordDecisions: TStringList;   // fid=decision

// In Initialize:
  patternDecisions := TStringList.Create;
  recordDecisions := TStringList.Create;
  for i := 1 to Pred(decisions.Count) do begin
    fields.CommaText := decisions[i];
    if fields.Count >= 7 then begin
      // Heuristic: if first field looks like a hash (8+ chars hex), it's a pattern row;
      // if it looks like a FormID (8 chars hex), it's a record row.
      // Pattern rows have count in field 1; record rows don't.
      // Simpler distinguisher: pattern rows use the 'individual' marker in field 6 only for record rows.
      if (fields.Count > 6) and (fields[5] = 'individual') then
        recordDecisions.Add(fields[0] + '=' + fields[6])
      else
        patternDecisions.Add(fields[0] + '=' + fields[6]);
    end;
  end;
```

- [ ] **Step 5: Add: walk APW CR overrides, decide per-record action**

```pascal
procedure ProcessRecord(e: IInterface);
var
  fid: string;
  hash: string;
  decision: string;
  newRec: IInterface;
begin
  if (Signature(e) = '') or IsMaster(e) then Exit;
  // Filter to OOO-touching + Reborn-targeting (re-use analyzer logic — copy/paste here for self-contained script)
  // For brevity in this plan, assume the filter functions are inlined as in analyzer.

  fid := IntToHex(FormID(e), 8);
  hash := DiffPatternHash(e);

  // Per-record decision wins over pattern decision
  decision := recordDecisions.Values[fid];
  if decision = '' then decision := patternDecisions.Values[hash];
  if decision = '' then decision := 'drop';  // safety default

  if decision = 'drop' then begin
    Inc(dropped);
    Exit;
  end;

  if (decision = 'keep') or (decision = 'modify') or (decision = 'individual') then begin
    newRec := wbCopyElementToFile(e, newCR, False, True);
    if not Assigned(newRec) then begin
      AddMessage('FAIL copy ' + fid);
      Exit;
    end;
    Inc(copied);
    if decision = 'modify' then begin
      Inc(modified);
      // Apply modify tweak from notes column - deferred to v2 (no spec yet for tweak DSL)
      AddMessage('NOTE modify tweak deferred: ' + fid);
    end;
  end else if decision = 'recompile' then begin
    // SCPT recompile path: copy with SCTX preserved; recompile via oblivion-batch-compile separately
    newRec := wbCopyElementToFile(e, newCR, False, True);
    Inc(copied);
    AddMessage('NOTE recompile flagged: ' + fid + ' (run oblivion-batch-compile after build)');
  end;
end;

procedure WalkAndProcess(e: IInterface);
var i: Integer;
begin
  ProcessRecord(e);
  for i := 0 to Pred(ElementCount(e)) do WalkAndProcess(ElementByIndex(e, i));
end;

// In Finalize, before printing counts:
  WalkAndProcess(apwCR);
  if Assigned(newCR) then begin
    SaveFile(newCR);
    AddMessage('Saved ' + GetFileName(newCR));
  end;
```

- [ ] **Step 6: Run builder, verify ESP created**

In xEdit (with `_TEMP_APW_CR_for_analysis` still active per Task 5), Apply Script → `build_reborn_ooo_cr.pas`.

Expected:
- xEdit prompts where to save the new ESP — choose `D:\Modlists\Reborn\mods\Reborn - OOO Conflict Resolution\` (create dir first if needed)
- Status: `copied=NNNN modified=N dropped=NN`
- Numbers should sum to ~2400-2500 (the pre-decision OOO-touching record count)

If `copied=0`: decision parsing failed; debug.
If xEdit crashes during `wbCopyElementToFile`: missing master record in newCR — verify the new ESP has all needed masters added (xEdit usually handles this automatically when copying-as-override).

- [ ] **Step 7: Verify ESP loads in xEdit standalone**

Close xEdit. Re-launch (without the temp APW CR mod active — disable `_TEMP_APW_CR_for_analysis` in MO2 first).

Verify the new ESP `Reborn - OOO Conflict Resolution.esp` appears in MO2's right pane (it's now in `mods/Reborn - OOO Conflict Resolution/`). Enable it.

Re-launch xEdit. The new ESP should load with no missing masters.

- [ ] **Step 8: Create meta.ini for the new mod folder**

```bash
cat > "D:/Modlists/Reborn/mods/Reborn - OOO Conflict Resolution/meta.ini" <<'EOF'
[General]
gameName=Oblivion
modid=0
version=0.1.0
category=22
EOF
```

(Category 22 is "Patches" per `reference_mo2_metadata.md`.)

- [ ] **Step 9: Commit Pascal builder + new ESP**

```bash
cd "D:/Modlists/Reborn"
git add research/build_reborn_ooo_cr.pas
# Note: the ESP is binary and lives under mods/, which is gitignored typically.
# Verify policy: are mods/ contents committed in this repo?
ls "mods/Reborn - OOO Conflict Resolution/"
git status
```

If `mods/` is gitignored: do NOT add the ESP. The build is reproducible from the Pascal script + decisions.csv. Document this in commit message:

```bash
git commit -m "phase E2: CR builder Pascal script (run produces Reborn - OOO Conflict Resolution.esp; ESP not committed, regen from script)"
```

If `mods/` is committed: include the ESP and meta.ini.

---

## Task 9: Phase E.2 — Activate CR ESP and verify

- [ ] **Step 1: Position the CR ESP in MO2 left pane**

After OOO mods, before Bashed Patch. Drag in MO2 left pane.

- [ ] **Step 2: Activate `Reborn - OOO Conflict Resolution.esp` in MO2 right pane**

Tick checkbox.

- [ ] **Step 3: LOOT sort**

Click Sort. LOOT may not know where to place a custom CR ESP — verify it landed near other CR-style ESPs (just before Bashed Patch). If not, add a manual LOOT rule via `Reborn-OOO/loadorder.txt` or LOOT's user metadata.

- [ ] **Step 4: Smoke test — game launches with CR ESP active**

Manual GUI step. Launch Oblivion. Reach main menu. Load a save. Verify no crash.

- [ ] **Step 5: Run any SCPT recompile pass (if Task 7 produced `recompile` decisions)**

If any decisions = `recompile`, run `oblivion-batch-compile` per `reference_oblivion_batch_compile.md`. Watch for the failure modes catalogued in `feedback_obc_troubleshooting.md`.

- [ ] **Step 6: Commit Phase E completion**

```bash
git add profiles/Reborn-OOO/
git commit -m "phase E2: activate Reborn CR ESP in Reborn-OOO profile"
```

---

## Task 10: Phase F — Conflict sweep with `oblivion-conflicts`

- [ ] **Step 1: Run `oblivion-conflicts -conflicts` against Reborn-OOO**

Per the canonical wrapper at `D:\Modlists\_clones\oblivion-conflicts\examples\reborn-shortcut.sh`:

```bash
cd "D:/Modlists/_clones/oblivion-conflicts"
# First switch MO2 to Reborn-OOO profile and exit MO2 (the script reads plugins.txt directly).
./examples/reborn-shortcut.sh conflicts --out=cache/reborn-ooo-sweep.json
```

If the shortcut script doesn't auto-detect Reborn-OOO, fall back to the explicit form (per `oblivion-conflicts/README.md`):
```bash
TES4Edit_patched.exe -conflicts -IKnowWhatImDoing -autoload -autoexit \
  -D:"D:/Modlists/Reborn/Stock Game/Data" \
  -P:"D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt" \
  -out:"D:/Modlists/_clones/oblivion-conflicts/cache/reborn-ooo-sweep.json"
```

Expected: JSON cache file emitted at the specified path. Sweep takes ~30s for ~100k records (Reborn-Base perf was 97k records, 21 MB cache; OOO additions push this somewhat higher).

- [ ] **Step 2: Review residue — conflicts not handled by Bashed + Reborn CR**

Filter the JSON cache for conflicts where:
- The winning record is NOT in `Reborn - OOO Conflict Resolution.esp`
- The winning record is NOT in `Bashed Patch, 0.esp`

Use `jq` or a small Python script. Output: `D:\Modlists\Reborn\research\ooo_conflict_residue.csv`.

- [ ] **Step 3: Categorize residue**

Bucket residue by signature + theme (re-use the THEMES dict from `analyze_apw_cr.py`). Estimate: should be tens of records, not hundreds. If hundreds, the analyzer/builder missed a category — investigate.

- [ ] **Step 4: Decide handling for residue**

For each residue conflict:
- If extending `cr_decisions.csv` covers it: add a row, re-run builder, re-test
- If a one-off manual fix: create `Reborn - Manual CR.esp` (separate ESP per spec) and add the override
- If acceptable as-is: document in `research/ooo_conflict_residue.csv` with `accepted=true` reason

- [ ] **Step 5: Commit Phase F**

```bash
git add research/ooo_conflict_residue.csv
git commit -m "phase F: conflict sweep residue analysis + acceptance"
```

---

## Task 11: Phase G — Playtest soak

This is human-driven. Ask the user to commit to a soak window before starting (per spec risks: undefined soak duration risks indefinite deferral).

- [ ] **Step 1: Define soak gate with user**

Ask: "What's the playtest gate? Suggested: one main quest milestone (e.g. close first Oblivion gate) OR 4 in-game hours OR detection of any new bug. Whichever first."

Record the answer in `D:\Modlists\Reborn\research\ooo_playtest_log.md`:

```bash
cat > "D:/Modlists/Reborn/research/ooo_playtest_log.md" <<EOF
# OOO Phase G — Playtest Soak Log

**Started:** $(date +%Y-%m-%d)
**Gate:** [USER ANSWER FROM ABOVE]
**Profile:** Reborn-OOO
**OOO version:** 1.7.0.0

## Observations
EOF
```

- [ ] **Step 2: User plays Reborn-OOO**

Manual. User notes any crashes, weird loot, wrong-tier enemies, MOO/OOO behavioral overlap in `ooo_playtest_log.md` as they play.

- [ ] **Step 3: Decide promote or iterate**

After gate is reached:
- No issues → proceed to Task 12 (promote)
- Issues found → loop back to whichever phase needs adjustment (most likely D/E for CR fixes, or C for bash retag)

- [ ] **Step 4: Commit playtest log**

```bash
git add research/ooo_playtest_log.md
git commit -m "phase G: playtest soak observations"
```

---

## Task 12: Phase H — Promote to Reborn-Base + Wabbajack compile

**Files:**
- Modify: `D:\Modlists\Reborn\profiles\Reborn-Base\modlist.txt`, `plugins.txt`, `loadorder.txt`
- Modify: `D:\Modlists\Reborn\research\manifest.csv` (final state pass)
- Generate: `D:\Modlists\Reborn-Base.wabbajack`

- [ ] **Step 1: Diff Reborn-OOO vs Reborn-Base profiles**

Run:
```bash
diff "D:/Modlists/Reborn/profiles/Reborn-Base/modlist.txt" "D:/Modlists/Reborn/profiles/Reborn-OOO/modlist.txt"
diff "D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt" "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"
diff "D:/Modlists/Reborn/profiles/Reborn-Base/loadorder.txt" "D:/Modlists/Reborn/profiles/Reborn-OOO/loadorder.txt"
```

Expected diffs: new OOO mods + activated dormant patches + new CR ESP. No surprises.

- [ ] **Step 2: Copy Reborn-OOO state to Reborn-Base**

```bash
cp "D:/Modlists/Reborn/profiles/Reborn-OOO/modlist.txt" "D:/Modlists/Reborn/profiles/Reborn-Base/modlist.txt"
cp "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt" "D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt"
cp "D:/Modlists/Reborn/profiles/Reborn-OOO/loadorder.txt" "D:/Modlists/Reborn/profiles/Reborn-Base/loadorder.txt"
```

Don't copy `archives.txt` — it's per-profile and may have already been correct.

- [ ] **Step 3: Switch MO2 to Reborn-Base, smoke-test**

Manual GUI step. Switch profile dropdown to Reborn-Base. Verify mod set and plugin set match Reborn-OOO. Launch Oblivion. Save game from Reborn-Base will NOT work due to FormID shift — start a new game to verify.

- [ ] **Step 4: Final manifest pass**

Update `research/manifest.csv` with any final state from Phases F-G (e.g. notes about residue acceptance, playtest gate met). Re-run `rebuild_manifest.py` if needed (per `feedback_no_silent_status_overwrites.md`, preserve user-curated columns).

- [ ] **Step 5: Run Wabbajack compile**

Per `feedback_wabbajack_compile.md` and `project_apw_reborn.md`:

```bash
cd "D:/Modlists/Reborn"
bash scripts/compile.sh
```

Expected: ~10s for compile. Output `Reborn-Base.wabbajack` at `D:/Modlists/Reborn-Base.wabbajack`. Verify size (per spec risk: ~1-1.5 GB given OOO additions).

If compile errors: check `WABBAJACK_NOMATCH_INCLUDE_FILES.txt` and `WABBAJACK_IGNORE_FILES.txt` for the new OOO mods (per `feedback_wabbajack_compile.md`).

- [ ] **Step 6: Test install to Reborn-Test**

```bash
cd "D:/Modlists/Reborn"
bash scripts/install.sh --target "D:/Modlists/Test/" --force
```

Expected: ~10s install. Per `feedback_wabbajack_compile.md`, the script handles the `Finished Installation` log-grep workaround for the screen-size FATAL false alarm.

- [ ] **Step 7: Smoke-test the installed Reborn-Test**

Manual GUI. Launch Reborn-Test via MO2. Reach main menu. Verify game runs.

- [ ] **Step 8: Commit promote + manifest final**

```bash
cd "D:/Modlists/Reborn"
git add profiles/Reborn-Base/ research/manifest.csv
git commit -m "phase H: promote OOO integration to Reborn-Base"
```

- [ ] **Step 9: Tag and push**

```bash
git tag -a "v-ooo-1.7-integration" -m "OOO 1.7.0.0 integrated into Reborn-Base"
git push
git push --tags
```

- [ ] **Step 10: Publish GitHub Release with .wabbajack asset**

Per `reference_reborn_github.md`:

```bash
gh release create v-ooo-1.7-integration "D:/Modlists/Reborn-Base.wabbajack" \
  --title "OOO 1.7 integration" \
  --notes "Adds OOO 1.7.0.0 + Unofficial Patch + SI + KotN patch alongside MOO. See spec docs/superpowers/specs/2026-04-30-add-ooo-design.md."
```

Verify release published; .wabbajack asset uploaded.

- [ ] **Step 11: Memory updates**

Per spec, write at promote time:

Create `C:\Users\mschon\.claude\projects\D--Modlists\memory\project_reborn_ooo_integration.md` documenting:
- OOO 1.7.0.0 in Reborn
- Analyzer→decisions→builder workflow location
- MOO compat auto-rewrite caveat
- Drift-vs-APW-CR concern + actual count seen
- CR residue acceptance count

Add MEMORY.md index entry.

Update `project_apw_reborn.md` "Current state" line: bump mod count, add OOO presence, mention `Reborn-OOO` profile (now archived/dormant or kept for next OOO update iterations).

- [ ] **Step 12: Cleanup — remove temp APW CR mod**

If `_TEMP_APW_CR_for_analysis/` is still in `mods/`, remove it now (it was only needed for analyzer/builder runs):

```bash
ls "D:/Modlists/Reborn/mods/_TEMP_APW_CR_for_analysis/" 2>/dev/null
rm -rf "D:/Modlists/Reborn/mods/_TEMP_APW_CR_for_analysis/"
```

Also remove from MO2 left pane (refresh MO2). Disable in any profile that has it active.

```bash
git add profiles/
git commit -m "phase H cleanup: remove _TEMP_APW_CR_for_analysis mod"
```

---

## Self-Review

**Spec coverage:** Walked the spec section by section.
- "Goal" → Tasks 1-12 collectively. ✅
- "Mod set" → Tasks 2 (verify) + 3 (install). ✅
- "Bashed Patch & tagging" → Task 4. ✅
- "CR ESP construction" → Tasks 5-9. ✅
- "MOO settings & OOO detection" → covered in Task 3 step 14 (acceptance check). ✅
- "Phased rollout" → Tasks 1-12 map to phases A-H. ✅
- "Manifest, memory & docs" → Tasks 3, 4, 12. ✅
- "Follow-ups to revisit" → Task 12 step 11 captures these in memory. (Not a build task per se.) ✅
- "Risks and unknowns" → Task 11 step 1 enforces the soak gate definition. ✅

**Placeholder scan:** Found and resolved:
- "Implementation detail expanded in next step" stub in Task 5 step 7 → expanded in step 9.
- "TODO: improve drift detection in a follow-up" in Task 5 step 16 → kept (explicit deferral, documented).
- "no spec yet for tweak DSL" deferral in Task 8 step 5 → kept (modify decisions emit a NOTE; user can hand-edit ESP afterward if needed).
- "Exact invocation depends on the oblivion-conflicts CLI shape" in Task 10 step 1 → ambiguous; referenced the canonical memory but didn't paste the command. **Fix below.**

**Type consistency:** Function names used in Pascal scripts:
- `RecordTouchesOOO` (defined in Task 5 step 7, referenced in step 9)
- `ChangeSummary` (Task 5 step 13, referenced in step 14)
- `DiffPatternHash` (Task 5 step 15, referenced in Task 8 step 5)
- `EmitRow` / `CSVEscape` (defined Task 5 step 11, referenced step 14)
- `WalkAndProcess` / `ProcessRecord` (Task 8 step 5, used in step 6)

All consistent. CSV column names also consistent across analyzer and builder.

**Fix one ambiguity** — applied inline to Task 10 step 1 (added the canonical wrapper invocation and explicit fallback command).

---

## Notes for the executor

- **Pascal scripting is iterative.** Tasks 5 and 8 prescribe incremental development (stub → enumerate → filter → emit). If a step's xEdit run produces unexpected results, debug *that step* before moving on. Don't skip ahead.
- **The CR ESP is reproducible.** Never hand-edit `Reborn - OOO Conflict Resolution.esp`. Manual fixes go in `Reborn - Manual CR.esp` (per spec).
- **The temp APW CR mod (`_TEMP_APW_CR_for_analysis/`) only exists during Phases D-F.** Task 12 step 12 explicitly removes it. Don't let it leak into the Wabbajack compile.
- **Saves don't survive ESM additions.** Reborn-OOO uses fresh starts only. Reborn-Base saves break when this lands.
- **MO2 silent-revert risk** (per `feedback_mo2_live_edits.md`): never edit `modlist.txt` while MO2 is running. Task 1 step 2 enforces this.
