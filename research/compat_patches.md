# Compatibility patches in APW

Hand-curated from APW's `mods/` folder structure (790 folders) and the manifest. Lists patches that resolve interaction between two or more mods.

Grouped by the **base mod being patched**. A patch can appear under multiple sections when it bridges several base mods. Status reflects Reborn's manifest (installed / pending / inquery / skipped).

> Excluded from this document:
> - Pure cosmetic add-ons that don't bridge two distinct mods (e.g., OCOv2 face/eye/teeth replacers)
> - Bug fixes that target only the base mod itself (no second mod involved)
>
> Included:
> - Cross-mod compat patches (the main content)
> - **Voice add-ons** — listed in their own section near the bottom; each maps to a single base mod

---

## Oscuro's Oblivion Overhaul (OOO)

OOO is the most-patched mod in the list. Almost every other large overhaul ships an OOO compatibility variant.

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| OOO - Oscuro's Oblivion Overhaul - Updated (Unofficial patch) | OOO_Unoficial-Patch.esp | OOO (unofficial fix) | skipped |
| OOO - Oscuro's Oblivion Overhaul - Updated | Oscuro's_Oblivion_Overhaul - Knights of Nine.esp | OOO ↔ Knights DLC | installed |
| OOO Enhanced | DLCBattlehornCastle - OOO Enhanced Adaptation.esp + 7 sibling DLC adaptation .esps | OOO Enhanced ↔ each vanilla DLC | installed |
| OOO Enhanced - Better Dungeons Compatibility Patch | Better Dungeons - OOO Enhanced Compatibility Patch.esp | OOO Enhanced ↔ Better Dungeons | skipped |
| OOO Enhanced Oblivion Content Restoration Patch | Infiltration Fix for OOO Enhanced and ORP.esp | OOO Enhanced ↔ Oblivion Content Restoration Project | installed |
| OOO Flavor Text for Extended UI | (mesh/text only, no esp) | OOO ↔ Extended UI | installed |
| OOOOBMESpectralCrashFix | OOOOBMESpectralCrashFix.esp | OOO ↔ OBME | skipped |
| OOO golems OBME edition | OOO golems OBME edition.esp | OOO ↔ OBME (golems variant) | installed |
| OOO Shivering Isles | OOOShiveringIsles.esp | OOO ↔ Shivering Isles | installed |
| Better Cities adapted to OOO | Better Cities Full - OOO.esp | Better Cities ↔ OOO | skipped |
| Better Dark Brotherhood Sanctuary - OOO Patch | BDBS - Oscuro's Oblivion Overhaul.esp | BDBS ↔ OOO | skipped |
| Improved Fighters Guild Patches | FGRebuild - OOO Patch.esp | Improved Fighters Guild ↔ OOO | skipped |
| Kvatch Rebuild OOO Adaptation | Kvatch Rebuilt - OOO Adaptation.esp | Kvatch Rebuilt ↔ OOO | skipped |
| Mercers Ingredient Effect Overhaul | MercerIngredientsOOO.esp | Mercer Ingredients ↔ OOO | installed |
| Retextured Potions - OOO Patch | PotionReplacer OOO Patch.esp | Retextured Potions ↔ OOO | skipped |
| Unique Landscapes - OOO Adaptation | Unique Landscapes (Merged with BC) - OOO Adaptation.esp | UL ↔ OOO | skipped |
| Visually Improved Staffs for OOO | (no esp; loose meshes) | Visually Improved Staffs ↔ OOO | skipped |
| Cobl | Cobl Tweaks - OOO.esp + Cobl Tweaks - OOO Mergeable.esp | Cobl ↔ OOO | installed |
| RCB - Realistic Combat Behaviour | RCB - Vanilla Oscuro's MERGE.esp | RCB ↔ OOO (pre-merged variant) | inquery |
| Bounty Quests Fixed and Polished | Bounty Quests OOO Patch.esp | Bounty Quests ↔ OOO | pending |
| Immersive Quest Marker Overhaul | IQMO - OOO Patch.esp + IQMO - OOO SI Patch.esp | IQMO ↔ OOO + ↔ OOO+SI | installed |
| Unique Artifacts for Unique People - Patches | UAUP - OOO Patch.esp | UAUP ↔ OOO | skipped |
| SB Weapon Drop Fix | SB_WeaponDropFix_OOOFilterPatch.esp | SB Weapon Drop Fix ↔ OOO | installed |
| Reborn - OOO Unofficial Patch CR | (Reborn-authored CR esp) | OOO (Reborn-side conflict resolution) | installed |
| Better Cities | Better Cities Full - OOO.esp (internal) | BC ↔ OOO (duplicate of "Better Cities adapted to OOO") | skipped |

