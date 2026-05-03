# APW MQ-vs-DLC resolution mechanism

Source: `APW - Conflict Resolution.esp` script overrides extracted from APW's MO2 instance via `oblivion-conflicts/scripts/dump_chain_subrecord.pas`. SCTX texts for every chain link are split per-record in `D:\Modlists\Reborn\research\apw-script-extracts\<EDID>\<idx>_<plugin>.sctx.txt`.

## TL;DR — three changes do all the work

1. **PSCharactergenStartingEquipmentScript line 517**: APW changes `IsModLoaded "Oblivion DLC Delayers.esp"` → `IsModLoaded "Delay DLC Start.esp"`. With Delay DLC Start present, PSMQD jumps `doOnce` to 9 and `StopQuest`s its starting-equipment quest without ever firing any of the per-DLC `SetStage <DLCQuest> 10` calls. **PSMQD's force-start path is silenced.**

2. **All six DLC auto-deliver scripts**: APW changes the gate from `getStage CharacterGen >= 88` → `getStage PSCharacterGen >= 80`. Affected: `DLCHorseArmorScript`, `DLCOrreryQuestScript`, `DLCDeepscornScript`, `DLC06ThievesDenQuestScript`, `DLCBattlehornCastleScript`, `DLCFrostcragSpireScript`. APW also drops the `Player.GetInCell ImperialDungeon03 == 0` guard since `PSCharacterGen >= 80` already implies post-chargen.

3. **Delay DLC Start v1.2+** is the only DLC-start authority. Its CMScript activates when `Player.IsInInterior == 0` (line 75-82) — explicitly decoupled from `MQ01 stage 100` to support tutorial-skip mods. It then reads `Delay DLC Start.ini` for per-DLC conditions (faction rank, level, worldspace, etc.) and `StartQuest`s each DLC quest when matched.

## Why the user's two requirements are satisfied

### A. DLCs fire based on Delay-DLC-Start.ini config, not MQ progress

- Each DLC quest script's auto-deliver block now gates on **PSCharacterGen >= 80**, which is reached during PSMQD's character-creation flow (specifically the vampire prompt that fires after wealth selection at PSCharacterGen stage 50). PSCharacterGen progression is fully independent of vanilla `CharGenQuest`/MQ.
- Once `PSCharacterGen >= 80`, the per-DLC auto-deliver block is *eligible* but it gates on `getStage <DLCQuest> <= 0`. The actual `StartQuest` comes from `DelayDLCStartCMScript`, which uses INI conditions — not stage-88, not MQ progress.
- INI lives at `D:\Modlists\APW\mods\A Painted World Configs\ini\Delay DLC Start.ini` and exposes per-DLC `MinLevel`, `MinFaction*Rank`, `MinSkillTotal`, `CheckLocation` knobs.

### B. Main quest stays unstarted until arrest in IC

- PSMQD's starting-equipment script does **not** start MQ01. It only fires DLC `SetStage` calls (doOnce 1-8) — which APW disables by routing to doOnce=9 via the renamed-mod-load check.
- Vanilla `CharGenQuest` is the only thing that starts MQ01, and only via stages reached inside the tutorial dungeon (ImperialDungeon03). With Skip Intro / alt-start, the player skips the dungeon entirely so `CharacterGen` never advances past its early stages. MQ01 stays unstarted.
- Arrest-in-IC starts MQ01 through alt-start–ecosystem city scripts (out of scope of these overrides — handled separately by whichever alt-start setup is in use).

## Detailed per-script summary

