# APW vs Reborn-OOO broken-ref comparison

Generated 2026-05-08 by audit_resource_mod_usage.py against both MO2 installs.

## Setup

| | Reborn-OOO | APW |
|---|---:|---:|
| Active plugins | 67 | 247 |
| Winning records (default sigs) | 31,773 | 81,256 |
| Resource-only mods | 79 | 377 |
| Paths scanned | 55,656 | 126,509 |
| Paths missing (broken refs) | 228 | 1,128 |
| Distinct broken paths | 201 | 880 |

## Headline

| | count |
|---|---:|
| Paths broken in BOTH installs | **176** |
| Paths broken in REBORN ONLY (APW solves) | 25 |
| └─ 17 of the 25 resolve via mods APW has, Reborn doesn't | |
| └─ 8 have no APW counterpart (different records / not referenced) | |
| Paths broken in APW ONLY (cost of APW's larger ecosystem) | 704 |

**APW didn't solve most of Reborn's broken refs — 88% are also broken in APW.** APW lives with the same OOO/MOO bug surface.

## What APW has that Reborn doesn't, and what it fixes

APW resolves 17 of Reborn's broken paths via these 5 mods:

| APW mod | paths fixed | what's fixed in Reborn |
|---|---:|---|
| **OOO Enhanced - Resources** | 8 | SOOO daedric blue armor (cuirass+helmet+greaves+boots, M+F variants) |
| **Race Balancing Project** | 6 | asXivilai armor (Cobl Xivilai collar+kilt + icons) |
| **Frostcrag Reborn** | 1 | Frostcrag Castle content |
| **Smaller MOO Backpacks** | 1 | MOO Backpack mesh |
| **Artifacts Remastered** | 1 | one artifact |

## Specifically, what each mod fixes

### OOO Enhanced - Resources (8 paths)

This is the most impactful add. Reborn's OOO Enhanced installation appears to be missing companion resources.

- `meshes/soooequipment/daedricblue/m/boots.nif` — DaedricBootsVAUnp
- `meshes/soooequipment/daedricblue/m/boots_gnd.nif` — DaedricBootsVAUnp
- `meshes/soooequipment/daedricblue/m/helmet_gnd.nif` — DaedricHelmetVAUn
- `meshes/soooequipment/daedricblue/m/greaves_gnd.nif` — DaedricGreavesVAUn
- `meshes/soooequipment/daedricblue/f/greaves.nif` — DaedricGreavesVAUn
- `meshes/soooequipment/daedricblue/f/greaves_gnd.nif` — DaedricGreavesVAUn
- `meshes/soooequipment/daedricblue/m/cuirass_gnd.nif` — DaedricCuirassVAUn
- (one more under daedricblue or related)

### Race Balancing Project (6 paths) — fixes asXivilai

- `meshes/clothes/asxivilai/xivilaicollar.nif` — cobCloAsXivCollar
- `meshes/clothes/asxivilai/asxivilai_gnd.nif` — cobCloAsXivKilt
- `meshes/clothes/asxivilai/xivilaikilt.nif` — cobCloAsXivKilt
- `meshes/clothes/asxivilai/xivilaikiltf.nif` — cobCloAsXivKilt
- `textures/menus/icons/asxivilai/asxivcollaricon.dds` — cobCloAsXivCollar
- `textures/menus/icons/asxivilai/asxivkilticon.dds` — cobCloAsXivKilt

### Smaller MOO Backpacks (1 path)

- `meshes/moo/armor/backpack/backpack.nif` — fixes the MOO Backpack invisible test result

## Top "broken in BOTH" clusters (the 176 unfixable-by-APW set)

Adding all 5 APW mods to Reborn won't fix these — APW has them too.

| count | parent dir |
|---:|---|
| 33 | `textures/menus/icons` (scattered icons across plugins) |
| 20 | `meshes/moo/armor` (MOO bear, MOO weapons, MOO loot) |
| 13 | `meshes/exnem/femaleeyecandy` (HellSpawn, Plipo) |
| 7 | `meshes/clothes/lowerclass` |
| 4 | `meshes/clothes/upperclass` |
| 4 | `meshes/htb/vermillionseries` |
| 4 | `meshes/stroti/ayleidfurniture` |
| 4 | `meshes/kalcustom/furniture` |
| 4 | `meshes/moo/architecture` |
| 3 | `meshes/dungeons/root` |
| 3 | `meshes/architecture/quests` |
| 3 | `meshes/clutter/madnessrocks` |

These are systemic OOO/MOO mod-chain bugs that no overhaul community has fixed.

## Strategic implications

1. **Highest-ROI add**: install **OOO Enhanced - Resources** in Reborn. Fixes 8 paths immediately, covering a recognizable cluster (SOOO daedric blue armor).
2. **Race Balancing Project** is a bigger mod — adding it would fix 6 paths but it ships its own race system that may conflict. Worth investigating if its asXivilai content can be cherry-picked.
3. **Smaller MOO Backpacks** is a small drop-in fix for the MOO Backpack invisible bug.
4. **The 176 "broken in both"** is the long tail. Both communities (Reborn and APW) tolerate these as known-but-not-fixed bugs. Most likely they're in records that don't appear in normal play, or are tolerated as visual oddities.

## Interpretation

APW hasn't authored a master CR plugin to fix the broken-ref surface. APW's "solution" is **mostly to install the documented companion resources** (3 of the 5 fix-mods) and live with the rest.

Reborn is missing 5 specific mods that APW has. Adding them is a 17-path quick win — incremental but meaningful.
