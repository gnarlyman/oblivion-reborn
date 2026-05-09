# Resource-mod usage audit — Reborn-OOO

Scans active ARMO/CLOT/WEAP/AMMO records' MODL/ICON paths and attributes each to the mod folder providing the resource via VFS.

## Totals
- Paths scanned: 126509
- Paths resolved: 125381
- Paths NOT resolved (broken refs): 1128

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
| OOO Enhanced - Resources | NEEDED (exclusive refs) | 9499 | 541 | 1307 | 14643 |
| Improved Chests for Harvest Containers xOBSE | NEEDED (exclusive refs) | 1569 | 0 | 0 | 69 |
| John Cyrodiil's beef soup (upscale dump) | NEEDED (exclusive refs) | 1161 | 0 | 396 | 4833 |
| Improved Amulets and Rings | NEEDED (exclusive refs) | 1146 | 0 | 0 | 73 |
| DeParallaxer mod | NEEDED (exclusive refs) | 559 | 2 | 121 | 657 |
| Redressing Cyrodiil - Seamless Neck patch | NEEDED (exclusive refs) | 448 | 6 | 0 | 460 |
| Proper Blunt Weapons | NEEDED (exclusive refs) | 443 | 0 | 50 | 41 |
| Thieves Guild HQ - Unhealthy Competition | NEEDED (exclusive refs) | 365 | 2 | 0 | 760 |
| Gecko's Imperial Dungeon Textures - 2K Parallax | NEEDED (exclusive refs) | 348 | 0 | 0 | 420 |
| Orcish and Daedric armor replacer | NEEDED (exclusive refs) | 311 | 20 | 0 | 85 |
| High-Res Varla and Welkynd Texture Replacer | NEEDED (exclusive refs) | 262 | 0 | 0 | 32 |
| Snail's Ebony Armory - A Makeover for Ebony Weapons and Shields | NEEDED (exclusive refs) | 253 | 0 | 0 | 70 |
| EVE HGEC Eyecandy Variants Expansion | NEEDED (exclusive refs) | 220 | 0 | 9 | 185 |
| Harvest Flora | NEEDED (exclusive refs) | 214 | 0 | 0 | 161 |
| Mesh Fixes & Recolors | NEEDED (exclusive refs) | 201 | 18 | 0 | 269 |
| Visually Improved Staffs | NEEDED (exclusive refs) | 181 | 0 | 0 | 8 |
| Blue Darker Glass - Armor and Weapons | NEEDED (exclusive refs) | 180 | 0 | 0 | 44 |
| Weapon Improvement Project - fixes (NO ESP) v2 | NEEDED (exclusive refs) | 175 | 0 | 98 | 119 |
| Extra Robe Pack v3a | NEEDED (exclusive refs) | 158 | 10 | 0 | 123 |
| Cloud Ruler Temple Alive | NEEDED (exclusive refs) | 138 | 7 | 0 | 406 |
| Real Steel Armor Replacer Sheen Fix (REQUIRES ORIGINAL) | NEEDED (exclusive refs) | 126 | 14 | 32 | 17 |
| Mudwater | NEEDED (exclusive refs) | 125 | 0 | 0 | 4 |
| Vampire Hunting - Order of the Virtuous Blood | NEEDED (exclusive refs) | 122 | 8 | 0 | 2879 |
| Bettys Sewer Textures | NEEDED (exclusive refs) | 115 | 0 | 0 | 121 |
| Seamless Equipment - MOO | NEEDED (exclusive refs) | 109 | 0 | 0 | 60 |
| TIBs Compact Quivers - Manual Install | NEEDED (exclusive refs) | 103 | 20 | 0 | 10 |
| High Fantasy Cyrodiil Caves | NEEDED (exclusive refs) | 103 | 0 | 0 | 136 |
| TD_Premium Meat | NEEDED (exclusive refs) | 100 | 0 | 0 | 21 |
| Assorted Protective Female Armors | NEEDED (exclusive refs) | 99 | 0 | 0 | 18 |
| Project Optimization Output | NEEDED (exclusive refs) | 98 | 0 | 0 | 64 |
| Strotis new dungeon meshes | NEEDED (exclusive refs) | 97 | 52 | 0 | 63 |
| Travelling Equipment - Cloaks and Backpacks | NEEDED (exclusive refs) | 96 | 0 | 0 | 141 |
| Race Balancing Project | NEEDED (exclusive refs) | 76 | 0 | 0 | 1648 |
| Seamless - HGEC Female | NEEDED (exclusive refs) | 74 | 0 | 0 | 55 |
| Apophis Armory of the Silver Dragon | NEEDED (exclusive refs) | 72 | 2 | 76 | 552 |
| TD Watercolor - Oblivion paintings replacer | NEEDED (exclusive refs) | 60 | 0 | 9 | 129 |
| Smoking Firesources BETA - Project Ambience | NEEDED (exclusive refs) | 58 | 0 | 0 | 21 |
| Classic Sword Replacer Expansion | NEEDED (exclusive refs) | 55 | 0 | 0 | 13 |
| Seamless - Robert Male | NEEDED (exclusive refs) | 48 | 0 | 0 | 37 |
| Elsweyr Anequina - Khajiit Compatibility | NEEDED (exclusive refs) | 47 | 1 | 0 | 38 |
| Insanitys Ebony Sword Replacer | NEEDED (exclusive refs) | 41 | 0 | 0 | 8 |
| Vermillion and Silverthorn Robes by Kafei | NEEDED (exclusive refs) | 40 | 0 | 0 | 23 |
| 2020 Retexture Project - Landscapes and Rocks | NEEDED (exclusive refs) | 37 | 0 | 0 | 285 |
| Dark Brotherhood Armor Extended | NEEDED (exclusive refs) | 35 | 8 | 0 | 18 |
| Faster Dungeon Doors | NEEDED (exclusive refs) | 35 | 0 | 0 | 5 |
| HelBornesSpearSet10 | NEEDED (exclusive refs) | 33 | 3 | 0 | 55 |
| Ayleid Ruins Fixed - Mesh Replacer and Modder Resource | NEEDED (exclusive refs) | 33 | 0 | 0 | 34 |
| KillerHell Steel Shield Replacer | NEEDED (exclusive refs) | 32 | 0 | 0 | 10 |
| Fur and Leather Armor - Visual Edits | NEEDED (exclusive refs) | 31 | 0 | 0 | 21 |
| TD Mushroom High-poly Replacer | NEEDED (exclusive refs) | 31 | 0 | 0 | 75 |
| Ebony Helmet Ungoggled | NEEDED (exclusive refs) | 26 | 0 | 0 | 6 |
| xrayys better cloud ruler temple | NEEDED (exclusive refs) | 25 | 0 | 0 | 84 |
| MOO - Non-Elder Scrolls Franchise Recolors | NEEDED (exclusive refs) | 24 | 2 | 0 | 115 |
| Assorted Protective Female Armors UV fix | NEEDED (exclusive refs) | 23 | 0 | 0 | 3 |
| Ducks and Swans for Cyrodiil | NEEDED (exclusive refs) | 23 | 0 | 0 | 47 |
| Kaizits Animated Ingredients - No Shadows | NEEDED (exclusive refs) | 23 | 0 | 0 | 7 |
| Improved Chorrol | NEEDED (exclusive refs) | 22 | 0 | 0 | 134 |
| Improved Trees and Flora 2 | NEEDED (exclusive refs) | 22 | 0 | 9 | 93 |
| TIBs Compact Quivers - Manual Install - SI | NEEDED (exclusive refs) | 21 | 0 | 0 | 9 |
| Particled Ayleid Stones | NEEDED (exclusive refs) | 21 | 0 | 0 | 4 |
| Weapon Improvement Project - Town Guard Shields Preview (Unique Texture Paths) | NEEDED (exclusive refs) | 19 | 0 | 0 | 15 |
| Clickable Magic Gate | NEEDED (exclusive refs) | 19 | 0 | 0 | 4 |
| Real Steel Armor Replacer - Morrowind Style Breton Plate | NEEDED (exclusive refs) | 16 | 0 | 126 | 60 |
| Improved Doors and Flora | NEEDED (exclusive refs) | 16 | 0 | 0 | 27 |
| Improved Light Beam - Transparency Fix | NEEDED (exclusive refs) | 13 | 0 | 0 | 5 |
| TD_Hutor - Oblivion farms retexture | NEEDED (exclusive refs) | 13 | 0 | 0 | 77 |
| TreeOPT | NEEDED (exclusive refs) | 13 | 0 | 0 | 13 |
| Momos Crate Resource | NEEDED (exclusive refs) | 13 | 0 | 0 | 66 |
| Oblivifall - Losing My Religion - No Golden Gods Replacer | NEEDED (exclusive refs) | 13 | 0 | 0 | 10 |
| Scabbard For Dwarven Longsword | NEEDED (exclusive refs) | 12 | 0 | 0 | 2 |
| Nice Ice a.k.a. The Hills Have Ice | NEEDED (exclusive refs) | 12 | 0 | 0 | 26 |
| Artifacts Remastered - Compact Quivers Patch | NEEDED (exclusive refs) | 11 | 0 | 0 | 12 |
| Smaller MOO Backpacks | NEEDED (exclusive refs) | 11 | 3 | 0 | 7 |
| Knights of the Nine_Weapon Improvement Project Patch | NEEDED (exclusive refs) | 10 | 0 | 0 | 4 |
| Half-off Clavicusvile Mask remodel replacer | NEEDED (exclusive refs) | 10 | 0 | 0 | 6 |
| VKVII Oblivion Imperial City | NEEDED (exclusive refs) | 10 | 0 | 0 | 227 |
| Deadlands | NEEDED (exclusive refs) | 10 | 2 | 0 | 22 |
| Flora display fix | NEEDED (exclusive refs) | 9 | 0 | 72 | 76 |
| Meos Settlement - Resource | NEEDED (exclusive refs) | 9 | 2 | 0 | 181 |
| Oblivifall - Losing My Religion Patch - AWLS | NEEDED (exclusive refs) | 9 | 0 | 0 | 23 |
| 01 Seamless OCOv2 n HGEC Female clothes fixes | NEEDED (exclusive refs) | 8 | 0 | 0 | 6 |
| Countess | NEEDED (exclusive refs) | 8 | 0 | 0 | 74 |
| ElsweyrPalmTrees Updated | NEEDED (exclusive refs) | 8 | 0 | 0 | 11 |
| HD Cobwebs | NEEDED (exclusive refs) | 7 | 0 | 0 | 30 |
| Strand Magic - A Mage Guild Theme | NEEDED (exclusive refs) | 6 | 0 | 0 | 36 |
| Palm Trees Update10 | NEEDED (exclusive refs) | 5 | 0 | 0 | 49 |
| Gray Cowl of Nocturnal Reshaped | NEEDED (exclusive refs) | 4 | 0 | 0 | 3 |
| Leyawiin Woodland floor fix | NEEDED (exclusive refs) | 4 | 0 | 3 | 8 |
| Ayleid Well Crystals | NEEDED (exclusive refs) | 4 | 0 | 0 | 7 |
| 2020 Retexture Project - Grasses | NEEDED (exclusive refs) | 4 | 2 | 1 | 77 |
| ULP (Ultimative LOD Pack) | NEEDED (exclusive refs) | 3 | 0 | 0 | 75 |
| TD and AWLS patch | NEEDED (exclusive refs) | 3 | 0 | 0 | 4 |
| VKVII Oblivion ANVIL | NEEDED (exclusive refs) | 3 | 0 | 0 | 155 |
| HD Photorealistic Ivy by greenback12 for Oblivion | NEEDED (exclusive refs) | 3 | 0 | 0 | 7 |
| Amelion Helmet Ungoggled | NEEDED (exclusive refs) | 2 | 0 | 0 | 6 |
| Azuras Star retexture | NEEDED (exclusive refs) | 2 | 0 | 0 | 5 |
| Nirnroot retexture | NEEDED (exclusive refs) | 2 | 0 | 6 | 8 |
| Elsweyr Anequina Hala Tree Replacer | NEEDED (exclusive refs) | 2 | 0 | 0 | 7 |
| Improved LightBeam | NEEDED (exclusive refs) | 1 | 0 | 0 | 3 |
| Leyawiin Woodland | NEEDED (exclusive refs) | 1 | 0 | 1 | 117 |
| 2020 Retexture Project - Farmhouses (AWLS) | NEEDED (exclusive refs) | 1 | 0 | 0 | 11 |
| Fire retexture and ENB box remover for Shivering Isles | NEEDED (exclusive refs) | 1 | 0 | 0 | 270 |
| English Signboard primarily for Katkat's Ships | NEEDED (exclusive refs) | 1 | 0 | 0 | 8 |
| Espless Slofs Horse Replacer | NEEDED (exclusive refs) | 1 | 0 | 0 | 39 |
| Magic Visuals Overhaul - Balls Remover (Patch) | NEEDED (exclusive refs) | 1 | 0 | 0 | 20 |
| Kaizits Animated Ingredients | SHADOWED (same files in higher-priority mod) | 0 | 0 | 23 | 46 |
| 2020 Retexture Project - Trees and Shrubs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 58 |
| 2x HiRez Daedric Shrines | NOT REFERENCED by record-scan | 0 | 0 | 0 | 39 |
| 4gb Ram Patcher | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| A Painted World Reshade Preset - ORC 1.9.3 Version | NOT REFERENCED by record-scan | 0 | 0 | 0 | 38 |
| AI Enhanced - Elsweyr Desert of Anequina | NOT REFERENCED by record-scan | 0 | 0 | 0 | 244 |
| AI Enhanced - Ruined Ruins | NOT REFERENCED by record-scan | 0 | 0 | 0 | 32 |
| AI Powered Oblivion Landscape Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 23 |
| AI Voice Addon for The Well of Minlorada | NOT REFERENCED by record-scan | 0 | 0 | 0 | 178 |
| AV Uncapper | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| AddActorValues | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Akatosh Retexture by themythofstrider | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Alluring Wine Bottles with Real Glass - Loose Files Patch for Mods | SUBSTITUTION-ONLY (all refs are content-shared placeholders) | 260 | 260 | 0 | 26 |
| Anvil Castle Door Remastered | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Arena Ascended - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 161 |
| Arena Of Awe - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 28 |
| Arena Poster | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Atmos4096 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| AveSithis Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Ayleid Statues - Retextured | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Base Object Swapper | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Base Object Swapper Integrations | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Beards in Tamriel | NOT REFERENCED by record-scan | 0 | 0 | 0 | 800 |
| Beards in Tamriel - Optimised Meshes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 34 |
| Best Combined Night Sky | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Better Blood | NOT REFERENCED by record-scan | 0 | 0 | 0 | 15 |
| Better Blood skin decal fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Better Dark Brotherhood Sanctuary - Voiced Addon | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Better Forts - Voiced Addon BSA | NOT REFERENCED by record-scan | 0 | 0 | 0 | 41 |
| Better Injured and Death Bear Sound | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Better Kvatch Rebuilt (Submod) An AI Voiced Experience | NOT REFERENCED by record-scan | 0 | 0 | 0 | 849 |
| Better Necks for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Better OCOv2 Agemaps | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Better Oblivion Cursor | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Better Scroll Background | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Better Summon Undead Effect | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Better Teeth Texture and Mesh for OCOv2 Uses Merged Teeth | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Better Window Reflections | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Better recoil and stagger | NOT REFERENCED by record-scan | 0 | 0 | 0 | 35 |
| Big Liz's Big Textures for Big Lizards (Clannfear and Daedroth) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Blade of Woe Replacer - Nine Tongues | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| Blockhead | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Bloody Spray | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Blue's Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Boof's Skinned Hound Retex | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Bounty Quests Fixed and Polished - Voiced Addon BSA | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| BrumaGuildReconstructed - AI Voice Files | NOT REFERENCED by record-scan | 0 | 0 | 0 | 18 |
| Brutish Male Orcs for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| CPU Affinity | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Cartographers Map of Oblivion | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Cathedral HD | NOT REFERENCED by record-scan | 0 | 0 | 0 | 61 |
| Character Based Attack Speed | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Cheery Cheydinhal - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 70 |
| Class portraits diversified | NOT REFERENCED by record-scan | 0 | 0 | 0 | 44 |
| Classic Sword Replacers | SUBSTITUTION-ONLY (all refs are content-shared placeholders) | 115 | 115 | 0 | 52 |
| Cleaned and Darker Daedric Armor and Weapons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 18 |
| Clear Display Cases | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Clothes - Color Correction | NOT REFERENCED by record-scan | 0 | 0 | 0 | 159 |
| Cloud Ruler Temple HD | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Collection of Fixes by Lazaro | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Colored Map Markers | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Colored Quests - Updated | NOT REFERENCED by record-scan | 0 | 0 | 0 | 37 |
| Colored Quests Light | NOT REFERENCED by record-scan | 0 | 0 | 0 | 34 |
| Colovian Carpets - A rug and mat retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 36 |
| Combat Additions | NOT REFERENCED by record-scan | 0 | 0 | 0 | 41 |
| Combat Stance Reanimation | NOT REFERENCED by record-scan | 0 | 0 | 0 | 100 |
| Combat Stance Reanimation - a custom preset | NOT REFERENCED by record-scan | 0 | 0 | 0 | 108 |
| Companion Vilja - Non-Companion Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1199 |
| ConScribe | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Console Ignores Player | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Console Paste Support | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| ConsoleCommands | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Coop's MOO and Vanilla Wolf Remesh | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Coops Deer and Mountain Lion Revamp | NOT REFERENCED by record-scan | 0 | 0 | 0 | 30 |
| Coronerras Maximum Compatibility Skeletons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Crash Logger Improved | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Crime has witnesses | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Custom Spell Icons Updated | NOT REFERENCED by record-scan | 0 | 0 | 0 | 338 |
| Cyrodiil Transportation Network 2.0 Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 525 |
| DOWNPOUR - rain retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| DT Texture Pack - Unique Landscapes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 29 |
| DarNified UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 196 |
| DarNified UI Image Small Changes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 77 |
| Darooz Upperclass clutter | NOT REFERENCED by record-scan | 0 | 0 | 0 | 21 |
| Deathb0rns Modified Qarls LOD Normal Maps | NOT REFERENCED by record-scan | 0 | 0 | 0 | 15 |
| Detailed Mouth for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 36 |
| Detailed Terrain (2x) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 110 |
| Diverse Liches (Modders Resource) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 367 |
| Druid Armors and weapons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 86 |
| DustCloud01 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Dwemer Metal - Armor and Weapons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 18 |
| Ebony Armor Extended | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Elden Ring-Inspired Dodge Animations - Vanilla Conversion | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Elsweyr City Extension Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 65 |
| Elsweyr Palm Trees Reduced | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| Elsweyr the Deserts of Anequina Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2869 |
| ElsweyrOptionalFiles | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Elven Horse Armor Replacer | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| EngineBugFixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Enhanced Sounds Overhaul | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2033 |
| Enhanced Vegetation - Darker trunks version by Xtudo | NOT REFERENCED by record-scan | 0 | 0 | 0 | 111 |
| Evenstars Colourwheel LOD Update | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1668 |
| Extended UI - Vanilla and Darn Boss Bar Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Far Cry inspired Grass - Expanded | NOT REFERENCED by record-scan | 0 | 0 | 0 | 20 |
| Faster Sleep Wait (OBSE) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| FleshyPod Retextured | NOT REFERENCED by record-scan | 0 | 0 | 0 | 14 |
| FractionalMagicDamage | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| GPEngineFixes | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Gamblers of Cyrodiil Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7153 |
| GasClouds4096 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Gecko's Ayleid Ruins Textures | NOT REFERENCED by record-scan | 0 | 0 | 0 | 64 |
| Gecko's Fort Interior Textures | NOT REFERENCED by record-scan | 0 | 0 | 0 | 73 |
| Give Me Some Skingrad - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 59 |
| Golden Elven Armor and Weapons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 19 |
| Got Wood - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 252 |
| Grip of Steel - No Player Disarm | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| HD Elsweyr - Road Signs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 26 |
| HD jerall ice texture with transparency | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| HDR Sun | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| HiRes Oblivion Textures | NOT REFERENCED by record-scan | 0 | 0 | 0 | 57 |
| Hill Giant Eye Fix - Loreless Creatures - MOO | NOT REFERENCED by record-scan | 0 | 0 | 0 | 8 |
| Hoarfrost Castle Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1017 |
| Imperial Armors - Visual Edits | NOT REFERENCED by record-scan | 0 | 0 | 0 | 19 |
| Imperial City IcDoor02 Remastered | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| ImperialCity_icdoor04 Remastered | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Improved Bravil | NOT REFERENCED by record-scan | 0 | 0 | 0 | 99 |
| Improved Bruma | NOT REFERENCED by record-scan | 0 | 0 | 0 | 55 |
| Improved Fires and Flames | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Improved Flame Atronach | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| Improved Frost Atronachs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Improved Fruits Vegetables and Meats | NOT REFERENCED by record-scan | 0 | 0 | 0 | 70 |
| Improved Middle and Upper Class Architecture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 9 |
| Improved Skulls and Bones and Ironwork | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Improved Trees and Flora | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Improved Vanilla Hairs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 33 |
| Infinitum Voiced Addons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 177 |
| Integration - The Stranded Light Integrated Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27539 |
| Item Description Framework for Maskar's Oblivion Overhaul and WEPON | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1 |
| Ivy replacer | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| J3 Atlassed VWD 2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 735 |
| J3 Atlassed VWD 2 - Cyrodiil - Qarls Texture Pack III | NOT REFERENCED by record-scan | 0 | 0 | 0 | 618 |
| J3 Atlassed VWD 2 - Cyrodiil - Ruins - ALL - Ruined Ruins (texture mod) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 81 |
| J3 Atlassed VWD 2 - Shivering Isles | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| J3 Atlassed VWD 2 - Shivering Isles - Bomret's Texture Pack for Shivering Isles | NOT REFERENCED by record-scan | 0 | 0 | 0 | 163 |
| Join the Blackwood Company Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2071 |
| Join the Morag Tong Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1043 |
| Join the Mythic Dawn Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1309 |
| Join the Order of the Black Worm Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 875 |
| Katkat TW3 Bears | SUBSTITUTION-ONLY (all refs are content-shared placeholders) | 84 | 84 | 0 | 18 |
| Khajiit Hair Colors | NOT REFERENCED by record-scan | 0 | 0 | 0 | 31 |
| Kinda Actually Decent Environment Map | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Knights of the Nine Revelation - Unvoiced Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3203 |
| Kragenir's Death Quest Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 15437 |
| Kvatch Rebuilt An AI Voiced Experience | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1941 |
| LOD Palms for Elsweyr Anequina | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Land Magic | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Landscape LOD generator 5_15c | NOT REFERENCED by record-scan | 0 | 0 | 0 | 532 |
| Light beam and dungeon mist retexture for Cyrodiil ENB | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Log Output | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Lore Dialogue 300 Updated Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 26805 |
| Lunas Darker Glass Equipment Textures 1.1 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 13 |
| MOBS patch for Maskar's Oblivion Overhaul | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| MOO - katkat's TW 3 Wolves Patch | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27 |
| MTC Expanded Villages Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 599 |
| Madness Longsword Replacer | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Magic Visuals Overhaul - Destruction particle fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Magic Visuals Overhaul - Fire laser fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Main Menu 2K (English) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Mannimarco Resurrection Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1249 |
| Marcus' Skyrim and Daggerfall Skeletons | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Menu Alt-Tab Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| MenuQue - OBSE Plugin | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| MessageLogger | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| My Universal Fonts | NOT REFERENCED by record-scan | 0 | 0 | 0 | 9 |
| Mythic Animals | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Mythic Madness | NOT REFERENCED by record-scan | 0 | 0 | 0 | 39 |
| Natural Vanilla Horses | NOT REFERENCED by record-scan | 0 | 0 | 0 | 23 |
| New Brows for OCO | NOT REFERENCED by record-scan | 0 | 0 | 0 | 16 |
| New Eye and Crosshair for UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| New Eyes for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 39 |
| Night Sky Fire and Ice | NOT REFERENCED by record-scan | 0 | 0 | 0 | 21 |
| Nightmarish Oblivion Gate Sounds | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| No Refraction Spells | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| No muddy dresses (and vomited rugs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 13 |
| Normal Map for Better Blood | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| OBL Mod Limit Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| OCO - Elsweyr Deserts of Anequina Patch | NOT REFERENCED by record-scan | 0 | 0 | 0 | 63 |
| OCOv2 - MOO Patch | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1 |
| OCOv2 Eyelash Mesh Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| OCOv2 Male Beard | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| OCOv2 Male Beard Extended | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| OOO Flavor Text for Extended UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Oblivifall - Losing My Blurriness. A texture upscale for LMR | NOT REFERENCED by record-scan | 0 | 0 | 0 | 495 |
| Oblivifall - Losing My Religion - Elevenlabs AI VOICES | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Oblivion Collectible Cards Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 485 |
| Oblivion Construction Set - Non-installer version | NOT REFERENCED by record-scan | 0 | 0 | 0 | 144 |
| Oblivion Display Tweaks | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Oblivion High Quality Music | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27 |
| Oblivion Magic Extender | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Oblivion Realm HD | NOT REFERENCED by record-scan | 0 | 0 | 0 | 293 |
| Oblivion Reloaded Combined(ORC) 1.9.3 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 490 |
| Oblivion Script Extender (OBSE xOBSE) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11 |
| Oblivion Stereo Sound Overhaul | NOT REFERENCED by record-scan | 0 | 0 | 0 | 40 |
| Optimized VWD | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Order of the Dragon EV Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 17922 |
| Orsimer Overhaul for Oblivion Character Overhaul version 2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 55 |
| Performance Sound | NOT REFERENCED by record-scan | 0 | 0 | 0 | 1389 |
| Pogscamps (Scamp Retexture) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Progress Tracker - Even more Quest INIs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Progress Tracker Ini Mod Compendium | NOT REFERENCED by record-scan | 0 | 0 | 0 | 41 |
| Quest INIs for Progress Tracker | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| Quieter Dragon Sounds (For MOO) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 18 |
| Quieter Varied Spell Sounds | NOT REFERENCED by record-scan | 0 | 0 | 0 | 45 |
| ReShade Shaders | NOT REFERENCED by record-scan | 0 | 0 | 0 | 855 |
| Reaction Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 31477 |
| Reb's Average Containers | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Red Plume for Imperial Legion Helmet | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Refined fires | NOT REFERENCED by record-scan | 0 | 0 | 0 | 224 |
| Regal Imperial City | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Rogue Leather Armour for Roberts Female body Replacer | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27 |
| RuntimeEditorIDs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| SI Cities Expanded Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 517 |
| SI Clothes - Color Correction | NOT REFERENCED by record-scan | 0 | 0 | 0 | 56 |
| Shambles Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Silent Tracks Expanded | NOT REFERENCED by record-scan | 0 | 0 | 0 | 26 |
| Simple Compass Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Simple Shivering Isle Trees | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27 |
| Simple Sunglare with Lens Flare | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Skingrad_skcastledoorlarge Remastered | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| SkyBSA | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Slightly more Serious Mehrunes Dagon | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| Slof's Oblivion Horses | NOT REFERENCED by record-scan | 0 | 0 | 0 | 232 |
| Star's Extended Dialogue - Roland Jenseric Voice Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Statues HD | NOT REFERENCED by record-scan | 0 | 0 | 0 | 140 |
| Status Bars for Needs - Vanilla and Darn Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| Strotis new clutter | NOT REFERENCED by record-scan | 0 | 0 | 0 | 37 |
| TES4Edit | NOT REFERENCED by record-scan | 0 | 0 | 0 | 253 |
| TIBs Compact Quivers - Arrow of Extrication addon | SUBSTITUTION-ONLY (all refs are content-shared placeholders) | 2 | 2 | 0 | 2 |
| Tales from Elsweyr Anequina-Rev's Redo Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2913 |
| Tales of Cyrodiil Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 11955 |
| Tamrielic Tapestries- Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 155 |
| The Forgotten Isles Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5187 |
| The Good China - Retexture | NOT REFERENCED by record-scan | 0 | 0 | 0 | 79 |
| Thievery in the Imperial City Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 437 |
| Thieves Guild HQ - Lore Friendly Big Tony's Deli Sign | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Tree Bark HD Reduced | NOT REFERENCED by record-scan | 0 | 0 | 0 | 98 |
| Tree-Like Spriggans | NOT REFERENCED by record-scan | 0 | 0 | 0 | 8 |
| Two-handed weapon swing fix for First Person View (Tick Fix) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| UFF Robert Rogue Leather Armour | NOT REFERENCED by record-scan | 0 | 0 | 0 | 32 |
| UHD Fonts for Darnified UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 8 |
| UL - The Dark Forest - Lowpolygrass Patch | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| UW Black Rectangle Ultrawide Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| UW DarNified UI patch for Black Rectangle Ultrawide Fix | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2 |
| UW HUD Config | NOT REFERENCED by record-scan | 0 | 0 | 0 | 7 |
| UW Main Menu 2K Ultrawide | NOT REFERENCED by record-scan | 0 | 0 | 0 | 5 |
| UW Ultrawide map border fix for DarNified UI | NOT REFERENCED by record-scan | 0 | 0 | 0 | 4 |
| Unique Signs | NOT REFERENCED by record-scan | 0 | 0 | 0 | 104 |
| Unofficial Oblivion Tree Patch - UOTP | NOT REFERENCED by record-scan | 0 | 0 | 0 | 115 |
| Upscaled Vanilla Loading Screens plus Shivering Isles - 4k | NOT REFERENCED by record-scan | 0 | 0 | 0 | 51 |
| Upscaled Vanilla Style Loading Screens and MOO Themed Loading Screens - 4k and 2k versions | NOT REFERENCED by record-scan | 0 | 0 | 0 | 342 |
| VKVII Oblivion Sidewalk Stonewall | NOT REFERENCED by record-scan | 0 | 0 | 0 | 26 |
| VWD Ships | NOT REFERENCED by record-scan | 0 | 0 | 0 | 16 |
| Vampire Hunting - Order of the Virtuous Blood Voices (ElevenLabs) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 27225 |
| Visually Improved Staffs for OOO | NOT REFERENCED by record-scan | 0 | 0 | 0 | 9 |
| WalkBlessed OBSE Plugin (diagonal move) | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Warpaints scars and face markings for OCO2 | NOT REFERENCED by record-scan | 0 | 0 | 0 | 323 |
| Water Beasts - Lamia Makeover | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| Wraiths without faces | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| Xivilaization Revolution | NOT REFERENCED by record-scan | 0 | 0 | 0 | 6 |
| dxvk | NOT REFERENCED by record-scan | 0 | 0 | 0 | 3 |
| sams lava tex | NOT REFERENCED by record-scan | 0 | 0 | 0 | 10 |
| slowLODGen - Object LOD Generator | NOT REFERENCED by record-scan | 0 | 0 | 0 | 2576 |

## Substitution suspects (617 content-hash groups)

Groups where one physical file's content is shared with N distinct virtual paths. The most likely Mesh-Nullify-style fallback patterns.

### hash `e53351618843...` — 11 paths, 2 parent dirs, 19 record refs

- `meshes/clothes/mcec - jewelry/other jewelry/bellyring/upperclass/bellyring1b_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/bellyring/upperclass/bellyring1c_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings10_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings11_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings2_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings4_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings5_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings6_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings7_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings8_gnd.nif`
- `meshes/clothes/mcec - jewelry/other jewelry/kafeid earrings/upperclass/kafeiearrings9_gnd.nif`

### hash `0ade85d62201...` — 11 paths, 11 parent dirs, 11 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2k_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2k_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1c_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1j_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3i_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1h_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1h_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1j_gnd.nif`
- `meshes/clothes/mcec - women's whole/women's fancy kosode/upperclass/fancykosodewhite_gnd.nif`

### hash `7c509acc0d31...` — 10 paths, 3 parent dirs, 10 record refs

- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1b_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1c_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1d_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1e_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1f_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/naiflan/upperclass/naiflannecklace1g_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/other necklaces/upperclass/othernecklace1b_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/other necklaces/upperclass/othernecklace1d_gnd.nif`
- `meshes/clothes/mcec - jewelry/amulets/other necklaces/upperclass/othernecklace1e_gnd.nif`
- `meshes/clothes/mcec - scarves/shawls/middleclass/shawl1e_gnd.nif`

### hash `5f03b4966b62...` — 9 paths, 9 parent dirs, 9 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2f_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2g_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1f_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1d_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3f_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1f_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1f_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1b_gnd.nif`

### hash `74cfad1e4cae...` — 9 paths, 9 parent dirs, 9 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1h_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle colovian robes/middleclass/robe2e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2e_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1e_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1e_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1f_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2f_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1d_gnd.nif`

### hash `3c1201f310e2...` — 9 paths, 9 parent dirs, 9 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2h_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1f_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle colovian robes/middleclass/robe2h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2h_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1i_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2i_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1h_gnd.nif`

### hash `c0c20e32ffdd...` — 8 paths, 5 parent dirs, 11 record refs

- `meshes/clothes/mcec - men's whole outfits/farmer's outfit/lowerclass/farmeroutfitbrown_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1b_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1c_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1d_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/middleclass/nibenbottom2_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/middleclass/nibenbottom2b_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/upperclass/nibenbottom3d_gnd.nif`
- `meshes/clothes/mcec - unisex parts/pants/middleclass/nibenpants1d_gnd.nif`

### hash `c24cb520904e...` — 8 paths, 8 parent dirs, 8 record refs

- `meshes/clothes/cloaks and capes/black/verylargecape.nif`
- `meshes/clothes/cloaks and capes/blue/verylargecape.nif`
- `meshes/clothes/cloaks and capes/brown/verylargecape.nif`
- `meshes/clothes/cloaks and capes/crimson/verylargecape.nif`
- `meshes/clothes/cloaks and capes/green/verylargecape.nif`
- `meshes/clothes/cloaks and capes/purple/verylargecape.nif`
- `meshes/clothes/cloaks and capes/red/verylargecape.nif`
- `meshes/clothes/cloaks and capes/white/verylargecape.nif`

### hash `6e8d58fb50e1...` — 8 paths, 8 parent dirs, 8 record refs

- `meshes/clothes/cloaks and capes/black/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/blue/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/brown/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/crimson/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/green/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/purple/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/red/verylargecloak.nif`
- `meshes/clothes/cloaks and capes/white/verylargecloak.nif`

### hash `8b7ba376a74b...` — 8 paths, 8 parent dirs, 8 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2c_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1i_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1d_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle colovian robes/middleclass/robe2f_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2f_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1g_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2g_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1e_gnd.nif`

### hash `4929ef5ca690...` — 8 paths, 7 parent dirs, 8 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2l_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1k_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3j_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3j_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1c_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1c_gnd.nif`
- `meshes/clothes/mcec - women's whole/women's fancy kosode/upperclass/fancykosodeblack_gnd.nif`

### hash `1e1d8d5936ad...` — 8 paths, 7 parent dirs, 8 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2d_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1e_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1c_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3c_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3c_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1d_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1d_gnd.nif`

### hash `66b44eaf5a29...` — 7 paths, 7 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2c_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1b_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3b_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1_gnd.nif`

### hash `47d73c7aa206...` — 7 paths, 7 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2e_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1j_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle colovian robes/middleclass/robe2g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2g_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1h_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2h_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1f_gnd.nif`

### hash `708540ed990d...` — 7 paths, 7 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2g_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3g_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1g_gnd.nif`

### hash `0eb0bbecb661...` — 7 paths, 7 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2i_gnd.nif`
- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2j_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3h_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1i_gnd.nif`

### hash `fd5ab9625360...` — 7 paths, 7 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1b_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1f_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1f_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1b_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1b_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1f_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2f_gnd.nif`

### hash `7725a6a2be3c...` — 6 paths, 5 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2f_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1n_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1o_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper colovian robes/upperclass/robe3e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3e_gnd.nif`

### hash `f4210804e82f...` — 6 paths, 6 parent dirs, 6 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle colovian robes/middleclass/robe2d_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2d_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1e_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2e_gnd.nif`
- `meshes/clothes/mcec - women's whole/nibenese dress/upperclass/nibenesedress1c_gnd.nif`

### hash `2287d53c779d...` — 6 paths, 6 parent dirs, 6 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1m_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1e_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1e_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2e_gnd.nif`

### hash `48927a06bf75...` — 6 paths, 5 parent dirs, 6 record refs

- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1j_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1k_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1i_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1i_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1i_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2i_gnd.nif`

### hash `17c16ee77532...` — 6 paths, 6 parent dirs, 6 record refs

- `meshes/clothes/mcec - men's parts/chasubles/middleclass/mentop2b_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/lowerclass/menpallium1b_gnd.nif`
- `meshes/clothes/mcec - unisex robes/dalmatic robes/upperclass/dalmaticrobe1b_gnd.nif`
- `meshes/clothes/mcec - unisex robes/middle nibenese robes/middleclass/robe2_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/1/womennibenmiddlebottom1c_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/middle nibenese bottoms/middleclass/2/womennibenmiddlebottom2c_gnd.nif`

### hash `cb05beddf672...` — 6 paths, 6 parent dirs, 6 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/upperclass/menchimere2b_gnd.nif`
- `meshes/clothes/mcec - men's parts/pallium/upperclass/menpallium1_gnd.nif`
- `meshes/clothes/mcec - unisex robes/bureaucrat robe/upperclass/bureaucratrobe1_gnd.nif`
- `meshes/clothes/mcec - unisex robes/upper nibenese robes/upperclass/robe3_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/cut-sleeved kosode/sleevedkosode1g_gnd.nif`
- `meshes/clothes/mcec - unisex whole outfits/hidemaro kosode/kosode/kosode1g_gnd.nif`

### hash `ad1e7d3bc83b...` — 5 paths, 4 parent dirs, 621 record refs

- `meshes/creatures/boneflayer/skeleton skeleton.nif`
- `meshes/creatures/skeleton/skeleton.nif`
- `meshes/creatures/skeleton/skeletonsooo.nif`
- `meshes/son6of6tredis/creatures/skeleton/skeleton.nif`
- `meshes/soooequipment/creatures/reaper/skeleton.nif`

### hash `6a987516ef39...` — 5 paths, 4 parent dirs, 8 record refs

- `meshes/clothes/mcec - men's whole outfits/farmer's outfit/lowerclass/farmeroutfitgrey_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1g_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1h_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/middleclass/nibenbottom2d_gnd.nif`
- `meshes/clothes/mcec - unisex parts/pants/middleclass/nibenpants1b_gnd.nif`

### hash `3d0ab2929fc8...` — 5 paths, 4 parent dirs, 8 record refs

- `meshes/clothes/mcec - men's whole outfits/farmer's outfit/lowerclass/farmeroutfittan_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1e_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/lowerclass/nibenbottom1i_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/middleclass/nibenbottom2e_gnd.nif`
- `meshes/clothes/mcec - unisex parts/pants/middleclass/nibenpants1e_gnd.nif`

### hash `d68c851b795d...` — 5 paths, 3 parent dirs, 7 record refs

- `meshes/clothes/mcec - men's whole outfits/farmer's outfit/lowerclass/farmeroutfitblack_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/upperclass/nibenbottom3f_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/upperclass/nibenbottom3h_gnd.nif`
- `meshes/clothes/mcec - unisex parts/niben bottoms/upperclass/nibenbottom3i_gnd.nif`
- `meshes/clothes/mcec - unisex parts/pants/middleclass/nibenpants1_gnd.nif`

### hash `5da782d3f316...` — 5 paths, 5 parent dirs, 5 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1c_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1g_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1g_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1g_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2g_gnd.nif`

### hash `3abbb0b9cdc2...` — 5 paths, 5 parent dirs, 5 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1d_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1h_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1h_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1h_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2h_gnd.nif`

### hash `2c71b2765a49...` — 5 paths, 5 parent dirs, 5 record refs

- `meshes/clothes/mcec - men's parts/men's chimere/middleclass/menchimere1e_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower colovian robes/lowerclass/robe1j_gnd.nif`
- `meshes/clothes/mcec - unisex robes/lower nibenese robes/lowerclass/robe1j_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/1/womennibenlowerbottom1j_gnd.nif`
- `meshes/clothes/mcec - women's bottoms/lower nibenese bottoms/lowerclass/2/womennibenlowerbottom2j_gnd.nif`


## Broken refs (1128 paths NOT resolved by VFS)

First 50:
- ACTI `SE03KeysExtra` 0x0007AC67 (Oblivion.esm) → `MODL` `meshes/effects/se03keysextra.nif`
- ACTI `WaterSurface` 0x00041779 (Oblivion.esm) → `MODL` `meshes/architecture/city/mania/watersurface.nif`
- ACTI `RockMania01` 0x000113B9 (Oblivion.esm) → `MODL` `meshes/rocks/mania/rock_mania_01.nif`
- ACTI `OblivionCitadelRefract` 0x00093F05 (Oblivion.esm) → `MODL` `meshes/oblivion/architecture/citadel/interior/citadeltower/oblivioncitadelrefractf.nif`
- CLOT `SEOrderPriestHood` 0x0006FC35 (OOOShiveringIsles.esp) → `MOD2` `meshes/ooose/armorobelisk/light/helmetclosed_gnd.nif`
- CLOT `SEOrderPriestRobe` 0x00044C45 (Bashed Patch, 0.esp) → `MOD2` `meshes/ooose/armorobelisk/light/m/suit_gnd.nif`
- CONT `TreasureStump2` 0x00078915 (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/misc/treasurestump2.nif`
- DOOR `TESTMembranetest` 0x0007878F (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/misc/membranetest.nif`
- DOOR `SporeDoor01` 0x00030F95 (Oblivion.esm) → `MODL` `meshes/dungeons/root/interior/sporedoor01.nif`
- LIGH `CastleHangingDungeonLight01` 0x0002B8DC (Oblivion.esm) → `MODL` `meshes/clutter/castleinterior/castlehangingdungeonlight01.nif`
- MISC `SE09DermisMembrane` 0x000523B5 (Oblivion.esm) → `MODL` `meshes/plants/fringe/se09dermismembrane.nif`
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
- STAT `IronArmorFtest` 0x000104A9 (Oblivion.esm) → `MODL` `meshes/armor/iron/ironarmorftest.nif`
- STAT `IronArmorMtest` 0x00010494 (Oblivion.esm) → `MODL` `meshes/armor/iron/ironarmormtest.nif`
- STAT `ChainmailArmorFtest` 0x000018E2 (Oblivion.esm) → `MODL` `meshes/armor/chainmail/chainmailarmorftest.nif`
- STAT `ChainmailArmorMtest` 0x00000E4A (Oblivion.esm) → `MODL` `meshes/armor/chainmail/chainmailarmormtest.nif`
- STAT `LeatherArmorFtest` 0x00000E47 (Oblivion.esm) → `MODL` `meshes/armor/leather/leatherarmorftest.nif`
- STAT `BladesArmorFparttest` 0x00000E41 (Oblivion.esm) → `MODL` `meshes/armor/blades/bladesarmorfparttest.nif`