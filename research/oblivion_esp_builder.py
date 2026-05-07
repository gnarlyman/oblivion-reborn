"""Minimal reusable Oblivion .esp byte-copy library.

For building override-only ESPs by extracting records from a source ESP and
wrapping them in a fresh TES4 + GRUP envelope. No xEdit needed.

Public surface:

    parse_esp(path) -> EspData
    iter_records(esp)  # yields RecordInfo with offset/sig/fid/edid/body
    build_override_esp(out_path, masters, records, author='Reborn-Port')

Primitive helpers (use directly if you need finer control):

    parse_tes4_masters(data) -> (tes4_size, masters, tes4_record_bytes)
    walk_records(data, off, end)  # yields (off, total_size, sig, fid, flags)
    get_subrecord(data, rec_off, sig) -> (rel_off, size, payload_bytes)
    get_edid(data, rec_off) -> str
    remap_record_master_byte(rec_bytes, src_idx, dst_idx) -> bytes
    build_tes4_record(masters, num_records, author='Reborn-Port') -> bytes
    build_grup_record(label, child_data, group_type=0) -> bytes

Usage idiom:

    src = parse_esp("D:/path/to/source.esp")
    keep = []
    for rec in iter_records(src):
        if rec.sig != 'SCPT':
            continue
        # any predicate over rec.body, rec.edid, rec.fid, rec.master_idx
        ...
        keep.append(rec)
    build_override_esp("D:/out.esp", ["Oblivion.esm"], keep)

Note: build_override_esp groups records by signature into separate top-level
GRUPs. It does NOT recompute master indices automatically; if your source and
destination master lists differ, you must pass the records through
remap_record_master_byte() first (see build_apw_scpt_neutralizers.py for the
canonical example).
"""
from __future__ import annotations

import os
import struct
import zlib
from dataclasses import dataclass
from typing import Iterable, Iterator, Optional


# -----------------------------------------------------------------------------
# Primitive byte parsers / builders


def parse_tes4_masters(data: bytes) -> tuple[int, list[str], bytes]:
    """Return (tes4_body_size, masters_list, full_tes4_record_bytes)."""
    assert data[:4] == b"TES4", f"not a TES4 file: starts with {data[:4]!r}"
    tes4_size = struct.unpack("<I", data[4:8])[0]
    masters: list[str] = []
    i = 20
    end = 20 + tes4_size
    while i < end:
        sig = data[i : i + 4]
        sz = struct.unpack("<H", data[i + 4 : i + 6])[0]
        if sig == b"MAST":
            masters.append(
                data[i + 6 : i + 6 + sz].rstrip(b"\x00").decode("ascii", errors="replace")
            )
        i += 6 + sz
    return tes4_size, masters, data[: 20 + tes4_size]


def walk_records(data: bytes, off: int, end: int) -> Iterator[tuple[int, int, str, int, int]]:
    """Yield (record_offset, total_size_with_header, sig, fid, flags) for each
    record in [off, end). Recurses into GRUPs.
    total_size_with_header is bytes from record start to its last byte + 1.
    """
    cursor = off
    while cursor < end:
        sig = data[cursor : cursor + 4]
        size = struct.unpack("<I", data[cursor + 4 : cursor + 8])[0]
        if sig == b"GRUP":
            # GRUP size includes the 20-byte GRUP header and all children
            yield from walk_records(data, cursor + 20, cursor + size)
            cursor += size
        else:
            flags = struct.unpack("<I", data[cursor + 8 : cursor + 12])[0]
            fid = struct.unpack("<I", data[cursor + 12 : cursor + 16])[0]
            yield cursor, 20 + size, sig.decode("ascii", errors="replace"), fid, flags
            cursor += 20 + size


def _decompress_body(data: bytes, rec_off: int) -> bytes:
    """Return the raw subrecord stream for a record, decompressing if needed."""
    flags = struct.unpack("<I", data[rec_off + 8 : rec_off + 12])[0]
    body_size = struct.unpack("<I", data[rec_off + 4 : rec_off + 8])[0]
    body_start = rec_off + 20
    body_end = body_start + body_size
    if flags & 0x40000:
        return zlib.decompress(data[body_start + 4 : body_end])
    return data[body_start:body_end]


def get_subrecord(
    data: bytes, rec_off: int, sig_target: bytes
) -> tuple[Optional[int], int, bytes]:
    """Return (offset_in_decompressed_body, size, payload) for first matching
    subrecord. (None, 0, b'') if not found.
    """
    body = _decompress_body(data, rec_off)
    j = 0
    while j + 6 <= len(body):
        sub_sig = body[j : j + 4]
        sub_size = struct.unpack("<H", body[j + 4 : j + 6])[0]
        if sub_sig == sig_target:
            return j, sub_size, body[j + 6 : j + 6 + sub_size]
        j += 6 + sub_size
    return None, 0, b""


def get_edid(data: bytes, rec_off: int) -> str:
    _, _, payload = get_subrecord(data, rec_off, b"EDID")
    return payload.rstrip(b"\x00").decode("ascii", errors="replace") if payload else ""


