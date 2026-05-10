"""coc test pass: try lots of plausible IC Elven Gardens cell names.
After each coc, prints worldspace + interior state so the user can tell
if it landed somewhere real."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


# Candidate naming conventions
CANDIDATES = [
    # capitalisation variants of district itself
    "IcElvenGardens",
    "ICElvenGardens01",
    "ICElvenGardensDistrictTopOfTheWorld",
    # known IC interiors that LIVE in Elven Gardens (commoners + shops)
    "ICElvenGardensSimplicia",
    "ICElvenGardensClaudiusArcadiasHouse",
    "ICElvenGardensHonditarsHouse",
    "ICElvenGardensRosentiasHouse",
    "ICElvenGardensCarahilsHouse",
    "ICElvenGardensMargretesHouse",
    "ICElvenGardensVarondsHouse",
    # service buildings
    "ICElvenGardensTheMercilessForge",
    "ICElvenGardensJensineGoodAsNew",
    "ICElvenGardensFathisAren",
    # "House", "Apartment" style suffixes
    "ICElvenGardensHouse01",
    "ICElvenGardensApartment01",
    # mixed case
    "IcElvenGardensDistrictRoom",
    "ICElvenGardensInteriorRoom",
]


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    print(f"{'cell':50} | InElvenGardensWS | InInterior | Tamriel?")
    print("-" * 100)
    for cell in CANDIDATES:
        out = await drv.query(f"coc {cell}")
        # quick echo if coc errored
        err_seen = "not found" in (" | ".join(out) if out else "")
        ws = await drv.query("Player.GetInWorldspace ICElvenGardensDistrict")
        inter = await drv.query("Player.IsInInterior")
        tamriel = await drv.query("Player.GetInWorldspace Tamriel")
        ws_v = (" | ".join(ws) if ws else "?").replace("GetInWorldspace >> ", "").strip()
        in_v = (" | ".join(inter) if inter else "?").strip()
        tam_v = (" | ".join(tamriel) if tamriel else "?").replace("GetInWorldspace >> ", "").strip()
        flag = "  <-- ELVEN GARDENS!" if "1" in ws_v else ("  (errored)" if err_seen else "")
        print(f"  {cell:48} | {ws_v:16} | {in_v:24} | {tam_v}{flag}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
