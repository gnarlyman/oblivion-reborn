# DLC Delay Mechanism — Reborn

**Investigation date:** 2026-04-29
**Driver question:** Why does every Oblivion DLC quest fire the moment the player walks outdoors after chargen, despite `Delay DLC Start.esp` being loaded?
**Source brief:** `2026-04-29-dlc-delay-investigation.md`

---

## TL;DR

`Delay DLC Start.esp` *does* its job: it correctly clears the **Start Game Enabled** (SGE) flag on every Oblivion-DLC start quest. The DATA flag byte goes from `1` → `0` for `DLCHorseArmor`, `DLCOrrery`, `DLCDeepscorn` (Vile Lair), `DL9MehrunesQuest`, `DLC06ThievesDen`, `DLCBattlehornCastle`, `DLCFrostcragSpire`, and `SE01Door` (Shivering Isles). With SGE cleared the quests are dormant on game load.

But `PSMainQuestDelayer.esp` — the *main-quest* delayer — also ships a chargen helper script (`PSCharactergenStartingEquipmentScript`, FormID `1A012EAF`) that, immediately after chargen finishes, force-starts every DLC by calling `SetStage` directly. `SetStage` on an inactive quest implicitly starts it, bypassing SGE entirely.

That helper has a guard:
```
if (IsModLoaded "Oblivion DLC Delayers.esp" == 1)
    set doOnce to 9   ; skip the DLC kickoff block
else
    set doOnce to 1   ; run it
endif
```

The guard checks the literal filename **`Oblivion DLC Delayers.esp`** (an older delayer mod). Reborn ships **`Delay DLC Start.esp`**, a different filename. The guard returns false, the kickoff runs, all DLC quests are jammed to stage 10 (or 30 for HorseArmor) the moment chargen ends.

**Fix:** override `PSCharactergenStartingEquipmentScript` in `Reborn Conflicts.esp`, expanding the guard to also recognize `Delay DLC Start.esp`.

---

## What each plugin actually does

### `Delay DLC Start.esp`

Touches **50 quest/script/dialog records** (per the sweep cache, `caOnlyOne` excluded). The relevant edits:

- **Clears SGE flag on every DLC start quest.** Verified by reading the DATA→Flags sub-element via xEdit Pascal (vanilla = `Flags=1`, override = `Flags=0`):
  | Quest | FormID | Vanilla SGE | Delay DLC Start SGE |
  |---|---|---|---|
  | DLCHorseArmor | `07000CEC` | 1 | 0 |
  | DLCOrrery | `0911B9FB` | 1 | 0 |
  | DLCDeepscorn (Vile Lair) | `0B0041C4` | 1 | 0 |
  | DL9MehrunesQuest | `0D000ED9` | 1 | 0 |
  | DLC06ThievesDen | `10003E84` | 1 | 0 |
  | DLCBattlehornCastle | `1300B089` | 1 | 0 |
  | DLCFrostcragSpire | `14000D53` | 1 | 0 |
  | SE01Door (SI intro) | `000133BF` | 1 | 0 |
- Knights of the Nine quests (`ND10`, `ND02`, `NDPilgrim`) already had `Flags=0` in vanilla `Knights.esp` — they use a chapel-trigger entry path, not SGE, so no change there.
- Adds tweaks to per-DLC scripts (`DLCBattlehornCastleScript`, `DL9QuestSCRIPT`, etc.) with new informational stages — *does not* alter the kickoff conditions; the kickoff blocks (`if GetStage CharacterGen >= 88 ...`) remain identical to vanilla. This is fine because the kickoff scripts only run when the quest is active, and SGE=0 keeps them dormant.

### `PSMainQuestDelayer.esp`

A **main-quest** delayer + chargen overhaul. Owns its own quest infrastructure (`PSPreMQDialogue`, `PSCharactergen`) and 9 new scripts. Touches the vanilla `Charactergen` QUST, `MQ01` QUST, and the chargen scripts (`CGSewerExitScript`, `CGGlenroyScript`, `CGEmperorScript`, `BaurusScript`, the `Startup` master init script, and the `CharGenQuest` script).

Three of its scripts are relevant to DLC behavior:

