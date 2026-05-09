#!/usr/bin/env python3
"""Spawn arbitrary records as world refs at the player for visual validation.

Usage:
    python spawn_grid.py spawn EDID1 EDID2 EDID3 ...
    python spawn_grid.py spawn --from-file path.txt
    python spawn_grid.py cleanup

The script resolves each EDID to its current load-order form_id, spawns
it via placeatme, and prints FULL name + form_id + ref_id. State is
saved to spawn_grid.state.json so cleanup deletes exactly what was
spawned.

Default sig set covers every path-bearing record type; pass --sigs to
narrow if you want.

Why ground refs and not Player.AddItem? See memory entry
'feedback_spawn_on_ground_test_methodology.md' — placeatme works
uniformly across record types, gives instant visual feedback, and
bypasses the AddItem restriction on OOO Enhanced unique-artifact ARMOs.
"""
import argparse
import asyncio
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent / "g5"))
sys.path.insert(0, str(Path(__file__).parent))
from g5.driver import G5Driver
from predictor.load_order import build_load_order, build_winning_records
from predictor.plugin_parser import parse_subrecords, cstr


DEFAULT_SIGS = {
    # Inventory items
    "ARMO", "CLOT", "WEAP", "AMMO", "MISC", "BOOK", "ALCH", "INGR",
    "KEYM", "APPA", "SLGM", "SCRL", "NOTE", "LIGH",
    # World objects
    "STAT", "FURN", "ACTI", "DOOR", "CONT", "FLOR",
    # Actors
    "CREA",
}

STATE_FILE = Path(__file__).with_suffix(".state.json")


def resolve_edids(edids: list[str], sigs: set, profile: str) -> dict:
    """Returns {edid: (form_id, sig, plugin, full)} for each EDID found."""
    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / profile
    data_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
    print(f"loading load order from {profile_dir}")
    lo = build_load_order(profile_dir=profile_dir, data_dir=data_dir)
    print(f"  {len(lo.plugins)} active plugins")
    print(f"building winners ({len(sigs)} signatures)...")
    winners = build_winning_records(lo, signatures=sigs)
    print(f"  {len(winners)} winning records")

    wanted = set(edids)
    out: dict[str, tuple] = {}
    for lo_fid, (plugin, sig, body) in winners.items():
        edid = full = ""
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
            if edid and full:
                break
        if edid in wanted:
            out[edid] = (lo_fid, sig, plugin, full)
    return out


async def cmd_spawn(driver: G5Driver, edids: list[str], sigs: set, profile: str):
    resolved = resolve_edids(edids, sigs, profile)
    missing = [e for e in edids if e not in resolved]
    if missing:
        print()
        print(f"WARN: {len(missing)} EDID(s) not found in current LO:")
        for e in missing:
            print(f"  {e}")

    print()
    print(f"Spawning {len(resolved)} of {len(edids)} requested:")
    spawned = []
    for edid in edids:
        if edid not in resolved:
            continue
        fid, sig, plugin, full = resolved[edid]
        try:
            ref = await driver.spawn(fid, count=1)
            spawned.append({
                "edid": edid, "fid": fid, "ref": ref,
                "sig": sig, "plugin": plugin, "full": full,
            })
            label = full or "(no FULL)"
            print(f"  {sig} {edid:38s} 0x{fid:08X} \"{label}\" -> ref=0x{ref:08X}")
        except Exception as e:
            print(f"  {sig} {edid:38s} 0x{fid:08X}: spawn FAIL {e}")

    STATE_FILE.write_text(json.dumps({"spawned": spawned}, indent=2))
    print()
    print(f"Look at your feet — {len(spawned)} items/objects/creatures placed.")
    print(f"Visible mesh = working. Invisible = broken MODL.")
    print(f"When done:  python spawn_grid.py cleanup")


async def cmd_cleanup(driver: G5Driver):
    try:
        state = json.loads(STATE_FILE.read_text())
    except Exception:
        print("no state file — nothing to clean up")
        return
    spawned = state.get("spawned", [])
    print(f"Deleting {len(spawned)} spawned refs...")
    failed = 0
    for s in spawned:
        try:
            await driver.delete(s["ref"])
        except Exception as e:
            failed += 1
            print(f"  delete 0x{s['ref']:08X} FAIL: {e}")
    print(f"  deleted {len(spawned) - failed}, failed {failed}")
    try:
        STATE_FILE.unlink()
    except Exception:
        pass


def parse_edids_from_file(path: Path) -> list[str]:
    text = path.read_text(encoding="utf-8").strip()
    if path.suffix.lower() == ".json":
        data = json.loads(text)
        if isinstance(data, list):
            return [str(x) for x in data if isinstance(x, str)]
        raise ValueError(f"{path}: expected a JSON list of EDIDs")
    return [line.strip() for line in text.splitlines() if line.strip() and not line.strip().startswith("#")]


async def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="cmd", required=True)

    sp = sub.add_parser("spawn", help="Spawn records as world refs at player")
    sp.add_argument("edids", nargs="*", help="EDIDs to spawn")
    sp.add_argument("--from-file", type=Path, help="newline- or JSON-listed EDIDs")
    sp.add_argument("--profile", default="Reborn-OOO")
    sp.add_argument("--sigs", nargs="*", default=sorted(DEFAULT_SIGS),
                    help="record signatures to search (default: all path-bearing)")

    sub.add_parser("cleanup", help="Delete the refs from the last spawn")

    args = ap.parse_args()

    driver = G5Driver("127.0.0.1", 13580)
    await driver.connect()
    try:
        if args.cmd == "spawn":
            edids = list(args.edids)
            if args.from_file:
                edids.extend(parse_edids_from_file(args.from_file))
            if not edids:
                print("no EDIDs provided. pass them as args or via --from-file.")
                return
            await cmd_spawn(driver, edids, set(args.sigs), args.profile)
        else:
            await cmd_cleanup(driver)
    finally:
        await driver.close()


if __name__ == "__main__":
    asyncio.run(main())
