# DLC start requirements (Reborn-OOO + Delay DLC Start)

Empirically derived 2026-05-09 from live game probing via G5 OBSE plugin
and source dumps of `DelayDLCStartCMScript`, per-DLC scripts, and the
`SE01DoorScript` chain. Reflects the configured INI in
`mods/Delay DLC Start/Ini/Delay DLC Start.ini` plus what each per-DLC
script actually requires beyond the CM script's `StartQuest` call.

## Two-layer model

Every DLC is gated by **two** scripts that must both be satisfied:

1. **`DelayDLCStartCM` quest** (one quest with `DelayDLCStartCMScript`
   attached) — walks every DLC's eligibility once per gamemode tick,
   throttled by `WaitOneLoop`. When a DLC's INI conditions are met it
   calls `StartQuest <DLC>` and sets `<dlc>Started` from 0 → 1 → 2.
   This **does not call `SetStage`** — it just turns the quest on.

2. **Per-DLC quest's own script** — once running, the per-DLC script's
   `begin gamemode` block decides when to `SetStage <quest> 10`. Most
   keep the vanilla `GetStage CharacterGen >= 88` gate, which **never
   fires under alt-start** (PSMainQuestDelayer's PSCharacterGen jumps
   to 100 immediately, but vanilla CharacterGen sits at 6).

   Notable: Delay DLC Start's QUST overrides remove the per-DLC
   `Start Game Enabled` flag. The DLC quests do NOT auto-run at game
   start — they only run after the CM script calls `StartQuest <DLC>`.

   Bridge for alt-start testing: `setstage CharacterGen 88`. **Side
   effect**: this advances MQ02 to stage 20 (Find the Heir courier
   path) because vanilla MQ kickoff is tied to chargen completion.
   This is the bug we want to eliminate (see "MQ contamination" below).

## MQ contamination — the alt-start bridging problem

Setting `CharacterGen` to 88 (the only way to satisfy the per-DLC
script gates without actually completing the prison sewer) triggers
the vanilla MQ kickoff side-effect: MQ02 advances to 20 (Baurus →
Jauffre courier path). The user wants **zero MQ overlap** — DLCs must
be triggerable purely through Delay DLC Start without any main-quest
state change.

### Three patch options

All three require SCDA recompile via `oblivion-batch-compile` (OBC)
since xEdit cannot compile script bytecode (only the CSE/OBC chain
can). All three eliminate the need to write to `CharacterGen`.

**A. Drop the `CharacterGen >= 88` clause from each per-DLC kickoff**
*(recommended)*

Author a new patch (e.g. `Reborn - DLC No Chargen Gate.esp`) that
overrides 6–7 per-DLC scripts. In each kickoff block, change:
```
if ( GetStage <DLC> <= 0 ) && ( Player.IsInCombat == 0 )
   && ( GetStage CharacterGen >= 88 )
   && ( Player.GetinCell ImperialDungeon03 == 0 )
    SetStage <DLC> 10
```
to:
```
if ( GetStage <DLC> <= 0 ) && ( Player.IsInCombat == 0 )
   && ( Player.GetinCell ImperialDungeon03 == 0 )
    SetStage <DLC> 10
```

Safety: per-DLC quests are not Start Game Enabled (Delay DLC Start
disables that), so the kickoff only fires once `StartQuest` runs —
which only happens when CM dispatches. No premature firing.

Smallest semantic change. Single-line edit per script. Per-DLC scripts
are the right layer to edit (no touching of upstream Delay DLC Start
or PSMainQuestDelayer).

Per-script load-order winners to override (post-PSMQD-strip):
| DLC | Winner script source |
|---|---|
| Battlehorn       | OOO Enhanced Adaptation |
| Thieves Den      | OOO Enhanced Adaptation |
| Vile Lair        | Delay DLC Start |
| Mehrunes Razor   | Delay DLC Start |
| Horse Armor      | Unofficial DLC Patches |
| Orrery           | Unofficial DLC Patches |
| Frostcrag        | Frostcrag Reborn (already gates on `Doonce5` — sleep) |

Decision per Frostcrag: include in patch (drop both CharacterGen and
sleep gates → fires from CM directly), or leave alone (sleep stays as
a Frostcrag Reborn flavor feature).

Masters needed in patch: Oblivion.esm + each DLC master + OOO
Enhanced.esp (for the Battlehorn/ThievesDen overrides) + Delay DLC
Start.esp (for Vile Lair/Mehrunes overrides) + DLCFrostcragReborn.esp
(if Frostcrag included).

