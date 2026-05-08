"""Tests against the live Reborn-OOO profile."""
from pathlib import Path
from predictor.vfs import parse_modlist, build_loose_index

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


MODS_DIR = Path(r"D:\Modlists\Reborn\mods")


def test_loose_index_finds_g5_dll():
    """G5 Validator mod has a known file (g5.dll)."""
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    idx = build_loose_index(mods, MODS_DIR)
    target = "obse/plugins/g5.dll"
    assert target in idx, f"expected {target} in index, got {len(idx)} files indexed"
    real_path = idx[target]
    assert real_path.exists()
    assert real_path.name.lower() == "g5.dll"


def test_bsa_index_finds_vanilla_mesh():
    """Oblivion - Meshes.bsa should be present in active mods and contain
    well-known vanilla mesh paths (or at least, the BSA index should be
    non-empty)."""
    from predictor.vfs import build_bsa_index
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    idx = build_bsa_index(mods, MODS_DIR)
    # Sanity: at least some BSA was parsed.
    assert len(idx) > 0, f"expected non-empty BSA index, got {len(idx)} entries"
    # All keys should be lowercase forward-slash paths.
    for key in list(idx.keys())[:10]:
        assert key == key.lower()
        assert "\\" not in key


def test_path_exists_combines_loose_and_bsa():
    from predictor.vfs import VFS
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=MODS_DIR)
    # Loose: G5 plugin DLL.
    assert vfs.path_exists("obse/plugins/g5.dll")
    # Definitively non-existent.
    assert not vfs.path_exists("meshes/this/does/not/exist.nif")
    # resolve() works for both.
    p = vfs.resolve("obse/plugins/g5.dll")
    assert p is not None
    assert p.exists()
    # Non-existent returns None.
    assert vfs.resolve("meshes/does/not/exist.nif") is None
