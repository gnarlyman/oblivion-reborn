# DLC Delay Investigation Brief

**Date:** 2026-04-29
**Modlist:** Reborn (`D:/Modlists/Reborn/`)
**For:** Fresh Claude Code session — self-contained, no prior conversation context required.

---

## Problem

In Reborn, the moment the player walks outdoors after the tutorial / alt-start, every DLC quest fires at once. The intended setup:

- `Delay DLC Start.esp` — keeps DLC quests dormant until the player triggers them manually.
- `PSMainQuestDelayer.esp` — keeps the main quest from auto-starting.
- `Reborn Conflicts.esp` — currently patches two records to bridge them: `MQ01` (QUST, fid `0001E723`) and `CharGenQuest` (SCPT, fid `0002480B`), both overriding `PSMainQuestDelayer.esp`.

The DLC-start behavior is still wrong despite all three plugins being loaded.

## Goal

Build a mechanical understanding of:
1. What `PSMainQuestDelayer.esp` actually does (records, scripts, hooks).
2. What `Delay DLC Start.esp` actually does.
3. Where they conflict / interfere — specifically what causes DLC quests to fire when the player goes outdoors.
4. What `Reborn Conflicts.esp` currently does and why it's not enough.
5. **A concrete fix** — additional override in `Reborn Conflicts.esp`, an INI/setting elsewhere, a load-order change, or a different plugin combination.

## Tooling

- Patched xEdit binary at `D:/Modlists/Reborn/mods/TES4Edit 4.1.5f/TES4Edit 4.1.5f/TES4Edit_patched.exe` (carries a `-conflicts` CLI mode + per-record drill via Pascal scripts).
- Wrapper + scripts at `D:/Modlists/_clones/oblivion-conflicts/`. See its README for full schema and jq recipes.
- A fresh sweep cache for Reborn-Base already exists at `D:/Modlists/_clones/oblivion-conflicts/cache/sweep.json` (21 MB, 97k records, taken 2026-04-29).

If the cache is more than a day old or you've changed plugins, refresh:
```bash
cd D:/Modlists/_clones/oblivion-conflicts
./examples/reborn-shortcut.sh conflicts --out=cache/sweep.json
```

## Step 1 — Find every record each plugin touches

```bash
# Records PSMainQuestDelayer wins, or that have it as the master plugin in the chain
jq '.results[] | select(.chain[0].plugin == "PSMainQuestDelayer.esp" or .winner == "PSMainQuestDelayer.esp") | {fid, sig, edid, status, winner, chain: [.chain[].plugin]}' cache/sweep.json

# Same for Delay DLC Start
jq '.results[] | select(.chain[0].plugin == "Delay DLC Start.esp" or .winner == "Delay DLC Start.esp") | {fid, sig, edid, status, winner, chain: [.chain[].plugin]}' cache/sweep.json
```

Both plugins are small — expect a handful of records each. The sweep filters out `caOnlyOne` records, so for records ONLY introduced by these mods (not overrides), also run:

```bash
./examples/reborn-shortcut.sh list --target="PSMainQuestDelayer.esp" --out=/tmp/psmqd_list.json
./examples/reborn-shortcut.sh list --target="Delay DLC Start.esp" --out=/tmp/dlcd_list.json
```

`query_list` shows EVERY record the target touches that has at least one other plugin in the chain.

## Step 2 — Drill into the scripts

The DLC-start mechanism is almost certainly script-driven. Vanilla Oblivion DLC works like this: each DLC has a quest (`DLCFrostcragQuest`, `DLCMehrunesRazorQuest`, etc.) that auto-starts at game load — they're flagged "Start Game Enabled". Their scripts then add a noticeboard letter or NPC dialogue.

`Delay DLC Start.esp` likely clears the "Start Game Enabled" flag on those quests. `PSMainQuestDelayer.esp` may also touch those quests OR have its own script that re-enables them.

For each script PSMainQuestDelayer or Delay DLC Start touches, drill via `query_record`:

```bash
./examples/reborn-shortcut.sh record --formid=<FID> --out=/tmp/script_<edid>.json
```

Then jq the SCTX (script source) out:
```bash
jq '.results[] | .versions[] | {plugin: .plugin, sctx: (.subrecords[] | select(.signature == "SCTX") | .value)}' /tmp/script_<edid>.json
```

Compare across plugins to see what each modifies.

