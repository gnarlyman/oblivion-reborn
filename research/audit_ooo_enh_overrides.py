"""Analyze what OOO Enhanced changes about existing records.

For each major override class, sample representative records and report
which subrecords differ vs the master, with edit-value-like translation.
"""
from __future__ import annotations

import io
import json
import struct
import sys
import zlib
from collections import Counter, defaultdict
from pathlib import Path

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")

sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import (
    parse_subrecords, cstr, load_plugin, iter_records,
    OOO_ENH, OOO_ESM, VANILLA, OUT_DIR,
)


def fid_unpack(b):
    if len(b) < 4:
        return 0
    return struct.unpack_from("<I", b)[0]


def index_records(data, file_alias):
    out = {}
    for top, sig, r_fid, _, body in iter_records(data):
        local = r_fid & 0x00FFFFFF
        out[(file_alias, sig, local)] = body
    return out


def get_subrec_summary(body):
    """Build a dict of signature -> list of bytes-representation for diffing."""
    by_sig = defaultdict(list)
    for sig, sub in parse_subrecords(body):
        by_sig[sig].append(sub)
    return by_sig


def edid_full(body):
    e, f = "", ""
    for sig, sub in parse_subrecords(body):
        if sig == "EDID":
            e = cstr(sub)
        elif sig == "FULL":
            f = cstr(sub)
    return e, f


