# APW vanilla (Oblivion.esm) override character

What APW actually does to vanilla records — sampled across the 6 APW-authored ESPs (`APW Merge.esp`, `APW Merge 2.esp`, `APW Merge 3.esp`, `APW - Conflict Resolution.esp`, `LandMagicPatch.esp`, `Harvest xOBSE.esp`).

## Method

Sampled ~25 records per top-volume signature where `masters == "Oblivion.esm"` (i.e., direct vanilla overrides; chain depth = 1 above master). 331 sample FIDs, 734 chain-links dumped via REPL `apw_vanilla_dump.pas`. Diffed every APW link's subrecord values against the Oblivion.esm master record. Source data: `D:\Modlists\Reborn\research\apw_vanilla_dump.jsonl`.

## Per-signature characterization

### DIAL (25/25 changed) — Topic-label rename to question form
APW rewrites the **FULL** label of vanilla DIAL topics from short tag form to a player-spoken question form (consistent UI / subtitle clarity overhaul). Looks like one of the dialogue overhaul mods (Dialogue Tweaks Fixes and Restorations / Realistic Player Dialogue Overhaul / 300_lore_dialogue_updated — multiple are absorbed). UOP does not touch FULL labels this aggressively, so this is **not USIP-redundant**.
Examples:
- `00000C8D` VampireVicente: `Vampire` → `How did you become a vampire?`
- `000024D0` goblins: `Goblins` → `About goblins...`
- `00002529` lightthedragonfires: `Light the dragonfires` → `So, what exactly are the Dragonfires?`
- `000025A5` AmuletofKingsTopic: `Amulet of Kings` → `The Amulet of Kings...`
- `00002D9D` Dark11Choice4C: `<Say nothing.>` → `...`
- `00002DA0` Dark11Choice3C: `<Say nothing.>` → `...`
- `00002DA3` Dark11Choice2C: `<Say nothing.>` → `...`
- `00002DA6` Dark11Choice1C: `<Say nothing.>` → `...`

### INFO (25/25 changed) — PNAM threading + cascading Topic FULL refs
The dominant change is **PNAM** (Previous-INFO link) being added or repointed; many INFO records also show their parent **Topic** link's `FULL` updated as a side-effect of the DIAL renames above. Two records show `CTDA` condition tweaks (rare). This is the dialogue overhaul's structural side: re-threading conversation flow to make new prompts coherent.
Examples:
- `0001E74B` Topic: `MQ02JauffreC1 "Tell the emperor's last words."` → `"The Emperor told me to give you the amulet."`
- `0001FE86` Topic: `ChorrolTopic "Chorrol"` → `"What can you tell me about Chorrol?"`
- `000223E4` Topic: `lightthedragonfires "Light the dragonfires"` → `"So, what exactly are the Dragonfires?"`
- `0001C46E` PNAM added: linking GREcity guard reply chain
- `00023C0C` PNAM + CTDA edit
- `000242F2` PNAM + CTDA edit (combat lines)
- `000242F8` PNAM (combat retaliation thread)
- `00027FC7` PNAM (crime / Skooma surrender thread)

### NPC_ (23/25 changed) — Face/hair/class swaps from OCO + minor companion classing
- **HNAM** (Hair) and **FNAM** (FaceGen) edits dominate (17 + 7 of 25). These are **OCOv2 / OCO Faces forwards** — APW absorbs `improved npc faces for ocov2.esp` and `oblivion_character_overhaul_faces.esp`.
- **CNAM** (Class) edits on the four `TESTVampireMage*` NPCs (Sorcerer → Battlemage rebalance) — likely a vampire balance mod.
- **LNAM** (Stat) edits on `Raqanar` (Skooma cat) and `SE02OrcCaptain` change AI tendencies.
- **ENAM** (Eyes) on `Ormil` and `TestToddMan` — face-pack forwards.
This is **not USIP-coverage**; it's deliberately replacing vanilla facegen with OCO. Reborn already has OCO installed — these match.
Examples:
- `0000089A` TestToddMan: ENAM (Eyes) added
- `000034CE` Raqanar: LNAM 0.0 → 0.369, FNAM facegen-bytes
- `0000B50A`–`0000B510` TESTVampireMage* (×4): CNAM Sorcerer "Sorcerer" → Sorcerer "Battlemage"; HNAM "Wind Braids" → "Empire Split"
- `0000C1D4` Ormil: HNAM "High Style" → "Summerset Flow"; ENAM
- `00011F9E` SE02OrcCaptain: LNAM 1.0 → 0.578; FNAM facegen
- `0000089A`/`000034CE`/`00011F9E` are good representative variety

