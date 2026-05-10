"""Trigger every DLC condition: fix Athletics + Player.SetLevel + poke
vanilla CharacterGen to 88 (so per-DLC scripts can self-advance past 0)."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


SETUP = [
    # CRITICAL: poke vanilla chargen to 88 so per-DLC scripts will SetStage 10
    ("setstage CharacterGen 88",                "vanilla CharacterGen -> 88 (alt-start bridge)"),

    # Player.SetLevel works (setlevel without prefix didn't on this build)
    ("Player.SetLevel 25",                       "Set player level 25"),

    # Athletics for Battlehorn combat sum
    ("Player.SetAV Athletics 30",                "Athletics 30 -> combat sum 225"),

    # Mehrunes location check ON: travel to Cheydinhal (the script reads "in
    # Cheydinhal worldspace OR within 7000 of map marker"). Easy: coc to a
    # Cheydinhal exterior cell so we satisfy.
    # We'll skip this for now since location-coc disrupts world state; just
    # observe Mehrunes stays at 0 because of location check.
]

PROBE = [
    "DLCHorseArmor", "DLCOrrery", "DLCBattlehornCastle",
    "DLCFrostcragSpire", "DLC06ThievesDen", "DLCDeepscorn",
    "DL9MehrunesQuest", "NDPilgrim", "SE01Door",
]


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    print("=== APPLY ===")
    for cmd, desc in SETUP:
        out = await drv.query(cmd)
        msg = " | ".join(out) if out else "ok"
        print(f"  + {desc:55} | {msg}")

    print("\n--- waiting 5s ---")
    await asyncio.sleep(5)

    print("\n=== Player.GetLevel + CharacterGen ===")
    for q in ["Player.GetLevel", "getstage CharacterGen", "Player.GetBaseActorValue Athletics"]:
        out = await drv.query(q)
        print(f"  {q:42} -> {' | '.join(out)}")

    print("\n=== sqv DelayDLCStartCM Started flags ===")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if 'Started' in ln or 'Number' in ln:
            print(f"  {ln}")

    print("\n=== DLC stages ===")
    for q in PROBE:
        out = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(out)}")

    print("\n=== sqv each DLC quest (running?) ===")
    for q in ["DLCBattlehornCastle", "DLCFrostcragSpire", "DLC06ThievesDen",
              "DLCHorseArmor", "DLCDeepscorn"]:
        out = await drv.query(f"sqv {q}")
        for ln in out:
            if any(s in ln for s in ['Running', 'Current stage', 'Priority']):
                print(f"  [{q}] {ln.strip()}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
