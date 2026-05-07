"""Build "Reborn - Rider Hair Fix.esp" — overrides 17 vanilla mounted
Imperial Legion rider NPCs with LNAM (hair length) cleared to 0.0.

Hypothesis: non-zero LNAM triggers per-NPC hair allocation in Oblivion's
engine, which interacts with the LFM/IOManager hazard-pointer protocol.
For these specific quest-flagged riders, that allocation races on free
during BSTaskThread actor 3D-load, producing UAF crashes (sub_4328B0,
sub_433BC0, etc.).

By clearing LNAM to 0, the engine uses race-default hair length (cached,
no per-NPC alloc), so the LFM activity is removed for these NPCs.
"""
import struct
import zlib
import sys
import hashlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import parse_esp, iter_records, build_tes4_record, build_grup_record

SRC = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"
DST = "D:/Modlists/Reborn/mods/Reborn - Rider Hair Fix/Reborn - Rider Hair Fix.esp"

RIDER_NPCS = {
    0x0700C0, 0x0700C1, 0x0700C2, 0x0700C3, 0x0700C4, 0x0700C5,
    0x0700C6, 0x0700C7, 0x0700C8, 0x0700C9, 0x0700CA, 0x0700CB,
    0x0700CC, 0x0700CD, 0x18BA86, 0x18BA88, 0x18BA89,
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


def get_record_body(rec_bytes: bytes):
    body_size = struct.unpack('<I', rec_bytes[4:8])[0]
    flags = struct.unpack('<I', rec_bytes[8:12])[0]
    if flags & 0x40000:
        return zlib.decompress(rec_bytes[24:20+body_size]), flags
    return rec_bytes[20:20+body_size], flags


def main():
    src = parse_esp(SRC)
    print(f"Source: {Path(SRC).name}")

    rewritten = []
    for rec in iter_records(src):
        if rec.sig != 'NPC_':
            continue
        if rec.local_fid not in RIDER_NPCS:
            continue

        body, _flags = get_record_body(rec.raw_bytes)

        # Walk subrecords; rewrite LNAM to 0.0
        new_subs = []
        had_lnam = False
        for sub_sig, data in parse_subrecords(body):
            if sub_sig == b'LNAM':
                # 4-byte float, set to 0.0
                data = struct.pack('<f', 0.0)
                had_lnam = True
            new_subs.append(sub_sig + struct.pack('<H', len(data)) + data)

        if not had_lnam:
            print(f"  WARN: NPC {rec.local_fid:06X} had no LNAM; injecting one")
            # Inject LNAM after HNAM (or end if no HNAM)
            new_body_parts = []
            inserted = False
            for chunk in new_subs:
                new_body_parts.append(chunk)
                if not inserted and chunk[:4] == b'HNAM':
                    new_body_parts.append(b'LNAM' + struct.pack('<H', 4) + struct.pack('<f', 0.0))
                    inserted = True
            if not inserted:
                new_body_parts.append(b'LNAM' + struct.pack('<H', 4) + struct.pack('<f', 0.0))
            new_subs = new_body_parts

        new_body = b''.join(new_subs)

        # Rewrite record header: clear compressed flag (we ship uncompressed),
        # update body size, keep formID and version control bytes.
        new_flags = rec.flags & ~0x40000
        new_header = (
            b'NPC_' +
            struct.pack('<I', len(new_body)) +
            struct.pack('<I', new_flags) +
            struct.pack('<I', rec.fid) +     # full FID from master file
            rec.raw_bytes[16:20]             # version control unchanged
        )
        rewritten.append(new_header + new_body)
        print(f"  FIX  {rec.local_fid:06X} (LNAM=0.0 applied)")

    if len(rewritten) != len(RIDER_NPCS):
        missing = RIDER_NPCS - {r.local_fid for r in iter_records(src) if r.sig == 'NPC_' and r.local_fid in RIDER_NPCS}
        print(f"  WARN: only {len(rewritten)} of {len(RIDER_NPCS)} found; missing {missing}")

    # Build TES4 + NPC_ GRUP. Single master = Oblivion.esm.
    tes4 = build_tes4_record(['Oblivion.esm'], len(rewritten), author='Reborn-RiderHairFix')
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