---

## Maskar's Oblivion Overhaul (MOO)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| MOBS patch for Maskar's Oblivion Overhaul | (folder name only, no esp shipped) | MOBS ↔ MOO | skipped |
| OCRAFT - Compatibility Settings | Maskar's Oblivion Overhaul - OCRAFT Patch.esp | MOO ↔ OCRAFT | skipped |
| Item Description Framework for Maskar's Oblivion Overhaul and WEPON | (loose files) | MOO ↔ Item Description Framework / WEPON | installed |
| OCOv2 - MOO Patch | (no esp listed, mesh/texture patch) | OCO ↔ MOO | skipped |
| Hill Giant Eye Fix - Loreless Creatures - MOO | (texture fix) | MOO creatures (eye fix) | skipped |
| MOO - katkat's TW 3 Wolves Patch | (texture replacer) | MOO ↔ katkat TW3 Wolves | skipped |
| MOO - Non-Elder Scrolls Franchise Recolors | (texture replacer) | MOO (recolor) | skipped |
| Smaller MOO Backpacks | (mesh tweak) | MOO backpacks | installed |
| Quieter Dragon Sounds (For MOO) | (sound replacer) | MOO dragons | skipped |
| Seamless Equipment - MOO | (mesh patch) | MOO equipment | skipped |
| Coop's MOO and Vanilla Wolf Remesh | (mesh) | MOO/vanilla wolves | skipped |
| Unique Artifacts for Unique People - Patches | UAUP - MOBS Patch.esp + UAUP - OMOBS Patch.esp | UAUP ↔ MOBS + UAUP ↔ OMOBS | skipped |

---

## Unique Landscapes (UL)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| UL Compatibility Patches Compilation WIZBAIN | ~250 esps named `ULE/ULM Modname-LandscapeRegion patch.esp` | UL ↔ ~120 distinct other mods (huge bundle) | skipped |
| UL - Ducks and Swans for Cyrodiil - Patch | Ducks and Swans.esp | UL ↔ Ducks and Swans | skipped |
| UL - The Dark Forest - Lowpolygrass Patch | (texture/mesh tweak) | UL Dark Forest (low-poly grass) | skipped |
| Unique Landscapes - OOO Adaptation | Unique Landscapes (Merged with BC) - OOO Adaptation.esp | UL ↔ OOO | skipped |
| OSPS - Better Cities Imperial Isle Compatibility Patches | ULM OSPS-BC_IC-II_UL-II_Patch.esp | **3-way:** OSPS ↔ Better Cities IC ↔ UL Imperial Isle | skipped |
| Productive Mines - Better Cities Compatibility Patch | Productive Mines - Better Cities Patch UL.esp | **3-way:** Productive Mines ↔ Better Cities ↔ UL | skipped |

---

## Unofficial Oblivion Patch (UOP)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| UOP Talos Bridge Collision Fix | UOPTalosBridgeCollisionFix.esp | UOP (collision fix) | installed |
| Mannimarco Revisited UOP Patch | MannimarcoRevisited UOP Patch.esp | Mannimarco Revisited ↔ UOP | skipped |
| RadiantAI - NPCs Alive - Cyrodiil - Unofficial Patch | RadiantAI - NPCs Alive - Cyrodiil - UOP Factions Patch.esp | RadiantAI Cyrodiil ↔ UOP factions | skipped |
| Lost Sorceries of the Ayleids | LostSorceries_UOP_Patch.esp (internal) | Lost Sorceries ↔ UOP | skipped |
| Unofficial Oblivion DLC Patches | Knights/DLCFrostcrag/DLCHorseArmor/DLCMehrunesRazor/DLCOrrery/DLCSpellTomes/DLCThievesDen/DLCVileLair - Unofficial Patch.esp | each vanilla DLC ↔ UOP-style fixes | installed |

