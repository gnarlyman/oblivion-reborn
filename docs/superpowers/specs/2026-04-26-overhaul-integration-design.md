# overhaul-integration — Design

**Status:** Draft
**Date:** 2026-04-26
**Project:** APW Reborn (Oblivion MO2 modlist)

## Goal

Establish a **gameplay foundation** for Reborn that makes Cyrodiil feel dangerous, makes character progression feel earned, and integrates curated quest mods without the quest mods invalidating the world's balance.

This spec covers the *philosophy* and the *Phase 1 stack*. Specific quest mod selection is downstream of this design.

## Philosophy

> **The world is dangerous. The player earns their power. Quest mods can be added, but their rewards must be balanced to fit the world — not the other way around.**

Concretely:
- The level curve does not revolve around the player. Bandits do not magically scale with you. You can wander into something that one-shots you at level 3, and you will learn the world's danger gradients.
- Progression is skill-use-driven and cannot be exploited by leveling untrained skills or grinding easy quests.
- Quest mods are a *content layer*, not a *power layer*. Their loot is normalized to fit the world's existing rarity distribution.
- One overhaul is the design voice. Stacking 1–2 maximum, never 3+. Modular balance tools layer on top without claiming to be overhauls themselves.

## Non-goals

- **Hardcore survival mechanics** (needs, primary needs, sleep deprivation, hunger). Out of scope for Phase 1; reconsider in a future spec if desired.
- **Quest XP / Oblivion XP-style leveling.** Explicitly rejected (see Rejected paths).
- **FCOM-era stacking** (3+ overhauls). Explicitly rejected.

A **combat overhaul layer** is *not* a non-goal — see "Combat layer" below.

## Why MOO as base

Three converging factors:

1. **Active maintenance.** MOO v5.0.5 was released 2025-11-23. OOO's last update was 2017-ish. Ascension is maintained but is a different design voice (vanilla-plus, not kitchen-sink).
2. **Compatibility architecture.** MOO uses pure OBSE scripting and runtime injection — it does *not* edit leveled lists. This means it composes cleanly with quest mods, with bashed patches, and with future overhaul additions (notably OOO, which it auto-detects via `MOO.OscuroPlugin`).
3. **Kitchen-sink coverage.** A single mod handles encounter density, creature variety, dungeon difficulty, traps, lock bashing, perks, AI behavior, weather, lighting, dynamic loot, mounts, NPC factions, harvesting, crafting hooks, notice-board quests. One ini file, one author, one mental model.

The same author (Maskar) ships **Ultimate Leveling**, designed to coexist with MOO via mutual auto-detection. Choosing MOO commits us to the Maskar ecosystem for the leveling/perk side as well.

## Stack — Phase 1 (install now)

| Mod | Role | Source |
|---|---|---|
| **Maskar's Oblivion Overhaul** v5.0.5 | Gameplay base | Nexus 42780 (archive present in `APW/downloads/`) |
| **Ultimate Leveling** (Maskar) | Leveling system | Nexus 49134 |

**Ultimate Leveling configuration** (in `mods/Reborn Configs/`):
- Keep author defaults (experience-based mode, 65/35 major/minor weighting, companion XP penalty active, level cap 50). Defaults are already the "battle-tested" answer per Sinitar and Maskar's own README. Community has not converged on any other named preset.
- One non-default tweak: `set ULVL.ini_rested_mode to 2` (WoW-style rested-XP bonus instead of flat sleep-to-level — prevents AFK leveling). This is the only specific anti-cheese tweak that surfaced in research with independent backing.

**Mods to disable (superseded by Ultimate Leveling):**
- `AV Uncapper` (manifest line 24) — UL has its own attribute/skill cap logic; running both fights for the same OBSE caps. *Already disabled by user 2026-04-26.*
- `AV Uncapper Settings - Fixed` (manifest line 25) — companion ESP, also disabled.

Manifest.csv update: flip both `AV Uncapper*` rows to `status=skipped` with `notes` explaining UL supersession. Add MOO + UL rows with `status=installed` once installed.

## Stack — Phase 1.5 (add when triggered)

These mods are **standalone PTWB tools**, not part of an overhaul. They can be installed at any time without breaking saves. We defer until they are clearly needed:

