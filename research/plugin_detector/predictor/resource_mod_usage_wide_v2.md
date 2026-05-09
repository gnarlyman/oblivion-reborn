# Resource-mod usage audit — Reborn-OOO

Scans active ARMO/CLOT/WEAP/AMMO records' MODL/ICON paths and attributes each to the mod folder providing the resource via VFS.

## Totals
- Paths scanned: 55656
- Paths resolved: 55428
- Paths NOT resolved (broken refs): 228

## Verdict legend
- **NEEDED** — at least one active record references a path the VFS attributes to this mod (i.e., this mod's copy is the winning provider). Removing the mod would break those references.
- **SHADOWED** — the mod ships files referenced by some record, but a higher-priority mod also ships the same paths and wins. Removing the mod would not break references (the higher-priority mod still provides the path).
- **NOT REFERENCED** — no scanned record references any path the mod provides. Either the mod's content is engine-implicit (skeleton, body, UI), referenced via NIF-internal textures (out of scope), or simply not used by the active load.
- **SUBSTITUTION-ONLY** — every ref this mod wins resolves to a physical file whose content is shared with other distinct paths (i.e. the mod is a fallback/nullify provider, not real assets).

## Per-mod substituted_refs

Within each NEEDED mod's `exclusive_refs`, the `substituted_refs` column counts refs whose provider's content hash is shared with another distinct virtual path. High values indicate the mod is shipping placeholder/fallback content rather than unique assets.

## Full table

| mod | verdict | exclusive | substituted | shadowed | total files |
|---|---|---:|---:|---:|---:|
| Useful Meshes Collection | NEEDED (exclusive refs) | 937 | 2 | 0 | 11257 |
| Sentinel Legendary Weapons And Armors | NEEDED (exclusive refs) | 180 | 2 | 13 | 752 |
| UFF Unrepentant Archer | NEEDED (exclusive refs) | 152 | 1 | 0 | 314 |
| Adonnays Elven Weaponry | NEEDED (exclusive refs) | 151 | 0 | 0 | 420 |
| Offhand Weapons | NEEDED (exclusive refs) | 149 | 0 | 0 | 93 |
| Apophis Armory of the Silver Dragon | NEEDED (exclusive refs) | 146 | 2 | 0 | 558 |
| RealSwords Nord | NEEDED (exclusive refs) | 135 | 0 | 0 | 378 |
| Lost Paladins of the Divines | NEEDED (exclusive refs) | 84 | 8 | 0 | 324 |
| Reborn - OOO Enhanced HTB Path Fix | NEEDED (exclusive refs) | 48 | 28 | 0 | 31 |
| Vermillion and Silverthorn Robes by Kafei | NEEDED (exclusive refs) | 39 | 0 | 5 | 25 |
| Ayleid Ruins Fixed - Mesh Replacer and Modder Resource | NEEDED (exclusive refs) | 32 | 0 | 0 | 34 |
| Blue Leather | NEEDED (exclusive refs) | 25 | 0 | 0 | 37 |
| Faster Dungeon Doors | NEEDED (exclusive refs) | 15 | 0 | 0 | 5 |
| KafeiDotours Vermillion and Silverthorn Robes For Exnems Bod | NEEDED (exclusive refs) | 5 | 0 | 0 | 4 |
| Dragon Claw Sword And Shield | NEEDED (exclusive refs) | 5 | 0 | 0 | 13 |
| 1_Clickable Magic Gate | NEEDED (exclusive refs) | 4 | 0 | 0 | 4 |
| HGEC Body | NEEDED (exclusive refs) | 2 | 0 | 1 | 30 |
| Seamless - HGEC Female | NEEDED (exclusive refs) | 1 | 0 | 0 | 3 |
| MIEO - Parasol Mesh Fix | NEEDED (exclusive refs) | 1 | 0 | 0 | 2 |
| 1_DarNified UI Ultrawide config preset | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| 1_ULF DarNified UI patch image file | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| 4gb Ram Patcher | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| AddActorValues | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| AveSithis Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Base Object Swapper | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Base Object Swapper Integrations | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Better Mesh for OCOv2 Uses Merged Teeth | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Better Necks for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 49 |
| Better OCOv2 Agemaps | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Better Oblivion Cursor File | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Blockhead | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Blockhead-Reborn | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Blood Elves and Egyptian armors for Exnems Body by Plipo | NOT REFERENCED by record-scan | 0 | 0 | 0 | 45 |
| Blue's Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| CPU Affinity | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| CSE Batch Compile | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1 |
| ConScribe | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Console Ignores Player | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Console Paste | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| ConsoleCommands | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Crash Logger Improved | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| DarNified UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 196 |
| EngineBugFixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Extended UI - Boss Bar Position Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Extended UI Boss Bar Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Female EyeCandy Wardrobe | NOT REFERENCED by record-scan | 0 | 0 | 0 | 84 |
| FractionalMagicDamage | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| G5 Validator | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1 |
| GPEngineFixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Grip of Steel | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| HGEC Blood Elves and Egyptian Armor | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| Main Menu Ultrawide | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Menu Alt-Tab Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| MenuQue - OBSE Plugin | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| MessageLogger | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Modders Resource- Ayleid Furniture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 80 |
| My Universal Fonts | NOT REFERENCED by record-scan | 0 | 0 | 0 | 9 |
| New icon for Eye and Crosshair | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| No Refraction Spells | NOT REFERENCED by record-scan | 0 | 0 | 0 | 8 |
| OBL Mod Limit Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| OCOv2 Eyelash Mesh Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| OCOv2 Orsimer Overhaul | NOT REFERENCED by record-scan | 0 | 0 | 0 | 55 |
| Oblivion Construction Set - Non-installer version | NOT REFERENCED by record-scan | 0 | 0 | 0 | 144 |
| Oblivion Display Tweaks | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Oblivion Magic Extender | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Oblivion Reloaded Combined(ORC) 315 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 670 |
| Oblivion Script Extender (OBSE xOBSE) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Reborn Configs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 21 |
| RuntimeEditorIDs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Shambles Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Simple Compass Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| SkyBSA | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| TES4Edit 4.1.5f | NOT REFERENCED by record-scan | 0 | 0 | 0 | 260 |
| Two-handed weapon swing fix for First Person View (Tick Fix) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| UW HUD Config | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| Ultrawide Letterbox Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Universal Skeleton Nif | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| WalkBlessed OBSE Plugin (diagonal move) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Wrye Bash | NOT REFERENCED by record-scan | 0 | 0 | 0 | 645 |

## Substitution suspects (66 content-hash groups)

Groups where one physical file's content is shared with N distinct virtual paths. The most likely Mesh-Nullify-style fallback patterns.

### hash `ad1e7d3bc83b...` — 4 paths, 3 parent dirs, 127 record refs

- `meshes/creatures/boneflayer/skeleton skeleton.nif`
- `meshes/creatures/skeleton/skeleton.nif`
- `meshes/creatures/skeleton/skeletonsooo.nif`
- `meshes/soooequipment/creatures/reaper/skeleton.nif`

### hash `4a30036d3a73...` — 4 paths, 1 parent dirs, 4 record refs

- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/m/vermoutfit01.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/m/vermoutfit02.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/m/vermrobe.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/m/vermshoes.nif`

### hash `7fbfecd9467f...` — 4 paths, 1 parent dirs, 4 record refs

- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/f/vermoutfit01.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/f/vermoutfit02.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/f/vermrobe.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/f/vermshoes.nif`

### hash `96b026e14f3a...` — 4 paths, 1 parent dirs, 4 record refs

- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/m/silvoutfit01.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/m/silvoutfit02.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/m/silvrobe.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/m/silvshoes.nif`

### hash `334f437bb6cb...` — 4 paths, 1 parent dirs, 4 record refs

- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/f/silvoutfit01.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/f/silvoutfit02.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/f/silvrobe.nif`
- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/f/silvshoes.nif`

### hash `8fecfa0e530a...` — 3 paths, 2 parent dirs, 11 record refs

- `meshes/creatures/skeleton/skeleton human.nif`
- `meshes/creatures/skeleton/skeletonmale.nif`
- `meshes/creatures/werewolf/werewolf north/skeletonwerewolf.nif`

### hash `4a55b133fc5a...` — 2 paths, 2 parent dirs, 24 record refs

- `meshes/creature diversity/zombie/dark elf/skeleton.nif`
- `meshes/creature diversity/zombie/high elf/skeleton.nif`

### hash `e4c3dd13385f...` — 2 paths, 1 parent dirs, 13 record refs

- `meshes/weapons/daedric/blackclaymore.nif`
- `meshes/weapons/daedric/dremoraclaymore.nif`

### hash `9c75107ffe60...` — 2 paths, 2 parent dirs, 10 record refs

- `meshes/armor/elveneldar/f/boots.nif`
- `meshes/armor/elveneldar/m/boots.nif`

### hash `3c845ec73575...` — 2 paths, 2 parent dirs, 10 record refs

- `meshes/armor/elveneldar2/f/boots.nif`
- `meshes/armor/elveneldar2/m/boots.nif`

### hash `6b8b14155618...` — 2 paths, 2 parent dirs, 10 record refs

- `meshes/armor/elveneldar3/f/boots.nif`
- `meshes/armor/elveneldar3/m/boots.nif`

### hash `b421b621534a...` — 2 paths, 1 parent dirs, 8 record refs

- `meshes/armor/jy/daedric/daeboots.nif`
- `meshes/armor/jy/daedric/daefboots.nif`

### hash `09f5266a359c...` — 2 paths, 1 parent dirs, 8 record refs

- `meshes/armor/jy/daedric/daefgauntlets.nif`
- `meshes/armor/jy/daedric/daegauntlets.nif`

### hash `a87580f98304...` — 2 paths, 2 parent dirs, 8 record refs

- `meshes/armor/aoc/doom/doomcuirass.nif`
- `meshes/armor/aoc/doom/f/doomcuirassf.nif`

### hash `5f02d6b4bea9...` — 2 paths, 2 parent dirs, 7 record refs

- `meshes/mageq/clothes/battle mage/robe3_gnd.nif`
- `meshes/mageq/clothes/mystic robe/robe2_gnd.nif`

### hash `74e34762cba3...` — 2 paths, 2 parent dirs, 6 record refs

- `meshes/clutter/wallsconcetriple01.nif`
- `meshes/lights/wallsconcetriple01.nif`

### hash `d732a8b29df4...` — 2 paths, 2 parent dirs, 6 record refs

- `meshes/mageq/clothes/battle mage/robe2_gnd.nif`
- `meshes/mageq/clothes/ranger robe/robe_gnd.nif`

### hash `753b1922909e...` — 2 paths, 2 parent dirs, 6 record refs

- `meshes/creatures/lich/female lich/skeletonbeast.nif`
- `meshes/creatures/lich/skeletonbeast.nif`

### hash `271b801ca329...` — 2 paths, 2 parent dirs, 6 record refs

- `meshes/mageq/clothes/mystic robe/f/mystic robe 2 fem.nif`
- `meshes/mageq/clothes/mystic robe/m/mystic robe 2.nif`

### hash `22e71cccad93...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/clothes/upperclass/uccountcountess/m/pants.nif`
- `meshes/clothes/upperclassgreen/uccountcountess/m/pants.nif`

### hash `37470d03ed72...` — 2 paths, 2 parent dirs, 4 record refs

- `textures/menus/icons/armor/stevieo70thief/hood.dds`
- `textures/menus/icons/clothes/mgro/01hoodapprentice.dds`

### hash `170c8b60a56a...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/armor/daedriclava/f/helmet.nif`
- `meshes/armor/daedriclava/m/helmet.nif`

### hash `a934ff345dd8...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/narmor/glassarmorn/male/glasshelmetnm_gnd.nif`
- `meshes/narmor/glassarmorn/male/replica/glasshelmetnmr_gnd.nif`

### hash `2d36efcdf1f8...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/narmor/glassarmorn/female/glasshelmetnf_gnd.nif`
- `meshes/narmor/glassarmorn/female/replica/glasshelmetnfr_gnd.nif`

### hash `8943d091b64b...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/mageq/clothes/warwizard/f/warwizard robe2fem.nif`
- `meshes/mageq/clothes/warwizard/m/warwizard robe2.nif`

### hash `5ef3ec8e4f17...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/mageq/clothes/battle mage/robe1_gnd.nif`
- `meshes/mageq/clothes/priest robe/robe2_gnd.nif`

### hash `cfcca041e6f4...` — 2 paths, 2 parent dirs, 4 record refs

- `meshes/htb/vermillionseries/armor & clothing/silverthorn/clothes/gnd/silvgloves_gnd.nif`
- `meshes/htb/vermillionseries/armor & clothing/vermillion/clothes/gnd/vermgloves_gnd.nif`

### hash `013ce8e7bdda...` — 2 paths, 2 parent dirs, 3 record refs

- `meshes/mageq/clothes/priest robe/robe1_gnd.nif`
- `meshes/mageq/clothes/seer robe/robe_gnd.nif`

### hash `6c2373cf3ad7...` — 2 paths, 2 parent dirs, 3 record refs

- `meshes/mageq/clothes/acolyte robe/robe2_gnd.nif`
- `meshes/mageq/clothes/aegisrobe/robe_gnd.nif`

### hash `0e80ef26765a...` — 2 paths, 2 parent dirs, 3 record refs

- `textures/menus/icons/armor/lpotd/fury/m/boots.dds`
- `textures/menus/icons/armor/lpotd/wrath/m/boots.dds`


## Broken refs (228 paths NOT resolved by VFS)

First 50:
- ACTI `SE03KeysExtra` 0x0007AC67 (Oblivion.esm) → `MODL` `meshes/effects/se03keysextra.nif`
- ACTI `WaterSurface` 0x00041779 (Oblivion.esm) → `MODL` `meshes/architecture/city/mania/watersurface.nif`
- ACTI `RockMania01` 0x000113B9 (Oblivion.esm) → `MODL` `meshes/rocks/mania/rock_mania_01.nif`
- ACTI `OblivionCitadelRefract` 0x00093F05 (Oblivion.esm) → `MODL` `meshes/oblivion/architecture/citadel/interior/citadeltower/oblivioncitadelrefractf.nif`
- ARMO `Dremora2KynvalHelmet` 0x0008B888 (OOO Enhanced.esp) → `MODL` `meshes/soooequipment/dremora armors/daedric helmets/green daedric helmet no horns.nif`
- ARMO `EnchDwarvenGauntletsFortStrength` 0x00049669 (Bashed Patch, 0.esp) → `MOD3` `meshes/armor/dwarven/f/gauntlets.nif`
- ARMO `Dremora0ChurlCuirass` 0x0003E9BD (OOO Enhanced.esp) → `MOD3` `meshes/soooequipment/daedricchurl/m/churl armor 1.nif`
- CLOT `SEOrderPriestHood` 0x0006FC35 (OOOShiveringIsles.esp) → `MOD2` `meshes/ooose/armorobelisk/light/helmetclosed_gnd.nif`
- CLOT `SEOrderPriestRobe` 0x00044C45 (Bashed Patch, 0.esp) → `MOD2` `meshes/ooose/armorobelisk/light/m/suit_gnd.nif`
- CLOT `MQMankarCamoranRobeL12` 0x000BE31E (Bashed Patch, 0.esp) → `MODL` `meshes/soooequipment/dremora armors/robes/camoranrobe.nif`
- CLOT `MQMankarCamoranRobeL12` 0x000BE31E (Bashed Patch, 0.esp) → `MOD3` `meshes/soooequipment/dremora armors/robes/camoranrobe.nif`
- CONT `TreasureStump2` 0x00078915 (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/misc/treasurestump2.nif`
- DOOR `TESTMembranetest` 0x0007878F (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/misc/membranetest.nif`
- DOOR `SporeDoor01` 0x00030F95 (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/sporedoor01.nif`
- LIGH `CastleHangingDungeonLight01` 0x0002B8DC (Oblivion.esm) → `MODL` `meshes/clutter/castleinterior/castlehangingdungeonlight01.nif`
- MISC `SE09DermisMembrane` 0x000523B5 (Oblivion.esm) → `MODL` `meshes/plants/fringe/se09dermismembrane.nif`
- MISC `Gem4SapphireFlawed` 0x00038BA2 (Bashed Patch, 0.esp) → `ICON` `textures/menus/icons/clutter/gx/gems/iconsapphireflawed2.dds`
- STAT `TestFireSorting` 0x00080D6B (Oblivion.esm) → `MODL` `meshes/effects/testfiresorting.nif`
- STAT `SEFXAshStorm` 0x00077C0B (Oblivion.esm) → `MODL` `meshes/effects/sefxashstorm.nif`
- STAT `TESTCylarneAltar` 0x0006D19A (Oblivion.esm) → `MODL` `meshes/effects/testcylarnealtar.nif`
- STAT `SEChandelier01` 0x0005E36A (Oblivion.esm) → `MODL` `meshes/clutter/sefurniture/sechandelier01.nif`
- STAT `BlackSmithRef` 0x0005E2F6 (Oblivion.esm) → `MODL` `meshes/clutter/sefurniture/blacksmithref.nif`
- STAT `Rommprototype` 0x0005537C (Oblivion.esm) → `MODL` `meshes/architecture/rommprototype.nif`
- STAT `TESTManiaCityStatue` 0x00044428 (Oblivion.esm) → `MODL` `meshes/architecture/city/mania/testmaniacitystatue.nif`
- STAT `ResonatorMini2` 0x0003EF61 (Oblivion.esm) → `MODL` `meshes/architecture/quests/se03resonatormini2.nif`
- STAT `ResonatorMini1` 0x0003EF5C (Oblivion.esm) → `MODL` `meshes/architecture/quests/se03resonatormini1.nif`
- STAT `ResonatorMini` 0x0003EF54 (Oblivion.esm) → `MODL` `meshes/architecture/quests/se03resonatormini.nif`
- STAT `MadnessRockMini` 0x0001E978 (Oblivion.esm) → `MODL` `meshes/clutter/madnessrocks/madnessrockv3mini.nif`
- STAT `MadnessRockHand2` 0x0001E977 (Oblivion.esm) → `MODL` `meshes/clutter/madnessrocks/madnessrockv3clutter2.nif`
- STAT `MadnessRockHand1` 0x0001E976 (Oblivion.esm) → `MODL` `meshes/clutter/madnessrocks/madnessrockv3clutter.nif`
- STAT `CreaturesWraithblah` 0x0000CF01 (Oblivion.esm) → `MODL` `meshes/creatures/wraith/blah.nif`
- STAT `SigilFXWarp` 0x000BF02A (Oblivion.esm) → `MODL` `meshes/effects/sigilfxwarp.nif`
- STAT `TestSigilSmoke` 0x000BE438 (Oblivion.esm) → `MODL` `meshes/effects/testsigilsmoke.nif`
- STAT `CPSkyDome01` 0x000F58C1 (Oblivion.esm) → `MODL` `meshes/dungeons/misc/cpskydome01.nif`
- STAT `SeigeCrawler` 0x00086998 (Oblivion.esm) → `MODL` `meshes/oblivion/seige/deidricseigecrawler.nif`
- STAT `testGlass` 0x000342BF (Oblivion.esm) → `MODL` `meshes/weapons/glass/testglass.nif`
- STAT `Daedrictest` 0x0001D1FC (Oblivion.esm) → `MODL` `meshes/weapons/daedric/test.nif`
- STAT `testMS14Troll` 0x0001C4F5 (Oblivion.esm) → `MODL` `meshes/creatures/ms14troll/ms14troll.nif`
- STAT `AnvilDockPorch01` 0x00008BE8 (Oblivion.esm) → `MODL` `meshes/architecture/anvil/anvildockporch01.nif`
- STAT `SKCastleStoneWalk01` 0x0002A4E6 (Oblivion.esm) → `MODL` `meshes/architecture/castle/skingrad/skcastlestonewalk01.nif`
- STAT `SkCastleRoofEnd01` 0x000298C8 (Oblivion.esm) → `MODL` `meshes/architecture/castle/skingrad/skcastleroofend01.nif`
- STAT `Testtestamulet` 0x000256FF (Oblivion.esm) → `MODL` `meshes/clothes/amuletsandrings/amulet.nif`
- STAT `TestSancreTorSTCastleExterior` 0x00024A8A (Oblivion.esm) → `MODL` `meshes/test/sancretor/stcastleexterior.nif`
- STAT `TestSancreTorSTTomb` 0x00024A88 (Oblivion.esm) → `MODL` `meshes/test/sancretor/sttomb.nif`
- STAT `testflame` 0x00024660 (Oblivion.esm) → `MODL` `meshes/test/testflame.nif`
- STAT `TestSancreTorSTCastle` 0x00025E54 (Oblivion.esm) → `MODL` `meshes/test/sancretor/stcastle.nif`
- STAT `testweaponsall` 0x00023F2D (Oblivion.esm) → `MODL` `meshes/weapons/silver/test weapons all.nif`
- STAT `LeatherArmorMtest2` 0x00022287 (Oblivion.esm) → `MODL` `meshes/armor/leather/leatherarmormtest.nif`
- STAT `Steelweaponalltest` 0x0002224B (Oblivion.esm) → `MODL` `meshes/weapons/steel/steelweaponalltest.nif`
- STAT `Ironweaponalltest` 0x0001C5FF (Oblivion.esm) → `MODL` `meshes/weapons/iron/ironweaponalltest.nif`