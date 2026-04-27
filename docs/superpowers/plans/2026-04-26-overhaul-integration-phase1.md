# Phase 1 Overhaul Integration — Stage MOO + Ultimate Leveling

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Stage Maskar's Oblivion Overhaul (MOO) v5.0.5 and Ultimate Leveling into the Reborn modlist, with Reborn Configs ini overrides applied, and the game verified to launch with MOO active.

**Architecture:** Port MOO archive from APW downloads (already cached). Acquire UL fresh from Nexus (not in APW). Install both via MO2's standard archive installer into the existing `OVERHAULS AND LEVELING_separator/` group. Centralize ini overrides under `mods/Reborn Configs/` (existing pattern), with Reborn Configs loaded after MOO/UL so its inis win via MO2's VFS.

**Tech Stack:** MO2 (portable), Wabbajack workflow conventions, Wrye Bash (Bashed Patch — deferred), Reborn manifest CSV (Python rebuild script), Git.

**Spec:** `docs/superpowers/specs/2026-04-26-overhaul-integration-design.md`

**Out of scope:** Phase 1.5 PTWB tools (deferred until quest mod added). Phase 2 escape hatches (OOO, Av Latta Magicka). Combat overhaul layer (separate research dive). Bashed Patch rebuild (open question — deferred to its own task once we know whether MOO/UL contribute leveled-list records that need merging).

---

## File Structure

**Created:**
- `D:/Modlists/Reborn/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z` — MOO archive (copied from APW)
- `D:/Modlists/Reborn/downloads/<UL-archive-filename>` — Ultimate Leveling archive (downloaded from Nexus)
- `D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul/` — MOO mod folder (created by MO2 installer)
- `D:/Modlists/Reborn/mods/Ultimate Leveling/` — UL mod folder (created by MO2 installer)
- `D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini` — main MOO user ini override
- `D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini` — UL user ini override

**Modified:**
- `D:/Modlists/Reborn/research/manifest.csv` — flip AV Uncapper rows to `skipped`, add MOO row as `installed`, add new Ultimate Leveling row
- `D:/Modlists/Reborn/profiles/Reborn-Base/modlist.txt` — auto-updated by MO2 (mod activation)
- `D:/Modlists/Reborn/profiles/Reborn-Base/plugins.txt` — auto-updated by MO2 (esp/esm activation)

**Reference:**
- `D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z` — MOO source archive
- `D:/Modlists/APW/mods/A Painted World Configs/Maskar's Oblivion Overhaul.ini` — reference for what APW tuned (do NOT copy verbatim per spec; APW has refs to APW-only mods)

---

## Task 1: Copy MOO archive from APW to Reborn downloads

**Files:**
- Source: `D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z`
- Source: `D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z.meta`
- Dest: `D:/Modlists/Reborn/downloads/`

- [ ] **Step 1: Verify source archive exists and note size**

```bash
ls -la "D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z"
```

Expected: file exists, size > 100MB.

- [ ] **Step 2: Verify Reborn downloads dir has no MOO already**

```bash
ls D:/Modlists/Reborn/downloads/ | grep -iE "maskar|oblivion.overhaul" | head -5
```

Expected: empty output (no existing MOO archive).

- [ ] **Step 3: Copy archive + .meta sidecar**

```bash
cp "D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z" D:/Modlists/Reborn/downloads/
cp "D:/Modlists/APW/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z.meta" D:/Modlists/Reborn/downloads/
```

- [ ] **Step 4: Verify copy**

```bash
ls -la "D:/Modlists/Reborn/downloads/Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z"
```

Expected: file present, same size as source.

---

## Task 2: Acquire Ultimate Leveling archive (USER ACTION — Nexus download)

**Why USER ACTION:** UL is not in APW (verified 2026-04-26 — `find D:/Modlists/APW/mods -iname "*ultimate*leveling*"` returned nothing, and no archive in `APW/downloads/`). Nexus mod 49134 does not have a "mod manager download" button (manual-only). Must be downloaded by the user via browser, signed in to Nexus.

