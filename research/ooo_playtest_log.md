# OOO Phase G — Playtest Soak Log

**Started:** 2026-04-30
**Profile:** Reborn-OOO
**OOO version:** 1.7.0.0
**MOO version:** 5.0.5

**Gate:** _TBD — to be set by user before play_

Suggested gates (pick one or define your own):
- **Quick:** Reach starting region's first town + one dungeon clear (~30 min)
- **Medium:** Close first Oblivion gate OR 2 in-game hours, whichever first (~1-2 hr)
- **Long:** Complete one full quest of any guild (~3-5 hr)

## Context

- No CR ESP shipped (Plan C: rely on Bashed Patch + natural load-order conflict resolution)
- Conflict sweep showed no OOO-introduced critical issues (see `ooo_conflict_residue.md`)
- Known cosmetic issues to ignore during playtest:
  - Cobl OOO version popup ("requires OOO v1.34") — script-level check failure, OOO-Cobl tweaks skip but no crash
  - LINK++ menu shows MOO INI defaults (`ini_traps=1` etc.) — runtime values are correct (compat block flipped to 0); LINK++ display is stale, harmless
- What to actively watch for:
  - CTDs (crash logger output in `D:/Modlists/Reborn/overwrite/Root/CrashLogger.log`)
  - Empty/missing meshes (purple textures, exclamation marks)
  - Wrong-tier enemies for level (e.g. Daedric weapons on bandits at low level → OOO scaling broken)
  - Double-loot in containers (MOO + OOO loot both firing — would mean compat didn't fire)
  - Missing dialogue/voice on OOO-added NPCs (voice files not deployed correctly)
  - Quest journal weirdness on shared quests (House quests, Mages Guild, etc.)
  - Geomancy gem-grinding NOT working (since Cobl tweaks skipped — expected)

## Observations during play

_(append observations below as you play; each entry: timestamp + what you saw + severity)_

