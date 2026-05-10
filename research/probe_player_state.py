"""Probe player state for DLC condition planning."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED — game not running or G5 not loaded")
        return 1

    print("=== Player baseline ===")
    for q in [
        "Player.GetLevel",
        "Player.GetPCFame",
        "Player.GetPCInfamy",
        "Player.GetInWorldspace Tamriel",
        "Player.IsInInterior",
        "Player.GetPCMiscStat 8",   # locks picked? approximate
        "GetGameDaysPassed",
    ]:
        lines = await drv.query(q)
        print(f"  {q:38} -> {' | '.join(lines) if lines else '(empty)'}")

    print("\n=== Faction ranks (need >= 3 each for the gated DLCs) ===")
    for fac, label in [
        ("FightersGuild", "Fighters (Battlehorn)"),
        ("MagesGuild",    "Mages    (Frostcrag)"),
        ("ThievesGuild",  "Thieves  (Thieves Den)"),
    ]:
        lines = await drv.query(f"Player.GetFactionRank {fac}")
        print(f"  {label:30} -> {' | '.join(lines)}")

    print("\n=== Current DLC quest stages ===")
    for q in [
        "DLCBattlehornCastle",
        "DLC06ThievesDen",
        "DLCDeepscorn",
        "DLCFrostcragSpire",
        "DLCHorseArmor",
        "DLCOrrery",
        "DL9MehrunesQuest",
        "DLCSpellTomes",
        "NDPilgrim",
        "SE01Door",
    ]:
        lines = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(lines)}")

    print("\n=== Delay DLC Start CM quest internal vars ===")
    for line in await drv.query("sqv DelayDLCStartCM"):
        print(f"  {line}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