- [ ] **Step 1: Download Ultimate Leveling**

User opens https://www.nexusmods.com/oblivion/mods/49134, clicks the Files tab, downloads the **MAIN file** (latest version, currently expected to be v1.x — note the version when downloading).

Save to: `D:/Modlists/Reborn/downloads/`

- [ ] **Step 2: Verify download landed**

```bash
ls -la D:/Modlists/Reborn/downloads/ | grep -iE "ultimate.leveling|^Ultimate"
```

Expected: 1 archive present (.7z, .zip, or .rar). Note the exact filename for use in Task 4.

- [ ] **Step 3: Note version number for manifest**

Open the archive (or check the Nexus page) and capture the version string (e.g., "1.9.5"). Will be used in Task 9 manifest update.

---

## Task 3: Install MOO via MO2 (USER ACTION — MO2 GUI)

**Why USER ACTION:** MO2's archive installer is GUI-driven. Cannot be scripted from outside. The installer will present option dialogs (BAIN-style installer with optional features).

- [ ] **Step 1: Open MO2 (portable, from `D:/Modlists/Reborn/`)**

Run `D:/Modlists/Reborn/ModOrganizer.exe`. Confirm the active profile is `Reborn-Base`.

- [ ] **Step 2: Refresh downloads pane**

Right-click in the Downloads pane (right side, bottom tab) → Refresh. The MOO archive copied in Task 1 should appear.

- [ ] **Step 3: Install the archive**

Double-click the MOO archive in the Downloads pane. The MO2 installer dialog will appear.

- [ ] **Step 4: Choose installer options**

MOO ships as a BAIN-format installer. Select these options:
- **Main:** required, leave checked
- **Optional patches:** **DO NOT** select OOO compatibility, Francesco's compatibility, MMM compatibility, or any other overhaul-specific patches (Reborn does not have those overhauls in Phase 1)
- If presented with difficulty presets (Easy/Normal/Hard variants of the .esp), choose the **default/normal** variant
- Mod name: leave as default ("Maskars Oblivion Overhaul")

Click "OK" / "Install".

- [ ] **Step 5: Verify mod appears in left pane**

The new mod "Maskars Oblivion Overhaul" should appear at the bottom of the left-pane mod list, **unchecked**.

- [ ] **Step 6: Move into OVERHAULS AND LEVELING separator**

Drag "Maskars Oblivion Overhaul" so it sits **immediately below** the `OVERHAULS AND LEVELING` separator in the left pane.

- [ ] **Step 7: Activate the mod**

Check the box next to "Maskars Oblivion Overhaul" in the left pane.

- [ ] **Step 8: Activate the .esp**

In the right pane (Plugins tab), the new `Maskar's Oblivion Overhaul.esp` should appear. Check its box. LOOT may suggest a load order — accept or run "Sort" later.

- [ ] **Step 9: Verify install on filesystem**

```bash
ls "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul/" | head -10
```

Expected: contains `Maskar's Oblivion Overhaul.esp`, `Maskar's Oblivion Overhaul.bsa`, several `Maskar's Oblivion Overhaul *.ini` files at root.

---

## Task 4: Install Ultimate Leveling via MO2 (USER ACTION — MO2 GUI)

**Why USER ACTION:** Same reason as Task 3.

- [ ] **Step 1: Refresh downloads pane (if needed)**

In MO2 Downloads pane, right-click → Refresh. The UL archive from Task 2 should appear.

- [ ] **Step 2: Install the archive**

Double-click the UL archive in the Downloads pane.

- [ ] **Step 3: Choose installer options**

UL is a simpler installer. Defaults are typically fine. If presented with optional patches for OOO/MMM/Francesco's, do not select them.

Mod name: leave as default ("Ultimate Leveling").

