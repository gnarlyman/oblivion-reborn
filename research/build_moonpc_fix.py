"""Build "Reborn - MOONpc Fix.esp" — overrides Maskar's MOONpc template NPC
with normal Bound Radius (MODB) AND adds missing HNAM/LNAM/ENAM defaults.

Root cause discovered 2026-05-05: MOONpc (formID 386FDF7C in MOO) is MOO's
runtime-spawn template NPC ("Race Toggler"). The crashes trigger because:

  1. MODB = 18254.628906 (225x normal bound radius) — engine treats actor
     as always-visible, processes it constantly
  2. NO HNAM (hair model), NO LNAM (hair length), NO ENAM (eyes record) —
     engine can't resolve hair/eye references for face-gen, leaves those
     NiTArray slots empty in the FGP, which then crashes
     BSFaceGen_DoSomething when it dereferences models[i] / textures[i]

Fix:
  - MODB -> 81.166473 (matches a normal NPC)
  - HNAM -> Cropped [HAIR:0018A891] (vanilla benign hair)
  - LNAM -> 0.0 (race default length)
  - ENAM -> eyeBrown [EYES:00027306] (vanilla benign eye)

NPC record format:
  EDID - Editor ID
  FULL - Name
  Model:
    MODL - Model Filename (zstring)
    MODB - Bound Radius (4-byte float)  <-- target
  ACBS, RNAM, AIDT, AI Packages, CNAM, DATA, HNAM, LNAM, ENAM, HCLR,
  Facegen Data, FNAM
"""
import struct
import zlib
import sys
import hashlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import parse_esp, iter_records, build_tes4_record, build_grup_record

SRC = "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul 5_0_5/Maskar's Oblivion Overhaul.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - MOONpc Fix/Reborn - MOONpc Fix.esp"

TARGET_LOCAL_FID = 0x6FDF7C  # MOONpc local FID in MOO
NORMAL_BOUND_RADIUS = 81.166473  # Matches a typical NPC

# Vanilla benign defaults for hair/eyes
HAIR_FORMID    = 0x0018A891  # Cropped (Oblivion.esm master idx 0)
EYES_FORMID    = 0x00027306  # eyeBrown (Oblivion.esm master idx 0)
HAIR_LENGTH    = 0.0         # Race-default length


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
        if rec.local_fid != TARGET_LOCAL_FID:
            continue

        body, _flags = get_record_body(rec.raw_bytes)

        # MOONpc is "Race Toggler" — MOO scripts change RACE at runtime. Per-NPC
        # FaceGen data (FGGS/FGGA/FGTS) was sized for Argonian (the record's RNAM).
        # When the runtime race is something else (Redguard, etc., per crash log),
        # the geometry/race mismatch produces empty NiTArrays in the FGP.
        # Fix: STRIP FGGS/FGGA/FGTS so the engine falls back to race-default
        # face-gen for whatever race MOO assigns at runtime.
        # Also strip FNAM (face morph index, also race-dependent).
        # Also clear MODB and add HNAM/ENAM/LNAM defaults.
        SKIP_SUBS = {b'FGGS', b'FGGA', b'FGTS', b'FNAM'}

        new_subs = []
        had_modb = False
        injection_done = False
        for sub_sig, data in parse_subrecords(body):
            if sub_sig in SKIP_SUBS:
                print(f"  STRIP: {sub_sig.decode()} ({len(data)} bytes)")
                continue
            if sub_sig == b'MODB' and len(data) == 4:
                old_radius = struct.unpack('<f', data)[0]
                data = struct.pack('<f', NORMAL_BOUND_RADIUS)
                had_modb = True
                print(f"  MODB: {old_radius:.4f} -> {NORMAL_BOUND_RADIUS:.4f}")
            # Inject HNAM/LNAM/ENAM before HCLR (proper subrecord order)
            if sub_sig == b'HCLR' and not injection_done:
                new_subs.append(b'HNAM' + struct.pack('<H', 4) + struct.pack('<I', HAIR_FORMID))
                print(f"  HNAM: INJECTED Cropped [HAIR:{HAIR_FORMID:08X}]")
                new_subs.append(b'LNAM' + struct.pack('<H', 4) + struct.pack('<f', HAIR_LENGTH))
                print(f"  LNAM: INJECTED {HAIR_LENGTH}")
                new_subs.append(b'ENAM' + struct.pack('<H', 4) + struct.pack('<I', EYES_FORMID))
                print(f"  ENAM: INJECTED eyeBrown [EYES:{EYES_FORMID:08X}]")
                injection_done = True
            # Skip pre-existing HNAM/LNAM/ENAM (we inject our own)
            if sub_sig in (b'HNAM', b'LNAM', b'ENAM'):
                continue
            new_subs.append(sub_sig + struct.pack('<H', len(data)) + data)

        if not had_modb:
            print(f"  WARN: MOONpc had no MODB; skipping")
            continue

        new_body = b''.join(new_subs)
        new_flags = rec.flags & ~0x40000
        new_header = (
            b'NPC_' +
            struct.pack('<I', len(new_body)) +
            struct.pack('<I', new_flags) +
            struct.pack('<I', rec.fid) +  # Original FID kept (master = MOO esp)
            rec.raw_bytes[16:20]
        )
        rewritten.append(new_header + new_body)

    if not rewritten:
        print(f"FAIL: did not find MOONpc {TARGET_LOCAL_FID:06X} in {Path(SRC).name}")
        return 1

    # Multi-master ESP: Oblivion.esm (idx 0, for HAIR/EYES refs) + MOO (idx 1, for MOONpc)
    # Need to remap MOONpc's own FID to use master idx 1 instead of 0
    masters = ['Oblivion.esm', Path(SRC).name]
    moo_idx = masters.index(Path(SRC).name)

    out_records = []
    for rec_bytes in rewritten:
        # Re-encode the record's own FID with new master idx
        local_fid = struct.unpack('<I', rec_bytes[12:16])[0] & 0xFFFFFF
        new_fid = (moo_idx << 24) | local_fid
        out_records.append(rec_bytes[:12] + struct.pack('<I', new_fid) + rec_bytes[16:])

    tes4 = build_tes4_record(masters, len(out_records), author='Reborn-MOONpcFix')
    grup = build_grup_record(b'NPC_', b''.join(out_records))

    out_path = Path(DST)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + grup
    with open(out_path, 'wb') as f:
        f.write(esp)

    print(f"\nWrote: {DST}")
    print(f"  Masters: {masters}")
    print(f"  Records: {len(out_records)}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
