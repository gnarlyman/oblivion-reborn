"""Build "Reborn - Patrol Walk Fix.esp" — clears the "Use Horse" flag on
all AI packages that drive Imperial Legion mounted patrols.

Root cause (discovered 2026-05-05): the "Use Horse" PKDT flag (bit 23 of
the 4-byte flags DWORD) routes the engine through a mounted-actor code
path that schedules face-gen via the buggy sub_5227A0 -> sub_52DED0 ->
DoSomething chain. That chain leaves NiTArrays empty, causes LFM/IOManager
stress, eventually UAFs in BSTaskThread.

Fix: override every patrol package with Use Horse cleared. NPCs walk
their patrol routes instead of riding. Bug trigger removed at the source.

Coverage:
  - Oblivion.esm: ImperialLegionRider*, ImperialLegionHorseman*
  - Oscuro's_Oblivion_Overhaul.esp: ImperialLegionRider*, OOOAdvTravel*
  - Maskar's Oblivion Overhaul.esp: any package with "Rider" or
    "Patrol" in the name

Quest-NPC and courier packages with Use Horse are LEFT INTACT — they
don't trigger the bug pattern (different NPC-record state) and changing
them risks quest-progression issues.
"""
import struct
import zlib
import sys
import hashlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import parse_esp, iter_records, build_tes4_record, build_grup_record

USE_HORSE_BIT = 0x00800000

# (plugin path, plugin name as it appears in master list, EDID prefix filter)
SOURCES = [
    ("D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm",
     "Oblivion.esm",
     ("ImperialLegionRider", "ImperialLegionHorseman")),
    ("D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esp",
     "Oscuro's_Oblivion_Overhaul.esp",
     ("ImperialLegionRider", "OOOAdvTravel")),
    ("D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul 5_0_5/Maskar's Oblivion Overhaul.esp",
     "Maskar's Oblivion Overhaul.esp",
     ("Rider", "Patrol", "Centurion")),
]

DST = "D:/Modlists/Reborn/mods/Reborn - Patrol Walk Fix/Reborn - Patrol Walk Fix.esp"


def parse_subrecords(body: bytes):
    out = []
    i = 0
    while i + 6 <= len(body):
        sig = body[i:i+4]
        sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((sig, body[i+6:i+6+sz]))
        i += 6 + sz
    return out


def get_record_body(rec_bytes: bytes):
    body_size = struct.unpack('<I', rec_bytes[4:8])[0]
    flags = struct.unpack('<I', rec_bytes[8:12])[0]
    if flags & 0x40000:
        return zlib.decompress(rec_bytes[24:20+body_size]), flags
    return rec_bytes[20:20+body_size], flags


def get_edid(body: bytes) -> str:
    for sig, data in parse_subrecords(body):
        if sig == b'EDID':
            return data.rstrip(b'\x00').decode('ascii', errors='replace')
    return ''


def matches_filter(edid: str, patterns: tuple) -> bool:
    # Substring match — patrol-package names vary in prefix across mods
    return any(p in edid for p in patterns)


def main():
    rewritten = []  # (rec, body, source_master, new_subs)
    needed_masters = set()
    masters_per_rec = {}  # local_fid -> source plugin name

    for src_path, src_name, prefixes in SOURCES:
        if not Path(src_path).exists():
            print(f"  SKIP missing source: {src_path}")
            continue
        src = parse_esp(src_path)
        local_count = 0
        for rec in iter_records(src):
            if rec.sig != 'PACK':
                continue
            body, _ = get_record_body(rec.raw_bytes)
            edid = get_edid(body)
            if not matches_filter(edid, prefixes):
                continue

            # Check + clear Use Horse
            new_subs = []
            had_clear = False
            for sig, data in parse_subrecords(body):
                if sig == b'PKDT' and len(data) >= 8:
                    flags_v, type_v = struct.unpack('<II', data[:8])
                    if flags_v & USE_HORSE_BIT:
                        flags_v &= ~USE_HORSE_BIT
                        data = struct.pack('<II', flags_v, type_v) + data[8:]
                        had_clear = True
                new_subs.append(sig + struct.pack('<H', len(data)) + data)

            if not had_clear:
                continue  # Use Horse not set on this matching record

            new_body = b''.join(new_subs)
            new_flags = rec.flags & ~0x40000
            new_header = (
                b'PACK' +
                struct.pack('<I', len(new_body)) +
                struct.pack('<I', new_flags) +
                struct.pack('<I', rec.fid) +
                rec.raw_bytes[16:20]
            )
            rewritten.append((src_name, rec.local_fid, edid, new_header + new_body))
            needed_masters.add(src_name)
            local_count += 1
            print(f"  CLEAR {src_name:50s} {rec.local_fid:06X} {edid}")
        print(f"  -> {local_count} packages from {src_name}")

    # Order masters: Oblivion.esm first, then alphabetical
    dst_masters = sorted(needed_masters)
    if 'Oblivion.esm' in dst_masters:
        dst_masters.remove('Oblivion.esm')
        dst_masters.insert(0, 'Oblivion.esm')

    # Remap each record's master byte to dst master order
    out_records = []
    for src_name, local_fid, edid, rec_bytes in rewritten:
        new_master_idx = dst_masters.index(src_name)
        new_fid = (new_master_idx << 24) | local_fid
        # Patch the FID in the record header (offset 12-16 of the header)
        out_records.append(rec_bytes[:12] + struct.pack('<I', new_fid) + rec_bytes[16:])

    tes4 = build_tes4_record(dst_masters, len(out_records), author='Reborn-PatrolWalk')
    grup = build_grup_record(b'PACK', b''.join(out_records))

    out_path = Path(DST)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + grup
    with open(out_path, 'wb') as f:
        f.write(esp)

    print(f"\nWrote: {DST}")
    print(f"  Masters: {dst_masters}")
    print(f"  Records: {len(out_records)}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
