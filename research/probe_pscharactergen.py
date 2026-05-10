"""Inspect PSCharacterGen state + the PSMQD chargen handler."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED")
        return 1

    print("=== sqv PSCharacterGen ===")
    for line in await drv.query("sqv PSCharacterGen"):
        print(f"  {line}")

    # Check vanilla CharacterGen too
    print("\n=== sqv CharacterGen ===")
    for line in await drv.query("sqv CharacterGen"):
        print(f"  {line}")

    # Check what PSMainQuestDelayer's main quest does
    print("\n=== sqv PSMainQuestDelayer ===")
    for line in await drv.query("sqv PSMainQuestDelayer"):
        print(f"  {line}")

    # See if there's a script we should examine
    print("\n=== getstage results across delay quests ===")
    for q in ["PSCharacterGen", "PSMainQuestDelayer", "CharacterGen", "MQ00",
              "MS04CourierStartUpQuest", "CharGenMain", "CharGen",
              "PSAdditionalQuests", "PSDelayDLCStart"]:
        lines = await drv.query(f"getstage {q}")
        print(f"  {q:35} -> {' | '.join(lines) if lines else '(empty)'}")

    # Check if player is in prison cell still
    print("\n=== player location ===")
    for line in await drv.query("getincell"):
        print(f"  {line}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
