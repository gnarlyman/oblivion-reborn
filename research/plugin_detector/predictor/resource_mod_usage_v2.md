# Resource-mod usage audit — Reborn-OOO

Scans active ARMO/CLOT/WEAP/AMMO records' MODL/ICON paths and attributes each to the mod folder providing the resource via VFS.

## Totals
- Paths scanned: 29339
- Paths resolved: 29206
- Paths NOT resolved (broken refs): 133

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
| Useful Meshes Collection | NEEDED (exclusive refs) | 507 | 0 | 0 | 11257 |
| Sentinel Legendary Weapons And Armors | NEEDED (exclusive refs) | 180 | 2 | 0 | 752 |
| UFF Unrepentant Archer | NEEDED (exclusive refs) | 152 | 1 | 0 | 314 |
| Adonnays Elven Weaponry | NEEDED (exclusive refs) | 151 | 0 | 0 | 420 |
| Offhand Weapons | NEEDED (exclusive refs) | 149 | 0 | 0 | 93 |
| Apophis Armory of the Silver Dragon | NEEDED (exclusive refs) | 146 | 2 | 0 | 558 |
| RealSwords Nord | NEEDED (exclusive refs) | 135 | 0 | 0 | 378 |
| Lost Paladins of the Divines | NEEDED (exclusive refs) | 84 | 8 | 0 | 324 |
| Reborn - OOO Enhanced HTB Path Fix | NEEDED (exclusive refs) | 48 | 28 | 0 | 31 |
| Vermillion and Silverthorn Robes by Kafei | NEEDED (exclusive refs) | 39 | 0 | 5 | 25 |
| Blue Leather | NEEDED (exclusive refs) | 25 | 0 | 0 | 37 |
| KafeiDotours Vermillion and Silverthorn Robes For Exnems Bod | NEEDED (exclusive refs) | 5 | 0 | 0 | 4 |
| Dragon Claw Sword And Shield | NEEDED (exclusive refs) | 5 | 0 | 0 | 13 |
| 1_Clickable Magic Gate | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| 1_DarNified UI Ultrawide config preset | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| 1_ULF DarNified UI patch image file | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| 4gb Ram Patcher | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| AddActorValues | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| AveSithis Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Ayleid Ruins Fixed - Mesh Replacer and Modder Resource | NOT REFERENCED by record-scan | 0 | 0 | 0 | 34 |
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
| Faster Dungeon Doors | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Female EyeCandy Wardrobe | NOT REFERENCED by record-scan | 0 | 0 | 0 | 84 |
| FractionalMagicDamage | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| G5 Validator | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1 |
| GPEngineFixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Grip of Steel | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| HGEC Blood Elves and Egyptian Armor | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| HGEC Body | NOT REFERENCED by record-scan | 0 | 0 | 0 | 30 |
| MIEO - Parasol Mesh Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
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
| Seamless - HGEC Female | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
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

## Substitution suspects (58 content-hash groups)

Groups where one physical file's content is shared with N distinct virtual paths. The most likely Mesh-Nullify-style fallback patterns.

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

### hash `d732a8b29df4...` — 2 paths, 2 parent dirs, 6 record refs

- `meshes/mageq/clothes/battle mage/robe2_gnd.nif`
- `meshes/mageq/clothes/ranger robe/robe_gnd.nif`

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

### hash `36b8362bbd28...` — 2 paths, 2 parent dirs, 3 record refs

- `textures/menus/icons/armor/lpotd/fury/m/greaves.dds`
- `textures/menus/icons/armor/lpotd/wrath/m/greaves.dds`

### hash `c66ad4bec189...` — 2 paths, 1 parent dirs, 2 record refs

- `meshes/armor/lex/dra/lexhdraboots.nif`
- `meshes/armor/lex/dra/lexhdrabootsmale.nif`

### hash `fa8bd8e8351f...` — 2 paths, 1 parent dirs, 2 record refs

- `meshes/armor/lex/dra/lexbdraboots.nif`
- `meshes/armor/lex/dra/lexbdrabootsmale.nif`

### hash `37c0a4307670...` — 2 paths, 1 parent dirs, 2 record refs

- `meshes/armor/lex/snake/lexsnakeboots.nif`
- `meshes/armor/lex/snake/lexsnakebootsm.nif`

### hash `f035cc84ed07...` — 2 paths, 2 parent dirs, 2 record refs

- `meshes/narmor/glassarmorn/male/glasshelmetnmbeast.nif`
- `meshes/narmor/glassarmorn/male/replica/glasshelmetnmrbeast.nif`


## Broken refs (133 paths NOT resolved by VFS)