- [ ] **Step 4: Move into OVERHAULS AND LEVELING separator**

Drag "Ultimate Leveling" so it sits immediately below "Maskars Oblivion Overhaul" in the OVERHAULS AND LEVELING group.

- [ ] **Step 5: Activate the mod and its .esp**

Check the box on "Ultimate Leveling" (left pane) and on `Ultimate Leveling.esp` (right pane).

- [ ] **Step 6: Verify install on filesystem**

```bash
ls "D:/Modlists/Reborn/mods/Ultimate Leveling/" | head -10
```

Expected: contains `Ultimate Leveling.esp` and `Ultimate Leveling.ini` (at root, same convention as MOO).

---

## Task 5: Move Reborn Configs to load AFTER MOO and UL

**Why:** For Reborn Configs ini overrides to win the VFS conflict against MOO/UL's shipped inis, Reborn Configs must load AFTER both in MO2's left pane.

- [ ] **Step 1: Verify current Reborn Configs position**

In MO2 left pane, find "Reborn Configs". Note its current position relative to MOO and UL.

- [ ] **Step 2: Move Reborn Configs below MOO and UL**

Drag "Reborn Configs" to a position immediately below "Ultimate Leveling" in the left pane. (If Reborn Configs is already below all OVERHAULS AND LEVELING entries, no move needed.)

- [ ] **Step 3: Verify VFS conflict resolution**

Right-click "Reborn Configs" in left pane → Information → Conflicts tab. Once we add MOO ini overrides (Task 6), this tab will show MOO/UL ini files as "winning" conflicts here. Note the current state for comparison after Task 6.

---

## Task 6: Copy stock MOO main ini into Reborn Configs

**Files:**
- Source: `D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul/Maskar's Oblivion Overhaul.ini`
- Dest: `D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini`

**Why:** The spec calls for centralizing all per-mod ini customization in Reborn Configs. We copy the stock ini as the baseline, then apply Bevilex tweaks in Task 7. We do NOT copy APW's tuned version (open question #2 in spec — APW's has refs to APW-only mods).

- [ ] **Step 1: Verify stock MOO ini exists at expected path**

```bash
ls "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul/Maskar's Oblivion Overhaul.ini"
```

Expected: file exists. (Created by Task 3 install.)

- [ ] **Step 2: Verify Reborn Configs does not already have a MOO ini override**

```bash
ls "D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini" 2>&1
```

Expected: "No such file or directory".

- [ ] **Step 3: Copy stock ini**

```bash
cp "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul/Maskar's Oblivion Overhaul.ini" "D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini"
```

- [ ] **Step 4: Verify copy**

```bash
ls -la "D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini"
```

Expected: file exists, same size as source.

---

## Task 7: Apply Bevilex baseline tweaks to MOO ini in Reborn Configs

**File:** `D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini`

**Why:** Spec calls for the 5-line Bevilex baseline as starting tweaks. These disable features that overlap with other Reborn mods or are commonly disliked.

- [ ] **Step 1: Locate and edit the 5 target lines**

Use Edit tool to change each of these 5 settings in the Reborn Configs MOO ini. The stock values are typically `1` for the first 4 and `1` for `dungeon_light`.

```
set MOO.ini_add_veins to 0
set MOO.ini_add_vampire to 0
set MOO.ini_levelscaling_npc_overridden to 0
set MOO.ini_ability_heal to 0
set MOO.ini_dungeon_light to 2
```

For each line, find the existing `set MOO.ini_<name> to <N>` and replace `<N>` with the target value above. Do NOT add new lines if the variable already exists — modify the existing line in place.

- [ ] **Step 2: Verify the 5 tweaks are present and correct**

```bash
grep -E "set MOO.ini_(add_veins|add_vampire|levelscaling_npc_overridden|ability_heal|dungeon_light) to" "D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini"
```

Expected: 5 lines, with values `0`, `0`, `0`, `0`, `2` respectively.

