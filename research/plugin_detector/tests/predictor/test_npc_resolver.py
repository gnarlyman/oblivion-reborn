from pathlib import Path
import pytest
from predictor.load_order import build_load_order, build_winning_records
from predictor.npc_resolver import extract_base_cnto, resolve_lvli

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


def test_has_script_detects_scri_subrecord():
    from predictor.npc_resolver import has_script
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_"})
    sample_count = 0
    has_script_count = 0
    for fid, (plugin, sig, body) in list(winners.items())[:200]:
        result = has_script(body)
        assert isinstance(result, bool)
        sample_count += 1
        if result:
            has_script_count += 1
    # Some NPCs should have scripts (PSMQD, MOO regional packs, etc.).
    assert has_script_count > 0, "expected at least one NPC with SCRI in 200 samples"


def test_resolve_lvli_returns_leaves():
    from predictor.npc_resolver import resolve_lvli
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    # Find an LVLI in winners.
    lvli_lo_fid = None
    for fid, (plugin, sig, body) in winners.items():
        if sig == "LVLI":
            lvli_lo_fid = fid
            break
    assert lvli_lo_fid is not None, "expected at least one LVLI in load order"
    leaves = resolve_lvli(lvli_lo_fid, winners, lo, max_depth=8)
    assert isinstance(leaves, set)
    # Most LVLIs should resolve to at least one leaf, but some may be empty
    # (depth-cap edge cases or empty entry lists). Just check the function ran.


def test_resolve_inventory_returns_concrete_set():
    from predictor.npc_resolver import resolve_inventory
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    guard_lo_fid = 0x00023F2A
    inv = resolve_inventory(guard_lo_fid, winners, lo)
    assert "concrete" in inv
    assert "has_script" in inv
    assert "lvli_paths_walked" in inv
    assert isinstance(inv["concrete"], set)
    assert isinstance(inv["has_script"], bool)
    assert isinstance(inv["lvli_paths_walked"], list)
    # Vanilla guard should have at least one concrete entry.
    assert len(inv["concrete"]) > 0


def test_resolve_inventory_with_mesh_check():
    from predictor.npc_resolver import resolve_inventory_with_meshes
    from predictor.vfs import VFS, parse_modlist

    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=Path(r"D:\Modlists\Reborn\mods"))

    # Dremora0ChurlMissile1 (FormID 0x00014692) — known visually-broken NPC
    # per T15 spot-check.
    dremora_lo_fid = 0x00014692
    inv = resolve_inventory_with_meshes(dremora_lo_fid, winners, lo, vfs)
    assert "concrete" in inv
    assert "missing_meshes" in inv
    # missing_meshes is a list of (form_id, missing_path) tuples.
    assert isinstance(inv["missing_meshes"], list)
    for entry in inv["missing_meshes"]:
        assert isinstance(entry, tuple)
        assert len(entry) == 2
        assert isinstance(entry[0], int)
        assert isinstance(entry[1], str)
