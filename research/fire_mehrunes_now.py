"""Now in ICElvenGardensDistrict — wait for Mehrunes CM tick."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    print("=== before wait ===")
    out = await drv.query("getstage DL9MehrunesQuest")
    print(f"  DL9MehrunesQuest -> {' | '.join(out)}")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if 'MehrunesStarted' in ln or 'NumberDLCs' in ln:
            print(f"  {ln}")

    print("\n--- wait 60s for Mehrunes ---")
    for elapsed in range(0, 60, 15):
        await asyncio.sleep(15)
        print(f"    ...{elapsed+15}s elapsed")

    print("\n=== after wait ===")
    out = await drv.query("getstage DL9MehrunesQuest")
    print(f"  DL9MehrunesQuest -> {' | '.join(out)}")
    for ln in await drv.query("sqv DelayDLCStartCM"):
        if 'MehrunesStarted' in ln or 'NumberDLCs' in ln:
            print(f"  {ln}")

    print("\n=== all DLC stages ===")
    for q in ["DLCHorseArmor","DLCOrrery","DLCBattlehornCastle","DLCFrostcragSpire",
              "DLC06ThievesDen","DLCDeepscorn","DL9MehrunesQuest","NDPilgrim","SE01Door"]:
        o = await drv.query(f"getstage {q}")
        print(f"  {q:30} -> {' | '.join(o)}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