| Mod | Trigger to add | What it does |
|---|---|---|
| **Balanced Unleveled Rewards** (Nexus 51050) | Adding the *first* quest mod that drops scaled gear | Strips level scaling from all leveled quest rewards; pins items to the appropriate level for where they're obtained. Directly solves the "I leveled to 30 before turn-in so I get the godlike version" exploit. |
| **Balanced NPC Level Cap** (Nexus 50094) | If quest mod NPCs feel too strong at high levels | Caps 1,400+ NPCs at appropriate levels (the level they'd be when player is 30). Stops auto-scaling-into-godhood. Patches available for major quest mods. |
| **Leveled Creature & Item Diversity** (Nexus by PTWB) | If MOO's spawn variety feels thin after a real playthrough | Mixed-level spawn lists (low and high level creatures regardless of player level). |

Adding any of these requires a Bashed Patch rebuild (per existing `feedback_bash_mergeable_workflow.md`).

## Combat layer (in scope, separate research dive required)

A combat overhaul is part of the design intent. It is *not* committed in this spec because the combat overhaul space has multiple distinct axes that need their own research before picking:

1. **Mechanics** — stagger, dodge, directional attacks, recoil (e.g., Combat Reshoveled, Better Recoil and Stagger, RCB - Realistic Combat Behaviour, Character Based Attack Speed)
2. **Animations** — replacement attack/block/movement (e.g., Combat Stance Reanimation, Elden Ring-Inspired Dodge Animations)
3. **AI** — enemy combat behavior (some overlap with MOO's AI tweaks)
4. **Damage/balance** — MOBS-style standardized weapon damage, shield mechanics (DTS - Downsides To Shields, Rivalry's Shield Unequipper, SB - Arrow Master, Archery Focus)

**Required follow-on:** A separate research dive on the combat overhaul space, similar to the leveling/overhaul research that produced this spec. Output: a follow-on design doc (`combat-overhaul-design.md`) that picks specific mods per axis and their MOO-compatibility status.

**Sequencing:** Combat layer is a Phase 1.5 candidate — install after the MOO + UL baseline is running so we can A/B against MOO's stock combat. May escalate to Phase 1 (install with MOO from day one) if research shows a clear winner with no compatibility friction.

## Stack — Phase 2 (escape hatches, deferred decisions)

These are **explicitly not committed**. They are documented so the path is known if Phase 1 doesn't deliver.

| Mod | Trigger to add | Cost |
|---|---|---|
| **OOO** (Nexus 46199) | If after 10+ hours, MOO feels too "scripted/procedural" and you miss hand-placed unique loot in named caves | Heavier load order, OOO is unmaintained, but MOO has a real auto-handshake (`set MOO.OscuroPlugin to 1` triggered automatically when `Oscuro's_Oblivion_Overhaul.esm` is detected). MOO disables overlapping features (traps, lock bashing, boss equipment, melee/creature damage settings, NPC health, gear degradation, sneak-attack multipliers) when OOO is loaded. |
| **Av Latta Magicka** (Nexus 49096) | If combat magic feels flat / lacks variety, or pairs naturally with the chosen combat overhaul | 30+ new effects, 180+ new spells via leveled lists. Script-based, modular, low conflict risk. Acts as "MOO for magic." Decide after some real play. |

**Phase 2 escalation rule:** Only add one Phase 2 mod at a time, play 5+ hours after each addition, document the change in this spec.

## Quest mod policy

Quest mods are added case-by-case to the manifest. Each candidate is evaluated against:

1. **Reward scaling** — does it drop scaled gear that needs Balanced Unleveled Rewards? (Most do.)
2. **NPC scaling** — does it add NPCs that auto-scale? (Many do — Balanced NPC Level Cap helps.)
3. **MOO compatibility** — does the mod docs / Nexus comments mention MOO conflicts?
4. **Bashed Patch contribution** — leveled list edits get merged automatically once Wrye Bash is run.

**Quest mods cited in research as MOO-friendly** (validate before adding to manifest):
- Knights of the Nine Revelation
- The Lost Spires
- Reclaiming Sancre Tor
- Tales of Cyrodiil
- Kvatch Rebuilt
- The Ayleid Steps
- A Brotherhood Renewed (1.1.2)

## Rejected paths (with reasons)

| Path | Reason |
|---|---|
| **Ascension + MOO** | Philosophical contradiction (vanilla-plus + kitchen-sink). No auto-handshake, no patches between them, Ascension's own description says it's "incompatible with other similar overhaul mods." Steam community treats them as alternatives, not a stack. Runnable but creates a chaotic double-take on encounter design. |
| **FCOM** | Universally treated as obsolete in 2024+ guides. Leveled-list nightmare; unmaintained since the 2008-era. |
| **Oblivion XP / Oblivion XP Update** | User-flagged exploit risk: easy quests grant XP, points dump into untrained skills. Ties leveling to *content consumption* rather than *character growth*, which fights against an "earned power" feel. |
| **Stacking 3+ overhauls** | Sinitar, Oblivion Expanded, Maskar, every modern guide warn against it: leveled lists swarm, encounters spam every 5 meters, much new content never appears. |
| **Heartland Redux-style "no gameplay overhaul"** | Explicitly the opposite of the stated philosophy. |

## Configuration

All ini overrides live in `mods/Reborn Configs/` per existing `feedback_reborn_configs_mod.md` pattern. Specifically:

- `mods/Reborn Configs/Maskar's Oblivion Overhaul for compatibility.ini` — copied from MOO defaults; tune as needed
- `mods/Reborn Configs/Ultimate Leveling.ini` — copied from UL defaults + the `rested_mode 2` override

Never edit upstream MOO/UL archives. Never edit installed `mods/Maskar's Oblivion Overhaul/` files directly — those are reinstall-fragile.

**MOO ini starting tweaks** (per Bevilex's well-known config, the most-cited modern baseline):
```
set MOO.ini_add_veins to 0
set MOO.ini_add_vampire to 0
set MOO.ini_levelscaling_npc_overridden to 0
set MOO.ini_ability_heal to 0
set MOO.ini_dungeon_light to 2
```
These are starting values; actual playtesting may dictate further changes.

## Manifest impact

After Phase 1 install, the following manifest.csv rows change:

| Mod | Current `status` | New `status` | Notes |
|---|---|---|---|
| AV Uncapper | installed | skipped | Superseded by Ultimate Leveling — running both fights for OBSE caps |
| AV Uncapper Settings - Fixed | installed | skipped | Companion ESP for AV Uncapper |
| Maskars Oblivion Overhaul | skipped | installed | Phase 1 base overhaul |
| (Ultimate Leveling — not in manifest yet) | — | installed (new row) | Phase 1 leveling system |

Manifest preserves user-curated columns by default per `feedback_no_silent_status_overwrites.md`.

## Open questions

1. **Bashed Patch baseline.** Reborn's Bashed Patch hasn't been built since the recent `bashed_patch_uop_tags.md` issue. Do we need to fix the WB 315.RC2 LeveledListsPatcher crash *before* installing MOO, or can MOO go in first and bash later? Investigation needed before implementation plan.
2. **MOO compatibility ini source.** APW has its own `Maskar's Oblivion Overhaul for compatibility.ini` (653 lines). Do we copy APW's tuned version into Reborn Configs, or start from MOO's stock and re-tune? APW's may have references to mods Reborn doesn't install.
3. **Ultimate Leveling default ini.** Could not extract literal default `Ultimate Leveling.ini` values from the web during research. Resolution: install UL, copy its shipped default ini from `mods/Ultimate Leveling/` into `Reborn Configs/`, then layer the `rested_mode 2` change.
4. **Combat overhaul selection.** Deferred to a separate research dive + follow-on design doc (`combat-overhaul-design.md`). Decision sequence: ship MOO + UL baseline first, then dive into the combat overhaul space, then decide Phase 1.5 vs Phase 1 install timing.

## References

- Maskar's Oblivion Overhaul: https://www.nexusmods.com/oblivion/mods/42780
- Ultimate Leveling: https://www.nexusmods.com/oblivion/mods/49134
- Balanced Unleveled Rewards: https://www.nexusmods.com/oblivion/mods/51050
- Balanced NPC Level Cap: https://www.nexusmods.com/oblivion/mods/50094
- OOO Updated: https://www.nexusmods.com/oblivion/mods/46199
- Av Latta Magicka: https://www.nexusmods.com/oblivion/mods/49096
- Bevilex's modlist (MOO ini source): https://www.nexusmods.com/oblivion/mods/47591
- Sinitar's Ultimate Modding Guide — Gameplay: https://www.sinitargaming.com/oblivion_gameplay.html
- Through the Valleys (PTWB modular suite reference): https://www.nexusmods.com/oblivion/mods/51105
- Zhakaron 2024 build (MOO + Ascension example): https://www.zhakaron.com/2024/06/altmer-hedge-wizard-modded-oblivion-run.html
- MOFAM (MOO + OOO heavyweight reference): https://www.nexusmods.com/oblivion/mods/52949

Local artifacts:
- Reborn manifest: `D:\Modlists\Reborn\research\manifest.csv`
- APW MOO archive (port source): `D:\Modlists\APW\downloads\Maskars Oblivion Overhaul 5_0_5-42780-5-0-5-1763941781.7z`
- APW MOO compatibility ini reference: `D:\Modlists\APW\mods\A Painted World Configs\Maskar's Oblivion Overhaul for compatibility.ini`
