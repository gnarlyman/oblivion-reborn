# OOO Phase F — Conflict Sweep Residue Analysis

**Sweep cache:** `D:\Modlists\_clones\oblivion-conflicts\cache\reborn-ooo-sweep.json`
**Profile:** Reborn-OOO
**Date:** 2026-04-30
**Plugins loaded:** 56
**Records walked:** 120,448
**Sweep duration:** ~31s

## Severity distribution

| Status | Count | Notes |
|---|---|---|
| `caOverride` | 119,144 | Single-mod overrides of vanilla — fine |
| `caConflict` | 1,289 | Multi-mod conflicts |
| `caConflictCritical` | 15 | High-priority |

## Critical conflicts (15) — all evaluated

| Record | Sig | Cause | Action |
|---|---|---|---|
| HorsePCShadowmereScript + 8 other HorsePC* | SCPT (9) | Pre-existing DLC Horse Armor + UP overlap | None — UP wins, expected |
| LairVileMinionScript | SCPT | Pre-existing DLC Vile Lair + UP overlap | None — UP wins, expected |
| 2x REFR in Battlehorn Castle | REFR | Pre-existing DLC Battlehorn + Knights overlap | None — Knights wins, expected |
| SE01DoorScript | SCPT | OOOShiveringIsles vs Delay DLC Start | None — Delay DLC Start winning is intentional (APW pattern) |
| OOOContChestTrapped01GuardianFighting | SCPT | Bashed Patch absorbed | Investigated — not present in Bashed Patch when queried (likely false positive in conflict report) |
| OOOIniOptionsQS | SCPT | Bashed Patch absorbed | Investigated — Bashed Patch SCDA preserved at 4110 chars (matches OOO.esp's bytecode) — script intact |

**Bottom line: no OOO-introduced critical conflicts that need a patch.**

## caConflict records (1,289) where OOO is in the chain (1,086 = 84%)

| Winner | Count | Notes |
|---|---|---|
| `Oscuro's_Oblivion_Overhaul.esp` | 433 | OOO winning its own — correct |
| `Bashed Patch, 0.esp` | 374 | Bash auto-resolved — correct |
| `OOOShiveringIsles.esp` | 236 | SI winning its own — correct |
| `MercerIngredientsCore.esp` | 27 | Mercer overrides OOO ingredients — Maskar same-author intent |
| `Balanced Unleveled Rewards - Complete.esp` | 9 | BUR overriding OOO leveled rewards — intentional |
| `LessMaddeningShiveringIsles.esp` | 4 | SI tweak winning — intentional |
| `Delay DLC Start.esp` | 1 | Expected |
| `DLC Integration.esp` | 1 | Expected |
| `PSMainQuestDelayer.esp` | 1 | Expected |

Top signatures in OOO-touching caConflicts: REFR (338), NPC_ (222), WEAP (185), SCPT (81), QUST (31), ARMO (31).

**No spot-check issues found.** Distribution matches expected pattern for OOO + MOO + DLCs + small Reborn-added tweaks.

## Decision

**Accepted as-is.** No CR ESP needed for v1. Move to Phase G (playtest).

If playtest surfaces a specific behavioral issue, this cache is the starting point for diagnosis: filter by record type or by editor ID using `jq` against the JSON.
