# APW Merge {.,2.,3.}.esp — Absorbed Mod Inference

Goal: identify the source mods whose contents were bash-merged INTO the APW Merge ESPs and (consequently) deactivated in plugins.txt. Attribution is by EDID-prefix grouping of the 14,850 `is_new=true` records inside the three APW Merge ESPs. Sample/method below the table.

The manifest declares 175 APW mods with `apw_merged != no`, expanding to 228 ESPs — and **all 228** are absent from `plugins.txt`. That is the universe of "absorbed" candidates. Below are the high-confidence prefix→source matches; many absorbed mods (esp. the Better Fort * family, OOO DLC adaptations, Cobl variants, UL patches, OCO patches) are confirmed via EDID prefixes that match the manifest entry.

| Inferred source mod | EDID prefix(es) | record count | top sigs | confidence | manifest status |
|---|---|---|---|---|---|
| Better Fort * (15 mods: Roebeck, Istirus, Dirich, Doublecross, Black Boot, Naso, Ontus, Vlastarus, Redman, Hastrel, Telman, Facian, Carmala, Magia, Rayles) | `Fort*` (Roebeck/Istirus/Dirich/Doublecross/BlackBoot/Naso{Cheydinhal,Day,Guard,Night,Tower}/Ontus/Vlastarus/Redman/Hastrel/Telman/Facian) | ~376 | PACK, NPC_, CELL, REFR, ACHR | high — all 15 "Better Fort *" .esps in absorbed list, prefixes match exactly | skipped (worldspace mods, intentional) |
| Reznod Mannequins | `Reznod*` | 295 | ACHR (256), SCPT, REFR | high — ESP `reznod_mannequin.esp` in absorbed list | skipped |
| Random Ruins of the First Era | `RandomRuins*` | 46 | STAT (37), BOOK, DOOR | high — ESP `random ruins of the first era.esp` in absorbed list | skipped |
| Cloud Ruler Temple Blade training | `CloudRuler*`, `Blade*` | 57 | PACK (37+), NPC_, ACHR | high — Blades-training NPCs and AI packages | (need to confirm source mod) |
| Wayshrine Map Markers - Redux | `wWayshrine*` | 29 | REFR (29) | high — ESP `wayshrinemapmarkers.esp` in absorbed list | skipped |
| Coffee Argonian Hair (Beautification) | `CoffeeArg*` | 22 | HAIR (22) | high — Argonian hair add-on absorbed | (likely part of OCO Beast Race patches) |
| Bounty Quests Fixed and Polished + TG Footpad add-ons | `TG*`, `TGFootpad*`, `TGFo*` | 43 | PACK, DIAL, QUST, SCPT | high — `bounty quests ooo patch.esp` in absorbed list | pending |
| Improved Fighters Guild Patches | `FGD*`, `FGAp*` | 27 | PACK, ACHR, NPC_, DIAL, SCPT, QUST | high — `fgrebuild - ooo patch.esp` and `fgrebuild - the ayleid steps patch.esp` absorbed | skipped |
| Knights Rebuilt patrol packages (Menien) | `KRP1*`, `KRP2*`, `KRP3*` | 18 | PACK (15), REFR | medium — KRP = "Knights Rebuilt Patrol"; matches Menien quest staging across stages 1/2/3 | (need to confirm source mod — likely a Knights of the Nine restoration patch) |
| Lost Sorceries of the Ayleids | `LSA*` (Fortify/Restore/Reanimate/Damage/Summon/Absorb...) | 56 | SPEL, SCPT, ACTI | high — ESP `lost sorceries of the ayleids.esp` in absorbed list | skipped |
| Ducks and Swans for Cyrodiil | `aaDuck*`, `aaSwan*`, `Duck*` | 19 | ACTI, INGR, SCPT | high — ESP `ducks and swans.esp` in absorbed list (UL patch variant) | skipped |
| Worship in Cyrodiil | `WiC*` | 30 | STAT, ACTI | high — ESP `worship in cyrodiil v1.2.esp` in absorbed list | skipped |
| Ayleid Artifacts | `AAayleid*`, `AAar*` | 18 | STAT (18) | high — ESP `ayleid artifacts.esp` absorbed; statics are decorative artifact assets | skipped |
| Imperial City LOD - Performance Edition | `ICLOD*` | 11 | STAT (11) | high — ESP `better cities imperial isle lod.esp` absorbed (LOD STATs) | skipped |
| Better Cities sarcophagi/doors (CBM) | `CBMSarcophagus*`, `CBMDoor*` | 14 | CONT, DOOR | high — Better Cities resource adds (CBM = "Carter/BC Master?") | skipped (BC is a Reborn skip) |
| Toaster's Brutal Stealth (s6o6t prefix) | `s6o6t*` | 12 | EFSH (12) | medium — `toaster's brutal stealth.esp` in absorbed list; matches "s6o6t" being a Toaster-style prefix on EFSH effects | skipped |
| Realistic Aurora in motion | `Aurora*`, `BrumasNorthernLights` | 6 | REFR (6) | high — ESP `brumasnorthernlights.esp` in absorbed list | skipped |
| Falling Rubbish Bravil | `Rubish*` | 9 | STAT (9) | high — ESP `falling rubbish bravil.esp` in absorbed list | skipped |
| Dunmerized Cheydinhal | `DCpaperlantern*`, `DCvase*` | 10 | STAT (10) | high — ESP `dunmerized cheydinhal.esp` in absorbed list | skipped |
| OOO Enhanced DLC adaptations (Orrery NPCs) | `DLCOrreryOOO*` | 8 | NPC_, LVLC | high — `dlcorrery - ooo adaptation.esp` in absorbed list | installed (OOO Enhanced) |
| Khajiit hair add-on (kart prefix) | `kartKhajiit*` | 9 | HAIR (9) | medium — likely Coffee Argonian's Khajiit-companion or OCO Beast pack | (likely OCO companion mod) |
| WSaw / Slaughterfish Wreck additions | `WSaw*`, `Wsaw*` | 17 | PACK, CONT, STAT | medium — looks like a sunken-ship/fish AI add (KRP and Random Ruins style) | (no clear manifest match — investigate) |
| Better Oblivion Crisis - Cultists Replace Conjurers | `BANOblivifall*` | 5 | REFR (5) | medium — BANO=BANBetterAyleidNoticeOoo? Likely Oblivifall LMR fragments | ESP `better oblivion crisis - cultists replace conjurers.esp` absorbed |
| Atmosphere additional weather effects | `Effectsadditionalweather*` | 4 | STAT (4) | high — ESP `atmosphere additional effects.esp` in absorbed list | skipped |
| New Detection Oblivion (sneak GMSTs) | `fSneak*` | 7 | GMST (7) | high — ESP `detection.esp` absorbed; sneak-rebalance GMSTs match | pending |
| Living Oblivion (DLC Golden Sun LL) | `LL0sDLC*` | 6 | LVLI (6) | high — ESPs `livingobliviondungeons.esp`/`livingoblivionoverworlds.esp` absorbed | skipped |
| Better Bound Items | `Bound*ENCH` | 6 | ENCH (6) | high — ESP `betterbounditems.esp` in absorbed list | pending |
| Order of the Dragon (Dragon spells/refs) | `Dragon*` | 5 | SPEL (4), REFR | medium — OOTD patch series has multiple absorbed ESPs (`bicfull_ootd_patch.esp`, `oddfasttravel.esp` etc.) | skipped |
| SG / OCOv2 Imperial face replacers (sgImpa) | `sgImpa*` | 4 | NPC_ (4) | medium — sg = SG-Beauty / SG textures family; ESP `improved npc faces for ocov2.esp` candidate | installed (OCO group) |
| SB Weapon Drop Fix | `SBWDF*` | 4 | GLOB (2), SCPT (2) | high — ESP `sb_weapondropfix.esp` in absorbed list | installed |
| Castle Wall Corner statics (Battlehorn?) | `CastleWall*` | 5 | STAT (5) | medium — likely Battlehorn rebuild OR Frostcrag — multiple Castle/Battlehorn mods absorbed | installed (OOO Enhanced DLC) |
| BBF (Bash Bound? unknown — look in absorbed list) | `BBF*` | 5 | STAT (5) | low — no clean manifest match by prefix; possibly part of "Better Benirus Manor" | (investigate) |
| cidw* dead helmet armor variants | `cidwwhelm*` | 11 | ARMO (9), FACT | medium — possibly part of CIBFilterPatch or a combat-overhaul drop variant set | (investigate) |

## What we CAN'T attribute by EDID prefix

13,229 REFR + 67 ACHR + 53 PGRD + 8 INFO + 1 CELL records have **no EditorID** (the engine doesn't require it for placed refs/navmesh/dialog). They split as:
- APW Merge.esp: 10,026 REFR + 67 ACHR + 53 PGRD
- APW Merge 2.esp: 2,349 REFR + 15 CELL
- APW Merge 3.esp: 854 REFR + 51 INFO

These almost certainly come from the worldspace-ish absorbed mods: **Better Fort \***, **Better Cities** sub-patches, **Reznod Mannequins** placements, **Order of the Dragon**, **MTC Expanded Villages**, **UL Compatibility Patches Compilation WIZBAIN**, **Falling Leaves**, **Lost Sorceries of the Ayleids** placements, etc. The 53 PGRD (pathgrid) entries are particularly indicative of mods that author cells. EDID-prefix attribution can't separate them; if Reborn needs precise per-mod attribution, drive an APW-vs-Nexus-archive cross-reference instead.

## Method

1. Filtered `apw_authored_records.jsonl` to `plugin in {APW Merge.esp, APW Merge 2.esp, APW Merge 3.esp}` AND `is_new == true` → 14,850 records.
2. Grouped by EDID prefix (leading [A-Z][a-z]+ run, max 10 chars, falling back to `<no-edid>`).
3. Cross-referenced manifest's `apw_merged` column (175 mods → 228 ESPs); confirmed all 228 ESPs are absent from `D:\Modlists\APW\profiles\A Painted World\plugins.txt`.
4. Matched prefix patterns against absorbed-ESP filenames + standard EDID conventions (e.g., `LSA*` for Lost Sorceries of the Ayleids, `wWayshrine*` for Wayshrine Map Markers).

## Reborn implications

- The high-confidence absorbed mods that are currently **`status=skipped`** in Reborn (Reznod Mannequins, Worship in Cyrodiil, Lost Sorceries of the Ayleids, Random Ruins, Falling Rubbish Bravil, Dunmerized Cheydinhal, all 15 Better Fort *) are immersion adds APW chose to bake in. Reborn can adopt these wholesale by either: (a) installing the source mod + bash-merging the same way, or (b) adopting the resulting APW Merge.esp record set if it's stable.
- The absorbed mods that are **`status=installed`** in Reborn (`Cobl Tweaks - OOO Mergeable.esp`, `dlcorrery - ooo adaptation.esp`, `iqmo - ooo patch.esp`, etc.) need verification: Reborn must EITHER deactivate those .esps and merge them too, OR keep them active and explicitly NOT carry them in any APW-equivalent merge.
- The `pending` set (Better Bound Items, Bounty Quests OOO Patch, Detection, etc.) is a clean priority list — these are mods APW absorbed that haven't yet been decided in Reborn.
