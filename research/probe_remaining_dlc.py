"""Probe MQ (must NOT trigger) + remaining DLC details + sqv each holdout."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    print("=== Main Quest health check (these MUST stay near 0) ===")
    for q in ["MQ00", "MQ01", "MQ02", "MQ03", "MQ04", "MQKvatch",
              "PSMainQuestDelayer", "CharacterGen", "PSCharacterGen"]:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:25} -> {' | '.join(out)}")

    print("\n=== Player location (worldspace) ===")
    for q in ["Player.GetInWorldspace Tamriel",
              "Player.GetInWorldspace ChorrolWorld",
              "Player.GetInWorldspace BrumaWorld",
              "Player.GetInWorldspace BravilWorld",
              "Player.GetInWorldspace AnvilWorld",
              "Player.GetInWorldspace CheydinhalWorld",
              "Player.IsInInterior"]:
        out = await drv.query(q)
        print(f"  {q:46} -> {' | '.join(out)}")

    print("\n=== Holdout DLCs: full sqv ===")
    for q in ["DLCFrostcragSpire", "DLCOrrery", "DL9MehrunesQuest", "SE01Door"]:
        print(f"\n--- {q} ---")
        for ln in await drv.query(f"sqv {q}"):
            if any(s in ln for s in ['Running', 'stage', 'Priority', '->']):
                print(f"  {ln}")

    print("\n=== DelayDLCStartCM: ContinueProcessing + remaining flags ===")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if any(s in ln for s in ['Continue', 'Wait', 'StartDLC', 'Number',
                                  'Orrery', 'Mehrunes', 'Frostcrag', 'Shivering']):
            print(f"  {ln}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
