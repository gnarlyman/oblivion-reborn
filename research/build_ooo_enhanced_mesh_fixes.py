"""Build override ESP that fixes 3 broken MODL paths in OOO Enhanced.esp.

Records to patch:
  - OOOCreatureWaterPlant (CREA, local 0x000EE9)
  - aaReaper             (CREA, local 0x10469F)
  - sOOOValenExtraBoss   (NPC_, local 0x0031CE)

Each gets its MODL subrecord rewritten to a vanilla skeleton path that exists.
APW does this for sOOOValenExtraBoss already; we extend to the other two.
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

SRC = "D:/Modlists/Reborn/mods/OOO Enhanced/OOO Enhanced.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - OOO Enhanced Mesh Fixes/Reborn - OOO Enhanced Mesh Fixes.esp"

# (sig, local_fid, new_modl)
PATCHES = [
    ('CREA', 0x000EE9, b'Creatures\\Horse\\Skeleton.NIF'),
    ('CREA', 0x10469F, b'Creatures\\Horse\\Skeleton.NIF'),
    ('NPC_', 0x0031CE, b'Characters\\_Male\\skeleton.nif'),
]


def rewrite_modl(rec_bytes: bytes, new_modl: bytes) -> bytes:
    """Rebuild a record's bytes with the MODL subrecord's payload replaced.

    Handles compressed body (decompresses, edits, doesn't recompress to keep
    things simple — the engine handles uncompressed records fine).
    """
    sig = rec_bytes[:4]
    body_size = struct.unpack('<I', rec_bytes[4:8])[0]
    flags = struct.unpack('<I', rec_bytes[8:12])[0]
    body_start = 20
    body_end = body_start + body_size

    if flags & 0x40000:
        body = zlib.decompress(rec_bytes[body_start + 4:body_end])
        # Clear compressed flag
        flags &= ~0x40000
    else:
        body = rec_bytes[body_start:body_end]

    # Find MODL subrecord (the one with sig 'MODL'). For NPC_/CREA, MODL holds the model filename.
    new_body = bytearray()
    i = 0
    replaced = False
    while i + 6 <= len(body):
        sub_sig = body[i:i+4]
        sub_size = struct.unpack('<H', body[i+4:i+6])[0]
        if sub_sig == b'MODL' and not replaced:
            # Replace payload — terminator NUL
            payload = new_modl + b'\x00'
            new_body += b'MODL' + struct.pack('<H', len(payload)) + payload
            i += 6 + sub_size
            replaced = True
        else:
            new_body += body[i:i+6+sub_size]
            i += 6 + sub_size

    if not replaced:
        # If no MODL found, append one (rare for NPC/CREA but possible)
        payload = new_modl + b'\x00'
        new_body += b'MODL' + struct.pack('<H', len(payload)) + payload

    # Rebuild header with new size + uncompressed flag
    new_size = len(new_body)
    new_header = (
        sig +
        struct.pack('<I', new_size) +
        struct.pack('<I', flags) +
        rec_bytes[12:16] +  # FormID unchanged
        rec_bytes[16:20]    # versionControl unchanged
    )
    return bytes(new_header + new_body)


def main() -> int:
    src = parse_esp(SRC)
    print(f"Source: {SRC.split('/')[-1]}")
    print(f"  Masters: {len(src.masters)}")

    # Build a lookup: (sig, local_fid) -> RecordInfo
    records_by_key = {}
    for rec in iter_records(src):
        if rec.sig in ('CREA', 'NPC_'):
            records_by_key[(rec.sig, rec.local_fid)] = rec

    patched = []
    for sig, local_fid, new_modl in PATCHES:
        rec = records_by_key.get((sig, local_fid))
        if rec is None:
            print(f"  MISS {sig} {local_fid:08X} — not found in source")
            continue
        # Need to remap the master byte in the record header from OOO Enhanced's
        # self-byte to the new ESP's master byte for OOO Enhanced.
        # Source has master_idx = self_byte (number of masters).
        # In our new ESP, OOO Enhanced is master[0], so dst_byte = 0.
        src_master_idx = rec.master_idx
        dst_master_idx = 0  # First master in our destination
        # Update the FormID in the original raw_bytes
        original = rec.raw_bytes
        fid = struct.unpack('<I', original[12:16])[0]
        if (fid >> 24) == src_master_idx:
            new_fid = (dst_master_idx << 24) | (fid & 0x00FFFFFF)
            original = original[:12] + struct.pack('<I', new_fid) + original[16:]
        # Now rewrite MODL
        patched_bytes = rewrite_modl(original, new_modl)
        patched.append(patched_bytes)
        print(f"  PATCH {sig} {local_fid:06X}  EDID={rec.edid}  -> MODL={new_modl.decode()}")

    if not patched:
        print("Nothing to patch.")
        return 1

    # Group by signature
    by_sig = {}
    for raw in patched:
        sig = raw[:4]
        by_sig.setdefault(sig, []).append(raw)

    # Build TES4 with OOO Enhanced as the only master
    tes4 = build_tes4_record(["OOO Enhanced.esp"], len(patched), author="Reborn-OOOEnh-Mesh")

    grups = b''
    for sig, recs in by_sig.items():
        grups += build_grup_record(sig, b''.join(recs))

    out_path = Path(DST)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + grups
    with open(out_path, 'wb') as f:
        f.write(esp)

    import hashlib
    print(f"\nWrote: {DST}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  Records: {len(patched)}")
    print(f"  Masters: [OOO Enhanced.esp]")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