---

## Oblivion Character Overhaul v2 (OCOv2)

OCO has many cosmetic add-ons; the entries below are the ones that bridge OCO with another distinct mod.

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| OCOv2 - Filter Patch for Mods | OCOv2 - Filter Patch for Mods.esp | OCOv2 (Wrye-Bash filter target) | installed |
| OCOv2 - MOO Patch | (no esp listed) | OCO ↔ MOO | skipped |
| OCOv2 Enhanced Beast Races patch | OCOv2 Beast Races Enhanced.esp | OCOv2 ↔ Enhanced Beast Races | skipped |
| OCO - Elsweyr Deserts of Anequina Patch | (no esp listed; mesh/texture) | OCO ↔ Elsweyr Anequina | skipped |
| Vampire Hunting - Order of the Virtuous Blood OCO2 NPC FACE FIXES | Vampire Hunting - Order of the Virtuous Blood.esp | OBVE ↔ OCO2 (face fixes) | skipped |
| Replacers for Redguardians and Better Looking Redguards | OCO2 - redguard patch.esp | Redguardians ↔ OCO2 | skipped |
| Redguardians - WIP | OCO2 - redguard patch.esp (same plugin as above) | Redguardians ↔ OCO2 (likely duplicate; review which folder ships it) | skipped |
| Oblivion Character Overhaul v2 - DLC Addon | OCOv2 - DLC Addon.esp | OCOv2 ↔ vanilla DLCs | installed |
| Seamless OCOV2 | EVE_KnightsoftheNine.esp + EVE_ShiveringIslesEasterEggs.esp | OCOv2 ↔ EVE/Knights/SI | installed |
| Miscellaneous Patch Collection by Dispensation | DispMiscPatch_OCOv2 - Adoring Fan No Beard.esp (internal) | OCOv2 (adoring fan tweak) | skipped |

---

## Better Cities (BC)

The Better Cities folder itself is a bundle of internal compat patches; the standalone "Better Cities adapted to OOO" duplicates one of them.

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| Better Cities | Better Cities - MOBS.esp (internal) | BC ↔ MOBS | skipped |
| Better Cities | Better Cities - MTCExpanded patch.esp (internal) | BC ↔ MTC Expanded Villages | skipped |
| Better Cities | Better Cities - Oblivion Collectible Cards.esp (internal) | BC ↔ Oblivion Collectible Cards | skipped |
| Better Cities | Better Cities - Order of the Dragon.esp (internal) | BC ↔ Orden des Drachen | skipped |
| Better Cities | Better Cities - Thievery.esp (internal) | BC ↔ Thievery in the Imperial City | skipped |
| Better Cities | Better Cities Chorrol - Knights of the Nine.esp (internal) | BC Chorrol ↔ KotN DLC | skipped |
| Better Cities | Better Cities Chorrol - ODD patch.esp (internal) | BC Chorrol ↔ Orden des Drachen | skipped |
| Better Cities | Better Cities Chorrol - Oblivifall Losing My Religion.esp (internal) | BC Chorrol ↔ LMR | skipped |
| Better Cities | Better Cities IC - Kragenir's Death Quest.esp (internal) | BC IC ↔ Kragenir's Death Quest | skipped |
| Better Cities | Better Cities Leyawiin - Oblivifall Losing My Religion.esp (internal) | BC Leyawiin ↔ LMR | skipped |
| Better Cities | Better Cities Leyawiin - Unofficial Oblivion Patch.esp (internal) | BC Leyawiin ↔ UOP | skipped |
| Better Cities | Better Cities Skingrad - Oblivifall Losing My Religion.esp (internal) | BC Skingrad ↔ LMR | skipped |
| City Settings -- Better Cities - Open Cities Reborn - Vanilla -- FPS optimizer | City Settings BC and DLC.esp | BC ↔ Open Cities Reborn (selector + FPS tune) | skipped |
| Imperial City LOD - Performance Edition | Better Cities Imperial Isle LOD.esp | BC LOD optimization | skipped |
| Waterfront FPS Patch | Better Imperial City FPS Patch.esp | BC IC FPS fix | skipped |
| Productive Mines - Better Cities Compatibility Patch | Productive Mines - Better Cities Patch UL.esp | **3-way:** Productive Mines ↔ BC ↔ UL | skipped |
| OSPS - Better Cities Imperial Isle Compatibility Patches | ULM OSPS-BC_IC-II_UL-II_Patch.esp | **3-way:** OSPS ↔ BC IC ↔ UL II | skipped |
| Better Cities Resources - OCRAFT Integration | Better Cities Resources - OCRAFT Integration.esp | BC ↔ OCRAFT | skipped |
| The Order of the Dragon Patch Series | BICFull_OotD_Patch.esp | Better Imperial City ↔ Orden des Drachen | skipped |

