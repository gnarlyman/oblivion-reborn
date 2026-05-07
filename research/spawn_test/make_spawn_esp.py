#!/usr/bin/env python3
"""
Build a minimal Oblivion .esp that adds an ACHR (actor reference) to an existing
cell. Used to controlled-test which NPCs trigger the FaceGen storm crash class.

Usage:
    python make_spawn_esp.py --npc-formid 000700CC \
        --cell-formid 0001FBB9 \
        --pos 780,-15,-111 \
        --out zzz_TestSpawn_VirtueRider.esp

Defaults: VirtueRider in ImperialDungeon01 at (780,-15,-111).

Format references:
- https://en.uesp.net/wiki/Tes4Mod:Mod_File_Format
- https://en.uesp.net/wiki/Tes4Mod:File_Format/Records
"""
import argparse
import struct
import sys
import zlib

OBLIVION_ESM = r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm"


def cstring(s: str) -> bytes:
    return s.encode("latin-1") + b"\x00"


def subrecord(sig: bytes, data: bytes) -> bytes:
    assert len(sig) == 4
    if len(data) > 0xFFFF:
        raise ValueError(f"subrecord {sig} too large: {len(data)}")
    return sig + struct.pack("<H", len(data)) + data


def record(sig: bytes, formID: int, sub_data: bytes, flags: int = 0) -> bytes:
    """20-byte Oblivion record header + subrecord data.
    Layout: sig(4) + dataSize(4) + flags(4) + formID(4) + vci(4)."""
    assert len(sig) == 4
    header = sig + struct.pack("<IIII", len(sub_data), flags, formID, 0)
    return header + sub_data


def group(label: bytes, group_type: int, contents: bytes) -> bytes:
    """20-byte Oblivion GRUP header + contents.
    Layout: 'GRUP'(4) + totalSize(4) + label(4) + groupType(4) + vci(4).
    totalSize INCLUDES the 20-byte header."""
    assert len(label) == 4
    total_size = 20 + len(contents)
    header = b"GRUP" + struct.pack("<I", total_size) + label
    header += struct.pack("<iI", group_type, 0)
    return header + contents


def find_cell_payload(esm_path: str, target_formid: int) -> bytes:
    """Walk GRUP structure of an ESM to find CELL with target FormID.
    Returns the record's data payload (decompressed if needed)."""
    with open(esm_path, "rb") as f:
        data = f.read()
    return _walk_top(data, 0, len(data), target_formid)


def _walk_top(data, start, end, target):
    pos = start
    while pos < end:
        sig = data[pos:pos+4]
        if sig == b"GRUP":
            grp_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            r = _walk_grup(data, pos + 20, pos + grp_size, target)
            if r is not None:
                return r
            pos += grp_size
        else:
            data_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            pos += 20 + data_size
    return None


def _walk_grup(data, start, end, target):
    pos = start
    while pos < end:
        sig = data[pos:pos+4]
        if sig == b"GRUP":
            grp_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            r = _walk_grup(data, pos + 20, pos + grp_size, target)
            if r is not None:
                return r
            pos += grp_size
        else:
            data_size = struct.unpack("<I", data[pos+4:pos+8])[0]
            flags = struct.unpack("<I", data[pos+8:pos+12])[0]
            formid = struct.unpack("<I", data[pos+12:pos+16])[0]
            payload = data[pos+20:pos+20+data_size]
            if sig == b"CELL" and formid == target:
                if flags & 0x00040000:
                    uncomp = struct.unpack("<I", payload[:4])[0]
                    payload = zlib.decompress(payload[4:])
                    assert len(payload) == uncomp
                return payload
            pos += 20 + data_size
    return None