| Record | Master | APW change |
|---|---|---|
| `PSCharactergenStartingEquipmentScript` | PSMainQuestDelayer.esp | line 517 mod-name guard rename + removed mage spell grants + minor weapon swaps + reduced potion counts (10→5 RestoreHealthW). The mod-name rename is the critical fix. |
| `DLCHorseArmorScript` | DLCHorseArmor.esp | `CharacterGen >= 88` → `PSCharacterGen >= 80`; ImperialDungeon03 guard dropped |
| `DLCOrreryQuestScript` | DLCOrrery.esp | same gate swap |
| `DLCDeepscornScript` | DLCVileLair.esp | same gate swap |
| `DLC06ThievesDenQuestScript` | DLCThievesDen.esp | same gate swap |
| `DLCBattlehornCastleScript` | DLCBattlehornCastle.esp | same gate swap |
| `DLCFrostcragSpireScript` | DLCFrostcrag.esp | primary block: same gate swap. NOTE: a secondary `Doonce5 == 1` block on line 28 still references `CharacterGen >= 88` — likely dead code from FrostcragReborn but worth verifying behaviour if Reborn ports DLCFrostcragReborn.esp |
| `DelayDLCStartCMScript` | Delay DLC Start.esp | only change: `Message "Delay DLC Start processing is now active."` removed (line 78). Pure cosmetic. |
| `SEDoorToShiveringIslesScript` | Oblivion.esm | byte-identical to Delay DLC Start.esp's version. APW just preserves the chain. |
| `CharGenQuest` | Oblivion.esm | only change: `ShowBirthsignMenu` removed at stage 43 (PSMQD shows it via PSCharactergenScript at stage 30 instead — duplicate prompt suppression). |
| `MQ16Script` | Oblivion.esm | restoring OOO override on top of UOP+JoinTheMythicDawn — unrelated to DLC delay chain |
| `PSCharactergenScript` | PSMainQuestDelayer.esp | minor cleanup of unused logic — script behaviour unchanged for our purposes |

## What Reborn needs to replicate

Reborn already has the trio loaded (PSMainQuestDelayer.esp, Delay DLC Start.esp, plus alt-start). Memory entry `feedback_psmqd_force_starts_dlc` already identifies the filename mismatch. Memory entry `feedback_chargen_gates_dlc_couriers` already identifies the stage-88 gate.

The fix is a **set of SCPT overrides in `Reborn Configs`** mirroring APW's:

1. SCPT override for `PSCharactergenStartingEquipmentScript` — only required edit is line 517 (`Oblivion DLC Delayers.esp` → `Delay DLC Start.esp`).
2. SCPT overrides for the six DLC scripts — change `CharacterGen >= 88` → `PSCharacterGen >= 80` (verify the exact spelling of the global the PSMQD QUST uses; APW used `PSCharacterGen` in some scripts and `PSCharactergen` in others — case-insensitive in OBScript so either resolves).

Per `feedback_scda_vs_sctx_recompile`: edits must be authored as SCTX in xEdit then recompiled to SCDA. Use `oblivion-batch-compile` to drive TESConstructionSet's compiler — xEdit cannot compile SCPT bytecode.

## Provenance

Extraction commands:

```bash
OBLIVION_CONFLICTS_MO2="D:/Modlists/APW/ModOrganizer.exe" \
OBLIVION_CONFLICTS_EXE_TITLE="TES4Edit_patched" \
OBLIVION_CONFLICTS_DATA="D:/Modlists/APW/Stock Game/Data" \
OBLIVION_CONFLICTS_PROFILE="A Painted World" \
OBLIVION_CONFLICTS_PLUGINS="D:/Modlists/APW/profiles/A Painted World/plugins.txt" \
./examples/reborn-shortcut.sh list \
  --target="APW - Conflict Resolution.esp" \
  --out=tests/.tmp/apw_cr_list.json
```

Then `dump_chain_subrecord.pas` (new — saved in `oblivion-conflicts/scripts/`) for SCTX dumps:

```bash
./examples/reborn-shortcut.sh \
  D:/Modlists/_clones/oblivion-conflicts/scripts/dump_chain_subrecord.pas \
  --target="APW - Conflict Resolution.esp" \
  --edid=PSCharactergenStartingEquipmentScript \
  --edid=DLCHorseArmorScript \
  ...etc \
  --out=tests/.tmp/apw_cr_sctx_chain.json
```

Notes on the new `dump_chain_subrecord.pas`:
- avoids the LO-FormID cross-master misresolution bug in `query_record_v2.pas` (which still tripped on FormIDs from non-Oblivion masters even with the LO-byte fix) by walking `RecordByIndex` on the target plugin and matching by EDID;
- defaults `--sub` to `SCTX` but accepts any subrecord signature;
- `chain[]` carries one `{plugin, edit_value}` pair per master+override link, in load-order direction.

Run timestamp: 2026-04-30. APW load order had 51 plugins active (`A Painted World` profile).
