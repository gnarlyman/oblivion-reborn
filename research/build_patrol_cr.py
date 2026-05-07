"""Build Reborn - APW Patrol CR.esp by porting APW CR's NPC_ overrides for
all 35 OOO Imperial Legion mounted patrol NPCs into a Reborn-compatible ESP.

This is the systematic fix matching APW's approach: replace the OOO Tarnished
Imperial armor inventory on these NPCs with vanilla Imperial Legion gear +
LVLI weapon lists, exactly as APW Conflict Resolution.esp does.

Process:
  1. Parse APW - Conflict Resolution.esp
  2. Extract the 35 NPC_ records by local FormID
  3. Walk each record's subrecords, identify all FormID-bearing fields, and
     collect the set of referenced master plugins
  4. Build the Reborn ESP master list from that set (Oblivion.esm first)
  5. Rewrite each record: remap FormID master bytes (own FID + every
     SNAM/INAM/RNAM/SPLO/SCRI/PKID/CNAM/HNAM/ENAM/ZNAM/CNTO/PFIG ref)
  6. Strip compressed flag (we ship uncompressed for simplicity)
  7. Write TES4 + NPC_ GRUP
"""
import struct
import zlib
import sys
import hashlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import parse_esp, iter_records, build_tes4_record, build_grup_record

SRC = "D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - APW Patrol CR/Reborn - APW Patrol CR.esp"

PATROL_NPCS = {
    # Vanilla Oblivion.esm
    0x0700C0, 0x0700C1, 0x0700C2, 0x0700C3, 0x0700C4, 0x0700C5,
    0x0700C6, 0x0700C7, 0x0700C8, 0x0700C9, 0x0700CA, 0x0700CB,
    0x0700CC, 0x0700CD, 0x18BA86, 0x18BA88, 0x18BA89,
    # OOO ESM "B" sister-rider variants
    0x004D3B, 0x004D3F, 0x0052B7, 0x0052BE, 0x0052C6, 0x0052D1,
    0x0052D4, 0x012391, 0x03A27D, 0x03A286, 0x03A28B, 0x03A290,
    0x03A298, 0x03A29F, 0x03A78C, 0x03A796, 0x03AC9D, 0x03B18A,
    0x03B194,
}

# NPC_ subrecord signatures whose first 4 bytes are a FormID we must remap.
# (Some have additional payload after the FID — we preserve everything past byte 4.)
FID_SUBS = {
    b'SNAM',  # faction (8 bytes: FID + 1 rank + 3 unused)
    b'INAM',  # death item (4 bytes)
    b'RNAM',  # race (4 bytes)
    b'SPLO',  # spell (4 bytes)
    b'SCRI',  # script (4 bytes)
    b'PKID',  # AI package (4 bytes)
    b'CNAM',  # class (4 bytes)
    b'HNAM',  # hair (4 bytes)
    b'ENAM',  # eye (4 bytes)
    b'ZNAM',  # combat style (4 bytes)
    b'CNTO',  # inventory item (8 bytes: FID + 4 count)
    b'PFIG',  # for CREA — included for safety; not present in NPC_
}


def parse_subrecords(body: bytes):
    out = []
    i = 0
    while i + 6 <= len(body):
        sig = body[i:i+4]
        sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((sig, body[i+6:i+6+sz]))
        i += 6 + sz
    return out


def get_record_body(rec_bytes: bytes) -> tuple[bytes, int]:
    """Return (decompressed_body_bytes, original_flags)."""
    body_size = struct.unpack('<I', rec_bytes[4:8])[0]
    flags = struct.unpack('<I', rec_bytes[8:12])[0]
    if flags & 0x40000:
        return zlib.decompress(rec_bytes[24:20+body_size]), flags
    return rec_bytes[20:20+body_size], flags


