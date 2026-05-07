"""Build a Reborn override ESP containing APW CR's neutralized OOO scripts.

Selects every SCPT in APW - Conflict Resolution.esp where:
  - SCDA <= 8 bytes (compiled bytecode is empty/stub)
  - The record's master byte points at Oscuro's_Oblivion_Overhaul.esm

The resulting ESP has only OOO ESM as a master. Loading it makes those scripts
no-op at runtime (engine executes SCDA, not SCTX).

Reusable byte-level primitives live in oblivion_esp_builder.py.
"""
import hashlib
import sys

from oblivion_esp_builder import (
    parse_esp,
    iter_records,
    remap_record_master_byte,
    build_override_esp,
)

OOO_ESM = "Oscuro's_Oblivion_Overhaul.esm"
SRC = "D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - APW Script Neutralizers/Reborn - APW Script Neutralizers.esp"


def main() -> int:
    src = parse_esp(SRC)
    print(f"Source: {SRC.split('/')[-1]}")
    print(f"  Masters: {len(src.masters)}")

    if OOO_ESM not in src.masters:
        print(f"ERROR: {OOO_ESM} not in source masters", file=sys.stderr)
        return 1
    src_ooo_idx = src.masters.index(OOO_ESM)
    print(f"  OOO ESM is master[{src_ooo_idx}] in source")

    keep = []
    for rec in iter_records(src):
        if rec.sig != "SCPT":
            continue
        if rec.master_idx != src_ooo_idx:
            continue
        if rec.scda_size > 8:
            continue
        # Remap master byte: src_ooo_idx → 0 (since destination ESP has OOO ESM as its only master)
        rec.raw_bytes = remap_record_master_byte(rec.raw_bytes, src_ooo_idx, 0)
        keep.append(rec)

    print(f"\nNeutralized SCPT candidates: {len(keep)}")
    for rec in keep[:10]:
        print(f"  {rec.fid:08X}  {rec.edid}  (SCDA={rec.scda_size} bytes)")
    if len(keep) > 10:
        print(f"  ... ({len(keep) - 10} more)")

    out_bytes = build_override_esp(DST, [OOO_ESM], keep, author="Reborn-APW-Port")
    h = hashlib.sha256(out_bytes).hexdigest()
    print(f"\nWrote: {DST}")
    print(f"  Size:    {len(out_bytes)} bytes")
    print(f"  Records: {len(keep)}")
    print(f"  Masters: [{OOO_ESM}]")
    print(f"  SHA256:  {h}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