1. **`CGSewerExitScript`** (`0000A396`) — runs on activation of the sewer-exit door. Sets `Charactergen` stage 88 (the threshold the vanilla DLC kickoffs watch). On its own this is harmless because all DLC SGE is cleared.
2. **`PSPreMQStartScript`** (`1A012108`) — fires after chargen completes. `StartQuest`s only `SQ07` and `TrainingRestoration`. Does *not* touch DLC.
3. **`PSCharactergenStartingEquipmentScript`** (`1A012EAF`, ~44 KB) — distributes starting gear, then kicks off every Oblivion DLC. **This is the offender.**

The kickoff is structured as a per-frame `doOnce` state machine:

```
;<gear distribution>...

if (IsModLoaded "Oblivion DLC Delayers.esp" == 1)
    ;Just skip to the end if an alternate way of starting the DLC is installed.
    set doOnce to 9
else
    set doOnce to 1
endif

elseif (doOnce == 1)
    set doOnce to 2
    if (IsModLoaded "DLCShiveringIsles.esp" == 1)
        set SE01Door.startday to (GameDaysPassed)
        set SE01Door.doOnce2 to 1
    endif
elseif (doOnce == 2)
    set doOnce to 3
    if (IsModLoaded "DLCHorseArmor.esp" == 1)
        set DLHorseArmorQuest to (GetFormFromMod "DLCHorseArmor.esp" 000CEC)
        set DLHorseArmorNote to (GetFormFromMod "DLCHorseArmor.esp" 005235)
        SetStage DLHorseArmorQuest 30
        Player.AddItem DLHorseArmorNote 1
        SnakgraBuraRef.ModDisposition Player 20
    endif
elseif (doOnce == 3)
    ; ... DLCFrostcrag → SetStage DLFrostcragQuest 10
elseif (doOnce == 4)
    ; ... DLCThievesDen → SetStage DLThievesDenQuest 10
elseif (doOnce == 5)
    ; ... DLCVileLair → SetStage DLVileLairQuest 10
elseif (doOnce == 6)
    ; ... DLCMehrunesRazor → SetStage DLMehrunesRazorQuest 10
elseif (doOnce == 7)
    ; ... DLCBattlehornCastle → SetStage DLBattlehornQuest 10
elseif (doOnce == 8?)
    ; ... DLCOrrery → enable 5 bandits in Tamriel, AddItem DLOrreryNote, SetStage DLOrreryQuest 10
```

Note that `PSCharactergenStartingEquipmentScript` does **not** appear in the FormID-reference graph for the DLC quests (verified via `ReferencedByCount`/`ReferencedByIndex`). That's because it resolves the FormIDs at runtime via `GetFormFromMod`, which doesn't create a static SCRO link. This is why the original Step 1 references query missed it.

### `Reborn Conflicts.esp` (current state)

Overrides only two records:
- `MQ01` (QUST `0001E723`)
- `CharGenQuest` (SCPT `0002480B`)

Both relate to the **main quest** delay flow, not DLC start. They don't touch `PSCharactergenStartingEquipmentScript` and therefore can't suppress the DLC kickoff.

---

## Failure mode (matching the brief's pattern list)

This is the **"Untouched"** pattern with a wrinkle:

> Delay DLC Start.esp doesn't actually touch the DLC quests in this load order — wrong flag, wrong record, dead override path.

Delay DLC Start *does* touch the right records and *does* set the right flag — SGE is cleared. But the SGE-based mechanism is irrelevant because `PSCharactergenStartingEquipmentScript` calls `SetStage` directly. The relevant override path for the *script* is dead: PSMainQuestDelayer's filename guard (`Oblivion DLC Delayers.esp`) doesn't match Reborn's delayer filename (`Delay DLC Start.esp`).

This is also the partial cause of the prior `feedback_moo_delay_dlc_si_conflict.md` finding: the SI intro is bypassed by *two* paths in Reborn — MOO's `MOOInitSEFunctionScript` (already mitigated via `MOO.ini_add_notice_SE = 0`), and `PSCharactergenStartingEquipmentScript`'s `doOnce==1` branch which writes `SE01Door.startday` and `doOnce2`. Until the script-side fix lands, MOO INI alone isn't sufficient to fully delay SI.

---

## Fix

### Recommended: patch the script in `Reborn Conflicts.esp`

Override `PSCharactergenStartingEquipmentScript` (FormID `1A012EAF`) in `Reborn Conflicts.esp`. Change the guard:

```
; before
if (IsModLoaded "Oblivion DLC Delayers.esp" == 1)
    set doOnce to 9
else
    set doOnce to 1
endif

; after
if (IsModLoaded "Oblivion DLC Delayers.esp" == 1) || (IsModLoaded "Delay DLC Start.esp" == 1)
    set doOnce to 9
else
    set doOnce to 1
endif
```

