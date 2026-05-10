"""Configure the player as a level-20 warrior via G5.

Sets attributes (END/STR primary), skills (combat majors), level, and health
on the running Oblivion.exe via the G5 RPC plugin (port 13580).

Order matters: attributes are set BEFORE level so any retroactive END-based
health scaling sees the high value. Health is then explicitly set since
`player.setlevel` doesn't recalculate it.

Usage:
    python g5_warrior_setup.py
"""
from __future__ import annotations
import asyncio
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / "plugin_detector" / "g5"))
from g5.protocol import Protocol  # type: ignore


ATTRIBUTES = [
    ("strength",     80),
    ("endurance",    80),
    ("agility",      50),
    ("speed",        50),
    ("willpower",    40),
    ("intelligence", 40),
    ("personality",  40),
    ("luck",         50),
]

# Warrior class majors: Armorer, Athletics, Blade, Block, Blunt, HandToHand, HeavyArmor
SKILLS = [
    # combat majors
    ("Blade",       70),
    ("Block",       65),
    ("HeavyArmor",  70),
    ("Armorer",     55),
    ("Athletics",   60),
    ("Blunt",       50),
    ("HandToHand",  45),
    # support minors
    ("Marksman",    35),
    ("LightArmor",  25),
    ("Acrobatics",  30),
    ("Restoration", 25),
    ("Security",    25),
    ("Mercantile",  25),
    ("Speechcraft", 20),
    ("Sneak",       20),
    ("Alchemy",     20),
    ("Alteration",  15),
    ("Conjuration", 10),
    ("Destruction", 10),
    ("Illusion",    10),
    ("Mysticism",   10),
]

LEVEL = 20
HEALTH = 312  # base 160 (END*2) + 19*8 (END/10 per level); engine may override higher


async def main() -> None:
    p = Protocol("127.0.0.1", 13580)
    await p.connect()

    async def exec_(line: str) -> None:
        r = await p.send_command({"cmd": "exec", "line": line})
        print(f"> {line}")
        for ln in r.get("lines", []):
            # Filter ambient script chatter; keep GetActorValue / GetLevel echoes.
            if ">>" in ln and ("GetActorValue" in ln or "GetLevel" in ln):
                print(f"  {ln}")
        if not r.get("ok"):
            print(f"  !! resp={r}")

    for av, val in ATTRIBUTES:
        await exec_(f"player.setav {av} {val}")
    for sk, val in SKILLS:
        await exec_(f"player.setav {sk} {val}")
    await exec_(f"player.setlevel {LEVEL}")
    await exec_(f"player.setav health {HEALTH}")

    print("--- verify ---")
    for av, _ in ATTRIBUTES:
        await exec_(f"player.getav {av}")
    for sk, _ in SKILLS:
        await exec_(f"player.getav {sk}")
    await exec_("player.getlevel")
    await exec_("player.getav health")

    await p.close()


if __name__ == "__main__":
    asyncio.run(main())
