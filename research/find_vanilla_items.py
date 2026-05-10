"""Scan Oblivion.esm for ARMO/WEAP/AMMO/ALCH records by EDID/name regex.

Vanilla items always live at high-byte 00 in any plugin's load order, so the
FormIDs printed here are valid in-game without master remapping.

Usage:
    python find_vanilla_items.py 'Mithril|Dwarven'
    python find_vanilla_items.py 'LongSword' --sig WEAP
    python find_vanilla_items.py 'Restore.*Health' --sig ALCH
"""
from __future__ import annotations
import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin, VANILLA


def scan(pattern: str, sigs: tuple[str, ...], exclude_ench: bool, exclude_se: bool) -> None:
    data, _ = load_plugin(VANILLA)
    pat = re.compile(pattern, re.I)
    for top, sig, fid, flags, body in iter_records(data):
        if sig not in sigs:
            continue
        edid = name = None
        for ssig, sub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(sub)
            elif ssig == "FULL":
                name = cstr(sub)
            if edid and name:
                break
        if not edid:
            continue
        if exclude_ench and "Ench" in edid:
            continue
        if exclude_se and edid.startswith("SE"):
            continue
        if pat.search(edid + " " + (name or "")):
            print(f"{sig}  {fid:08X}  {edid:40s}  {name or ''}")


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    p.add_argument("pattern", help="regex matched against 'EDID NAME'")
    p.add_argument("--sig", default="ARMO,WEAP,AMMO,ALCH",
                   help="comma-separated record signatures (default: ARMO,WEAP,AMMO,ALCH)")
    p.add_argument("--include-ench", action="store_true",
                   help="include enchanted variants (excluded by default)")
    p.add_argument("--include-se", action="store_true",
                   help="include Shivering Isles items (excluded by default)")
    args = p.parse_args()
    sigs = tuple(s.strip() for s in args.sig.split(","))
    scan(args.pattern, sigs, not args.include_ench, not args.include_se)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