**B. Edit `DelayDLCStartCMScript`** to call `SetStage <DLC> 10`
directly after each `StartQuest <DLC>` line.

Pros: single script edit, central control.
Cons: rewrites a third-party mod's main script; needs all DLC
masters added to the patch; must handle edge cases per DLC (e.g. SI
uses door enable, not direct stage advance, so we'd skip it).

**C. Edit each per-DLC script** to gate on
`DelayDLCStartCM.<DLC>Started >= 1` instead of `CharacterGen >= 88`.

Pros: per-DLC scripts now driven by CM's flag — clean separation.
Cons: requires `DelayDLCStartCM` quest as a master of the patch
(adds cross-mod coupling), and still 7 per-DLC script edits like A.

### Recommended workflow (option A)

1. Use REPL daemon to dump current SCTX of each load-order-winning
   DLC script (post-PSMQD-strip).
2. Edit SCTX in-place: drop the `&& ( GetStage CharacterGen >= 88 )`
   clause from the kickoff line in each.
3. Inject as 6-7 SCPT overrides into a new `.esp` (or extend the
   existing `PSMQD - Delay DLC Start Patch.esp`).
4. Set masters per the table above.
5. Save with `MarkModifiedRecursive` + daemon `.stop` (REPL save
   pattern — see `feedback_repl_pascal_save_pattern.md`).
6. Run OBC against the patch to compile the SCTX → SCDA bytecode.
7. Verify on-disk: `md5sum` the .esp pre/post — must change.
8. Rebuild Bashed Patch.
9. Test: drop `setstage CharacterGen 88` from `trigger_dlc.py`. MQ
   stages should remain at MQ01=84, MQ02=0 throughout.

### Test runtime overrides (no patch — for one-off probing)

Bypass the per-DLC gate without touching CharacterGen by setting the
quest stage directly via console after CM dispatches `StartQuest`:

```
setstage DLCBattlehornCastle 10
setstage DLC06ThievesDen 10
setstage DLCDeepscorn 10
setstage DLCHorseArmor 30
setstage DLCOrrery 10
setstage DL9MehrunesQuest 10
setstage DLCFrostcragSpire 10   ; or set Doonce5 to 1 then sleep
```

These bypass the kickoff entirely and don't touch MQ. Useful for
testing without authoring the patch.

## Per-DLC requirements

### Shivering Isles (`SE01Door`)
| | |
|---|---|
| Min level | 15 (`ShiveringMinLevel`) |
| Location  | none (`ShiveringCheckLocation = 0`) |
| Per-DLC gate | **`GetStageDone MQ01 90 == 1`** OR find the Strange Door physically |
| Notes | Even when CM dispatches `StartQuest SE01Door`, the Delay-DLC-Start version of `SE01DoorScript` waits until late main-quest progression (MQ01 ≥ 90) before starting its 24-48h delay countdown. Two design paths: late MQ, or stumble on the door. |
| Test override | `set SE01Door.doOnce2 to 1; set SE01Door.startday to 0` |

### Knights of the Nine (`NDPilgrim`)
| | |
|---|---|
| Min level | 10 (`KnightsMinLevel`) |
| Min net fame | 15 (`KnightsMinOverallFame`; fame − infamy) |
| Location  | NOT in Anvil/AnvilCastleCourtyard/Anvil cell/ImperialDungeon (`KnightsCheckLocation = 1`) |
| Per-DLC gate | KotN starts via `SetStage NDPilgrim` directly from the CM script — no extra gate |

### Battlehorn Castle (`DLCBattlehornCastle`)
| | |
|---|---|
| FG rank | ≥ 3 (`BattlehornMinFGRank`) |
| Combat skill sum | ≥ 200 (`BattlehornMinSkillTotal`); sum of `Armorer + Athletics + Blade + Block + Blunt + HandToHand + HeavyArmor` (BASE values, via `Player.GetBaseActorValue`) |
| Location  | none (`BattlehornCheckLocation = 0`) |
| Per-DLC gate | `CharacterGen >= 88` (vanilla) — alt-start needs the bridge |

### Frostcrag Spire (`DLCFrostcragSpire`)
| | |
|---|---|
| MG rank | ≥ 3 (`FrostcragMinMGRank`) |
| Magic skill sum | ≥ 200 (`FrostcragMinSkillTotal`); sum of `Alchemy + Alteration + Conjuration + Destruction + Illusion + Mysticism + Restoration` |
| Location  | none (`FrostcragCheckLocation = 0`) |
| Per-DLC gate | **Frostcrag Reborn replaces the script** with one that requires `IsPCSleeping == 1` once (sets `Doonce5 = 1`), AND `Player.GetLevel >= DLCFrostcragLevel` (global), AND `CharacterGen >= 88`. So: **player must sleep at least once after the CM dispatches**. |
| Test override | `set DLCFrostcragSpire.Doonce5 to 1` |

### Thieves Den (`DLC06ThievesDen`)
| | |
|---|---|
| TG rank | ≥ 3 (`ThievesDenMinTGRank`) |
| Stealth skill sum | ≥ 200 (`ThievesDenMinSkillTotal`); sum of `Acrobatics + LightArmor + Marksman + Mercantile + Security + Sneak + Speechcraft` |
| Location  | none (`ThievesDenCheckLocation = 0`) |
| Per-DLC gate | `CharacterGen >= 88` (vanilla) |
| Notes | Optional: `ThievesDenAllowEntry = 1` enables the Black Flag area door even pre-conditions, so the player can find it organically. Currently 0. |

### Vile Lair / Deepscorn Hollow (`DLCDeepscorn`)
| | |
|---|---|
| DB rank | ≥ 3 (`DeepscornMinDBRank`) |
| Min infamy | 10 (`DeepscornMinInfamy`) |
| Min vampire days | 0 (`DeepscornMinVampireDays`) — i.e. vampirism not required |
| Location  | none (`DeepscornCheckLocation = 0`) |
| Per-DLC gate | `CharacterGen >= 88` (vanilla) |

### Horse Armor (`DLCHorseArmor`)
| | |
|---|---|
| Min level | 4 (`HorseArmorMinLevel`) |
| Min gold | 2000 (`HorseArmorMinGold`) |
| Min fame | 4 (`HorseArmorMinFame`) |
| Location  | in `Tamriel` worldspace (`HorseArmorCheckLocation = 1`) |
| Per-DLC gate | CM jumps straight to `SetStage 30` once met — no per-script gate |

### Mehrunes Razor (`DL9MehrunesQuest`)
| | |
|---|---|
| Min level | 10 (`MehrunesMinLevel`) |
| Min infamy | 0 (`MehrunesMinInfamy`) |
| Location  | in `ICElvenGardensDistrict` worldspace (`MehrunesCheckLocation = 1`) |
| Real cell to coc | **`ICElvenGardensDistrict01`** (Reborn's "ICElvenGardens" is a dummy cell with no worldspace assignment) |
| Per-DLC gate | `CharacterGen >= 88` (vanilla) |

### Orrery (`DLCOrrery`)
| | |
|---|---|
| MG rank | ≥ 1 (`OrreryMinMGRank`) |
| Distance to Bothiel | (off — `OrreryCheckDistance = 0`) |
| Location fallback | when distance check off, requires `GetInCell ICArcaneUniversity == 1` OR `GetInWorldspace ICTheArcaneUniversity == 1`. **Reborn's `ICArcaneUniversity` dummy cell satisfies the GetInCell branch** — `coc ICArcaneUniversity` works. |
| Per-DLC gate | `CharacterGen >= 88` (vanilla) |

## One-shot trigger script

`research/trigger_dlc.py` applies all conditions and sequence-cocs the
two location-gated DLCs. Order matters: Arcane University first
(Orrery), then `ICElvenGardensDistrict01` (Mehrunes), with a 30-second
poll between each so the CM loop has time to dispatch.

Caveats:
- Frostcrag Reborn requires sleep — script can't satisfy that without
  `Wait` console + sleep mechanics; flag override
  (`set DLCFrostcragSpire.Doonce5 to 1`) is the test workaround.
- SI requires MQ01≥90 OR finding the door — not triggered by the
  script; var override or `Player.MoveTo SE01DoorMarkerREF` is needed
  for testing.

## Why our PSMQD fix matters

Previously `PSMQD - Delay DLC Start Patch.esp` overrode every DLC's
script to gate on `PSCharacterGen >= 80` instead of vanilla
`CharacterGen >= 88`. Since alt-start jumps PSCharacterGen straight to
100, every DLC self-fired the moment the alt-start menu closed —
bypassing both the CM script's eligibility checks AND the per-DLC
gates. After stripping the 7 broken SCPT overrides from PSMQD (kept
the chargen-handler edit only), the per-DLC scripts revert to the
load-order winner before PSMQD (vanilla / Unofficial / OOO Enhanced /
Frostcrag Reborn), all of which keep the vanilla `CharacterGen >= 88`
gate that alt-start never satisfies — handing control back to Delay
DLC Start as designed.
