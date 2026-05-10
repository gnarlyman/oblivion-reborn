"""coc to ICElvenGardensDistrict01 and verify worldspace."""
import asyncio, sys
from pathlib import Path
ROOT = Path(__file__).parent
sys.path.insert(0, str(ROOT / "plugin_detector" / "g5"))
from g5.driver import G5Driver  # type: ignore


async def main() -> int:
    drv = G5Driver(host="127.0.0.1", port=13580)
    await drv.connect()

    out = await drv.query("coc ICElvenGardensDistrict01")
    print(f"  coc ICElvenGardensDistrict01 -> {' | '.join(out) if out else 'ok'}")

    for q in ["Player.GetInWorldspace ICElvenGardensDistrict",
              "Player.IsInInterior",
              "Player.GetInWorldspace Tamriel"]:
        o = await drv.query(q)
        print(f"  {q:50} -> {' | '.join(o)}")

    await drv.close()
    return 0


if __name__ == "__main__":
    raise SystemExit(asyncio.run(main()))
