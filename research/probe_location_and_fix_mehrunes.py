"""Find correct cell for ICElvenGardensDistrict, fire Mehrunes,
also dump Frostcrag attached scripts to understand stage=0 issue."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


# Known cells in ICElvenGardensDistrict worldspace (vanilla)
CANDIDATE_CELLS = [
    "ICElvenGardensSeridursHouse",
    "ICElvenGardensJensericsHouse",
    "ICElvenGardensTiberSeptimHotel",
    "ICElvenGardensFrostcragSpire",
    "ICElvenGardensKingAndQueenTavern",
    "ICElvenGardensUmbacanosHouse",
    "ICElvenGardens",
]


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    print("=== current location ===")
    for q in ["Player.GetInWorldspace ICElvenGardensDistrict",
              "Player.GetInWorldspace ICMarketDistrict",
              "Player.GetInWorldspace ICTheArcaneUniversity",
              "Player.GetInWorldspace Tamriel",
              "Player.IsInInterior"]:
        out = await drv.query(q)
        print(f"  {q:50} -> {' | '.join(out)}")

    print("\n=== try each candidate cell for Elven Gardens ===")
    found = None
    for cell in CANDIDATE_CELLS:
        out = await drv.query(f"coc {cell}")
        msg = " | ".join(out) if out else "ok"
        in_world = await drv.query("Player.GetInWorldspace ICElvenGardensDistrict")
        in_world_msg = " | ".join(in_world) if in_world else "?"
        print(f"  coc {cell:40} | result: {msg[:80]} | InElvenGardens: {in_world_msg}")
        if "1.00" in in_world_msg:
            print(f"  *** SUCCESS: {cell} is in ICElvenGardensDistrict worldspace ***")
            found = cell
            break

    if found:
        print(f"\n--- waiting 60s for Mehrunes to start (use cell {found}) ---")
        for elapsed in range(0, 60, 15):
            await asyncio.sleep(15)
            print(f"    ...{elapsed+15}s elapsed")
        out = await drv.query("getstage DL9MehrunesQuest")
        print(f"\n  DL9MehrunesQuest -> {' | '.join(out)}")
        for ln in await drv.query("sqv DelayDLCStartCM"):
            if 'MehrunesStarted' in ln or 'Number' in ln:
                print(f"  {ln}")
    else:
        print("\n  (no candidate cell put us in ICElvenGardensDistrict; need different EDID)")

    print("\n=== Frostcrag attached script (sqv with quest script lookup) ===")
    # check what script the Frostcrag quest is running
    for q in ["DLCFrostcragSpire"]:
        out = await drv.query(f"sqv {q}")
        for ln in out:
            print(f"  {ln}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
