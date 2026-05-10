"""Probe DLC quest stages live via G5 OBSE plugin.

Usage:
    cd D:\\Modlists\\Reborn\\research
    python -m plugin_detector.g5.probe_dlc_stages

Or simpler, run from this dir if g5 is on the path.
"""
import asyncio
import sys
from pathlib import Path

ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))

from g5.driver import G5Driver  # type: ignore


QUESTS = [
    # (label, EDID)
    ("CharacterGen (vanilla chargen quest)",     "CharacterGen"),
    ("PSCharacterGen (PSMQD chargen quest)",     "PSCharacterGen"),
    ("DLCBattlehornCastle",                      "DLCBattlehornCastle"),
    ("DLC06ThievesDen",                          "DLC06ThievesDen"),
    ("DLCDeepscorn (Vile Lair)",                 "DLCDeepscorn"),
    ("DLCFrostcragSpire",                        "DLCFrostcragSpire"),
    ("DLCHorseArmor",                            "DLCHorseArmor"),
    ("DLCOrrery",                                "DLCOrrery"),
    ("DLC09 (Mehrunes Razor)",                   "DLC09"),
    ("DLCSpellTomes",                            "DLCSpellTomes"),
    ("Knights NDPilgrim (KotN start)",           "NDPilgrim"),
]


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED — game not running or G5 not loaded")
        return 1
    print(f"{'Quest EDID':45} | stage")
    print('-' * 75)
    for label, edid in QUESTS:
        lines = await drv.query(f"getstage {edid}")
        # Console output is typically "Current stage: 0.00" or similar
        text = " | ".join(lines) if lines else "(no output)"
        print(f"{label:45} | {text}")

    print("\n=== Quest variable dumps for the four DLCs that fired ===")
    for edid in ["DLCBattlehornCastle", "DLC06ThievesDen", "DLCDeepscorn", "DLCFrostcragSpire", "DLCHorseArmor", "DLC09"]:
        print(f"\n--- sqv {edid} ---")
        for line in await drv.query(f"sqv {edid}"):
            print(f"  {line}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
