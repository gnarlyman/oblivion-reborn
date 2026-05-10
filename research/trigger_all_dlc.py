"""One-shot DLC trigger. Run AFTER loading a fresh game post-chargen.
Touches NOTHING related to the main quest (MQ00..MQ04 left alone).

What it does:
  1. setstage CharacterGen 88     -> bridge for alt-start so per-DLC scripts
                                     can self-advance to stage 10 after the
                                     CM script's StartQuest call
  2. Bumps player level/gold/fame/infamy
  3. Sets faction ranks (FG/MG/TG/DB) to 3
  4. Sets skill base values so each spec totals >= 200
  5. Teleports player to Cheydinhal (Mehrunes location check), waits, then
     teleports back to a generic exterior

Then waits ~30s for the DelayDLCStartCM script to walk every DLC's check
loop, and prints the result.
"""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


# Skills per script's GetBaseActorValue sums:
#   Combat (Battlehorn): Armorer Athletics Blade Block Blunt HandToHand HeavyArmor
#   Magic  (Frostcrag):  Alchemy Alteration Conjuration Destruction Illusion Mysticism Restoration
#   Stealth (ThievesDen): Acrobatics LightArmor Marksman Mercantile Security Sneak Speechcraft
SETUP = [
    # === bridge for alt-start ===
    ("setstage CharacterGen 88",                "vanilla CharacterGen -> 88"),

    # === player baseline ===
    ("Player.SetLevel 25",                       "level 25"),
    ("Player.AddItem Gold001 5000",              "gold 5000"),
    ("ModPCFame 25",                             "fame +25"),
    ("ModPCInfamy 10",                           "infamy +10"),

    # === factions ===
    ("Player.SetFactionRank FightersGuild 3",    "FG rank 3"),
    ("Player.SetFactionRank MagesGuild 3",       "MG rank 3"),
    ("Player.SetFactionRank ThievesGuild 3",     "TG rank 3"),
    ("Player.SetFactionRank DarkBrotherhood 3",  "DB rank 3"),

    # === combat skills (sum 7 = 200) ===
    ("Player.SetAV Armorer 30",     "Armorer 30"),
    ("Player.SetAV Athletics 30",   "Athletics 30"),
    ("Player.SetAV Blade 40",       "Blade 40"),
    ("Player.SetAV Block 30",       "Block 30"),
    ("Player.SetAV Blunt 30",       "Blunt 30"),
    ("Player.SetAV HandToHand 20",  "HandToHand 20"),
    ("Player.SetAV HeavyArmor 20",  "HeavyArmor 20"),

    # === magic skills (sum 7 = 200) ===
    ("Player.SetAV Alchemy 20",     "Alchemy 20"),
    ("Player.SetAV Alteration 30",  "Alteration 30"),
    ("Player.SetAV Conjuration 20", "Conjuration 20"),
    ("Player.SetAV Destruction 40", "Destruction 40"),
    ("Player.SetAV Illusion 30",    "Illusion 30"),
    ("Player.SetAV Mysticism 30",   "Mysticism 30"),
    ("Player.SetAV Restoration 30", "Restoration 30"),

    # === stealth skills (sum 7 = 200) ===
    ("Player.SetAV Acrobatics 30",  "Acrobatics 30"),
    ("Player.SetAV LightArmor 30",  "LightArmor 30"),
    ("Player.SetAV Marksman 20",    "Marksman 20"),
    ("Player.SetAV Mercantile 30",  "Mercantile 30"),
    ("Player.SetAV Security 30",    "Security 30"),
    ("Player.SetAV Sneak 30",       "Sneak 30"),
    ("Player.SetAV Speechcraft 30", "Speechcraft 30"),
]

# Brief Cheydinhal visit to satisfy Mehrunes location check, then back outdoors.
TELEPORT = [
    ("coc CheydinhalDrellesPracticalAlchemy",  "coc to a Cheydinhal interior"),
]
RETURN = [
    ("coc ICMarketDistrict01",                  "coc to IC Market District (exterior)"),
]

DLC_QUESTS = [
    "DLCHorseArmor", "DLCOrrery", "DLCBattlehornCastle", "DLCFrostcragSpire",
    "DLC06ThievesDen", "DLCDeepscorn", "DL9MehrunesQuest", "NDPilgrim", "SE01Door",
]
MQ_QUESTS = ["MQ00", "MQ01", "MQ02", "MQ03", "MQ04"]


async def stages(drv, label):
    print(f"\n=== {label} ===")
    for q in DLC_QUESTS:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(out)}")


async def started_flags(drv, label):
    print(f"\n=== Started flags {label} ===")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if ('Started' in ln) or ('Number' in ln):
            print(f"  {ln}")


async def mq_health(drv, label):
    print(f"\n=== MQ stages {label} (must stay near 0) ===")
    for q in MQ_QUESTS:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:8} -> {' | '.join(out)}")


async def run_batch(drv, batch):
    for cmd, desc in batch:
        out = await drv.query(cmd)
        msg = " | ".join(out) if out else "ok"
        bad = "not found" in msg or "Compiled script not saved" in msg
        prefix = "!" if bad else "+"
        print(f"  {prefix} {desc:40} | {msg if bad else 'ok'}")


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()
    if not await drv.ping():
        print("PING FAILED")
        return 1

    await stages(drv, "BEFORE")
    await mq_health(drv, "BEFORE")

    print("\n=== APPLY conditions ===")
    await run_batch(drv, SETUP)

    print("\n--- wait 30s for CM to process non-location DLCs ---")
    await asyncio.sleep(30)
    await stages(drv, "AFTER non-location apply")
    await started_flags(drv, "after non-location")

    print("\n=== TELEPORT to Cheydinhal for Mehrunes location ===")
    await run_batch(drv, TELEPORT)
    await asyncio.sleep(5)
    await stages(drv, "AFTER Cheydinhal teleport")

    print("\n=== TELEPORT back to IC ===")
    await run_batch(drv, RETURN)
    await asyncio.sleep(5)

    await stages(drv, "FINAL")
    await started_flags(drv, "FINAL")
    await mq_health(drv, "FINAL")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
