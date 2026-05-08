"""NPC inventory resolution.

Walks a winning NPC_ record body and returns the inventory in stages:
  base CNTO → template chain → race default → LVLI rolls.
"""
import struct
from typing import Iterable

from predictor.plugin_parser import parse_subrecords


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
