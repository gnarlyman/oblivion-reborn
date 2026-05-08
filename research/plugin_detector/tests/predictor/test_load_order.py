from pathlib import Path
import pytest
from predictor.load_order import (
    parse_plugins_txt,
    parse_plugin_masters,
    build_load_order,
    LoadOrder,
)

# Live test inputs — Reborn-OOO profile.
PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")


def test_parse_plugins_txt_returns_active_plugins():
    plugins = parse_plugins_txt(PROFILE_DIR / "plugins.txt")
    assert "Oblivion.esm" in plugins
    assert plugins[0] == "Oblivion.esm", "Oblivion.esm must be first"
    # Bashed Patch must be present (not necessarily last — MOO loads after BP
    # in the Reborn-OOO profile so it can override BP leveled lists).
    assert any("bashed patch" in p.lower() for p in plugins), \
        "expected Bashed Patch to be present in plugin list"
    assert len(plugins) > 10, f"expected many plugins, got {len(plugins)}"


def test_parse_plugin_masters_for_oblivion_esm_is_empty():
    data_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
    masters = parse_plugin_masters(data_dir / "Oblivion.esm")
    assert masters == []


def test_build_load_order_assigns_indices():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    assert lo.index_of("Oblivion.esm") == 0
    assert len(lo.plugins) > 50, f"expected >50 plugins, got {len(lo.plugins)}"


def test_to_lo_fid_self_reference():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    # Oblivion.esm has no masters; high-byte 0 means "self".
    assert lo.to_lo_fid("Oblivion.esm", 0x00023F2A) == 0x00023F2A
    # Invalid master index should return -1.
    assert lo.to_lo_fid("Oblivion.esm", 0xFF023F2A) == -1


def test_to_lo_fid_master_reference():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    second_plugin = None
    for p in lo.plugins[1:]:
        if "Oblivion.esm" in lo.masters.get(p, []):
            second_plugin = p
            break
    assert second_plugin is not None, "expected at least one ESP referencing Oblivion.esm"
    assert lo.to_lo_fid(second_plugin, 0x00023F2A) == 0x00023F2A


def test_build_winning_records_basics():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    from predictor.load_order import build_winning_records
    winners = build_winning_records(lo, signatures={"NPC_"})
    # We expect thousands of NPC_ records.
    assert len(winners) > 1000, f"expected >1000 winning NPCs, got {len(winners)}"
    # Vanilla Imperial Legion guard FormID; should be present.
    guard_lo_fid = 0x00023F2A
    assert guard_lo_fid in winners, "expected vanilla guard FID 00023F2A as a winner"
    plugin_name, sig, body = winners[guard_lo_fid]
    assert sig == "NPC_"
    assert isinstance(body, (bytes, bytearray))
    assert len(body) > 0