def remap_record_master_byte(rec_bytes: bytes, src_idx: int, dst_idx: int) -> bytes:
    """If the record's FormID's master byte is `src_idx`, rewrite it to `dst_idx`.
    Other records pass through unchanged.

    Note: only rewrites the record's own FormID. Form references inside the
    record body (e.g. SCRO, NAME pointing at other records) are NOT remapped —
    if your source and destination master orders differ for those, build a
    deeper remap pass.
    """
    fid = struct.unpack("<I", rec_bytes[12:16])[0]
    cur_byte = fid >> 24
    if cur_byte != src_idx:
        return rec_bytes
    new_fid = (dst_idx << 24) | (fid & 0x00FFFFFF)
    return rec_bytes[:12] + struct.pack("<I", new_fid) + rec_bytes[16:]


def build_tes4_record(masters: list[str], num_records: int, author: str = "Reborn-Port") -> bytes:
    """Build a TES4 record (header + body). 20-byte record header followed by
    HEDR + CNAM + (MAST + DATA)* subrecords.
    """
    hedr_payload = struct.pack("<fII", 1.0, num_records, 0x800)
    hedr = b"HEDR" + struct.pack("<H", len(hedr_payload)) + hedr_payload

    author_bytes = author.encode("ascii") + b"\x00"
    cnam = b"CNAM" + struct.pack("<H", len(author_bytes)) + author_bytes

    masters_data = b""
    for m in masters:
        m_bytes = m.encode("ascii") + b"\x00"
        masters_data += b"MAST" + struct.pack("<H", len(m_bytes)) + m_bytes
        # DATA subrecord (8-byte uint64 file size — required after each MAST)
        masters_data += b"DATA" + struct.pack("<H", 8) + struct.pack("<Q", 0)

    body = hedr + cnam + masters_data
    # Oblivion record header: 4 sig + 4 datasize + 4 flags + 4 fid + 4 versionControl = 20 bytes
    header = b"TES4" + struct.pack("<I", len(body)) + b"\x00" * 12
    return header + body


def build_grup_record(label: bytes, child_data: bytes, group_type: int = 0) -> bytes:
    """Build a top-level GRUP wrapping the given child record bytes.
    label is 4 bytes (e.g. b'SCPT' for a top-level GRUP holding SCPTs).
    group_type=0 is "top group".
    """
    total_size = 20 + len(child_data)
    header = (
        b"GRUP"
        + struct.pack("<I", total_size)
        + label
        + struct.pack("<I", group_type)
        + b"\x00" * 4
    )
    return header + child_data


# -----------------------------------------------------------------------------
# High-level API


@dataclass
class RecordInfo:
    sig: str            # e.g. 'SCPT'
    fid: int            # full FormID (master byte | local FID)
    edid: str           # editor ID, '' if none
    master_idx: int     # source master byte (fid >> 24)
    local_fid: int      # 24-bit local FormID
    raw_bytes: bytes    # full record bytes (header + body) from source
    flags: int          # record flags

    @property
    def scda_size(self) -> int:
        """Convenience for SCPTs: byte size of compiled bytecode."""
        if self.sig != "SCPT":
            return 0
        # We need to re-parse from raw_bytes; build a tiny in-memory parse
        body = _decompress_body_local(self.raw_bytes, 0)
        j = 0
        while j + 6 <= len(body):
            sub_sig = body[j : j + 4]
            sub_size = struct.unpack("<H", body[j + 4 : j + 6])[0]
            if sub_sig == b"SCDA":
                return sub_size
            j += 6 + sub_size
        return 0


def _decompress_body_local(data: bytes, rec_off: int) -> bytes:
    return _decompress_body(data, rec_off)


@dataclass
class EspData:
    path: str
    raw: bytes
    tes4_size: int
    masters: list[str]


def parse_esp(path: str) -> EspData:
    raw = open(path, "rb").read()
    tes4_size, masters, _ = parse_tes4_masters(raw)
    return EspData(path=path, raw=raw, tes4_size=tes4_size, masters=masters)


def iter_records(esp: EspData) -> Iterator[RecordInfo]:
    """Yield RecordInfo for every record in the ESP (post-TES4)."""
    cursor = 20 + esp.tes4_size
    for off, total_size, sig, fid, flags in walk_records(esp.raw, cursor, len(esp.raw)):
        yield RecordInfo(
            sig=sig,
            fid=fid,
            edid=get_edid(esp.raw, off),
            master_idx=fid >> 24,
            local_fid=fid & 0x00FFFFFF,
            raw_bytes=esp.raw[off : off + total_size],
            flags=flags,
        )


def build_override_esp(
    out_path: str,
    masters: list[str],
    records: list[RecordInfo],
    author: str = "Reborn-Port",
) -> bytes:
    """Write a new ESP at out_path containing the given records, grouped by
    signature into top-level GRUPs in the order signatures first appear in
    `records`. Returns the bytes written.

    Caller is responsible for ensuring each record's `raw_bytes` already has
    the correct master byte for the destination ESP's master list. Use
    remap_record_master_byte() if needed before calling.
    """
    os.makedirs(os.path.dirname(out_path) or ".", exist_ok=True)

    # Group by sig, preserving first-appearance order
    by_sig: dict[str, list[bytes]] = {}
    for r in records:
        by_sig.setdefault(r.sig, []).append(r.raw_bytes)

    grups = b""
    for sig, recs in by_sig.items():
        grups += build_grup_record(sig.encode("ascii"), b"".join(recs))

    tes4 = build_tes4_record(masters, len(records), author=author)
    out = tes4 + grups

    with open(out_path, "wb") as f:
        f.write(out)
    return out
