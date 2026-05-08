from pathlib import Path
import pytest
from predictor.load_order import build_load_order, build_winning_records
from predictor.npc_resolver import extract_base_cnto

PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")
DATA_DIR = Path(r"D:\Modlists\Reborn\Stock Game\Data")


def test_extract_base_cnto_for_imperial_legion_guard():
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_"})
    # Imperial Legion guard, vanilla.
    guard_lo_fid = 0x00023F2A
    plugin, sig, body = winners[guard_lo_fid]
    cnto = extract_base_cnto(body)
    assert len(cnto) > 0, f"expected non-empty CNTO for guard, got {cnto}"
    # Each entry is (form_id, count). FormIDs are raw (not LO-converted).
    for fid, count in cnto:
        assert isinstance(fid, int)
        assert isinstance(count, int)
        assert count > 0
