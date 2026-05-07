"""Build override ESP that permanently disables the two OOO Imperial Legion
mounted patrol ACHRs that crash on instantiation in Reborn at DerelictMine area.

Confirmed empirically 2026-05-03: disabling these two via console halted
the BSTaskManager use-after-free crashes that had been firing for two days.

ACHRs (statically placed in Tamriel Wilderness with worldspace coords near
DerelictMine):
  00070106 - VirtueRider (patrol Derelict Mine <-> Fort Virtue)
  00070109 - sister patrol (patrol Skingrad <-> Derelict Mine)

Both reference vanilla Oblivion.esm NPCs (000700CC = ImperialLegionRiderVirtue,
000700CD = sister NPC). They're vanilla ACHR placements; OOO modifies the
NPC base records but the ACHRs originate from Oblivion.esm.

We override those two ACHRs with the "Initially Disabled" flag set
(record-header flag bit 0x800).
"""
import struct
import sys
import zlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import (
    parse_esp,
    iter_records,
    build_tes4_record,
    build_grup_record,
)

# Vanilla Oblivion.esm ACHRs
SRC = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"
DST = "D:/Modlists/Reborn/mods/Reborn - Disable Crashing Patrols/Reborn - Disable Crashing Patrols.esp"

TARGETS = {0x00070106, 0x00070109}

# Record-header flag: 0x00000800 = Initial Disable
INIT_DISABLE_FLAG = 0x00000800


def set_initial_disable(rec_bytes: bytes) -> bytes:
    """Set the Initially Disabled flag (0x800) in the record header."""
    flags = struct.unpack('<I', rec_bytes[8:12])[0]
    flags |= INIT_DISABLE_FLAG
    return rec_bytes[:8] + struct.pack('<I', flags) + rec_bytes[12:]


def main() -> int:
    src = parse_esp(SRC)
    print(f"Source: {SRC.split('/')[-1]}")
    print(f"  Masters: {len(src.masters)}")  # 0 — Oblivion.esm has none

    keep = []
    for rec in iter_records(src):
        if rec.sig != 'ACHR':
            continue
        if rec.fid not in TARGETS:
            continue
        # Source has master_idx = 0 (own record in Oblivion.esm)
        # In our destination ESP, Oblivion.esm is master[0], so master byte stays 0
        new_bytes = set_initial_disable(rec.raw_bytes)
        keep.append(new_bytes)
        print(f"  PATCH ACHR {rec.fid:08X}  EDID={rec.edid}  -> Initial Disable set")

    if not keep:
        print("ERROR: targets not found in Oblivion.esm")
        return 1

    # Build TES4 with Oblivion.esm as the only master
    tes4 = build_tes4_record(["Oblivion.esm"], len(keep), author="Reborn-DisablePatrols")

    # ACHRs go in a top-level GRUP labeled 'ACHR'? Actually ACHR records live in
    # Cell Children groups. For an override ESP, we need to wrap them in:
    #   GRUP "Cell" (label=block 0)
    #     GRUP (label=sub-block 0)
    #       GRUP (label=cell formid, group_type=Cell Children)
    #         GRUP (label=cell formid, group_type=Cell Persistent Children)
    #           ACHR records
    #
    # Simpler approach: just emit them in a top-level GRUP that engines tolerate
    # for override use. xEdit would normally handle the cell-group structure.
    #
    # For minimal viable override ESP, we test putting them in a top-level
    # ACHR-typed group. If engine rejects, we'd need full cell-group hierarchy.

    grup = build_grup_record(b'ACHR', b''.join(keep))

    out_path = Path(DST)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + grup
    with open(out_path, 'wb') as f:
        f.write(esp)

    import hashlib
    print(f"\nWrote: {DST}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  Records: {len(keep)}")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