That's the only line that needs to change. Everything else stays intact, so the script still works correctly if Reborn ever swaps to a different delayer or someone removes `Delay DLC Start.esp`.

**How to apply** (procedural, for whoever does the build):
1. Open `Reborn Conflicts.esp` in TES4Edit (xEdit) with the Reborn-Base load order.
2. Right-click `PSMainQuestDelayer.esp \ Script \ PSCharactergenStartingEquipmentScript [SCPT:1A012EAF]` → **Copy as override into → Reborn Conflicts.esp**.
3. Edit the SCTX (Script Source) of the new override: change the guard line as above.
4. Save. xEdit will recompile SCDA from SCTX.
5. Bashed Patch: rebuild (the script is now in Reborn Conflicts.esp; Bashed Patch should not need a tag for this — it's a straight script override).

### Alternative fixes (not recommended)

- **Rename `Delay DLC Start.esp` → `Oblivion DLC Delayers.esp`.** Triggers a chain reaction: MO2 metadata, plugins.txt, any other mod that explicitly references the filename, Wabbajack manifest. Easier to avoid.
- **Drop in an empty dummy `Oblivion DLC Delayers.esp`.** Pollutes the load order with a no-op plugin and an extra plugin slot; future readers will be puzzled by the placeholder.

The script override is one record in `Reborn Conflicts.esp` and self-documents the reason for being there.

---

## Verification

After applying the fix:

1. **Static check** — re-run the sweep and confirm:
   - `Reborn Conflicts.esp` is now the winner of `1A012EAF` (chain `[PSMainQuestDelayer.esp, Reborn Conflicts.esp]`).
   - The SCTX of the override contains `(IsModLoaded "Delay DLC Start.esp" == 1)`.
   ```bash
   cd D:/Modlists/_clones/oblivion-conflicts
   ./examples/reborn-shortcut.sh "$(pwd)/scripts/query_record_v2.pas" --formid=1A012EAF --out=/tmp/verify.json
   # then jq/python: walk subrecords, find SCTX, look for the guard
   ```
2. **In-game check** — start a fresh game using the alt-start (Skip Intro) flow. After exiting the chargen sewer / chargen completes:
   - Open the journal. **Pass:** no DLC quest entries appear (HorseArmor, Frostcrag, Battlehorn, Mehrunes Razor, ThievesDen, Vile Lair, Orrery, SI).
   - Inventory: **Pass:** no `DLHorseArmorNote`, no `DLOrreryNote`.
   - Travel to the Sundercliff/Orrery area near the IC: **Pass:** the five Orrery bandits remain disabled (they are only enabled by the DLC quest script in vanilla, and by `PSCharactergenStartingEquipmentScript`'s `doOnce==8` branch in PSMQD).
   - Console: `getstage DLCBattlehornCastle` should return `0`. Same for the others.
3. **Trigger DLC manually** — confirm the natural entry paths still work: e.g., visit Anvil → speak to the Battlehorn courier → quest starts. The SGE-based dormancy means each DLC waits for its own intended hook, which is the `Delay DLC Start` design intent.

---

## Appendix — research artifacts left behind

In `D:/Modlists/_clones/oblivion-conflicts/scripts/`:

- `query_record_v2.pas` — fork of `query_record.pas` that resolves cross-master FormIDs correctly via `(fid >> 24) & 0xFF` → `FileByLoadOrder(loIdx)`. The original loop iterates all files and grabs the first non-nil match, which silently misresolves DLC FormIDs (e.g. `07000CEC` → vanilla REFR `00000CEC`). This bug should be fixed upstream in the oblivion-conflicts repo.
- `quest_flags.pas` — drills `DATA → Flags` and `DATA → Priority` sub-elements per chain link, working around the JvInterpreter limitation where struct-level `GetEditValue` returns empty.
- `references_to.pas` — walks `ReferencedByCount`/`ReferencedByIndex` for each target FormID. Useful for finding "who references this quest", but **does not pick up runtime FormID resolution via `GetFormFromMod`** — that's how the PSMainQuestDelayer script eluded the first pass.
- `list_owned.pas` — lists records a plugin owns/modifies via `GroupBySignature`, regardless of conflict status (the sweep cache filters out `caOnlyOne`).
