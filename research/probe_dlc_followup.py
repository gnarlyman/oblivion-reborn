"""Wait for CM script to process all DLCs, then verify."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    # Verify player state actually applied
    print("=== Player state check ===")
    for q in ["Player.GetLevel", "Player.GetItemCount Gold001",
              "Player.GetPCFame", "Player.GetPCInfamy",
              "Player.GetFactionRank FightersGuild",
              "Player.GetFactionRank MagesGuild",
              "Player.GetFactionRank ThievesGuild",
              "Player.GetFactionRank DarkBrotherhood",
              "Player.GetAV Blade", "Player.GetAV Destruction",
              "Player.GetAV Sneak"]:
        out = await drv.query(q)
        print(f"  {q:42} -> {' | '.join(out)}")

    print("\n=== waiting 30s for gamemode loop ===")
    await asyncio.sleep(30)

    print("\n=== sqv DelayDLCStartCM (full) ===")
    out = await drv.query("sqv DelayDLCStartCM")
    for ln in out:
        if any(s in ln for s in ['Started', 'Number', 'StartDLC',
                                  'Continue', 'WaitOne', 'SkillTotal',
                                  'state', 'stage', 'Running']):
            print(f"  {ln}")

    print("\n=== DLC stages ===")
    for q in ["DLCHorseArmor", "DLCOrrery", "DLCBattlehornCastle",
              "DLCFrostcragSpire", "DLC06ThievesDen", "DLCDeepscorn",
              "DL9MehrunesQuest", "NDPilgrim", "SE01Door"]:
        lines = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(lines)}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
