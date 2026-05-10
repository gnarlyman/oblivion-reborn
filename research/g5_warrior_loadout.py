"""Add and equip a level-20 warrior loadout via G5.

Vanilla Oblivion.esm FormIDs (high byte 00, valid in any load order):
- Dwarven heavy armor set (cuirass/helmet/greaves/boots/gauntlets/shield)
- Akaviri Katana (Blade)
- Dwarven Bow + 100 Steel Arrows (Marksman backup)
- 10x Strong Potion of Healing
- 10x Strong Potion of Respite (fatigue)

Usage:
    python g5_warrior_loadout.py
"""
from __future__ import annotations
import asyncio
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / "plugin_detector" / "g5"))
from g5.protocol import Protocol  # type: ignore


# (label, FormID, count, equip)
ITEMS = [
    ("DwarvenCuirass",       0x00036349, 1,   True),
    ("DwarvenHelmet",        0x00036345, 1,   True),
    ("DwarvenGreaves",       0x00036348, 1,   True),
    ("DwarvenBoots",         0x00036347, 1,   True),
    ("DwarvenGauntlets",     0x00036346, 1,   True),
    ("DwarvenShield",        0x0003634A, 1,   True),
    ("AkaviriKatana",        0x00024DCA, 1,   True),
    ("DwarvenBow",           0x00035DCE, 1,   False),
    ("SteelArrow",           0x000229C1, 100, False),
    ("PotionRestoreHealthS", 0x00009311, 10,  False),
    ("PotionRestoreFatigueS",0x0000930F, 10,  False),
]


async def main() -> None:
    p = Protocol("127.0.0.1", 13580)
    await p.connect()

    async def exec_(line: str) -> None:
        r = await p.send_command({"cmd": "exec", "line": line})
        print(f"> {line}")
        if not r.get("ok"):
            print(f"  !! resp={r}")

    for label, fid, count, _ in ITEMS:
        await exec_(f"player.additem {fid:08X} {count}")
    for label, fid, _, equip in ITEMS:
        if equip:
            await exec_(f"player.equipitem {fid:08X}")

    await p.close()


if __name__ == "__main__":
    asyncio.run(main())