- [ ] **Step 3: Verify Reborn Configs is winning the VFS conflict**

In MO2: right-click "Reborn Configs" → Information → Conflicts. The file `Maskar's Oblivion Overhaul.ini` should appear under "Wins" with "Maskars Oblivion Overhaul" listed as the loser.

---

## Task 8: Copy and tweak Ultimate Leveling ini

**Files:**
- Source: `D:/Modlists/Reborn/mods/Ultimate Leveling/Ultimate Leveling.ini`
- Dest: `D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini`

**Why:** Spec calls for keeping UL defaults plus the single override `set ULVL.ini_rested_mode to 2` (the only specific anti-cheese tweak with independent backing per research).

- [ ] **Step 1: Verify stock UL ini exists at expected path**

```bash
ls "D:/Modlists/Reborn/mods/Ultimate Leveling/Ultimate Leveling.ini"
```

Expected: file exists. (Created by Task 4 install.)

If it does NOT exist at this path, search for it:
```bash
find "D:/Modlists/Reborn/mods/Ultimate Leveling" -iname "*.ini" | head -5
```
And update the Source path used in Step 3 accordingly.

- [ ] **Step 2: Verify Reborn Configs does not already have a UL ini override**

```bash
ls "D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini" 2>&1
```

Expected: "No such file or directory".

- [ ] **Step 3: Copy stock ini**

```bash
cp "D:/Modlists/Reborn/mods/Ultimate Leveling/Ultimate Leveling.ini" "D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini"
```

- [ ] **Step 4: Locate the rested_mode line**

```bash
grep -n "rested_mode" "D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini"
```

Expected: at least one line like `set ULVL.ini_rested_mode to <N>`. Note the line number.

- [ ] **Step 5: Set rested_mode to 2 via Edit tool**

Find the existing line (likely `set ULVL.ini_rested_mode to 1` or similar default) and change the value to `2`. Edit in place — do not duplicate.

- [ ] **Step 6: Verify the tweak**

```bash
grep -E "set ULVL.ini_rested_mode to" "D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini"
```

Expected: exactly one line, with value `2`.

- [ ] **Step 7: Verify Reborn Configs winning the VFS conflict (in MO2)**

Right-click "Reborn Configs" → Information → Conflicts. `Ultimate Leveling.ini` should show under "Wins" with "Ultimate Leveling" listed as loser.

---

## Task 9: Update manifest.csv

**File:** `D:/Modlists/Reborn/research/manifest.csv`

**Why:** Per spec, manifest tracks status of every mod. Phase 1 install requires:
- Flip `AV Uncapper` to `skipped` (already disabled in MO2 by user 2026-04-26)
- Flip `AV Uncapper Settings - Fixed` to `skipped`
- Flip `Maskars Oblivion Overhaul` to `installed`
- Add new row for `Ultimate Leveling`

Manifest preserves user-curated columns per `feedback_no_silent_status_overwrites.md` — make targeted edits, do NOT regenerate.

- [ ] **Step 1: Backup manifest before edit**

```bash
cp D:/Modlists/Reborn/research/manifest.csv D:/Modlists/Reborn/research/manifest.csv.before_phase1_overhaul
```

- [ ] **Step 2: Find AV Uncapper rows**

```bash
grep -n "^AV Uncapper" D:/Modlists/Reborn/research/manifest.csv
```

Expected: 2 lines (line ~24 "AV Uncapper" and line ~25 "AV Uncapper Settings - Fixed").

- [ ] **Step 3: Edit AV Uncapper status to skipped**

Use Edit tool on the manifest.csv:
- Change `AV Uncapper`'s `status` column from `installed` to `skipped` and update `notes` to: `"Superseded by Ultimate Leveling — UL has its own attribute/skill cap logic; running both fights for OBSE caps. Disabled in MO2 2026-04-26."`
- Change `AV Uncapper Settings - Fixed` `status` from `installed` to `skipped`, notes: `"Companion ESP for AV Uncapper, also superseded."`