---

## Knights of the Nine (KotN, vanilla DLC)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| Unofficial Oblivion DLC Patches | Knights - Unofficial Patch.esp | Knights DLC ↔ UOP-style fixes | installed |
| Knights of the Nine_Weapon Improvement Project Patch | (no esp listed) | KotN ↔ Weapon Improvement Project | skipped |
| Knights of the Nine - Improved Infamy System | Knights Infamy.esp | KotN (infamy rework) | pending |
| Knights Infamy and Delay DLC patch | Knigts Infamy Delay DLC patch.esp | KotN Infamy ↔ Delay DLC Start | skipped |
| Knights of the Nine - Revelation - Reasonable Flavor | Knights - Revelation.esp | Knights of the Nine Revelation (rebalance) | skipped |
| Knights of the Nine Revelation - Unvoiced Voices (ElevenLabs) | Knights - Revelation.esp + Knights.esp | Knights Revelation (voice fill) | skipped |
| Oblivifall - Losing My Religion Patch - Knights of the Nine DLC | Oblivifall - Losing My Religion KOTN.esp | LMR ↔ KotN | pending |
| Oblivion Content Restoration Project | Oblivion Content Restoration Project -- Knights.esp | OCRP KotN variant | installed |
| PrinceShroob Main Quest Delayer (Oblivion) | PSMainQuestDelayer -- Knights.esp | PSMQD KotN variant | installed |
| BAF - Beast Argonians Forever Early Version | BAF - Beast Argonians Froever NPC KOTN Patch.esp | BAF ↔ KotN NPCs | skipped |
| Book Jackets Oblivion Merged | Knights - Book Jackets.esp | Book Jackets ↔ Knights | skipped |
| Better Cities | Better Cities Chorrol - Knights of the Nine.esp (internal) | BC Chorrol ↔ KotN | skipped |
| OOO - Oscuro's Oblivion Overhaul - Updated | Oscuro's_Oblivion_Overhaul - Knights of Nine.esp (internal) | OOO ↔ Knights DLC | installed |
| OOO Enhanced | Knights of Nine - OOO Enhanced Adaptation.esp (internal) | OOO Enhanced ↔ KotN | installed |

---

## Oblivion Crafting Framework (OCRAFT)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| OCRAFT - Cobl Glue | OCRAFT - Cobl Glue.esp | OCRAFT ↔ Cobl | skipped |
| OCRAFT - Compatibility Settings | Maskar's Oblivion Overhaul - OCRAFT Patch.esp | OCRAFT ↔ MOO | skipped |
| OCRAFT - Stations for Sale | OCRAFT - Stations for Sale.esp | OCRAFT (addon) | skipped |
| Productive Mines - Vendors and Productive Mines - Vendors - OCRAFT | Productive Mines - Vendors - OCRAFT.esp | Productive Mines Vendors ↔ OCRAFT | skipped |
| Better Cities Resources - OCRAFT Integration | Better Cities Resources - OCRAFT Integration.esp | BC ↔ OCRAFT | skipped |
| Miscellaneous Patch Collection by Dispensation | DispMiscPatch_OCRAFT - Filter Patch for Mods.esp | OCRAFT (filter) | skipped |

