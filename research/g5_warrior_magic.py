"""Bump magic stats and add a curated spellbook via G5.

Stat bump: INT/WIL 40→60; magic schools 10-15 → 40-50 (mostly Journeyman).
Spellbook: 22 spells across 6 schools, mix of vanilla + DLC + mods
(DLCSpellTomes, Av Latta Magicka, GPSunSpells, MagicRevisedMysticism,
SupremeMagickaLite).

Mod FormIDs are pre-resolved against Reborn-OOO's active load order. If you
re-order plugins, regenerate FormIDs via find_spells.py first.

Usage:
    python g5_warrior_magic.py
"""
from __future__ import annotations
import asyncio
import sys
import struct
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / "plugin_detector" / "g5"))
sys.path.insert(0, str(Path(__file__).resolve().parent))
from g5.protocol import Protocol  # type: ignore
from find_spells import parse_active, find_plugin_path, MODLIST
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin


# Resolve runtime FormIDs from (plugin, local_fid) at runtime so re-ordering
# the load order doesn't silently break.
def build_lo_index() -> dict[str, int]:
    active = parse_active(MODLIST / "profiles" / "Reborn-OOO" / "plugins.txt")
    esms = [p for p in active if p.lower().endswith(".esm")]
    esps = [p for p in active if not p.lower().endswith(".esm")]
    return {n.lower(): i for i, n in enumerate(esms + esps)}


def runtime_fid(plugin: str, local_fid: int, lo: dict[str, int]) -> int:
    path = find_plugin_path(plugin)
    if path is None:
        raise RuntimeError(f"plugin not found: {plugin}")
    _, masters = load_plugin(path)
    high = local_fid >> 24
    body = local_fid & 0x00FFFFFF
    if high < len(masters):
        rt_high = lo[masters[high].lower()]
    else:
        rt_high = lo[plugin.lower()]
    return (rt_high << 24) | body


# (plugin, local_fid, school, label)
SPELLS = [
    # Restoration
    ("Oblivion.esm", 0x00027442, "Rest", "Heal Minor Wounds"),
    ("Oblivion.esm", 0x000A9822, "Rest", "Heal Major Wounds"),
    ("Oblivion.esm", 0x0006D7AF, "Rest", "Convalescence (heal target)"),
    ("Oblivion.esm", 0x0003C3FC, "Rest", "Cure Poison"),
    # Destruction (vanilla + DLC + mods)
    ("Oblivion.esm", 0x000A97DF, "Dest", "Flare (fire)"),
    ("Oblivion.esm", 0x000A97EA, "Dest", "Snowball (frost)"),
    ("Oblivion.esm", 0x000A97F3, "Dest", "Spark (shock)"),
    ("DLCSpellTomes.esp", 0x010011F4, "Dest", "Searing Flare"),
    ("GPSunSpells.esp", 0x02000EFE, "Dest", "Sunfire (sun damage)"),
    ("GPSunSpells.esp", 0x02000F0D, "Dest", "Radiant Aura (sun aura novice)"),
    ("Av Latta Magicka.esm", 0x010530D5, "Dest", "Discounted Flash Bolt"),
    # Alteration
    ("Av Latta Magicka.esm", 0x01062072, "Alt",  "Flash (mod)"),
    ("Oblivion.esm", 0x000A97A7, "Alt",  "Protect (Shield)"),
    ("Oblivion.esm", 0x000A97A8, "Alt",  "Defend (Shield apprentice)"),
    ("Oblivion.esm", 0x000AA06C, "Alt",  "Water Breathing"),
    # Illusion
    ("Oblivion.esm", 0x000A981B, "Ill",  "Touch of Frenzy"),
    ("Oblivion.esm", 0x000A97C9, "Ill",  "Soothing Touch (Calm)"),
    ("Av Latta Magicka.esm", 0x010A0609, "Ill",  "Berserk (mod Frenzy)"),
    ("DLCSpellTomes.esp", 0x01001212, "Ill",  "Blink (Invisibility)"),
    # Mysticism
    ("MagicRevisedMysticism.esp", 0x000A97DC, "Mys", "Minor Life Detection"),
    ("DLCSpellTomes.esp", 0x01001214, "Mys", "Soul Grasp"),
    ("MagicRevisedMysticism.esp", 0x01003865, "Mys", "Fetch (Telekinesis)"),
    ("Oblivion.esm", 0x0008D1E9, "Mys", "Minor Dispel"),
    # Conjuration
    ("Oblivion.esm", 0x000AA068, "Con", "Turn Undead"),
    ("Oblivion.esm", 0x000A97B7, "Con", "Bound Dagger"),
    ("Oblivion.esm", 0x000AA05F, "Con", "Summon Skeleton"),
    ("SupremeMagickaLite.esp", 0x01016BB9, "Con", "Summon Familiar (mod)"),
]


# Stat bump for hybrid warrior-mage
ATTRS = [("intelligence", 60), ("willpower", 60)]
SCHOOLS = [
    ("Restoration", 50),
    ("Destruction", 50),
    ("Alteration",  50),
    ("Illusion",    50),
    ("Mysticism",   40),
    ("Conjuration", 50),
]


async def main() -> None:
    lo = build_lo_index()

    resolved: list[tuple[int, str, str]] = []  # (rt_fid, school, label)
    for plug, local, sch, label in SPELLS:
        rt = runtime_fid(plug, local, lo)
        resolved.append((rt, sch, label))

    p = Protocol("127.0.0.1", 13580)
    await p.connect()

    async def exec_(line: str) -> None:
        r = await p.send_command({"cmd": "exec", "line": line})
        print(f"> {line}")
        if not r.get("ok"):
            print(f"  !! resp={r}")

    # 1. Stat bumps
    for av, val in ATTRS:
        await exec_(f"player.setav {av} {val}")
    for sk, val in SCHOOLS:
        await exec_(f"player.setav {sk} {val}")

    # 2. Add spells
    for fid, sch, label in resolved:
        print(f"  [{sch}] {label}")
        await exec_(f"player.addspell {fid:08X}")

    # 3. Refill magicka so they can cast immediately
    await exec_("player.setav magicka 200")

    await p.close()


if __name__ == "__main__":
    asyncio.run(main())
