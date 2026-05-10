# A Painted World Configs inventory

Generated 2026-05-10 by walking:

- `D:\Modlists\APW\mods\A Painted World Configs\` (main settings bundle)
- `D:\Modlists\APW\mods\A Painted World - LODs\` (LOD generator outputs)
- `D:\Modlists\APW\mods\A Painted World Reshade Preset - ORC 1.9.3 Version\` (Reshade preset)

This catalogs every loose config / settings / asset-override file APW ships in those three folders. Use as a porting checklist when bringing an APW mod across to Reborn: after copying the mod itself, grep this doc for its filename and copy the matching config into `Reborn\mods\<mod>\` at the same relative path.

Companion doc: APW's authored ESPs (Conflict Resolution, Merges, Bashed Patch, etc.) are analyzed separately in `apw_authored_records.jsonl` — those are listed below for completeness but not re-investigated here.

---

## Authored plugins (analyzed separately in apw_authored_records.jsonl)

These ESPs ship inside `A Painted World Configs\` but are APW's patch/merge stack — do **not** treat as configs, and do **not** copy into Reborn:

- `APW - Conflict Resolution.esp`
- `APW Merge.esp`
- `APW Merge 2.esp`
- `APW Merge 3.esp`
- `Bashed Patch, 0.esp` (+ `Docs\Bashed Patch, 0.html` and `.txt` build logs)
- `Harvest xOBSE.esp`
- `LandMagicPatch.esp` (+ in `A Painted World - LODs`: `LandMagicPatch - LODs.bsa`, `LandMagicPatch - Meshes.bsa`, `MergedLOD.esm`)
- `TES4Edit_log.txt` — leftover xEdit session log from a 2026-04-28 run against `D:\Modlists\APW\Stock Game\` (skip)
- `meta.ini` (MO2 metadata; modid 54215 = APW Configs on Nexus, category 62 = Modders Resources)

---

## Maskar's Oblivion Overhaul

| Path | What it tunes |
|---|---|
| `Maskar's Oblivion Overhaul.ini` | Main MOO settings. Sets `MOO.ini_savegame=1`, `ini_suggested_lore=0`, `ini_mapmarkers=0`, `ini_borderregions=0`, `ini_respawntime=240`, etc. |
| `Maskar's Oblivion Overhaul for actor levels.ini` | Advanced MOO addon: per-reference NPC/creature level overrides. |
| `Maskar's Oblivion Overhaul for compatibility.ini` | Advanced MOO addon: auto-disables MOO features (traps, lock bashing) when other mods (e.g. OOO) are detected. |
| `Menus\strings\MOO_strings.xml` | DarN-style item description strings for MOO weapons/armor/Ayleid items (per-FormID `<_XXXXXX>` text blocks). |
| `ini\OCRAFT\Maskar's Oblivion Overhaul.esp.ini` | OCRAFT recipe: tanning rack ingredient/result lookups using MOO FormIDs. |

## OOO / OBlivion XP / Levelling