---

## Oblivion Magic Extender (OBME)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| Magic Visuals Overhaul - OBME Patch | Magic Visuals Overhaul - OBME Patch.esp | MVO ↔ OBME | skipped |
| OOOOBMESpectralCrashFix | OOOOBMESpectralCrashFix.esp | OOO ↔ OBME | skipped |
| OOO golems OBME edition | OOO golems OBME edition.esp | OOO ↔ OBME (golems variant) | installed |

---

## Oblivifall - Losing My Religion (LMR)

LMR ships its own internal city patches; external patches add specific bridges.

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| Oblivifall - Losing My Religion | Oblivifall - Losing My Religion BC Anvil/Bravil/Cheydinhal/Chorrol/Leyawiin/Skingrad.esp + KOTN/Kvatch Rebuilt/Sutch Reborn/HOTD esps | LMR ↔ each city + KotN + Kvatch + Sutch + HOTD (internal bundle) | pending |
| Oblivifall - Losing My Religion Patch - AWLS | (no esp listed; loose mesh/texture) | LMR ↔ AWLS | pending |
| Oblivifall - Losing My Religion Patch - Knights of the Nine DLC | Oblivifall - Losing My Religion KOTN.esp | LMR ↔ KotN | pending |
| Oblivifall - Losing My Religion - Cyrodiil Chapel Update | Oblivifall - Losing My Religion Chapel Update.esp | LMR (chapel addon) | pending |

---

## Magic Visuals Overhaul (MVO)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| Magic Visuals Overhaul - OBME Patch | Magic Visuals Overhaul - OBME Patch.esp | MVO ↔ OBME | skipped |
| Magic Visuals Overhaul - Balls Remover (Patch) | (loose tex/mesh) | MVO option | skipped |
| Magic Visuals Overhaul - Destruction particle fix | (loose mesh) | MVO fix | skipped |
| Magic Visuals Overhaul - Fire laser fix | (loose mesh) | MVO fix | pending |

---

## DarNified UI

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| UW DarNified UI patch for Black Rectangle Ultrawide Fix | (loose UI files) | DarNified UI ↔ UW Black Rectangle Fix | skipped |
| UW Ultrawide map border fix for DarNified UI | (loose UI files) | DarNified UI ↔ ultrawide map border | skipped |
| UHD Fonts for Darnified UI | (font files) | DarNified UI font upgrade | skipped |
| 1_ULF DarNified UI patch image file | (UI image) | DarNified UI fix (Reborn-added) | installed |
| 1_DarNified UI Ultrawide config preset | (config) | DarNified UI ultrawide preset (Reborn-added) | installed |

---

## Orden des Drachen / Order of the Dragon (ODD / OotD)

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| The Order of the Dragon Patch Series | BICFull_OotD_Patch.esp | OotD ↔ Better Imperial City | skipped |
| Orden des Drachen Miscellaneous Patches | ODDFastTravel.esp + ODDMissingCrates.esp + ODDTheMap.esp | OotD addons | pending |
| Better Cities | Better Cities Chorrol - ODD patch.esp + Better Cities - Order of the Dragon.esp (internal) | BC ↔ OotD | skipped |

---

## The Ayleid Steps

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| The Ayleid Steps - Compatibility Patches | The Ayleid Steps - Patches.esp | The Ayleid Steps ↔ multiple mods (bundle) | pending |
| Improved Fighters Guild Patches | FGRebuild - The Ayleid Steps Patch.esp | Improved Fighters Guild ↔ The Ayleid Steps | skipped |

---

## Miscellaneous standalone compat patches

These bridge two mods but don't belong to one of the major-base sections above.

