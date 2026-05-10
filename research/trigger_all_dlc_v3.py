"""One-shot DLC trigger v3.

Phases (with patient waits for popups + CM loop processing):
  Phase 1 — set conditions + bridge CharacterGen, wait 90s
  Phase 2 — coc ICArcaneUniversity (Orrery), wait 60s
  Phase 3 — coc ICElvenGardensDistrict (Mehrunes), wait 60s
  Phase 4 — coc back to safe exterior, final probe

Each phase prints what's at stage 0 vs stage 10 vs stage advanced. Pause
between phases gives the engine time to fire UI popups and for you to
click through them.
"""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore

PHASE_WAIT = 90
TELEPORT_WAIT = 60

SETUP = [
    ("setstage CharacterGen 88",                "vanilla CharacterGen -> 88 (alt-start bridge)"),
    ("Player.SetLevel 25",                       "level 25"),
    ("Player.AddItem Gold001 5000",              "gold 5000"),
    ("ModPCFame 25",                             "fame +25"),
    ("ModPCInfamy 10",                           "infamy +10"),
    ("Player.SetFactionRank FightersGuild 3",    "FG rank 3"),
    ("Player.SetFactionRank MagesGuild 3",       "MG rank 3"),
    ("Player.SetFactionRank ThievesGuild 3",     "TG rank 3"),
    ("Player.SetFactionRank DarkBrotherhood 3",  "DB rank 3"),
    # Combat (Armorer Athletics Blade Block Blunt HandToHand HeavyArmor) -> 200
    ("Player.SetAV Armorer 30",     "Armorer 30"),
    ("Player.SetAV Athletics 30",   "Athletics 30"),
    ("Player.SetAV Blade 40",       "Blade 40"),
    ("Player.SetAV Block 30",       "Block 30"),
    ("Player.SetAV Blunt 30",       "Blunt 30"),
    ("Player.SetAV HandToHand 20",  "HandToHand 20"),
    ("Player.SetAV HeavyArmor 20",  "HeavyArmor 20"),
    # Magic -> 200
    ("Player.SetAV Alchemy 20",     "Alchemy 20"),
    ("Player.SetAV Alteration 30",  "Alteration 30"),
    ("Player.SetAV Conjuration 20", "Conjuration 20"),
    ("Player.SetAV Destruction 40", "Destruction 40"),
    ("Player.SetAV Illusion 30",    "Illusion 30"),
    ("Player.SetAV Mysticism 30",   "Mysticism 30"),
    ("Player.SetAV Restoration 30", "Restoration 30"),
    # Stealth -> 200
    ("Player.SetAV Acrobatics 30",  "Acrobatics 30"),
    ("Player.SetAV LightArmor 30",  "LightArmor 30"),
    ("Player.SetAV Marksman 20",    "Marksman 20"),
    ("Player.SetAV Mercantile 30",  "Mercantile 30"),
    ("Player.SetAV Security 30",    "Security 30"),
    ("Player.SetAV Sneak 30",       "Sneak 30"),
    ("Player.SetAV Speechcraft 30", "Speechcraft 30"),
]

DLC_QUESTS = [
    "DLCHorseArmor", "DLCOrrery", "DLCBattlehornCastle", "DLCFrostcragSpire",
    "DLC06ThievesDen", "DLCDeepscorn", "DL9MehrunesQuest", "NDPilgrim", "SE01Door",
]


async def stages(drv, label):
    print(f"\n=== {label} ===")
    for q in DLC_QUESTS:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(out)}")


async def started(drv, label):
    print(f"\n=== Started flags {label} ===")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if 'Started' in ln or 'Number' in ln:
            print(f"  {ln}")


async def run_batch(drv, batch):
    for cmd, desc in batch:
        out = await drv.query(cmd)
        msg = " | ".join(out) if out else "ok"
        bad = "not found" in msg or "Compiled script not saved" in msg
        prefix = "!" if bad else "+"
        print(f"  {prefix} {desc:42} | {msg if bad else 'ok'}")


async def wait_with_progress(seconds, label):
    print(f"\n--- WAITING {seconds}s — {label} ---")
    print("    (click through any popups in-game; I'll resume after)")
    for elapsed in range(0, seconds, 15):
        await asyncio.sleep(15)
        print(f"    ...{elapsed + 15}s elapsed")


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED")
        return 1

    await stages(drv, "BEFORE")

    print("\n=== PHASE 1: apply all stat/faction/skill conditions ===")
    await run_batch(drv, SETUP)
    await wait_with_progress(PHASE_WAIT, "phase 1: stat/faction-gated DLCs to fire")
    await stages(drv, "AFTER PHASE 1")
    await started(drv, "after phase 1")

    print("\n=== PHASE 2: coc ICArcaneUniversity for Orrery ===")
    await run_batch(drv, [("coc ICArcaneUniversity", "ICArcaneUniversity (Orrery condition)")])
    await wait_with_progress(TELEPORT_WAIT, "phase 2: Orrery delivery + popup")
    await stages(drv, "AFTER PHASE 2")

    print("\n=== PHASE 3: coc ICElvenGardensDistrict for Mehrunes ===")
    await run_batch(drv, [("coc ICElvenGardensDistrict", "IC Elven Gardens (Mehrunes condition)")])
    await wait_with_progress(TELEPORT_WAIT, "phase 3: Mehrunes delivery + popup")
    await stages(drv, "AFTER PHASE 3")

    print("\n=== PHASE 4: return to IC Market District ===")
    await run_batch(drv, [("coc ICMarketDistrict01", "back to IC Market District")])
    await asyncio.sleep(10)

    await stages(drv, "FINAL")
    await started(drv, "FINAL")

    print("\n=== MQ check (informational) ===")
    for q in ["MQ00", "MQ01", "MQ02", "MQ03", "MQ04"]:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:8} -> {' | '.join(out)}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