def build_esp(npc_formid: int, cell_formid: int, cell_edid: str,
              pos: tuple, our_modidx: int = 0x01,
              esm_path: str = OBLIVION_ESM) -> bytes:
    # TES4 record subrecords
    next_object_id = 0x00000800  # arbitrary low non-conflicting offset
    hedr = struct.pack("<fii", 1.0, 1, next_object_id + 1)
    tes4_subs = (
        subrecord(b"HEDR", hedr) +
        subrecord(b"CNAM", cstring("blockhead-spawn-test")) +
        subrecord(b"MAST", cstring("Oblivion.esm")) +
        subrecord(b"DATA", struct.pack("<Q", 0))  # 8-byte master size, 0 is accepted
    )
    tes4 = record(b"TES4", formID=0, sub_data=tes4_subs)

    # ACHR record — our spawned actor reference.
    # Format matches vanilla persistent ACHR: NAME + DATA, no EDID subrecord.
    # Record-header flags MUST include 0x400 (Quest Item / Persistent Reference)
    # so the engine treats the ref as persistent. Without it, the engine may not
    # load the reference at all.
    achr_formid = (our_modidx << 24) | next_object_id
    px, py, pz = pos
    achr_subs = (
        subrecord(b"NAME", struct.pack("<I", npc_formid)) +
        subrecord(b"DATA", struct.pack("<6f", px, py, pz, 0.0, 0.0, 0.0))
    )
    achr = record(b"ACHR", formID=achr_formid, sub_data=achr_subs, flags=0x00000400)

    # GRUP type 8 (Persistent Children of cell)
    persistent_grp = group(struct.pack("<I", cell_formid), 8, achr)

    # GRUP type 6 (Cell Children — wraps Persistent + Temporary + VWD)
    cell_children_grp = group(struct.pack("<I", cell_formid), 6, persistent_grp)

    # CELL override — DEEP COPY all subrecords from master so plugins like
    # ORC don't NULL-deref on missing fields.
    cell_subs = find_cell_payload(esm_path, cell_formid)
    if cell_subs is None:
        raise SystemExit(f"CELL {cell_formid:08X} not found in {esm_path}")
    cell = record(b"CELL", formID=cell_formid, sub_data=cell_subs)

    # GRUP type 3 (subblock) — interior cell subblock = (formID / 10) % 10
    # GRUP type 2 (block)    — interior cell block    = formID % 10
    # Verified empirically by walking Oblivion.esm structure.
    block_num = cell_formid % 10
    subblock_num = (cell_formid // 10) % 10
    subblock_grp = group(struct.pack("<i", subblock_num), 3, cell + cell_children_grp)
    block_grp = group(struct.pack("<i", block_num), 2, subblock_grp)

    # GRUP type 0 (top-level CELL group)
    top_cell_grp = group(b"CELL", 0, block_grp)

    return tes4 + top_cell_grp


def parse_pos(s: str) -> tuple:
    parts = s.split(",")
    if len(parts) != 3:
        raise argparse.ArgumentTypeError(f"--pos needs 3 comma-separated floats, got: {s}")
    return tuple(float(p) for p in parts)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--npc-formid", required=True,
                    help="Hex FormID of the NPC to spawn (e.g. 000700CC)")
    ap.add_argument("--cell-formid", default="0001FBB9",
                    help="Hex FormID of the target cell (default ImperialDungeon01)")
    ap.add_argument("--cell-edid", default="ImperialDungeon01",
                    help="Editor ID of the target cell")
    ap.add_argument("--pos", default="780,-15,-111", type=parse_pos,
                    help="x,y,z position (default 780,-15,-111)")
    ap.add_argument("--out", required=True, help="Output .esp path")
    args = ap.parse_args()

    npc_fid = int(args.npc_formid, 16)
    cell_fid = int(args.cell_formid, 16)

    esp = build_esp(npc_fid, cell_fid, args.cell_edid, args.pos)

    with open(args.out, "wb") as f:
        f.write(esp)

    print(f"wrote {args.out} ({len(esp)} bytes)")
    print(f"  NPC formID: {npc_fid:08X}")
    print(f"  Cell:       {args.cell_edid} ({cell_fid:08X})")
    print(f"  Pos:        {args.pos}")


if __name__ == "__main__":
    main()
