"""Boost player to satisfy every Delay DLC Start condition, then verify
each DLC fires.

Thresholds (from live DelayDLCStartCM vars on this profile):
  Shivering Isles : level >= 15
  Knights         : level >= 10, fame - infamy >= 15
  Battlehorn      : FG rank >= 3, sum 7 combat skills >= 200
  Frostcrag       : MG rank >= 3, sum 7 magic skills >= 200
  Thieves Den     : TG rank >= 3, sum 7 stealth skills >= 200
  Deepscorn       : DB rank >= 3, infamy >= 10
  Horse Armor     : level >= 4, gold >= 2000, fame >= 4
  Mehrunes Razor  : level >= 10, location-check ON
  Orrery          : MG rank >= 1
"""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


SETUP = [
    # Level + base resources
    ("setlevel 25",                                 "Set player level 25"),
    ("Player.AddItem Gold001 5000",                 "Add 5000 gold"),
    ("ModPCFame 25",                                "Add fame 25 (Knights needs fame-infamy>=15)"),
    ("ModPCInfamy 10",                              "Add infamy 10 (Deepscorn>=10, KotN net=15)"),

    # Faction ranks (Setpcrank <FactionEDID> <rank>)
    ("Player.SetFactionRank FightersGuild 3",       "Fighters Guild rank 3 (Battlehorn)"),
    ("Player.SetFactionRank MagesGuild 3",          "Mages Guild rank 3 (Frostcrag/Orrery)"),
    ("Player.SetFactionRank ThievesGuild 3",        "Thieves Guild rank 3 (Thieves Den)"),
    ("Player.SetFactionRank DarkBrotherhood 3",     "Dark Brotherhood rank 3 (Deepscorn)"),

    # Combat skills sum 200 (Blade, Blunt, HandToHand, Block, Armorer, HeavyArmor, Marksman)
    ("Player.SetAV Blade 50",     "Combat: Blade 50"),
    ("Player.SetAV Blunt 50",     "Combat: Blunt 50"),
    ("Player.SetAV HandToHand 30","Combat: HandToHand 30"),
    ("Player.SetAV Block 30",     "Combat: Block 30"),
    ("Player.SetAV Armorer 20",   "Combat: Armorer 20"),
    ("Player.SetAV HeavyArmor 10","Combat: HeavyArmor 10"),
    ("Player.SetAV Marksman 10",  "Combat: Marksman 10  (sum=200)"),

    # Magic skills sum 200 (Destruction, Restoration, Alteration, Illusion, Conjuration, Mysticism, Alchemy)
    ("Player.SetAV Destruction 50","Magic: Destruction 50"),
    ("Player.SetAV Restoration 50","Magic: Restoration 50"),
    ("Player.SetAV Alteration 30", "Magic: Alteration 30"),
    ("Player.SetAV Illusion 30",   "Magic: Illusion 30"),
    ("Player.SetAV Conjuration 20","Magic: Conjuration 20"),
    ("Player.SetAV Mysticism 10",  "Magic: Mysticism 10"),
    ("Player.SetAV Alchemy 10",    "Magic: Alchemy 10  (sum=200)"),

    # Stealth skills sum 200 (Security, Sneak, Acrobatics, LightArmor, Marksman*, Mercantile, Speechcraft, Athletics, Illusion*)
    # Stealth specialization vanilla: Security, Sneak, Acrobatics, LightArmor, Mercantile, Speechcraft, Marksman.
    # Marksman already 10 above, leave as-is.
    ("Player.SetAV Security 50",    "Stealth: Security 50"),
    ("Player.SetAV Sneak 50",       "Stealth: Sneak 50"),
    ("Player.SetAV Acrobatics 30",  "Stealth: Acrobatics 30"),
    ("Player.SetAV LightArmor 30",  "Stealth: LightArmor 30"),
    ("Player.SetAV Mercantile 20",  "Stealth: Mercantile 20"),
    ("Player.SetAV Speechcraft 10", "Stealth: Speechcraft 10  (sum incl Marksman=200)"),
]


PROBE_QUESTS = [
    "DLCHorseArmor",
    "DLCOrrery",
    "DLCBattlehornCastle",
    "DLCFrostcragSpire",
    "DLC06ThievesDen",
    "DLCDeepscorn",
    "DL9MehrunesQuest",
    "NDPilgrim",        # Knights (delayer drives KotN start via NDPilgrim)
    "SE01Door",         # Shivering Isles door enable
]


async def probe(drv, label=""):
    print(f"\n=== STAGES {label} ===")
    for q in PROBE_QUESTS:
        lines = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(lines)}")


async def probe_started_flags(drv, label=""):
    print(f"\n=== DelayDLCStartCM Started flags {label} ===")
    out = await drv.query("sqv DelayDLCStartCM")
    for ln in out:
        if 'Started' in ln or 'NumberDLCs' in ln or 'StartDLC' in ln:
            print(f"  {ln}")


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED")
        return 1

    await probe(drv, "(before)")
    await probe_started_flags(drv, "(before)")

    print("\n=== APPLYING SETUP ===")
    for cmd, desc in SETUP:
        out = await drv.query(cmd)
        # most setters print nothing; show errors only
        msg = " | ".join(out) if out else "ok"
        if "not found" in msg or "Compiled script not saved" in msg:
            print(f"  ! {desc:42} | {msg}")
        else:
            print(f"  + {desc}")

    print("\n--- waiting 5s for gamemode ticks to process all conditions ---")
    await asyncio.sleep(5)

    await probe(drv, "(after setup, +5s)")
    await probe_started_flags(drv, "(after)")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
