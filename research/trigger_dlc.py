"""One-shot DLC trigger. Sequenced cocs for location-gated DLCs."""
import asyncio, sys, time
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


SETUP = [
    "setstage CharacterGen 88",                  # alt-start chargen bridge
    "Player.SetLevel 25",
    "Player.AddItem Gold001 5000",
    "ModPCFame 25",
    "ModPCInfamy 10",
    "Player.SetFactionRank FightersGuild 3",
    "Player.SetFactionRank MagesGuild 3",
    "Player.SetFactionRank ThievesGuild 3",
    "Player.SetFactionRank DarkBrotherhood 3",
    # Combat sum 200
    "Player.SetAV Armorer 30", "Player.SetAV Athletics 30", "Player.SetAV Blade 40",
    "Player.SetAV Block 30", "Player.SetAV Blunt 30", "Player.SetAV HandToHand 20",
    "Player.SetAV HeavyArmor 20",
    # Magic sum 200
    "Player.SetAV Alchemy 20", "Player.SetAV Alteration 30", "Player.SetAV Conjuration 20",
    "Player.SetAV Destruction 40", "Player.SetAV Illusion 30", "Player.SetAV Mysticism 30",
    "Player.SetAV Restoration 30",
    # Stealth sum 200
    "Player.SetAV Acrobatics 30", "Player.SetAV LightArmor 30", "Player.SetAV Marksman 20",
    "Player.SetAV Mercantile 30", "Player.SetAV Security 30", "Player.SetAV Sneak 30",
    "Player.SetAV Speechcraft 30",
]

DLC_QUESTS = ["DLCHorseArmor","DLCOrrery","DLCBattlehornCastle","DLCFrostcragSpire",
              "DLC06ThievesDen","DLCDeepscorn","DL9MehrunesQuest","NDPilgrim","SE01Door"]


async def get_flag(drv, name):
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if name in ln and '=' in ln:
            try: return int(ln.split('=')[1].strip().split('.')[0])
            except: pass
    return -1


async def poll_until(drv, predicate, max_seconds, label):
    start = time.time()
    while time.time() - start < max_seconds:
        v = await predicate()
        elapsed = int(time.time() - start)
        print(f"  t+{elapsed:02d}s  {label} = {v}")
        if v >= 1:
            return True
        await asyncio.sleep(2)
    return False


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    # 1. Apply all baseline
    for cmd in SETUP:
        await drv.query(cmd)

    # 2. coc to Arcane University (dummy cell satisfies Orrery)
    await drv.query("coc ICArcaneUniversity")
    # Wait for Orrery to start (CM loops at ~1s)
    await poll_until(drv, lambda: get_flag(drv, 'OrreryStarted'),
                     30, 'OrreryStarted')

    # 3. coc to Elven Gardens (real cell satisfies Mehrunes)
    await drv.query("coc ICElvenGardensDistrict01")
    await poll_until(drv, lambda: get_flag(drv, 'MehrunesStarted'),
                     30, 'MehrunesStarted')

    # 4. Wait for total to settle (Frostcrag/SI may dispatch via CM but need
    #    other action to advance stage — they're "Started" not "stage>0")
    await poll_until(drv, lambda: get_flag(drv, 'NumberDLCsStarted'),
                     30, 'NumberDLCsStarted')

    # 5. Return to safe spot
    await drv.query("coc ICMarketDistrict01")

    print("\n=== FINAL DLC stages ===")
    for q in DLC_QUESTS:
        o = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(o)}")

    print("\n=== Started flags ===")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if 'Started' in ln or 'Number' in ln:
            print(f"  {ln}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