| Folder | Plugin | Patches | Status |
|---|---|---|---|
| MTC Expanded Villages - Better Campsites Patch | MTC Expanded Villages - Better Campsites Patch.esp | MTC Expanded Villages ↔ Better Campsites | skipped |
| Better Dungeons - Balance Patch | Better Dungeons - Balance Patch.esp | Better Dungeons (internal balance pass) | skipped |
| Properly Equipped Vampire Hunters | OBVE and PEVH patch.esp | OBVE ↔ Properly Equipped Vampire Hunters | skipped |
| Configuration Items Begone | CIBLppSupport.esp + CIBFilterPatch.esp | CIB ↔ LINK++ + CIB filter | skipped |
| Realistic Sprint and Gallop - NorthernUI Gamepad Support | Eri's Simple Sprint n Gallop.esp | Realistic Sprint and Gallop ↔ NorthernUI | skipped |
| Bash-able Quest Delayers | HoarfrostCastle v1.2.2 Delayer.esp | quest delayer for Hoarfrost Castle | skipped |
| All Natural - Real Lights | All Natural - SI.esp (internal) | All Natural ↔ Shivering Isles | skipped |
| Av Latta Magicka - Sun Magic Additions | GPSunSpells.esp | Av Latta Magicka addon | pending |
| PSMQD - Delay DLC Start Patch | (Reborn-authored esp) | PSMQD ↔ Delay DLC Start | installed (Reborn-added) |

### Bundled patch collection: Miscellaneous Patch Collection by Dispensation

Single mod folder with five separate patch ESPs:

| Plugin | Patches |
|---|---|
| DispMiscPatch_AncestorMothsExpanded - AddSomeFlavorPriories Patch.esp | Ancestor Moths Expanded ↔ Add some flavor - priories |
| DispMiscPatch_Av Latta Magicka - Migck Misc Poison Fists Patch.esp | Av Latta Magicka ↔ Migck Miscellaneous |
| DispMiscPatch_NIARA - PTArtifacts Patch.esp | NPC Idle Animation Restoration and Additions ↔ Phitts Artifacts |
| DispMiscPatch_OCOv2 - Adoring Fan No Beard.esp | OCOv2 Adoring Fan tweak |
| DispMiscPatch_OCRAFT - Filter Patch for Mods.esp | OCRAFT (Wrye-Bash filter target) |

Status: skipped overall.

### Bundled patch collection: UL Compatibility Patches Compilation WIZBAIN

One mod folder, **~250 patch ESPs** named `ULE/ULM <mod1>-<landscape> patch.esp`, each bridging UL with one of: Against the Zealots / Anequina / Apachii Heroes Store / Arren / Ayleid Ruins Expanded / Bandit Hideouts / Better Cities (every district) / Billsburg / Blood&Mud / Brena Valley Creek / CDM Necromancy / Chorrol Plateau / Clearwater / Country Home / Curse of Hircine / Dark Brotherhood Cemetery + Chronicles / Dive Rock / Dschinni / Dungeons of Ivellon / Dwarven Mines / Et In Arkay / FB Dark Crusader 2 / Fighters Guild Quests / Fisherman's Cottage / Five Lanterns / Forgotten Tomb / FranMWL / Gift of Kynareth / Goblinwatch Keep / Golden Arrow Archery Shop / Golden Crest / GrowPlants / Guards Of Cyrodiil Redux / Hell Lands / Integration The Stranded Light / Kragenirs Death Quest / Kvatch Rebuilt / Leveler Cheat / Lost Spires / Lost Sword of the Ayleids / MMM Dungeons / MTC Thieves Grotto / Mad Mages Tower / Mannimarco Resurrection / Mimics / Myths And Legends 2 / New Haven / Oaksdale / Oblivion Collectible Cards / Oblivion Jobs / Oblivion Uncut / Open Cities Classic / Open Cities Reborn / Orange Maple / Oranstad / **OOO** / **MOBS** / **OMOBS** / Real Swords Nord / Reapers Waterfront / Reclaiming Sancre Tor / Red Headed Gang / Redcourt Castle / Rise Of A Samurai / Rustle House / Seawatch Abode / Sentient Weapon II / Shipwreck Home / Side Sailing Ships / Skingrad Market / Skyrim Temple / Snowy Road / Sutch Reborn / TWMP Skyrim Alive / Tamrielic Lore / Tears Of The Fiend / The Elder Council / The Necromancer / The Well Of Minlorada / Tollingbrook Hollow / Tona Simple Dress Armor / Treasure Maps Captus Demus / Unholy Cathedral / Unofficial Oblivion Patch / Valley View Estate / Village Of Lily / WAC / Waldnirs Woods / Wine Overhaul / Z Skeleton Horse / Zedar / Zork ... and many more.

