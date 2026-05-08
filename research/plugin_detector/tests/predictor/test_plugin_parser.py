"""Smoke tests against the live Oblivion.esm to verify the parser helpers
are usable from inside the predictor module."""
from pathlib import Path
from predictor.plugin_parser import iter_records, parse_subrecords, cstr, load_plugin

OBLIVION_ESM = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")


def test_iter_records_yields_at_least_one_npc():
    data, masters = load_plugin(OBLIVION_ESM)
    assert masters == [], "Oblivion.esm has no masters"
    npc_count = sum(1 for top, sig, fid, flags, body in iter_records(data) if sig == "NPC_")
    assert npc_count > 1000, f"expected >1000 NPC_ records, got {npc_count}"


def test_parse_subrecords_finds_edid():
    data, _ = load_plugin(OBLIVION_ESM)
    found = False
    for top, sig, fid, flags, body in iter_records(data):
        if sig != "NPC_":
            continue
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
                if edid:
                    found = True
                    break
        if found:
            break
    assert found, "no EDID subrecord found in any NPC_ record"