### SCPT (16/16 changed, 18 sampled) — Recompiled vanilla scripts (UOP-style fixes)
**Every** APW SCPT override edits both **SCDA** (compiled bytecode) and **SCTX** (source). The script bodies match the master in the visible head but the bytecode differs in length (e.g., SQ06 `1F 02` → `68 02`, SQ07Script `A4 00` → `62 00`). Closer inspection of `SQ07JournalScript` shows a logical change: `GetStage SQ07 >= 10` → `GetStage SQ07 >= 0` (relaxed gating). These look like **UOP / OCRP-style quest-script bug fixes forwarded into APW Merge**. Reborn likely needs these — UOP and OCRP are both in the manifest, but if APW recompiled them with extra stuff, Reborn must verify.
Examples:
- `0001E643` ArenaAggressionScript — SCDA bytecode shifted
- `0008E542` SEDoorLightBeamScript — light timer logic
- `0018AE40` SQ06Script — quest stage script
- `0018BC26` SQ07JournalScript — relaxed `GetStage SQ07` gate (10 → 0)
- `0018BC28` SQ07Script — Slythe corpse trigger comment changed
- `0018D933` SQ08Script — bytecode shifted
- `0001EBE7` DAAzuraStatueScript — minor SCTX edit
- `0001EF7B` DAHermaeusStatueScript — bytecode shift

### QUST (25/25 changed) — Custom journal icon retexture
**100%** of sampled QUST edits replace the vanilla `Quest\icon_*.dds` / `Quests\iconSE*.dds` icon with a custom `Quests\eoo_*\*.dds` path (the **"eoo_" prefix = "Eyes of Oblivion" UI iconset**). This is a single-purpose UI mod absorbed into APW. Reborn doesn't ship this — adopting it would be a low-risk, high-visibility QoL win, but it requires the eoo_ DDS asset bundle.
Examples:
- `00013643` SE11b: `iconSE11.dds` → `eoo_shivering\si_eye.dds`
- `00013A5D` SE05Conversations: `iconSE05.dds` → `eoo_shivering\si_irondoor.dds`
- `000165E6` TGInfo: `Quest\icon_thieves_guild.dds` → `eoo_guilds\tg_thief.dds`
- `00018E8C` SE00: `iconSE01.dds` → `eoo_shivering\si_door.dds`
- `00019516` SE06Battle: `iconSE06.dds` → `eoo_shivering\si_fire.dds`
- `00019D65` SE02Conv: `iconSE02.dds` → `eoo_shivering\si_flesh.dds`
- `0001DA86` SE08Xed: `iconSE08.dds` → `eoo_shivering\si_tower.dds`
- `0001E641` ArenaAnnouncer: `Quest\icon_arena.dds` → `eoo_others\arena.dds`

