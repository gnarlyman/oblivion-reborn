"""NPC inventory resolution.

Walks a winning NPC_ record body and returns the inventory in stages:
  base CNTO → template chain → race default → LVLI rolls.
"""
import struct
from typing import Iterable

from predictor.plugin_parser import parse_subrecords


def has_script(npc_body: bytes) -> bool:
    """Returns True if the NPC_ record contains a SCRI subrecord."""
    for ssig, _ in parse_subrecords(npc_body):
        if ssig == "SCRI":
            return True
    return False


def resolve_lvli(
    lvli_lo_fid: int,
    winners: dict,
    lo,  # LoadOrder
    max_depth: int = 8,
    _seen: set | None = None,
) -> set:
    """Walk an LVLI's LVLO subrecords recursively. Returns the set of leaf
    LO FormIDs that could appear at runtime.

    LVLI body has LVLO subrecords with format:
      uint16 level + uint16 unused + uint32 form_id + uint16 count + uint16 unused
    Per UESP wiki for Oblivion LVLI records.
    """
    if _seen is None:
        _seen = set()
    if lvli_lo_fid in _seen or max_depth <= 0:
        return set()
    _seen.add(lvli_lo_fid)
    if lvli_lo_fid not in winners:
        return set()
    plugin, sig, body = winners[lvli_lo_fid]
    if sig != "LVLI":
        return {lvli_lo_fid}  # leaf — caller treats as concrete

    leaves: set = set()
    for ssig, ssub in parse_subrecords(body):
        if ssig != "LVLO":
            continue
        if len(ssub) < 12:
            continue
        # Skip 4 bytes (level + unused), read form_id, ignore count + unused.
        raw_fid = struct.unpack_from("<I", ssub, 4)[0]
        target_lo_fid = lo.to_lo_fid(plugin, raw_fid)
        if target_lo_fid < 0:
            continue
        if target_lo_fid in winners and winners[target_lo_fid][1] == "LVLI":
            leaves |= resolve_lvli(target_lo_fid, winners, lo, max_depth - 1, _seen)
        else:
            leaves.add(target_lo_fid)
    return leaves


def extract_base_cnto(npc_body: bytes) -> list[tuple[int, int]]:
    """Walk an NPC_ record body's CNTO subrecords. Returns list of
    (raw_form_id, count) tuples, in order of appearance.

    Does NOT perform FID conversion — caller must convert raw_form_id to
    LO FID via the plugin's master table."""
    out: list[tuple[int, int]] = []
    for ssig, ssub in parse_subrecords(npc_body):
        if ssig != "CNTO":
            continue
        if len(ssub) < 8:
            continue
        fid, count = struct.unpack_from("<II", ssub, 0)
        out.append((fid, count))
    return out
