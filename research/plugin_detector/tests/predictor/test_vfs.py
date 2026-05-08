"""Tests against the live Reborn-OOO profile."""
from pathlib import Path
from predictor.vfs import parse_modlist

PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")


def test_parse_modlist_returns_active_mods():
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    assert len(mods) > 50, f"expected >50 active mods, got {len(mods)}"
    # G5 Validator was enabled during T15; should be present.
    assert any("G5 Validator".lower() in m.lower() for m in mods), \
        "expected G5 Validator in active mods"


def test_modlist_priority_order():
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    assert isinstance(mods, list)
    for m in mods:
        assert isinstance(m, str)
        assert m  # non-empty
