from pathlib import Path
import pytest
from g5.candidates import load_candidates


def test_load_candidates_parses_hex(tmp_path):
    fixture = Path(__file__).parent / "fixtures" / "candidates_sample.json"
    cands = load_candidates(fixture)
    assert len(cands) == 2
    assert cands[0]["form_id"] == 0x010052BE
    assert cands[0]["edid"] == "OOOFlourishingForest1"
    assert cands[0]["coc_cell"] == "WeyeBoatHouse"
    assert cands[1]["form_id"] == 0x010052BF
    assert "coc_cell" not in cands[1]


def test_load_candidates_accepts_int(tmp_path):
    f = tmp_path / "c.json"
    f.write_text('[{"form_id": 16797886, "edid": "X"}]')
    cands = load_candidates(f)
    assert cands[0]["form_id"] == 16797886
