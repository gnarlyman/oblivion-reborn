"""Build a Reborn override ESP containing APW Merge.esp's CSTY rebalances.

CSTYs (combat styles) in APW Merge tune AI behavior — dodge/block/attack
percentages, switch distances, ranged preference, etc. Porting these brings
APW's combat-feel tuning to Reborn.

Each CSTY record originates from some master file (by master byte). We only
port records whose source master is also active in Reborn's plugins.txt;
master bytes are remapped to the destination ESP's master order.

CSTY records have minimal foreign references (occasional ZNAM ref to a
parent style) so cross-plugin reference safety is generally fine. The 237
CSTYs in APW Merge are mostly Oblivion.esm overrides.
"""
import hashlib
import sys

from oblivion_esp_builder import (
    parse_esp,
    iter_records,
    remap_record_master_byte,
    build_override_esp,
)

# Reborn-OOO active plugins (Phase 2 destination must use a subset of these
# as its master list to load correctly).
REBORN_PLUGINS = {
    "Oblivion.esm",
    "Oscuro's_Oblivion_Overhaul.esm",
    "Cobl Main.esm",
    "Cobl Glue.esp",
    "Unofficial Oblivion Patch.esp",
    "DLCShiveringIsles.esp",
    "Unofficial Shivering Isles Patch.esp",
    "Cobl Si.esp",
    "DLCHorseArmor.esp",
    "DLCHorseArmor - Unofficial Patch.esp",
    "DLCOrrery.esp",
    "DLCOrrery - Unofficial Patch.esp",
    "DLCVileLair.esp",
    "DLCVileLair - Unofficial Patch.esp",
    "DLCMehrunesRazor.esp",
    "DLCMehrunesRazor - Unofficial Patch.esp",
    "DLCSpellTomes.esp",
    "DLCThievesDen.esp",
    "DLCThievesDen - Unofficial Patch.esp",
    "DLCThievesDen - Unofficial Patch - SSSB.esp",
    "DLCBattlehornCastle.esp",
    "DLCFrostcrag.esp",
    "Knights.esp",
    "Knights - Unofficial Patch.esp",
    "Oscuro's_Oblivion_Overhaul.esp",
    "OOO Enhanced.esp",
    "OOOShiveringIsles.esp",
    "Maskar's Oblivion Overhaul.esp",
}

SRC = "D:/Modlists/APW/mods/A Painted World Configs/APW Merge.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - APW CSTY Rebalances/Reborn - APW CSTY Rebalances.esp"


def main() -> int:
    src = parse_esp(SRC)
    print(f"Source: {SRC.split('/')[-1]}")
    print(f"  Masters: {len(src.masters)}")

    keep = []
    skipped_foreign = 0
    by_source: dict[str, int] = {}

    for rec in iter_records(src):
        if rec.sig != "CSTY":
            continue
        # Resolve master byte to source plugin name
        if rec.master_idx >= len(src.masters):
            # Self-owned new record (master byte = number of masters)
            # APW Merge owns the record itself — skip, we don't want APW Merge as a master
            skipped_foreign += 1
            continue
        src_plugin = src.masters[rec.master_idx]
        if src_plugin not in REBORN_PLUGINS:
            skipped_foreign += 1
            continue
        by_source[src_plugin] = by_source.get(src_plugin, 0) + 1
        keep.append((src_plugin, rec))

    print(f"\nCSTY records by source plugin (Reborn-compatible only):")
    for plugin, n in sorted(by_source.items(), key=lambda kv: -kv[1]):
        print(f"  {n:5d}  {plugin}")
    print(f"\nKept: {len(keep)}")
    print(f"Skipped (foreign master): {skipped_foreign}")

    # Build destination master list: only the masters our kept records need,
    # in deterministic order matching Reborn's plugins.txt position.
    REBORN_ORDER = [
        "Oblivion.esm",
        "Oscuro's_Oblivion_Overhaul.esm",
        "Cobl Main.esm",
        "Cobl Glue.esp",
        "Unofficial Oblivion Patch.esp",
        "DLCShiveringIsles.esp",
        "Unofficial Shivering Isles Patch.esp",
        "Cobl Si.esp",
        "DLCHorseArmor.esp",
        "DLCHorseArmor - Unofficial Patch.esp",
        "DLCOrrery.esp",
        "DLCOrrery - Unofficial Patch.esp",
        "DLCVileLair.esp",
        "DLCVileLair - Unofficial Patch.esp",
        "DLCMehrunesRazor.esp",
        "DLCMehrunesRazor - Unofficial Patch.esp",
        "DLCSpellTomes.esp",
        "DLCThievesDen.esp",
        "DLCThievesDen - Unofficial Patch.esp",
        "DLCThievesDen - Unofficial Patch - SSSB.esp",
        "DLCBattlehornCastle.esp",
        "DLCFrostcrag.esp",
        "Knights.esp",
        "Knights - Unofficial Patch.esp",
        "Oscuro's_Oblivion_Overhaul.esp",
        "OOO Enhanced.esp",
        "OOOShiveringIsles.esp",
        "Maskar's Oblivion Overhaul.esp",
    ]
    used_plugins = sorted(by_source.keys(), key=lambda p: REBORN_ORDER.index(p))
    dst_master_idx = {p: i for i, p in enumerate(used_plugins)}

    # Remap each kept record's master byte from src index → dst index
    remapped = []
    for src_plugin, rec in keep:
        src_idx = src.masters.index(src_plugin)
        dst_idx = dst_master_idx[src_plugin]
        rec.raw_bytes = remap_record_master_byte(rec.raw_bytes, src_idx, dst_idx)
        remapped.append(rec)

    print(f"\nDestination master list ({len(used_plugins)}):")
    for i, p in enumerate(used_plugins):
        print(f"  [{i:02X}] {p}")

    out = build_override_esp(DST, used_plugins, remapped, author="Reborn-APW-CSTY")
    h = hashlib.sha256(out).hexdigest()
    print(f"\nWrote: {DST}")
    print(f"  Size:    {len(out)} bytes")
    print(f"  Records: {len(remapped)}")
    print(f"  Masters: {len(used_plugins)}")
    print(f"  SHA256:  {h}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