### CREA (9/25 changed) — Sound list (RNAM) bumps + minor inventory adds
APW raises the **RNAM** (sound-list / random-attack-anim weight) on creatures by ~5–20% across the board. This pattern is **GOSH (Gecko's Oblivion Sound overHaul)** — a sound overhaul absorbed via APW Merge. The other 16/25 records have edits that don't print to text (binary subrecs unchanged or reordered). One CNTO inventory add on `SECreatureBaliwog1Dead`.
Examples:
- `0000C4B3` OblivionSiegeTarget: RNAM 32 → 68
- `00014F8C` SummonBoar: RNAM 28 → 50
- `0001E5EE` xxxCreatureZombie: RNAM 60 → 70
- `0003D79C` ICArenaMountainLion: RNAM 55 → 60
- `0003D79D` ICArenaDog: RNAM 50 → 58
- `0004408A` SE09DeadHound01: RNAM 50 → 58
- `00078C38` SE09SkeletalHound01: RNAM 50 → 58
- `000698BF` SECreatureBaliwog1Dead: CNTO inventory add

### LAND (10/25 changed) — Cell-link cleanup + edge-blend tweaks
APW adds `Cell` parent-name strings on bare landscape records (sometimes pointing at new cell EDIDs from absorbed mods like `AAZFG01SkoomaCamp` and Better Forts). 4 records have actual **VCLR** (vertex color) and **VHGT** (height-map) edge tweaks — typical landscape seam-fix territory. The 15 unchanged records likely have value-equal binary edits not surfaced by `GetEditValue`.
Examples:
- `000045DB` (no edid): Cell → `AAZFG01SkoomaCamp [CELL:00004548]`
- `000045DC`: Cell → `AAZFG01SkoomaCampD`
- `000045FB`: Cell → `AAZFG01SkoomaCampC`; VNML/VHGT/VCLR all edited
- `00006E6E`: VNML edit (subtle normal tweak)
- `00008BF5`: Cell → `FortVlastarusExterior02` (Better Fort fork)
- `0000B144`: Cell → `Wreck3` (slaughterfish wrecks)
- `0000B14A`: Cell → `Wreck2`
- `0000B2F8`: VCLR edge-blend

### REFR (4/25 changed) — Cell parent-name surfacing for absorbed cells
Mostly **Cell** rename edits: APW is just attaching the absorbed-mod cell EDIDs (`FortCarmalaExterior02`, `FortVlastarusExterior02`, etc.) as the parent reference for vanilla REFRs that share the cell. One **XESP** (enable-parent) added. The remaining 21/25 have value-equal binary subrecs (XPRM/XSCL not changed in this sample). REFR is APW's largest record class but mostly transparent at edit-value level — the heavy work is in **new** REFRs (the 13K is_new REFRs analyzed in `apw_absorbed_mods.md`).
Examples:
- `000094BF`: XESP enable-parent added
- `00009A92`–`00009A94`: Cell → `FortCarmalaExterior02` (3 refs in same cell)

### LIGH (1/1 changed) — Sound attachment
- `00069230` ARDesatGreenIntense800: SNAM (Sound) → `AMBAyleidWellLP` — Ayleid Well ambient loop attached. Ayleid-Wells absorbed mod.

### LVLI (1/25 changed) — Probability tweak
- `00081E70` SE38ItemList98: LVLD (chance-none) 98 → 100. The other 24 sampled LVLI overrides don't print value diffs (could be CNTO ordering / tagged forwards via Bashed Patch).

### SPEL (1/25 changed) — Player default spell rename
- `00000136` DefaultPlayerSpell: FULL `Heal Minor Wounds` → `Basic Healing`. Probably from `Truly No Default Starting Spells` or a magic overhaul. The other 24 SPEL overrides are bytecode/effect-list level (likely Av Latta Magicka or Cobl Tweaks).

### ACHR (1/2 changed) — Cell relocation
- `0008677C` MG17Necro1b: Cell `[no name]` → `SilornExterior [CELL:000080E5]`. Necromancer placement moved.

### ACTI (3/4 changed) — Doomstone script swap
The 3 RuneStone glyphs (Sidri Ashak / Hestra / Reman) have **SCRI** swapped from vanilla `Runestone*` scripts to custom `BoonStoneGive*` scripts (FormID `90xxxxxx`, points at `LandMagicPatch.esp`). This is a **Doomstone overhaul** (similar to Reborn's DDS — Reborn already has a doomstone overhaul, so this should be conflict-checked for compatibility).
Examples:
- `00066CC2` ACTRuneStoneExt02Glyph01: SCRI → `BoonStoneGiveGloom`
- `0006A8E0` ACTRuneStoneExt01Glyph01b: SCRI → `BoonStoneGiveEnergy`
- `0017D40B` ACTRuneStoneExt01Glyph01a: SCRI → `BoonStoneGiveCrush`

### Bulk-unchanged sigs (ARMO, CELL, CLOT, GMST, PACK, STAT, WRLD)

These had APW links in the chain but **0 of N** sampled records show diffs at the `GetEditValue` text level. Three explanations:
1. **Forwarded ITM-style overrides** — APW carries the record as a placeholder so Bash can resolve a tag/conflict. Common with GMST and PACK.
2. **Binary-only edits** — XSCL/XPRM (REFR transforms), DATA blocks, raw binary BMDT flag bytes don't always re-stringify identically; `GetEditValue` can return the master string when sub-byte fields differ.
3. **Mergeable ESP pass-through** — APW Merge ESPs were Bash-merged from absorbed source mods (see `apw_absorbed_mods.md`); some merge artifacts are byte-equal to master.

## Reborn implications

| Sig | What APW does | Already covered by community fix? | Reborn action |
|---|---|---|---|
| DIAL/INFO | Rewrite vanilla topic FULLs to question form + thread PNAMs | No — UOP doesn't do this | **Decision needed**: adopt dialogue overhaul (multiple mods absorbed: Dialogue Tweaks, Realistic Player Speech, etc.) or skip |
| NPC_ HNAM/FNAM/CNAM | OCO face/hair/class forwards | OCOv2 itself + Improved NPC Faces for OCOv2 | Reborn has OCO installed — these forwards must be in Reborn's BP too. Verify. |
| SCPT SCDA/SCTX | Recompiled vanilla scripts (UOP/OCRP-style quest fixes + relaxed gates) | UOP + OCRP partially | Reborn has UOP/OCRP. Diff against APW SCDA to check if APW added extra script edits we want to forward. |
| QUST ICON | Replace vanilla journal icons with `eoo_*` custom set | No | **Easy QoL win** — small mod, low risk. Adopt unless asset bundle is missing. |
| CREA RNAM | Sound-list weight bumps (GOSH absorbed) | No (GOSH-specific) | If Reborn wants GOSH, install + merge. Otherwise skip. |
| LAND VCLR/VHGT | Edge-blend / seam fix on cells of absorbed worldspace mods | No — these are absorbed-mod-coupled | Skip if not adopting Better Forts/Skooma Camp. |
| REFR Cell | Parent-cell name attachment from absorbed mods | n/a | Same — coupled to absorbed worldspace mods. |
| ACTI SCRI (rune stones) | Swap vanilla doomstone scripts to "BoonStone" overhaul | DDS in Reborn covers doomstones | **Conflict-check**: APW's BoonStone vs Reborn's DDS may collide. |
| LIGH SNAM | Add ambient sound to AyleidWell light | No | Trivial; only affects Ayleid Wells mod. Skip with that mod. |
| ARMO/CELL/CLOT/GMST/PACK/STAT/WRLD | Forwarded / binary-only — no surfaced edit-value diff | n/a | No action; covered by Bash anyway. |

**Net assessment**: APW's Oblivion.esm overrides are **NOT primarily USIP/UOP-style bug fixes**. They are absorbed-mod forwards (OCO faces, GOSH sounds, dialogue overhauls, EOO icons, doomstone overhaul, Ayleid Wells, Better Forts cell-naming). The exception is **SCPT** — those genuinely look like UOP/OCRP-class script fixes worth forwarding, possibly with extra APW-specific tweaks. The most actionable Reborn finding: APW's QUST ICON change is a low-cost, high-visibility QoL adoption candidate.
