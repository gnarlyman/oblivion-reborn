"""Generate Oblivion console batch files that spawn every CREA/NPC sequentially.

Use case: identify which actor crashes the game on instantiation. Run a batch
in-game with `bat <filename>`. ConScribe markers between placements let you
identify which actor was last attempted before a crash.

Strategy:
  - Walk MOO, OOO ESM, OOO ESP, OOO Enhanced ESPs to extract CREA + NPC_ FormIDs
  - Group into batches of N (default 25) for binary-search if needed
  - Each entry: `printc "[BATCH X] FID Y EDID Z"` then `placeatme <FormID> 1 5 5`
  - Separate batch files per source plugin so the user can isolate by mod

Output: D:\Modlists\Reborn\Stock Game\Data\spawnbat_<source>_<batch>.txt

Run in-game with: bat spawnbat_moo_001
"""
import os
import struct
import zlib
from pathlib import Path

PLUGINS_TXT = "D:/Modlists/Reborn/profiles/Reborn-OOO/plugins.txt"

# Map source ESP filename -> tag for output bat name
PLUGIN_TAGS = {
    "Maskar's Oblivion Overhaul.esp": 'moo',
    "Oscuro's_Oblivion_Overhaul.esm": 'ooo_esm',
    "Oscuro's_Oblivion_Overhaul.esp": 'ooo_esp',
    "OOO Enhanced.esp": 'ooo_enhanced',
}

# Map source ESP filename -> path on disk for parsing records
PLUGIN_PATHS = {
    "Maskar's Oblivion Overhaul.esp": "D:/Modlists/Reborn/mods/Maskars Oblivion Overhaul 5_0_5/Maskar's Oblivion Overhaul.esp",
    "Oscuro's_Oblivion_Overhaul.esm": "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esm",
    "Oscuro's_Oblivion_Overhaul.esp": "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esp",
    "OOO Enhanced.esp": "D:/Modlists/Reborn/mods/OOO Enhanced/OOO Enhanced.esp",
}


def read_load_order():
    """Returns dict {plugin_name: lo_byte (0..0xFF)} based on plugins.txt order."""
    out = {}
    idx = 0
    with open(PLUGINS_TXT) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            out[line] = idx
            idx += 1
    return out


SRC_PLUGINS = []  # populated from PLUGIN_TAGS + load order at runtime

OUT_DIR = Path("D:/Modlists/Reborn/mods/Reborn - Spawn Bat Files")
OUT_DIR.mkdir(parents=True, exist_ok=True)

BATCH_SIZE = 25


def parse_records(path: str):
    """Yield (sig, fid, edid) for each CREA/NPC_ in the ESP."""
    data = open(path, 'rb').read()
    tes4_size = struct.unpack('<I', data[4:8])[0]

    def walk(off: int, end: int):
        cursor = off
        while cursor < end:
            sig = data[cursor:cursor+4]
            if sig == b'GRUP':
                size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
                yield from walk(cursor + 20, cursor + size)
                cursor += size
            else:
                size = struct.unpack('<I', data[cursor+4:cursor+8])[0]
                flags = struct.unpack('<I', data[cursor+8:cursor+12])[0]
                fid = struct.unpack('<I', data[cursor+12:cursor+16])[0]
                body = data[cursor+20:cursor+20+size]
                if flags & 0x40000:
                    body = zlib.decompress(body[4:])
                edid = ''
                j = 0
                while j + 6 <= len(body):
                    sub_sig = body[j:j+4]
                    sub_size = struct.unpack('<H', body[j+4:j+6])[0]
                    if sub_sig == b'EDID':
                        edid = body[j+6:j+6+sub_size].rstrip(b'\x00').decode('ascii', errors='replace')
                        break
                    j += 6 + sub_size
                yield sig.decode('ascii'), fid, edid
                cursor += 20 + size

    yield from walk(20 + tes4_size, len(data))


def main():
    load_order = read_load_order()
    summary_lines = []
    for plugin_name, tag in PLUGIN_TAGS.items():
        if plugin_name not in load_order:
            print(f"SKIP (not in plugins.txt): {plugin_name}")
            continue
        path = PLUGIN_PATHS[plugin_name]
        if not os.path.exists(path):
            print(f"SKIP (file missing): {path}")
            continue
        lo_byte = load_order[plugin_name]
        print(f"  {plugin_name} -> LO byte 0x{lo_byte:02X}")

        actors = []
        for sig, fid, edid in parse_records(path):
            if sig not in ('CREA', 'NPC_'):
                continue
            local_fid = fid & 0x00FFFFFF
            # Construct LO FormID using the current plugins.txt position
            lo_fid = (lo_byte << 24) | local_fid
            actors.append((sig, lo_fid, edid))

        seen = set()
        deduped = []
        for sig, fid, edid in actors:
            if fid not in seen:
                seen.add(fid)
                deduped.append((sig, fid, edid))

        for i in range(0, len(deduped), BATCH_SIZE):
            batch = deduped[i:i+BATCH_SIZE]
            batch_id = (i // BATCH_SIZE) + 1
            fname = f"spawnbat_{tag}_{batch_id:03d}.txt"
            out_path = OUT_DIR / "Root" / fname
            out_path.parent.mkdir(parents=True, exist_ok=True)
            with open(out_path, 'w') as f:
                f.write(f"; Batch {batch_id} from {plugin_name} (LO byte 0x{lo_byte:02X})\n")
                f.write(f"; {len(batch)} actors. Run as: bat spawnbat_{tag}_{batch_id:03d}\n")
                f.write(f'printc "[SPAWNBAT] === START {tag} batch {batch_id} ==="\n')
                for sig, fid, edid in batch:
                    f.write(f'printc "[SPAWNBAT] {sig} {fid:08X} {edid}"\n')
                    f.write(f'player.placeatme {fid:08X} 1 5 5\n')
                f.write(f'printc "[SPAWNBAT] === END {tag} batch {batch_id} ==="\n')
            summary_lines.append(f"  {fname}: {len(batch)} actors")

        summary_lines.append(f"--- {tag}: {len(deduped)} CREA/NPC_ in {(len(deduped) + BATCH_SIZE - 1) // BATCH_SIZE} batches ---")

    # Master driver bat
    driver = OUT_DIR / "Root" / "spawnbat_all.txt"
    with open(driver, 'w') as f:
        f.write('; Master driver - runs ALL batches sequentially.\n')
        f.write('; If game crashes, ConScribe shows last [SPAWNBAT] line.\n')
        f.write('; Use: bat spawnbat_all\n\n')
        for plugin_name, tag in PLUGIN_TAGS.items():
            if plugin_name not in load_order:
                continue
            path = PLUGIN_PATHS[plugin_name]
            if not os.path.exists(path):
                continue
            actors = [a for a in parse_records(path) if a[0] in ('CREA', 'NPC_')]
            seen = set()
            deduped_count = 0
            for a in actors:
                if a[1] not in seen:
                    seen.add(a[1])
                    deduped_count += 1
            n_batches = (deduped_count + BATCH_SIZE - 1) // BATCH_SIZE
            for b in range(1, n_batches + 1):
                f.write(f"bat spawnbat_{tag}_{b:03d}\n")

    print("\n".join(summary_lines))
    print(f"\nWrote {len(list(OUT_DIR.glob('*.txt')))} bat files to:")
    print(f"  {OUT_DIR}")
    print(f"\nUsage in-game: bat spawnbat_moo_001  (or any batch name)")
    print(f"Run all sequentially: bat spawnbat_all")


if __name__ == '__main__':
    main()