def main():
    enh_data, enh_masters = load_plugin(OOO_ENH)
    self_idx = len(enh_masters)
    print(f"Loading masters...", flush=True)
    ooo_data, _ = load_plugin(OOO_ESM)
    van_data, _ = load_plugin(VANILLA)
    print("Indexing...", flush=True)
    ooo_idx = index_records(ooo_data, "ooo.esm")
    van_idx = index_records(van_data, "oblivion.esm")

    # Master-resolver: for an override record's high-byte, return the master body
    def master_body(sig, r_fid):
        high = (r_fid >> 24) & 0xFF
        local = r_fid & 0x00FFFFFF
        if high >= len(enh_masters):
            return None
        mp = enh_masters[high].lower()
        if "oblivion.esm" in mp:
            return van_idx.get(("oblivion.esm", sig, local))
        if "oscuro" in mp and ".esm" in mp:
            return ooo_idx.get(("ooo.esm", sig, local))
        return None

    # Collect overrides per class
    overrides_by_sig = defaultdict(list)
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if (r_fid >> 24) & 0xFF >= self_idx:
            continue
        if sig in ("REFR", "ACHR", "ACRE", "PGRD", "LAND"):
            continue  # placement edits not interesting at this level
        overrides_by_sig[sig].append((r_fid, body))

    print(f"\nOverride counts: {[(s, len(l)) for s, l in sorted(overrides_by_sig.items(), key=lambda kv:-len(kv[1]))[:15]]}\n")

    # ------------------------------------------------------------
    # WEAP changes — show what's modified
    # ------------------------------------------------------------
    print("=" * 70)
    print("WEAP overrides — sample of what changed")
    print("=" * 70)
    sample_weap = []
    weap_change_kinds = Counter()
    for r_fid, body in overrides_by_sig["WEAP"][:200]:
        mb = master_body("WEAP", r_fid)
        if not mb:
            continue
        m_subs = dict((s, b) for s, b in parse_subrecords(mb))
        e_subs = dict((s, b) for s, b in parse_subrecords(body))
        edid, full = edid_full(body)
        diffs = []
        # ENAM = enchantment FormID
        if e_subs.get("ENAM", b"\x00\x00\x00\x00") != m_subs.get("ENAM", b"\x00\x00\x00\x00"):
            old = fid_unpack(m_subs.get("ENAM", b"\x00" * 4))
            new = fid_unpack(e_subs.get("ENAM", b"\x00" * 4))
            diffs.append(f"ENAM: 0x{old:08X} -> 0x{new:08X}")
            weap_change_kinds["enchantment"] += 1
        # ANAM = enchantment points (uint16)
        if e_subs.get("ANAM") != m_subs.get("ANAM"):
            diffs.append("ANAM (enchant pts)")
            weap_change_kinds["enchant_pts"] += 1
        # DATA = weapon data (type/speed/reach/value/health/weight/damage)
        md = m_subs.get("DATA", b"")
        ed = e_subs.get("DATA", b"")
        if md and ed and md != ed and len(md) >= 24 and len(ed) >= 24:
            mt = struct.unpack("<I f f I I f I I", md[:32]) if len(md) >= 32 else None
            et = struct.unpack("<I f f I I f I I", ed[:32]) if len(ed) >= 32 else None
            if mt and et:
                # Type, Speed, Reach, EnchPoints, Health, Weight, Damage (we'll just compare value+damage)
                diffs.append(f"DATA: hp={mt[4]}->{et[4]} dmg={mt[7]}->{et[7]} val={mt[3]}->{et[3]}")
                weap_change_kinds["data"] += 1
        # MODL = mesh
        if e_subs.get("MODL") != m_subs.get("MODL"):
            diffs.append(f"MODL changed: {cstr(m_subs.get('MODL', b''))} -> {cstr(e_subs.get('MODL', b''))}")
            weap_change_kinds["mesh"] += 1
        if e_subs.get("FULL") != m_subs.get("FULL"):
            diffs.append(f"FULL: {cstr(m_subs.get('FULL', b''))!r} -> {cstr(e_subs.get('FULL', b''))!r}")
            weap_change_kinds["renamed"] += 1
        if diffs and len(sample_weap) < 25:
            sample_weap.append({"fid": f"0x{r_fid:08X}", "edid": edid, "full": full, "diffs": diffs})

    print(f"\nWEAP change kinds (first 200 sampled): {dict(weap_change_kinds)}\n")
    for s in sample_weap[:15]:
        print(f"  {s['fid']} {s['edid']} {s['full']!r}")
        for d in s["diffs"][:4]:
            print(f"      {d}")

    # ------------------------------------------------------------
    # ENCH overrides — most common: are they rebalanced?
    # ------------------------------------------------------------
    print("\n" + "=" * 70)
    print("ENCH overrides — what's being rebalanced")
    print("=" * 70)
    sample_ench = []
    for r_fid, body in overrides_by_sig["ENCH"][:300]:
        mb = master_body("ENCH", r_fid)
        if not mb:
            continue
        m_subs = list(parse_subrecords(mb))
        e_subs = list(parse_subrecords(body))
        edid, full = edid_full(body)
        diffs = []
        m_efit = [b for s, b in m_subs if s == "EFIT"]
        e_efit = [b for s, b in e_subs if s == "EFIT"]
        # EFIT = effect data (magnitude/area/duration/...)
        if len(m_efit) != len(e_efit):
            diffs.append(f"effect_count: {len(m_efit)} -> {len(e_efit)}")
        else:
            for i, (m, e) in enumerate(zip(m_efit, e_efit)):
                if m != e and len(m) >= 20 and len(e) >= 20:
                    # EFIT: 4 effect_id, 4 magnitude, 4 area, 4 duration, 4 type, 4 actor_value
                    mm = struct.unpack("<4s I I I I i", m[:24]) if len(m) >= 24 else None
                    ee = struct.unpack("<4s I I I I i", e[:24]) if len(e) >= 24 else None
                    if mm and ee and mm != ee:
                        eff_name = mm[0].decode("latin-1", "replace").strip("\x00")
                        diffs.append(f"effect[{i}] {eff_name}: mag={mm[1]}->{ee[1]} dur={mm[3]}->{ee[3]}")
        # ENIT = enchantment data (item type / cost / no_auto_calc)
        m_enit = next((b for s, b in m_subs if s == "ENIT"), b"")
        e_enit = next((b for s, b in e_subs if s == "ENIT"), b"")
        if m_enit != e_enit and len(m_enit) >= 8 and len(e_enit) >= 8:
            m_cost = struct.unpack_from("<I", m_enit, 4)[0]
            e_cost = struct.unpack_from("<I", e_enit, 4)[0]
            if m_cost != e_cost:
                diffs.append(f"cost: {m_cost} -> {e_cost}")
        if diffs and len(sample_ench) < 20:
            sample_ench.append({"fid": f"0x{r_fid:08X}", "edid": edid, "full": full, "diffs": diffs})

    for s in sample_ench[:15]:
        print(f"  {s['fid']} {s['edid']:30s} {s['full'][:30]!r}")
        for d in s["diffs"][:3]:
            print(f"      {d}")

    # ------------------------------------------------------------
    # CREA overrides — stat/level/equipment changes on existing creatures
    # ------------------------------------------------------------
    print("\n" + "=" * 70)
    print("CREA overrides — what changed on existing creatures")
    print("=" * 70)
    sample_crea = []
    for r_fid, body in overrides_by_sig["CREA"][:300]:
        mb = master_body("CREA", r_fid)
        if not mb:
            continue
        m_subs = dict((s, b) for s, b in parse_subrecords(mb))
        e_subs = dict((s, b) for s, b in parse_subrecords(body))
        edid, full = edid_full(body)
        diffs = []
        # ACBS for CREA: bytes contain (flags U32, base_spell U16, fatigue U16, barter_gold U16, level S16, calc_min U16, calc_max U16, ...)
        macbs = m_subs.get("ACBS")
        eacbs = e_subs.get("ACBS")
        if macbs and eacbs and macbs != eacbs and len(macbs) >= 16 and len(eacbs) >= 16:
            ml = struct.unpack_from("<h", macbs, 10)[0]
            el = struct.unpack_from("<h", eacbs, 10)[0]
            mcmin = struct.unpack_from("<H", macbs, 12)[0]
            ecmin = struct.unpack_from("<H", eacbs, 12)[0]
            mcmax = struct.unpack_from("<H", macbs, 14)[0]
            ecmax = struct.unpack_from("<H", eacbs, 14)[0]
            if ml != el or mcmin != ecmin or mcmax != ecmax:
                diffs.append(f"level={ml}->{el} cmin={mcmin}->{ecmin} cmax={mcmax}->{ecmax}")
        # FNAM (CREA) - faction... actually for CREA it's different
        # SPLO additions/removals
        m_splo = set(b[:4] for s, b in parse_subrecords(mb) if s == "SPLO")
        e_splo = set(b[:4] for s, b in parse_subrecords(body) if s == "SPLO")
        if m_splo != e_splo:
            added = e_splo - m_splo
            removed = m_splo - e_splo
            if added or removed:
                diffs.append(f"spells: +{len(added)}/-{len(removed)}")
        # CNTO entries
        m_cnto = set(b[:4] for s, b in parse_subrecords(mb) if s == "CNTO")
        e_cnto = set(b[:4] for s, b in parse_subrecords(body) if s == "CNTO")
        if m_cnto != e_cnto:
            diffs.append(f"inventory: +{len(e_cnto - m_cnto)}/-{len(m_cnto - e_cnto)}")
        # FULL renamed
        if e_subs.get("FULL") != m_subs.get("FULL"):
            diffs.append(f"renamed: {cstr(m_subs.get('FULL', b''))!r} -> {cstr(e_subs.get('FULL', b''))!r}")
        if diffs and len(sample_crea) < 20:
            sample_crea.append({"fid": f"0x{r_fid:08X}", "edid": edid, "full": full, "diffs": diffs})

    for s in sample_crea[:15]:
        print(f"  {s['fid']} {s['edid']:35s} {s['full']!r}")
        for d in s["diffs"][:3]:
            print(f"      {d}")

    # ------------------------------------------------------------
    # NPC_ overrides on Oblivion.esm vanilla NPCs (named ones)
    # ------------------------------------------------------------
    print("\n" + "=" * 70)
    print("NPC_ overrides on VANILLA Oblivion NPCs — what's being changed")
    print("=" * 70)
    sample_npc = []
    for r_fid, body in overrides_by_sig["NPC_"]:
        # Only vanilla NPCs (master = oblivion.esm; high byte 0)
        if (r_fid >> 24) != 0:
            continue
        mb = master_body("NPC_", r_fid)
        if not mb:
            continue
        m_subs = dict((s, b) for s, b in parse_subrecords(mb))
        e_subs = dict((s, b) for s, b in parse_subrecords(body))
        edid, full = edid_full(body)
        diffs = []
        # Faction membership: SNAM
        m_facts = set(b[:8] for s, b in parse_subrecords(mb) if s == "SNAM")
        e_facts = set(b[:8] for s, b in parse_subrecords(body) if s == "SNAM")
        if m_facts != e_facts:
            diffs.append(f"factions: +{len(e_facts - m_facts)}/-{len(m_facts - e_facts)}")
        # Inventory CNTO
        m_cnto = [b[:4] for s, b in parse_subrecords(mb) if s == "CNTO"]
        e_cnto = [b[:4] for s, b in parse_subrecords(body) if s == "CNTO"]
        if Counter(m_cnto) != Counter(e_cnto):
            adds = len([x for x in e_cnto if x not in m_cnto])
            drops = len([x for x in m_cnto if x not in e_cnto])
            if adds or drops:
                diffs.append(f"inventory: +{adds}/-{drops}")
        # Spells SPLO
        m_splo = [b[:4] for s, b in parse_subrecords(mb) if s == "SPLO"]
        e_splo = [b[:4] for s, b in parse_subrecords(body) if s == "SPLO"]
        if Counter(m_splo) != Counter(e_splo):
            adds = len([x for x in e_splo if x not in m_splo])
            drops = len([x for x in m_splo if x not in e_splo])
            if adds or drops:
                diffs.append(f"spells: +{adds}/-{drops}")
        # Stats: ACBS
        macbs = m_subs.get("ACBS")
        eacbs = e_subs.get("ACBS")
        if macbs and eacbs and macbs != eacbs and len(macbs) >= 16 and len(eacbs) >= 16:
            ml = struct.unpack_from("<H", macbs, 10)[0]
            el = struct.unpack_from("<H", eacbs, 10)[0]
            if ml != el:
                diffs.append(f"level: {ml} -> {el}")
        # Renamed
        if e_subs.get("FULL") != m_subs.get("FULL"):
            diffs.append(f"renamed: {cstr(m_subs.get('FULL', b''))!r} -> {cstr(e_subs.get('FULL', b''))!r}")
        if diffs and full and len(sample_npc) < 30:
            sample_npc.append({"fid": f"0x{r_fid:08X}", "edid": edid, "full": full, "diffs": diffs})

    for s in sample_npc[:25]:
        print(f"  {s['fid']} {s['edid']:30s} {s['full'][:30]!r}")
        for d in s["diffs"][:3]:
            print(f"      {d}")


if __name__ == "__main__":
    main()