**Specific suspects to drill first:**
- `CharGenQuest` (fid `0002480B`) — character creation script. Reborn Conflicts already overrides this.
- `MQ01` (fid `0001E723`) — main quest. Reborn Conflicts overrides.
- Each DLC quest record. The DLC plugins in Reborn-Base load order: `DLCBattlehornCastle.esp`, `DLCFrostcrag.esp`, `DLCHorseArmor.esp`, `DLCMehrunesRazor.esp`, `DLCOrrery.esp`, `DLCSpellTomes.esp`, `DLCThievesDen.esp`, `DLCVileLair.esp`. Find their main quest record (one QUST per DLC, usually named `DLC*Quest`), drill it.

## Step 3 — Trace the trigger

Reported symptom: "all DLC fires the moment the player walks outdoors after tutorial/alt-start". Two questions:

1. **What event fires "DLC start"?** Likely a stage advance in CharGenQuest or MQ01 (e.g., player exits sewer / reaches certain stage). Find the script line that looks like `StartQuest DLC*Quest` or `Set DLC*Quest.<flag> to 1`.
2. **Where does Delay DLC Start.esp intercept it?** Compare its script source to vanilla — what does it block / what flag does it set / what condition does it gate?

The DLC quests' "Start Game Enabled" flag is in the QUST record's DATA subrecord (a flag byte). Drill the DLC quest records and check whether DATA differs across the chain.

## Step 4 — Diagnose the failure mode

Once you understand both plugins individually, the conflict pattern probably looks like one of these:

- **Order:** PSMainQuestDelayer's script runs after Delay DLC Start clears the flags, re-enabling them.
- **Override:** PSMainQuestDelayer's QUST overrides for DLC quests reset the "Start Game Enabled" flag back to enabled (and Reborn Conflicts.esp doesn't intercept this).
- **Untouched:** Delay DLC Start.esp doesn't actually touch the DLC quests in this load order — wrong flag, wrong record, dead override path.
- **Initialization:** The plugins assume vanilla Oblivion init order, but something in Reborn (Bashed Patch? UOP? engine fixes?) shifts when scripts fire.

The data from steps 1-3 should make one of these clearly true.

## Step 5 — Propose and document the fix

Write up:
- The mechanism (what each plugin does, in plain prose).
- The failure mode in Reborn (which of the patterns above, with evidence).
- The fix — usually one of:
  - Expand `Reborn Conflicts.esp` to override additional records (specify which FormIDs, what to set).
  - INI / settings change in `D:/Modlists/Reborn/mods/Reborn Configs/` (per memory `feedback_reborn_configs_mod.md`, central settings live here).
  - Load-order change.
  - Different plugin combination.
- Verification steps — what to test in-game to confirm it works.

Save the writeup to `D:/Modlists/Reborn/docs/investigations/dlc-delay-mechanism.md`.

## Reference

- `D:/Modlists/_clones/oblivion-conflicts/README.md` — full tooling docs, schema
- Memory `project_oblivion_conflicts.md` — sweep tooling status
- Memory `feedback_moo_delay_dlc_si_conflict.md` — earlier finding about MOO interfering with Delay DLC Start (SI variant). Delay DLC Start has known interaction issues; the SI noticeboard fix may not be the only surface.

## Optional fallback (only if direct investigation gets stuck)

There's an APW modlist at `D:/Modlists/APW/` that handles this scenario correctly. Sweep it the same way (set `OBLIVION_CONFLICTS_MO2`, `_PROFILE`, `_DATA`, `_PLUGINS` env vars to APW paths) and diff against Reborn — APW likely has additional overrides Reborn lacks. But try the direct investigation first; understanding > copying.

```bash
export OBLIVION_CONFLICTS_MO2="D:/Modlists/APW/ModOrganizer.exe"
export OBLIVION_CONFLICTS_PROFILE="A Painted World"
export OBLIVION_CONFLICTS_DATA="D:/Modlists/APW/Stock Game/Data"
export OBLIVION_CONFLICTS_PLUGINS="D:/Modlists/APW/profiles/A Painted World/plugins.txt"
./examples/reborn-shortcut.sh conflicts --out=cache/sweep-apw.json
```

(Pre-flight: APW's MO2 instance may need the patched binary registered as a custom executable named `TES4Edit_patched`. If sweep errors with "binary not found", add via APW MO2 → Tools → Modify Executables → Add, pointing at the same `TES4Edit_patched.exe`.)