- [ ] **Step 4: Find Maskars Oblivion Overhaul row**

```bash
grep -n "^Maskars Oblivion Overhaul" D:/Modlists/Reborn/research/manifest.csv
```

Expected: 1 line (~line 259), currently with `status=skipped`.

- [ ] **Step 5: Edit MOO row to installed**

Change MOO's `status` from `skipped` to `installed`. Add note: `"Phase 1 base overhaul. v5.0.5. Bevilex baseline tweaks applied via Reborn Configs."`

- [ ] **Step 6: Add Ultimate Leveling row**

Append a new row at the end of the manifest (or at an appropriate position). Use the same column schema as existing rows. Suggested values:

```
Ultimate Leveling,,UTILITIES (Reborn-added),,esm+esp+bsa,,no:has BSA; has new records,,no,installed,Phase 1 leveling system. Defaults + rested_mode 2 override via Reborn Configs.,https://www.nexusmods.com/oblivion/mods/49134
```

(Adjust the `mod_kind`, `loose_files`, `bash_mergeable`, and `apw_merged` columns based on what UL actually ships — check after install. Use the "" / "no" defaults if uncertain; refine in a follow-up.)

- [ ] **Step 7: Verify CSV is well-formed**

```bash
wc -l D:/Modlists/Reborn/research/manifest.csv
```

Expected: 782 lines (was 781, +1 for UL).

```bash
python -c "import csv; rows=list(csv.reader(open('D:/Modlists/Reborn/research/manifest.csv', encoding='utf-8'))); print(f'rows: {len(rows)}, columns in header: {len(rows[0])}, sample row column count: {len(rows[1])}')"
```

Expected: row count and column count consistent.

---

## Task 10: Verify load order and run LOOT

**Why USER ACTION:** MO2 GUI required for plugin sort.

- [ ] **Step 1: Run LOOT from MO2**

In MO2 toolbar, click LOOT (or Tools → LOOT). Let it complete the sort.

- [ ] **Step 2: Resolve any reported issues**

LOOT may report missing patches or load order suggestions. Read each carefully:
- If LOOT suggests a new patch mod (e.g., "Maskar's Oblivion Overhaul - OCRAFT Patch") that we have NOT installed, that's expected — Phase 1 doesn't include those secondary mods.
- If LOOT reports an actual conflict (red triangle), pause and report it; do not proceed to Task 11.

- [ ] **Step 3: Verify plugin order**

`Maskar's Oblivion Overhaul.esp` should be near the bottom of the load order (LOOT typically places it after most content but before the bashed patch). `Ultimate Leveling.esp` typically loads after MOO.

- [ ] **Step 4: Apply the sorted order**

Click "Apply" in LOOT.

---

## Task 11: Launch verification (USER ACTION)

**Why USER ACTION:** Game launch from MO2; visual confirmation required.

- [ ] **Step 1: Launch Oblivion from MO2**

In MO2 toolbar, select `OBSE` (or `Oblivion (OBSE)`) from the run dropdown, click Run.

- [ ] **Step 2: Verify MOO loads**

When the main menu appears, OBSE should print MOO's load message in the corner (or you'll see it during a "New Game" — MOO injects messages early). If you see an error like "Maskar's Oblivion Overhaul.esp depends on missing master ____", stop and report.

- [ ] **Step 3: Start a New Game (or load an existing test save)**

Quickly proceed past the intro until you can move freely. Within ~30 seconds, MOO should display its initialization messages (something like "Maskar's Oblivion Overhaul initialized" or similar — varies by version).

- [ ] **Step 4: Verify Ultimate Leveling loads**

Open the character menu (Tab → Stats). Ultimate Leveling typically replaces or augments the level-up menu. You may see UL's level/XP display.

- [ ] **Step 5: Quick stability test**

