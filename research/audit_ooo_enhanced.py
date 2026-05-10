"""Comprehensive audit of OOO Enhanced.esp.

Phase 1: split every record into NEW (added by OOO Enhanced itself) vs
OVERRIDE (modifying a master's record). Count per top-level group.

Phase 2: for OVERRIDES, detect dropped subrecords — what content was in the
master but is missing in OOO Enhanced's override.

Phase 3: for NEW records, audit basic correctness — NPCs need
inventory/race/etc., ARMO/CLOT/WEAP need resolvable meshes, etc.

Outputs JSONL for each phase + summary tables to stdout.
"""
from __future__ import annotations

import json
import struct
import sys
import zlib
from collections import Counter, defaultdict
from pathlib import Path

OOO_ENH = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
OOO_ESM = Path(r"D:\Modlists\Reborn\mods\OOO - Oscuro's Oblivion Overhaul - Updated\Oscuro's_Oblivion_Overhaul.esm")
VANILLA = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")

OUT_DIR = Path(r"D:\Modlists\Reborn\research")


def parse_subrecords(body: bytes):
    subs = []
    off = 0
    pending = None
    while off + 6 <= len(body):
        sig = body[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", body, off + 4)[0]
        off += 6
        if sig == "XXXX":
            pending = struct.unpack_from("<I", body, off)[0]
            off += size
            continue
        if pending is not None:
            size = pending
            pending = None
        subs.append((sig, body[off:off + size]))
        off += size
    return subs


def cstr(b: bytes) -> str:
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")


def load_plugin(path: Path):
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        raise RuntimeError(f"Not TES4: {path}")
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    masters = []
    for sig, sub in parse_subrecords(data[20:20 + tes4_size]):
        if sig == "MAST":
            masters.append(cstr(sub).lower())
    return data, masters


def iter_records(data: bytes):
    """Yield (top_group_label, r_fid, r_flags, body_decompressed) for every
    record under any top-level group, recursing through nested groups."""
    if data[0:4] != b"TES4":
        return
    tes4_size = struct.unpack_from("<I", data, 4)[0]

    def walk(off, end, top_label):
        while off < end:
            tag = data[off:off + 4].decode("latin-1", "replace")
            if tag == "GRUP":
                grp_size = struct.unpack_from("<I", data, off + 4)[0]
                yield from walk(off + 20, off + grp_size, top_label)
                off += grp_size
                continue
            r_size = struct.unpack_from("<I", data, off + 4)[0]
            r_flags = struct.unpack_from("<I", data, off + 8)[0]
            r_fid = struct.unpack_from("<I", data, off + 12)[0]
            body = data[off + 20:off + 20 + r_size]
            if r_flags & 0x00040000:
                try:
                    body = zlib.decompress(body[4:])
                except Exception:
                    pass
            yield top_label, tag, r_fid, r_flags, body
            off += 20 + r_size

    off = 20 + tes4_size
    while off < len(data):
        if data[off:off + 4] != b"GRUP":
            break
        grp_size = struct.unpack_from("<I", data, off + 4)[0]
        grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
        grp_end = off + grp_size
        yield from walk(off + 20, grp_end, grp_label)
        off = grp_end


def index_records_by_local_fid(data: bytes):
    """Return dict mapping (signature, local_fid) → body bytes."""
    out = {}
    for top, sig, r_fid, _, body in iter_records(data):
        out[(sig, r_fid & 0x00FFFFFF)] = body
    return out


def main():
    print("Loading plugins…", flush=True)
    enh_data, enh_masters = load_plugin(OOO_ENH)
    ooo_data, ooo_masters = load_plugin(OOO_ESM)
    van_data, van_masters = load_plugin(VANILLA)

    print(f"  OOO Enhanced.esp masters: {enh_masters}")
    print(f"  Self index = {len(enh_masters)} (records with high byte == that index are NEW)")

    self_idx = len(enh_masters)

    # Index masters for quick lookup
    print("Indexing master records…", flush=True)
    ooo_idx = index_records_by_local_fid(ooo_data)
    van_idx = index_records_by_local_fid(van_data)
    print(f"  OOO.esm: {len(ooo_idx)} records   Oblivion.esm: {len(van_idx)} records")

    # Phase 1: classify records
    print("\n=== PHASE 1: NEW vs OVERRIDE counts per signature ===\n", flush=True)
    new_counts: dict[str, int] = Counter()
    ovr_counts: dict[str, int] = Counter()
    ovr_master: dict[str, Counter] = defaultdict(Counter)

    new_records_by_sig: dict[str, list] = defaultdict(list)
    ovr_records_by_sig: dict[str, list] = defaultdict(list)

    for top, sig, r_fid, r_flags, body in iter_records(enh_data):
        high = (r_fid >> 24) & 0xFF
        local = r_fid & 0x00FFFFFF
        if high == self_idx:
            new_counts[sig] += 1
            new_records_by_sig[sig].append((r_fid, body))
        else:
            ovr_counts[sig] += 1
            mp = enh_masters[high] if high < len(enh_masters) else f"<bad:{high:02X}>"
            ovr_master[sig][mp] += 1
            ovr_records_by_sig[sig].append((r_fid, body, mp))

    sigs = sorted(set(new_counts) | set(ovr_counts), key=lambda s: -(new_counts[s] + ovr_counts[s]))
    print(f"{'SIG':6s}  {'NEW':>6s}  {'OVERRIDE':>9s}  {'top masters':30s}")
    total_new = 0
    total_ovr = 0
    for sig in sigs:
        n = new_counts[sig]
        o = ovr_counts[sig]
        total_new += n
        total_ovr += o
        # show which masters dominate the override breakdown
        top_masters = ", ".join(f"{m}:{c}" for m, c in ovr_master[sig].most_common(2))
        print(f"  {sig:4s}  {n:6d}  {o:9d}    {top_masters}")
    print(f"\nTotals: {total_new} NEW, {total_ovr} OVERRIDE  (ratio new/total = {total_new/(total_new+total_ovr):.1%})")

    # Phase 2: dropped subrecords across overrides (any subrecord type)
    print("\n=== PHASE 2: subrecord drops across all overrides ===\n", flush=True)

    drop_summary: Counter = Counter()  # signature → count of records with at least one dropped subrecord type
    drop_subrec: Counter = Counter()  # (override_sig, dropped_sub_sig) → count

    for sig, records in ovr_records_by_sig.items():
        for r_fid, ovr_body, mp in records:
            local = r_fid & 0x00FFFFFF
            # Look up master record
            if "oscuro" in mp:
                mb = ooo_idx.get((sig, local))
            elif "oblivion.esm" in mp:
                mb = van_idx.get((sig, local))
            elif "oscuro's_oblivion_overhaul.esp" in mp:
                # OOO.esp itself — we don't have it indexed but we don't really expect overrides through it
                continue
            else:
                continue
            if mb is None:
                continue

            ovr_subs = parse_subrecords(ovr_body)
            mst_subs = parse_subrecords(mb)

            ovr_keys = Counter(s for s, _ in ovr_subs)
            mst_keys = Counter(s for s, _ in mst_subs)

            had_drop = False
            for k, mv in mst_keys.items():
                ov = ovr_keys.get(k, 0)
                if ov < mv:
                    drop_subrec[(sig, k)] += 1
                    had_drop = True
            if had_drop:
                drop_summary[sig] += 1

    print(f"{'SIG':6s}  {'records w/drops':>18s}  / {'total ovr':>9s}")
    for sig in sigs:
        if drop_summary[sig] == 0:
            continue
        total = ovr_counts[sig]
        print(f"  {sig:4s}  {drop_summary[sig]:18d}  / {total:9d}  ({drop_summary[sig]/total:.0%})")

    print(f"\nTop dropped subrecord-types per record-class:")
    by_sig: dict[str, list] = defaultdict(list)
    for (sig, sub), n in drop_subrec.items():
        by_sig[sig].append((sub, n))
    for sig in sorted(by_sig.keys(), key=lambda s: -drop_summary[s]):
        items = sorted(by_sig[sig], key=lambda kv: -kv[1])[:8]
        items_str = ", ".join(f"{s}:{n}" for s, n in items)
        print(f"  {sig:4s}  {items_str}")

    # Save Phase 1 + 2 to JSONL
    out_p1 = OUT_DIR / "ooo_enhanced_audit_phase1_classification.jsonl"
    with out_p1.open("w") as f:
        for sig in sigs:
            f.write(json.dumps({
                "sig": sig,
                "new": new_counts[sig],
                "override": ovr_counts[sig],
                "override_by_master": dict(ovr_master[sig]),
            }) + "\n")
    print(f"\nPhase 1 report: {out_p1}")

    out_p2 = OUT_DIR / "ooo_enhanced_audit_phase2_drops.jsonl"
    with out_p2.open("w") as f:
        for sig in sorted(by_sig.keys()):
            f.write(json.dumps({
                "sig": sig,
                "records_with_drops": drop_summary[sig],
                "total_overrides": ovr_counts[sig],
                "drops_by_subrecord": dict(by_sig[sig]),
            }) + "\n")
    print(f"Phase 2 report: {out_p2}")

    return new_records_by_sig, enh_data, enh_masters, ooo_idx, van_idx


if __name__ == "__main__":
    main()