| Path | What it tunes |
|---|---|
| `ini\Oscuro's_Oblivion_Overhaul.ini` | OOO 1.5.15 ini header — note says LINK MCM overrides this in-game. Mostly defaults. |
| `ini\Oblivion XP Settings.ini` | Oblivion XP Leveling v4.5 settings (must live in `Data\Ini\`). |
| `ini\Remastered Attributes.ini` | Remastered Attributes (`ORLQ.*` globals): 10 attr/level, max 200, 10/level cap. |
| `ini\MagickaXPalgorithm.ini` | Customizable Magic Progression (MagickaXP): per-cast XP formula. |
| `ini\MagickaXPbases.ini` | MagickaXP per-school base XP values. |
| `ini\MagickaXPvariables.ini` | MagickaXP custom multiplier / exponent variables. |

## OBSE / xOBSE plugins

All in `OBSE\Plugins\`.

| Path | What it tunes |
|---|---|
| `OBSE\Plugins\Blockhead.ini` | Blockhead v569: enables AnimationOverride, BodyOverride, EquipmentOverride, HeadOverride per-NPC + per-race; gender-variant hair on. |
| `OBSE\Plugins\CharacterBasedAttackSpeed.ini` | CBAS: enables for creatures+staves, disables for hands+bows; weights for Fatigue 0.8, Skill 0.5, Alacrity 1.1; multiplier 0.62. |
| `OBSE\Plugins\EngineBugFixes.ini` | EngineBugFixes: every fix and patch enabled (~80 toggles); SleepWearMode=2 (prefer clothing); skips all static havok data load. |
| `OBSE\Plugins\FasterSleepWait.ini` | Wait time between hours = 150ms. |
| `OBSE\Plugins\OBSE_EnhancedCamera.ini` | Enhanced Camera: 1st-person body on, headbob off, sitting/knockout/death 1st-person on, look-down 55deg sitting / 40deg mounted. |
| `OBSE\Plugins\WalkBlessed.ini` | WalkBlessed (turning anim): Bip01 control node, 8 frames to turn 45deg, auto-turn off. |
| `OBSE\Plugins\oblivion_display_tweaks.ini` | OblivionDisplayTweaks: iTickFix=1, bFastExit=1, bBorderless=1; D3D9Ex/FlipEx off (ENB compat); FPS fix off. |
| `OBSE\Plugins\obse_wasd_menus.ini` | WASD menus: stops 'activate' key closing menus; shift/ctrl quick-take disabled. |
| `OBSE\Plugins\sr_Oblivion_Stutter_Remover.ini` | OSR: full feature set on, fMinimumFPS=15, iSchedulingResolution=1, bExperimentalStuff=0. |

## ReShade (graphics post-processing)

`A Painted World Reshade Preset - ORC 1.9.3 Version\` is its own MO2 mod (modid 54215, separate from Configs). Plus one ReShade.ini in Configs.

| Path | What it tunes |
|---|---|
| `Root\ReShade.ini` | ReShade global config: shader search paths, **`PresetPath` is hard-coded to `D:\Modlists\APW\mods\A Painted World Reshade Preset - ORC 1.9.3 Version\A Painted World ReShade.ini`** (will need rewrite for Reborn). Disables Generic Depth + Effect Runtime Sync addons. |
| `<Reshade preset>\A Painted World ReShade.ini` | The actual ReShade preset (active techniques: Oilify, AmbientLight, uFakeHDR, LiftGammaGain, Lightroom, Clarity*2, SuperDepth3D). |
| `<Reshade preset>\OBSE\Plugins\ORC.ini` | Oblivion Reloaded Combined config: anisotropic 16, screenshot key 87, MoonLight off, WeaponRotation off, etc. |
| `<Reshade preset>\Shaders\ORC\` | ORC shader override folders (AmbientOcclusion, Bloom, Cinema, Coloring, DepthOfField, Fog, GodRays, Grass, HDR, MotionBlur, NightEye, Precipitations, SMAA, Shadows, Sharpening, Skin, Terrain, Water) + `DumpWeathers.ini`. |

## DarNified UI / ExUI / dsHUD family

| Path | What it tunes |
|---|---|
| `Menus\prefabs\Darn\hudmainmenu_config.xml` | DarNified UI v1.4 hudmainmenu rewrite: hudscale 75, custom sneak-eye position (826, -465), enemy health bar hidden, custom layout. (DarNified UI's stock copy is `.mohidden` in APW.) |
| `Menus\prefabs\ExUI\BossBar.xml` | Extended UI: boss-fight health bar layout (1024x32, top center). |
| `Menus\prefabs\ExUI\SpellFavIcon.xml` | Extended UI: favourite-spells indicator icon (24x24, anchored to magic_effectivness). |
| `Menus\prefabs\dsEnemyHealth\Vanilla\Main.xml` | dsEnemyHealth (DavaScript): vanilla-style enemy health container layout. |
| `Menus\strings\ExUI_strings.xml` | Extended UI: descriptive strings for Ammo / Light / Sigil / Soulgem / Key / Ingredient / Book / etc. inventory categories. |
| `Menus\strings\Oblivion_strings.xml` | Per-FormID descriptive flavour text for vanilla artifacts (Amulet of Kings, Savior's Hide, Spell Breaker, Masque of Clavicus Vile, Ring of Khajiiti, Gray Cowl, Necromancer's Amulet, etc.). |
| `ini\Better Enemy Health - Config.ini` | dsEnemyHealth: extra bars on (`iEnableExtraBars=1`), level shown. |
| `ini\Follower Status - Config.ini` | dsFollowerStatus: stats always visible (iVisibility=1). |
| `ini\Status Bars for Needs - Config.ini` | dsStatusBars: toggle key 49 (N). |
| `ini\Take or Equip - Config.ini` | dsTakeOrEquip: equip key 16 (Q). |
| `ini\Extended UI.ini` | ExUI: spell favourites enabled, key 33 (F), scroll wheel for nav. |
| `ini\Display Skill Perk Effects.ini` | DisplaySkillPerkEffects: per-perk override toggles (all defaults). |
| `ini\Display Stats.ini` | DisplayStats v2.0.1: per-stat show toggles. |
| `ini\Dynamic Map.ini` | Dynamic Map (TheNiceOne): Tamriel worldspace map init for Oblivion.esm. |
| `ini\Dynamic Map base.ini` | Dynamic Map: zoom keys (264 in / 265 out). |
| `ini\Enhanced Hotkeys.ini` | Enhanced Hotkeys v2.3.1 settings. |

## OCRAFT (Oblivion Crafting)

| Path | What it tunes |
|---|---|
| `BaseObjectSwapper\OCRAFT - Stations.ini` | BOS swap rules placing OCRAFT cooking pot / anvil / oven / bucket onto vanilla + Better Cities furniture. |
| `ini\OCRAFT\OCRAFT - Stations for Sale - Settings.ini` | Stations-for-Sale: forge tool requirement off, simple-crafts token hidden. |
| `ini\OCRAFT\Maskar's Oblivion Overhaul.esp.ini` | OCRAFT-MOO recipe: tanning rack → wolf pelt. |
| `ini\OCRAFT\Better Cities Resources.esm.ini` | OCRAFT-BC recipe: workbench → fish wax. |
| `ini\OCRAFT\APW - Conflict Resolution.esp.ini` | OCRAFT-APW recipe: workbench → Imperial Furniture fireplace using MOO stone + firewood. |

## Better Cities / City Settings

| Path | What it tunes |
|---|---|
| `Better Cities Resources.ini` | BC: all city Open / WallArchers toggles off (closed-cities mode). |
| `ini\CitySettings\City Settings - Config.ini` (+ 12 sibling files: `- Districts`, `- Interiors`, `- Oblivion Realm`, `- ShiveringIsles`, `-Anvil`, `-Bravil`, `-Bruma`, `-Cheydinhal`, `-Chorrol`, `-Leyawiin`, `-Skingrad`, `-Waterfront`) | City Settings (Better Cities companion) v3.0: per-city/district item/actor/object/grass/shadow caps. |

## Migck mods (Magic Magnitude, Misc Fixes, NoDeath, MigMaster)

| Path | What it tunes |
|---|---|
| `ini\MigMagipuke.ini` | Magic Magnitude Multipliers: per-school multiplier debug toggles. |
| `ini\MigMiscellanea.ini` | Migck's Misc Fixes v1.9.1 (creature damage fix etc.). |
| `ini\MigNoDeath.ini` | A Champion's Death: quest-item handling on death (`bQuestItemMode=0`). |
| `ini\Migck\MigMaster.esm.ini` | MigMaster placeholder (just the init flag). |
| `ini\Migck\MigMiscellanea.esp.ini` | Silver-damage list: adds `cidwwchecker` token from CurseOfHircine.esp to werecreature list. |

## Magicka / spell systems

| Path | What it tunes |
|---|---|
| `ini\Av Latta Magicka.ini` | Av Latta Magicka: spell levels off, magic sneak attacks on, spell combos on, skill-based speeds on. |
| `ini\Av Latta Magicka Advanced.ini` | ALM advanced: per-environment damage multipliers (rain/snow/swim/Oblivion fire/frost/shock). |
| `ini\BowDrain.ini` | BowDrain: fatigue drain -3 per 0.15s while drawing. |
| `ini\kuerteeMagickaBasedEnchantmentLimits.ini` | kuertee MBEL: 150 magicka per effect limit. |
| `ini\SB_ArrowMaster.ini` | SB Arrow Master: auto-equip on, prefer non-enchanted arrows. |
| `Channeled Spells.ini` | Channeled Spells: removal lesser power on, hotkey 211 (Delete), no Burnout. |
| `EnchantmentMastery.ini` | Enchantment Mastery: constant enchantments + arrow enchanting on. |
| `Kyoma's Spell Renamer.ini` | Spell Renamer v3.0.0 settings. |
| `SupremeMagickaLite.ini` | Supreme Magicka Lite v7: new magic effects + new spells on, magicDurationBoost off. |
| `SupremeMagickaLiteSettings.ini` | SML: example gameplay setting overrides (all commented out by default). |
| `ArcheryFocus.ini` | Archery Focus & Slow Motion v1.30: slow-mo on, weak 75% / strong 50%, thresholds at Marksman 50/75. |
| `PushThePotionButton.ini` | PushThePotionButton: restore-health hotkey 260 (default 34/F), no filter. |

## Combat / damage

| Path | What it tunes |
|---|---|
| `Dynamic Oblivion Combat.ini` | DOC v2.10: damage multiplier and momentum damage. |
| `config\Ragdolls.ini` | Mad Ragdolls: melee/arrow/magic force = 1.0. |
| `ini\Mixxa77DTS.ini` | Mixxa77 Downside To Shields: agility -10 / speed -10 with shield. |
| `ini\UnidirectionalAttack.ini` | UnidirectionalAttack v1.0: not applied to player. |

## Crime / world systems

| Path | What it tunes |
|---|---|
| `ini\Dialog TFR Costs.ini` | Dialog TFR (Tweaks/Fixes/Restorations): bounty cap 4000, turn-self discount 10%, bribe 500. |
| `ini\kuerteeCrimeHasWitnesses.ini` | kuertee Crime Has Witnesses: max 5 witnesses tracked. |
| `ini\kuerteeGoldIsAnInventoryItem.ini` | kuertee Gold-As-Item: gold weight 0.01. |
| `ini\Delay DLC Start.ini` | Delay DLC Start: per-DLC location/skill/faction-rank gating thresholds. |
| `ini\Switchable Lightsources.ini` | Switchable Lightsources: lights NOT extinguished by projectiles. |
| `ini\JCNAVUncap.ini` | AVUncapper (JRoush) config — modified preset. |

## Misc gameplay

| Path | What it tunes |
|---|---|
| `Harvest xOBSE.ini` | Harvest xOBSE: containers off, flora on, owned-safe-container ignore, ore respawn on (incl. SI). |
| `Harvest xOBSE.cfg` | Harvest xOBSE LINK MCM definitions (in-game settings UI). |
| `HUDHorse.ini` | HUDHorse: center-aligned, x=0 y=320. |
| `LootMenu.ini` | LootMenu v2.3.1: 6 visible items, width 350. |
| `QZ Easy Menus.ini` (top level) and `ini\QZ Easy Menus.ini` (duplicate) | qzilla v1.03 menu-escape hotkey settings. |
| `SMO.ini` | SupreMe Overhaul (lockpicking): break chance 0% across all difficulties. |
| `ini\All Natural.ini` | All Natural v1.36+ weather/lighting toggles. |
| `ini\Eri's Simple Sprint n Gallop.ini` | Eri Sprint: SprintControl key 12, full feedback messaging. |
| `ini\efFishingMod\efFishingMod_Config.ini` | ef's Fishing Mod: catch timer 3s base / 5s learner / 2s scented. |
| `ini\lBookworm.ini` | Bookworm v1.1: mark-as-read + skill-book pickup. |

## BaseObjectSwapper APW-specific

| Path | What it tunes |
|---|---|
| `BaseObjectSwapper\APW.ini` | BOS swaps for OCRAFT smelters: Oblivion.esm furniture FormIDs → APW Conflict Resolution variants. |

## Loose mesh / texture / sound asset overrides

These are loose-file replacements layered over installed mods (not configs in the strict sense, but ship in this folder):

| Path | Owning mod / purpose |
|---|---|
| `meshes\armor\dunmerarmor\dc*.nif` (~8 files) | Dunmer Cultural Armor — likely a path-fix or APW-tuned mesh override. |
| `meshes\clutter\dunmerclutter\dc*.nif` (~19 files) | Dunmer Cultural Clutter (lanterns, vases, mug, sujamma, mazte). |
| `meshes\effects\harvest_xobse\LightAyleid01.nif`, `LightAyleid02.nif` | Harvest xOBSE Ayleid-light mesh overrides. |
| `meshes\furniture\wic*.nif` (44 files: deities, animals, Imperial heroes) | "WIC" — Wayshrines/Imperial Cathedral statue/idle mesh set. |
| `meshes\idleobjects\lockpickanimobject.nif` | Lockpicking animation override (likely Better Lockpicking-style mod). |
| `meshes\weapons\dunmerweapons\dc*.nif` (7 files: bows, krisses, daggers) | Dunmer Cultural Weapons. |
| `textures\armor\dunmerarmor\dc*.dds` | Matching Dunmer armor textures. |
| `textures\clutter\dunmerclutter\dc*.dds` | Matching Dunmer clutter textures. |
| `textures\furniture\metal\*.dds` (copper/gold/silver/amjy variants), `textures\furniture\stone\*.dds` (marble/rock/stone variants) | Furniture material textures (likely OCRAFT or BC support). |
| `textures\furniture\wicakatosh_*.dds` | WIC-related deity-statue textures. |
| `textures\weapons\dunmerweapons\` | Matching Dunmer weapon textures. |
| `sound\voice\APW Merge.esp\<10 races>\<sex>\*.lip` + `*.mp3` | Lip files for greetings/dialog brought into APW Merge.esp (DLC + aaaGeneric + bladenovice + many others). |
| `sound\voice\APW Merge 2.esp\<10 races>\<sex>\*.lip` + `*.mp3` | Same for APW Merge 2.esp. |
| `sound\voice\APW Merge 3.esp\<10 races>\<sex>\*.lip` + `*.mp3` | Same for APW Merge 3.esp. |

Per-race voice folders cover: Breton, Nord, Redguard, argonian, dark seducer, dremora, golden saint, high elf, imperial, sheogorath. Each has `M`/`F`/`m`/`f` subfolders. These are voice/lip files referenced by dialog records merged into the APW Merge.esps and must be co-deployed with those plugins.

---

## A Painted World - LODs (sibling mod folder)

Pure LOD-generator output, no configs:

| Path | Purpose |
|---|---|
| `LandMagicPatch - LODs.bsa` | Generated LOD bsa (binary, skipped). |
| `LandMagicPatch - Meshes.bsa` | Generated LOD-meshes bsa (binary, skipped). |
| `LandscapeLODTemp\` | Intermediate landscape LOD scratch area. |
| `MergedLOD.esm` | Header-only merged-LOD plugin. |
| `Meshes\Landscape\` | Generated LOD meshes. |
| `Textures\landscapelod\` | Generated LOD textures. |
| `__numba_cache__\helpers_529edccb...\` | Numba JIT cache from the LOD-gen Python tooling — not user-meaningful, do not port. |
| `output.log` | LOD-generator run log. |
| `meta.ini` | MO2 metadata (modid 54215). |

---

## Notable observations

- **Hard-coded user path in `Root\ReShade.ini`**: `PresetPath=D:\Modlists\APW\mods\A Painted World Reshade Preset - ORC 1.9.3 Version\...`. If you port the Reshade preset to Reborn, this path must be rewritten or ReShade will load nothing.
- **`zEdit Backups\` is empty** in this APW snapshot (not "do not port" — there's literally nothing in it). The earlier memory note can be relaxed.
- **Two `QZ Easy Menus.ini`** exist: one at `Configs\QZ Easy Menus.ini` (read from `Data\`) and one at `Configs\ini\QZ Easy Menus.ini` (read from `Data\Ini\`). Both contain the same content; QZ supports either location.
- **Voice folders for the APW Merge ESPs are essential**, not optional — dialog records merged into APW Merge*.esp reference these `.lip`/`.mp3` files. If you're porting any APW-Merge content into Reborn, these have to come with.
- **TES4Edit_log.txt** in the root is a stray — Wabbajack snapshot artifact from a 2026-04-28 xEdit session. Not authoritative for anything; do not port.
- **MO2 metadata** all three folders share `modid=54215` (APW Configs on Nexus). Categories: Configs `=62` (Modders Resources), LODs/Reshade `=0` or unset.

---

## Pointer for Reborn-Configs porting workflow

When porting an APW mod to Reborn, search this doc for the mod name and copy the corresponding files into `D:\Modlists\Reborn\mods\Reborn Configs\` at the same relative path. Skip APW-exclusive entries (those for mods not in the Reborn enabled set) and APW's authored ESPs (handle separately via the records analysis).