Status: skipped (not currently used in Reborn). If you ever pull this in, individually disable patches for mods you don't have — APW expected the user to leave only the relevant ones active.

---

## Reshoveled family (same author, **not** patches — listed for clarity)

These share author "Mark" but each is a standalone overhaul, not a compat patch. They don't bridge other mods:

- Combat Reshoveled (CombatReshoveled.esp, inquery)
- Races Reshoveled (RacesReshoveled.esp, pending)
- Birthsigns Reshoveled (BirthsignsReshoveled.esp, pending)
- Vampires Reshoveled (VampireReshoveled.esp, pending)
- Artifacts Reshoveled (ArtifactsReshoveled.esp, skipped)

---

## Voice add-ons

These ship voice files (or in a few cases voicing + an overhaul) for a single base mod. Strictly one-to-one — addon-to-base, not multi-mod compat — but listed here so the dependency picture is complete.

| Voice addon folder | Base mod | Status |
|---|---|---|
| (11Labs) Put it in its Place - Enhanced Grabbing - AI Voices Addon | Put it in its Place - Enhanced Grabbing | skipped |
| AI Voice Addon for Mudwater | Mudwater | skipped |
| AI Voice Addon for The Well of Minlorada | The Well of Minlorada | skipped |
| Better Dark Brotherhood Sanctuary - Voiced Addon | Better Dark Brotherhood Sanctuary | skipped |
| Better Forts - Voiced Addon BSA | Better Forts series (Better Fort Magia/Roebeck/Teleman/Facian/Redman/Dirich/...) | skipped |
| Better Kvatch Rebuilt (Submod) An AI Voiced Experience | Better Kvatch Rebuilt (Submod) | skipped |
| Bounty Quests Fixed and Polished - Voiced Addon BSA | Bounty Quests Fixed and Polished | skipped |
| BrumaGuildReconstructed - AI Voice Files | Bruma Guild Reconstructed (uses BrumaGuildReconstructed.esp; **note:** different from "Bruma Mages Guild Restored" which uses BrumaMGRestored.esp — base mod not present as a separate APW folder, no Nexus URL in manifest) | skipped |
| Companion Vilja - Non-Companion Voices (ElevenLabs) | Companion Vilja | skipped |
| Cyrodiil Transportation Network 2.0 Voices (ElevenLabs) | Cyrodiil Transportation Network 2.0 (CTN2 base mod is not a separate APW folder; CyrodiilTransportationNetwork2.esp is referenced but the base data lives elsewhere) | skipped |
| Elsweyr City Extension Voices (ElevenLabs) | Elsweyr City Extension | skipped |
| Elsweyr the Deserts of Anequina Voices (ElevenLabs) | Elsweyr the Deserts of Anequina | skipped |
| Gamblers of Cyrodiil Voices (ElevenLabs) | Gamblers of Cyrodiil | skipped |
| Hoarfrost Castle Voices (ElevenLabs) | Hoarfrost Castle | skipped |
| Infinitum Voiced Addons | Infinitum - Compendium | skipped |
| Integration - The Stranded Light Integrated Voices (ElevenLabs) | Integration - The Stranded Light | skipped |
| Join the Blackwood Company Voices (ElevenLabs) | Join the Blackwood Company | skipped |
| Join the Morag Tong Voices (ElevenLabs) | Join the Morag Tong | skipped |
| Join the Mythic Dawn Voices (ElevenLabs) | Join the Mythic Dawn | skipped |
| Join the Order of the Black Worm Voices (ElevenLabs) | Join the Order of the Black Worm | skipped |
| Knights of the Nine Revelation - Unvoiced Voices (ElevenLabs) | Knights of the Nine Revelation (fills lines that the base mod left unvoiced) | skipped |
| Kragenir's Death Quest Voices (ElevenLabs) | Kragenirs Death Quest | skipped |
| Kvatch Rebuilt An AI Voiced Experience | Kvatch Rebuilt | skipped |
| Lore Dialogue 300 Updated Voices (ElevenLabs) | Lore Dialogue 300 Updated | skipped |
| MTC Expanded Villages Voices (ElevenLabs) | MTC-Expanded Villages Updated | skipped |
| Mannimarco Resurrection Voices (ElevenLabs) | Mannimarco Resurrection (uses MannimarcoComplete.esp; **note:** different mod from "Mannimarco Revisited" which uses MannimarcoRevisited.esp — base mod not present as a separate APW folder) | skipped |
| Oblivifall - Losing My Religion - Elevenlabs AI VOICES | Oblivifall - Losing My Religion | skipped |
| Oblivion Collectible Cards Voices (ElevenLabs) | Oblivion Collectible Cards | skipped |
| Order of the Dragon EV Voices (ElevenLabs) | Order of the Dragon EV / Orden des Drachen | skipped |
| Reaction Voices (ElevenLabs) | Reaction | skipped |
| SI Cities Expanded Voices (ElevenLabs) | SI Cities Expanded | skipped |
| Star's Extended Dialogue - Roland Jenseric Voice Fix | Star's Extended Dialogue (single-NPC voice fix, not full voicing) | skipped |
| Tales from Elsweyr Anequina-Rev's Redo Voices (ElevenLabs) | Tales from Elsweyr Anequina-Rev's Redo | skipped |
| Tales of Cyrodiil Voices (ElevenLabs) | Tales of Cyrodiil | skipped |
| The Ayleid Steps - Voiced Addon BSA | The Ayleid Steps | skipped |
| The Forgotten Isles Voices (ElevenLabs) | The Forgotten Isles - A Large Shivering Isles Expansion | skipped |
| Thievery in the Imperial City Voices (ElevenLabs) | Thievery in the Imperial City - Tweaks and Fixes | skipped |
| Thieves Guild HQ - Unhealthy Competition - Voiced (ElevenLabs) | Thieves Guild HQ - Unhealthy Competition | skipped |
| Vampire Hunting - Order of the Virtuous Blood Voices (ElevenLabs) | Vampire Hunting - Order of the Virtuous Blood (OBVE) | skipped |
| Voiced Vile Lair DLC Overhaul (with Rowley Eardwulf Follower) | Vile Lair (vanilla DLC) — **note:** more than voices, ships an overhaul + new follower | skipped |

**Pattern**: most are named `<base mod> Voices (ElevenLabs)` or `AI Voice Addon for <base mod>` — base resolution is mechanical except for the three flagged above (Bruma Guild Reconstructed, Cyrodiil Transportation Network 2.0, Mannimarco Resurrection) where the named base mod isn't a separate APW folder.

All voice addons are currently **skipped** in Reborn.

---

## Quick stats

- **OOO** has the most patches: ~25 distinct compat bridges
- **Knights of the Nine DLC** has the most variants: ~14 entries (counting in-folder esps)
- **Better Cities** is both the biggest patch consumer (12 internal city-bridge esps) and target of 5+ external ones
- **UL Compatibility Patches Compilation** alone covers ~120 mod bridges with ~250 esps
- **3-way patches** are rare and worth flagging: OSPS↔BC↔UL, ProductiveMines↔BC↔UL
- **Voice add-ons**: 40 entries — all skipped in Reborn; 3 have ambiguous base mod (Bruma Guild Reconstructed, CTN2, Mannimarco Resurrection)