First 50:
- ARMO `Dremora2KynvalHelmet` 0x0008B888 (OOO Enhanced.esp) → `MODL` `meshes/soooequipment/dremora armors/daedric helmets/green daedric helmet no horns.nif`
- ARMO `EnchDwarvenGauntletsFortStrength` 0x00049669 (Bashed Patch, 0.esp) → `MOD3` `meshes/armor/dwarven/f/gauntlets.nif`
- ARMO `Dremora0ChurlCuirass` 0x0003E9BD (OOO Enhanced.esp) → `MOD3` `meshes/soooequipment/daedricchurl/m/churl armor 1.nif`
- CLOT `SEOrderPriestHood` 0x0006FC35 (OOOShiveringIsles.esp) → `MOD2` `meshes/ooose/armorobelisk/light/helmetclosed_gnd.nif`
- CLOT `SEOrderPriestRobe` 0x00044C45 (Bashed Patch, 0.esp) → `MOD2` `meshes/ooose/armorobelisk/light/m/suit_gnd.nif`
- CLOT `MQMankarCamoranRobeL12` 0x000BE31E (Bashed Patch, 0.esp) → `MODL` `meshes/soooequipment/dremora armors/robes/camoranrobe.nif`
- CLOT `MQMankarCamoranRobeL12` 0x000BE31E (Bashed Patch, 0.esp) → `MOD3` `meshes/soooequipment/dremora armors/robes/camoranrobe.nif`
- WEAP `Dark01KnifeBlade` 0x00022BA8 (Bashed Patch, 0.esp) → `MODL` `meshes/weapons/c_dagcol/bladeofwoedirty.nif`
- ARMO `DremoraMQ14MarkynazGauntletsPlayable` 0x01034943 (OOO Enhanced.esp) → `ICON` `textures/menus/icons/trfaf/armor/daedricbrown/m/gauntlets.dds`
- CLOT `XUnderkingrobeOOOKW` 0x01005B71 (OOO Enhanced.esp) → `MODL` `meshes/clothes/robesnecrosooo/m/robekingwormm.nif`
- CLOT `XUnderkingrobeOOOKW` 0x01005B71 (OOO Enhanced.esp) → `MOD3` `meshes/clothes/robesnecrosooo/m/robekingwormm.nif`
- CLOT `XUnderkinghoodOOOKW` 0x01005B72 (OOO Enhanced.esp) → `MODL` `meshes/clothes/robesnecrosooo/hood2.nif`
- CLOT `XElvenhoodUOOO` 0x01006F2F (OOO Enhanced.esp) → `ICON` `textures/menus/icons/armor/nexonsarmory/waort1socarmor/awaorsoccrownicon64.dds`
- WEAP `WeaponSabreIvory2hlongOOONandir` 0x0100B5E2 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/aurora.nif`
- WEAP `OOOBladeOfVirtue` 0x010359D7 (Oscuro's_Oblivion_Overhaul.esm) → `ICON` `textures/menus/icons/weapons/bladeofvirtue/steellongsword.dds`
- WEAP `OOOBladeOfVengeance` 0x010359D9 (Oscuro's_Oblivion_Overhaul.esm) → `ICON` `textures/menus/icons/weapons/bladeofvirtue/steellongsword.dds`
- AMMO `WeaponsDraconicArmorarrowOOO` 0x0102714B (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/weapons/draconicarmor/arrow.nif`
- CLOT `cobCloAsXivCollar` 0x02004573 (Cobl Main.esm) → `MODL` `meshes/clothes/asxivilai/xivilaicollar.nif`
- CLOT `cobCloAsXivCollar` 0x02004573 (Cobl Main.esm) → `MOD2` `meshes/clothes/asxivilai/asxivilai_gnd.nif`
- CLOT `cobCloAsXivCollar` 0x02004573 (Cobl Main.esm) → `ICON` `textures/menus/icons/asxivilai/asxivcollaricon.dds`
- CLOT `cobCloAsXivKilt` 0x02007542 (Cobl Main.esm) → `MODL` `meshes/clothes/asxivilai/xivilaikilt.nif`
- CLOT `cobCloAsXivKilt` 0x02007542 (Cobl Main.esm) → `MOD2` `meshes/clothes/asxivilai/asxivilai_gnd.nif`
- CLOT `cobCloAsXivKilt` 0x02007542 (Cobl Main.esm) → `ICON` `textures/menus/icons/asxivilai/asxivkilticon.dds`
- CLOT `cobCloAsXivKilt` 0x02007542 (Cobl Main.esm) → `MOD3` `meshes/clothes/asxivilai/xivilaikiltf.nif`
- ARMO `SenTineLArmorAkaviriEmperorArmor` 0x1D00293A (OOO Enhanced.esp) → `MOD4` `meshes/armor/auroran/ayleid/bluecuirass_gnd.nif`
- ARMO `DaedricBootsVAUnp` 0x1D019104 (OOO Enhanced.esp) → `MODL` `meshes/soooequipment/daedricblue/m/boots.nif`
- ARMO `DaedricBootsVAUnp` 0x1D019104 (OOO Enhanced.esp) → `MOD2` `meshes/soooequipment/daedricblue/m/boots_gnd.nif`
- ARMO `DaedricHelmetVAUn` 0x1D019106 (OOO Enhanced.esp) → `MOD2` `meshes/soooequipment/daedricblue/m/helmet_gnd.nif`
- ARMO `DaedricGreavesVAUn` 0x1D019107 (OOO Enhanced.esp) → `MOD2` `meshes/soooequipment/daedricblue/m/greaves_gnd.nif`
- ARMO `DaedricGreavesVAUn` 0x1D019107 (OOO Enhanced.esp) → `MOD3` `meshes/soooequipment/daedricblue/f/greaves.nif`
- ARMO `DaedricGreavesVAUn` 0x1D019107 (OOO Enhanced.esp) → `MOD4` `meshes/soooequipment/daedricblue/f/greaves_gnd.nif`
- ARMO `DaedricCuirassVAUn` 0x1D019109 (OOO Enhanced.esp) → `MOD2` `meshes/soooequipment/daedricblue/m/cuirass_gnd.nif`
- ARMO `NobleBattlemageArmorOOO` 0x1D051892 (OOO Enhanced.esp) → `ICON` `textures/menus/icons/armor/noble plate/noble battlemage robes.dds`
- ARMO `NoblebattlemagehoodOOO` 0x1D051893 (OOO Enhanced.esp) → `ICON` `textures/menus/icons/armor/noble plate/noble battlemage hood.dds`
- ARMO `NoblebattlemageglovesOOO` 0x1D051894 (OOO Enhanced.esp) → `ICON` `textures/menus/icons/armor/noble plate/noble battlemage gloves.dds`
- ARMO `NoblebattlemageshoesOOO` 0x1D051895 (OOO Enhanced.esp) → `ICON` `textures/menus/icons/armor/noble plate/noble battlemage shoes.dds`
- ARMO `sOOOAmazonHellSpawnBoots01` 0x1D101001 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hellspawnarmor/xnm_cloudpli_boots.nif`
- ARMO `sOOOAmazonHellSpawnBoots01` 0x1D101001 (OOO Enhanced.esp) → `MOD2` `meshes/exnem/femaleeyecandy/armor/hpmp_gnd.nif`
- ARMO `sOOOAmazonHellSpawnCuirass01` 0x1D101002 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hellspawnarmor/xnm_cloudpli_bra.nif`
- ARMO `sOOOAmazonHellSpawnCuirass01` 0x1D101002 (OOO Enhanced.esp) → `MOD2` `meshes/exnem/femaleeyecandy/armor/hpmp_gnd.nif`
- ARMO `sOOOAmazonHellSpawnGauntlets01` 0x1D101003 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hellspawnarmor/xnm_cloudpli_gloves.nif`
- ARMO `sOOOAmazonHellSpawnGauntlets01` 0x1D101003 (OOO Enhanced.esp) → `MOD2` `meshes/exnem/femaleeyecandy/armor/hpmp_gnd.nif`
- ARMO `sOOOAmazonHellSpawnGreaves01` 0x1D101004 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hellspawnarmor/xnm_cloudpli_panties2.nif`
- ARMO `sOOOAmazonHellSpawnGreaves01` 0x1D101004 (OOO Enhanced.esp) → `MOD2` `meshes/exnem/femaleeyecandy/armor/hpmp_gnd.nif`
- ARMO `sOOOAmazonEmeraldCuirass` 0x1D101005 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hollyarmor/xnm_cloudpli_bra.nif`
- ARMO `sOOOAmazonEmeraldCuirass` 0x1D101005 (OOO Enhanced.esp) → `MOD3` `meshes/exnem/femaleeyecandy/armor/zenman/zen_cloudpli_bra.nif`
- ARMO `sOOOAmazonEmeraldGreaves` 0x1D101006 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hollyarmor/xnm_cloudpli_panties2.nif`
- ARMO `sOOOAmazonEmeraldGreaves` 0x1D101006 (OOO Enhanced.esp) → `MOD3` `meshes/exnem/femaleeyecandy/armor/zenman/zen_cloudpli_panties2.nif`
- ARMO `sOOOAmazonEmeraldBoots` 0x1D101007 (OOO Enhanced.esp) → `MODL` `meshes/exnem/femaleeyecandy/armor/hollyarmor/xnm_cloudpli_boots.nif`
- ARMO `sOOOAmazonEmeraldBoots` 0x1D101007 (OOO Enhanced.esp) → `MOD3` `meshes/exnem/femaleeyecandy/armor/zenman/zen_cloudpli_boots.nif`