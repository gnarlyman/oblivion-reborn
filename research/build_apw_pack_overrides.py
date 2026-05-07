"""Build a Reborn override ESP containing APW Merge.esp's PACK (AI package) overrides.

PACKs control NPC behavior — patrol routes, sleep schedules, eating, etc.
They reference target forms (NPC, location, marker) that may live in any
master plugin. We filter by:
  1. Record's source master must be in Reborn's plugin set
  2. (deeper check) Reference forms in the body must also be in Reborn's set

Phase 2b applies only the first check — simpler, may produce a few records
with broken refs that the engine handles silently. If we see issues, refine.
"""
import hashlib
import struct
import sys

from oblivion_esp_builder import (
    parse_esp,
    iter_records,
    remap_record_master_byte,
    build_override_esp,
    _decompress_body,
)

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

SRC = "D:/Modlists/APW/mods/A Painted World Configs/APW Merge.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - APW PACK Overrides/Reborn - APW PACK Overrides.esp"

# PACK subrecords that contain FormID references requiring master availability
PACK_REF_SIGS = {b"PTDT", b"INAM", b"TNAM", b"CNAM", b"PLDT"}


def extract_form_refs_from_pack(rec_bytes: bytes, source_masters: list[str]) -> set[str]:
    """Walk a PACK's subrecords and return the set of plugin names referenced.

    PTDT/PLDT contain a FormID at a known offset. INAM/TNAM are FormID refs.
    """
    refs: set[str] = set()
    body = _decompress_body(rec_bytes, 0)
    j = 0
    while j + 6 <= len(body):
        sub_sig = body[j : j + 4]
        sub_size = struct.unpack("<H", body[j + 4 : j + 6])[0]
        payload = body[j + 6 : j + 6 + sub_size]

        if sub_sig == b"PTDT" and sub_size >= 8:
            # PTDT: type (4 bytes int) + target FormID (4 bytes)
            fid = struct.unpack("<I", payload[4:8])[0]
            master_idx = fid >> 24
            if 0 <= master_idx < len(source_masters):
                refs.add(source_masters[master_idx])
        elif sub_sig == b"PLDT" and sub_size >= 8:
            # PLDT: type (4 bytes int) + location FormID (4 bytes) + radius (4 bytes)
            fid = struct.unpack("<I", payload[4:8])[0]
            master_idx = fid >> 24
            if 0 <= master_idx < len(source_masters):
                refs.add(source_masters[master_idx])
        elif sub_sig in (b"INAM", b"TNAM", b"CNAM") and sub_size >= 4:
            fid = struct.unpack("<I", payload[:4])[0]
            master_idx = fid >> 24
            if 0 <= master_idx < len(source_masters):
                refs.add(source_masters[master_idx])

        j += 6 + sub_size
    return refs


def main() -> int:
    src = parse_esp(SRC)
    print(f"Source: {SRC.split('/')[-1]}")
    print(f"  Masters: {len(src.masters)}")

    keep = []
    skipped_self = 0
    skipped_foreign_master = 0
    skipped_foreign_ref = 0
    by_source: dict[str, int] = {}
    foreign_ref_examples: list[tuple[str, str, set[str]]] = []

    for rec in iter_records(src):
        if rec.sig != "PACK":
            continue

        # 1. Source master check
        if rec.master_idx >= len(src.masters):
            skipped_self += 1
            continue
        src_plugin = src.masters[rec.master_idx]
        if src_plugin not in REBORN_PLUGINS:
            skipped_foreign_master += 1
            continue

        # 2. Reference-form check
        refs = extract_form_refs_from_pack(rec.raw_bytes, src.masters)
        # The record itself counts as a self-ref; remove
        refs.discard(src_plugin)
        foreign_refs = refs - REBORN_PLUGINS
        if foreign_refs:
            skipped_foreign_ref += 1
            if len(foreign_ref_examples) < 5:
                foreign_ref_examples.append((rec.edid, src_plugin, foreign_refs))
            continue

        by_source[src_plugin] = by_source.get(src_plugin, 0) + 1
        keep.append((src_plugin, rec))

    print(f"\nPACK breakdown:")
    print(f"  Kept: {len(keep)}")
    print(f"  Skipped (self-owned): {skipped_self}")
    print(f"  Skipped (foreign source master): {skipped_foreign_master}")
    print(f"  Skipped (foreign reference forms): {skipped_foreign_ref}")
    if foreign_ref_examples:
        print(f"\n  Sample foreign-ref skips:")
        for edid, src_p, foreign in foreign_ref_examples:
            print(f"    {edid} (in {src_p}) refs {foreign}")

    print(f"\nBy source plugin:")
    for plugin, n in sorted(by_source.items(), key=lambda kv: -kv[1]):
        print(f"  {n:5d}  {plugin}")

    if not keep:
        print("\nNo records to port. Skipping ESP build.")
        return 0

    # Build dst master list
    used_plugins = sorted(by_source.keys(), key=lambda p: REBORN_ORDER.index(p))
    dst_master_idx = {p: i for i, p in enumerate(used_plugins)}

    remapped = []
    for src_plugin, rec in keep:
        src_idx = src.masters.index(src_plugin)
        dst_idx = dst_master_idx[src_plugin]
        rec.raw_bytes = remap_record_master_byte(rec.raw_bytes, src_idx, dst_idx)
        remapped.append(rec)

    print(f"\nDestination masters ({len(used_plugins)}):")
    for i, p in enumerate(used_plugins):
        print(f"  [{i:02X}] {p}")

    out = build_override_esp(DST, used_plugins, remapped, author="Reborn-APW-PACK")
    h = hashlib.sha256(out).hexdigest()
    print(f"\nWrote: {DST}")
    print(f"  Size:    {len(out)} bytes")
    print(f"  Records: {len(remapped)}")
    print(f"  Masters: {len(used_plugins)}")
    print(f"  SHA256:  {h}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