def main():
    src = parse_esp(SRC)
    src_masters = src.masters
    src_self_byte = len(src_masters)
    print(f"Source: {Path(SRC).name}")
    print(f"  Masters ({len(src_masters)}): {src_masters[:5]}...")

    # Pass 1: collect target records and discover which masters they reference
    needed_masters = set()
    selected = []  # (RecordInfo, decompressed_body)
    own_byte_refs = []  # any FIDs referencing APW CR's own additions (warning)

    for rec in iter_records(src):
        if rec.sig != 'NPC_': continue
        if rec.local_fid not in PATROL_NPCS: continue
        body, _ = get_record_body(rec.raw_bytes)

        # Record's own FormID master
        own_m = rec.master_idx
        if own_m == src_self_byte:
            print(f"  WARN: record {rec.local_fid:06X} has self-byte own FID")
        elif own_m < len(src_masters):
            needed_masters.add(src_masters[own_m])

        # Walk subrecords for FID refs
        for sub_sig, data in parse_subrecords(body):
            if sub_sig in FID_SUBS and len(data) >= 4:
                fid = struct.unpack('<I', data[:4])[0]
                m = (fid >> 24) & 0xFF
                if m == src_self_byte:
                    own_byte_refs.append((rec.local_fid, sub_sig.decode(), fid))
                elif m < len(src_masters):
                    needed_masters.add(src_masters[m])

        selected.append((rec, body))

    print(f"  Selected {len(selected)} of {len(PATROL_NPCS)} target patrol NPCs")
    if len(selected) < len(PATROL_NPCS):
        missing = PATROL_NPCS - {r.local_fid for r, _ in selected}
        print(f"  MISSING: {[f'{x:06X}' for x in sorted(missing)]}")

    if own_byte_refs:
        print(f"  WARNING: {len(own_byte_refs)} subrecord FID refs point to APW CR's own additions:")
        for local_fid, sig, fid in own_byte_refs[:10]:
            print(f"    NPC {local_fid:06X} {sig}: FID {fid:08X}")
        return 1

    # Build dst master list — Oblivion.esm first, then sorted by name
    dst_masters = sorted(needed_masters)
    if 'Oblivion.esm' in dst_masters:
        dst_masters.remove('Oblivion.esm')
        dst_masters.insert(0, 'Oblivion.esm')
    print(f"  Dst masters ({len(dst_masters)}): {dst_masters}")

    # Map src master_idx -> dst master_idx
    def remap_idx(src_idx):
        name = src_masters[src_idx]
        return dst_masters.index(name)

    # Pass 2: rewrite each record
    rewritten = []
    for rec, body in selected:
        new_subs_bytes = []
        for sub_sig, data in parse_subrecords(body):
            if sub_sig in FID_SUBS and len(data) >= 4:
                fid = struct.unpack('<I', data[:4])[0]
                m = (fid >> 24) & 0xFF
                local = fid & 0xFFFFFF
                new_m = remap_idx(m)
                new_fid = (new_m << 24) | local
                data = struct.pack('<I', new_fid) + data[4:]
            new_subs_bytes.append(sub_sig + struct.pack('<H', len(data)) + data)
        new_body = b''.join(new_subs_bytes)

        # Rewrite record's own FID
        new_own_m = remap_idx(rec.master_idx)
        new_own_fid = (new_own_m << 24) | rec.local_fid

        # Build new header: clear compressed flag (0x40000), use new body size
        new_flags = rec.flags & ~0x40000
        new_header = (
            b'NPC_' +
            struct.pack('<I', len(new_body)) +
            struct.pack('<I', new_flags) +
            struct.pack('<I', new_own_fid) +
            rec.raw_bytes[16:20]   # version control unchanged
        )
        rewritten.append(new_header + new_body)

    # Build TES4 + NPC_ GRUP
    tes4 = build_tes4_record(dst_masters, len(rewritten), author="Reborn-PatrolCR")
    grup = build_grup_record(b'NPC_', b''.join(rewritten))

    out_path = Path(DST)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + grup
    with open(out_path, 'wb') as f:
        f.write(esp)

    print(f"\nWrote: {DST}")
    print(f"  Records: {len(rewritten)}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