Walk around for 1-2 minutes. Cast a spell, swing a sword, pick up an item. No crashes expected.

- [ ] **Step 6: Exit cleanly**

Save (use a NEW save slot, do not overwrite) and quit to desktop. Verify the game closes cleanly (no error dialog).

---

## Task 12: Commit Reborn changes to git

**Files:**
- `D:/Modlists/Reborn/research/manifest.csv` (modified)
- `D:/Modlists/Reborn/mods/Reborn Configs/Maskar's Oblivion Overhaul.ini` (new)
- `D:/Modlists/Reborn/mods/Reborn Configs/Ultimate Leveling.ini` (new)
- (NOT committed: `mods/Maskars Oblivion Overhaul/`, `mods/Ultimate Leveling/` — these are mod binaries, gitignored)

- [ ] **Step 1: Verify gitignore excludes mod binaries**

```bash
git -C D:/Modlists/Reborn check-ignore "mods/Maskars Oblivion Overhaul/Maskar's Oblivion Overhaul.esp"
```

Expected: outputs the path (means gitignored). If output is empty, mod binaries are NOT ignored — STOP and investigate before committing.

- [ ] **Step 2: Stage the targeted changes**

```bash
git -C D:/Modlists/Reborn add research/manifest.csv "mods/Reborn Configs/Maskar's Oblivion Overhaul.ini" "mods/Reborn Configs/Ultimate Leveling.ini"
```

- [ ] **Step 3: Show what will be committed**

```bash
git -C D:/Modlists/Reborn status --short
git -C D:/Modlists/Reborn diff --cached --stat
```

Expected: 3 files staged (manifest.csv modified, two new ini files). No mod binaries staged.

- [ ] **Step 4: Commit**

```bash
git -C D:/Modlists/Reborn commit -m "$(cat <<'EOF'
Phase 1 overhaul stack installed: MOO + Ultimate Leveling

- Manifest: AV Uncapper x2 -> skipped (superseded by UL),
  Maskars Oblivion Overhaul -> installed (v5.0.5),
  add Ultimate Leveling row -> installed
- Reborn Configs: MOO main ini with Bevilex baseline tweaks
  (add_veins=0, add_vampire=0, levelscaling_npc_overridden=0,
   ability_heal=0, dungeon_light=2)
- Reborn Configs: Ultimate Leveling ini with rested_mode=2

Per docs/superpowers/specs/2026-04-26-overhaul-integration-design.md

Co-Authored-By: Claude Opus 4.7 (1M context) <noreply@anthropic.com>
EOF
)"
```

- [ ] **Step 5: Verify commit**

```bash
git -C D:/Modlists/Reborn log --oneline -3
```

Expected: top commit is the Phase 1 commit; second is the spec commit (`0c22ab0`).

---

## Definition of Done

- [ ] MOO + UL installed in MO2, both active in `OVERHAULS AND LEVELING` separator
- [ ] Reborn Configs winning VFS for `Maskar's Oblivion Overhaul.ini` and `Ultimate Leveling.ini`
- [ ] Bevilex baseline tweaks applied to MOO ini
- [ ] `rested_mode 2` applied to UL ini
- [ ] Manifest reflects new state (AV Uncapper skipped, MOO/UL installed)
- [ ] LOOT reports no critical issues
- [ ] Game launches, MOO initializes, no crashes during 1-2 min walk-around
- [ ] Commit landed on `main`

## Follow-ons (NOT this plan)

- Bashed Patch rebuild (open question #1 in spec) — its own decision, deferred until we see whether MOO/UL contribute records that need merging
- Combat overhaul research dive + follow-on design doc (`combat-overhaul-design.md`)
- Phase 1.5 PTWB tools (Balanced Unleveled Rewards, Balanced NPC Level Cap) — install when first quest mod is added
- Real playthrough to evaluate whether Phase 2 escape hatches (OOO, Av Latta Magicka) are needed
