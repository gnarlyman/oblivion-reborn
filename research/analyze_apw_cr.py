#!/usr/bin/env python3
"""Break down APW - Conflict Resolution.esp by record signature x target master.

Parses the CR ESP, classifies every override record by (signature, master plugin),
and emits:
  - text report to stdout (theme totals, top signatures, top mods, heatmap)
  - apw_cr_breakdown.csv (long format: master, signature, count) for further pivots

Caveat: this only enumerates what APW already resolved. Conflicts APW never had reason
to touch are invisible here. Use this as a "watch list of conflict types/locations" - for
finding missed conflicts in Reborn, run oblivion-conflicts -conflicts.
"""
import csv
from collections import Counter, defaultdict
from pathlib import Path

CR_ESP = Path("D:/Modlists/APW/mods/A Painted World Configs/APW - Conflict Resolution.esp")
OUT_CSV = Path(__file__).resolve().parent / "apw_cr_breakdown.csv"

# Theme buckets group raw record signatures by the kind of conflict they represent.
# Routing notes (per bucket): which tool typically resolves this class.
THEMES: dict[str, tuple[set[str], str]] = {
    "worldspace_glue":     ({"CELL", "REFR", "LAND", "PGRD", "ROAD", "ACHR", "ACRE",
                             "PMIS", "PGRE", "REGN", "WRLD"},
                            "xEdit manual merge - placement/landscape collisions"),
    "npc_normalization":   ({"NPC_", "CREA", "RACE", "HAIR", "EYES", "BSGN", "CLAS"},
                            "xEdit manual; Bashed Patch NpcFacesForwarder helps"),
    "leveled_lists":       ({"LVLI", "LVLN", "LVLC"},
                            "Bashed Patch (Leveled Lists) - automatic if mod is mergeable"),
    "dialogue_quest":      ({"DIAL", "INFO", "QUST", "PACK", "IDLE"},
                            "xEdit manual - easy to drop quest stages"),
    "item_balance":        ({"WEAP", "ARMO", "AMMO", "INGR", "ALCH", "BOOK", "MISC",
                             "KEYM", "APPA", "SLGM", "CLOT"},
                            "Bashed Patch tweaks (Stats) or xEdit"),
    "containers_loot":     ({"CONT", "ACTI"},
                            "Bashed Patch (Contents) for CONT; xEdit for ACTI"),
    "magic":               ({"SPEL", "MGEF", "EFSH", "ENCH"},
                            "xEdit manual"),
    "factions_ai":         ({"FACT"},
                            "Bashed Patch (Factions) or xEdit"),
    "world_settings":      ({"GMST", "GLOB", "CLMT", "WTHR", "LTEX", "FLOR", "TREE",
                             "SOUN", "MUSC", "STAT", "FURN", "DOOR", "LIGH"},
                            "Bashed Patch (GMSTs/Graphics) or xEdit"),
    "scripts":             ({"SCPT"},
                            "xEdit + recompile via oblivion-batch-compile (CSE-only)"),
}

SIG_TO_THEME: dict[str, str] = {
    sig: name for name, (sigs, _) in THEMES.items() for sig in sigs
}


def parse_cr(path: Path) -> tuple[list[str], list[tuple[str, int]]]:
    """Return (masters, [(signature, master_idx) for each record])."""
    data = path.read_bytes()
    if data[:4] != b"TES4":
        raise SystemExit(f"not a TES4 plugin: {path}")
    tes4_size = int.from_bytes(data[4:8], "little")

    masters: list[str] = []
    pos = 20
    end = 20 + tes4_size
    while pos + 6 <= end:
        sub_type = data[pos:pos + 4]
        sub_size = int.from_bytes(data[pos + 4:pos + 6], "little")
        if sub_type == b"MAST":
            masters.append(
                data[pos + 6:pos + 6 + sub_size].rstrip(b"\x00")
                .decode("cp1252", errors="replace")
            )
        pos += 6 + sub_size

    records: list[tuple[str, int]] = []
    pos = 20 + tes4_size
    while pos + 20 <= len(data):
        tag = data[pos:pos + 4]
        if tag == b"GRUP":
            pos += 20  # descend into body
            continue
        rec_size = int.from_bytes(data[pos + 4:pos + 8], "little")
        rec_fid = int.from_bytes(data[pos + 12:pos + 16], "little")
        sig = tag.decode("ascii", errors="replace")
        high = (rec_fid >> 24) & 0xFF
        records.append((sig, high))
        pos += 20 + rec_size
    return masters, records


def fmt_int(n: int) -> str:
    return f"{n:,}"


def main():
    masters, records = parse_cr(CR_ESP)
    self_idx = len(masters)
    total = len(records)

    # 1. Signature histogram
    sig_counts: Counter[str] = Counter(sig for sig, _ in records)

    # 2. Theme totals
    theme_counts: Counter[str] = Counter()
    for sig, _ in records:
        theme_counts[SIG_TO_THEME.get(sig, "other")] += 1

    # 3. Per-master totals (overrides only - exclude self/new)
    master_counts: Counter[int] = Counter(idx for _, idx in records if idx != self_idx)
    new_records = sum(1 for _, idx in records if idx == self_idx)

    # 4. Heatmap: master x signature
    matrix: dict[tuple[int, str], int] = defaultdict(int)
    for sig, idx in records:
        matrix[(idx, sig)] += 1

    # ------------- text report -------------
    print(f"APW - Conflict Resolution.esp")
    print(f"  {fmt_int(total)} records   {len(masters)} masters   "
          f"{fmt_int(new_records)} new (introduced by CR itself)\n")

    print("=" * 80)
    print("THEME TOTALS  (groupings of related record signatures)")
    print("=" * 80)
    print(f"{'theme':<22}{'records':>10}  routing")
    print(f"{'-'*22}{'-'*10}  {'-'*46}")
    for theme in sorted(theme_counts, key=lambda t: -theme_counts[t]):
        n = theme_counts[theme]
        routing = THEMES.get(theme, (set(), ""))[1] if theme != "other" else "-"
        pct = 100 * n / total
        print(f"{theme:<22}{fmt_int(n):>10}  {routing}  ({pct:.1f}%)")
    print()

    print("=" * 80)
    print("TOP 20 RECORD SIGNATURES")
    print("=" * 80)
    print(f"{'sig':<6}{'count':>10}  theme")
    print(f"{'-'*6}{'-'*10}  {'-'*30}")
    for sig, n in sig_counts.most_common(20):
        theme = SIG_TO_THEME.get(sig, "other")
        print(f"{sig:<6}{fmt_int(n):>10}  {theme}")
    print()

    print("=" * 80)
    print("TOP 15 TARGET MODS  (by override-record count, excludes self-introduced)")
    print("=" * 80)
    print(f"{'master plugin':<55}{'overrides':>10}")
    print(f"{'-'*55}{'-'*10}")
    for idx, n in master_counts.most_common(15):
        print(f"{masters[idx]:<55}{fmt_int(n):>10}")
    print(f"{'<NEW: introduced by CR itself>':<55}{fmt_int(new_records):>10}")
    print()

    # 5. Heatmap: top 12 masters x top 8 signatures
    top_masters = [idx for idx, _ in master_counts.most_common(12)]
    top_sigs = [s for s, _ in sig_counts.most_common(8) if s != ""]
    print("=" * 80)
    print(f"HEATMAP  top {len(top_masters)} target mods x top {len(top_sigs)} signatures")
    print("=" * 80)
    header = f"{'master plugin':<42}" + "".join(f"{s:>8}" for s in top_sigs) + f"{'TOT':>8}"
    print(header)
    print("-" * len(header))
    for idx in top_masters:
        cells = [matrix.get((idx, s), 0) for s in top_sigs]
        tot = master_counts[idx]
        cells_fmt = "".join(f"{(fmt_int(c) if c else '.'):>8}" for c in cells)
        name = masters[idx][:40]
        print(f"{name:<42}{cells_fmt}{fmt_int(tot):>8}")
    print()

    # 6. New-record breakdown
    new_by_sig: Counter[str] = Counter(sig for sig, idx in records if idx == self_idx)
    if new_by_sig:
        print("=" * 80)
        print("NEW RECORDS  (FormID high-byte = self idx; not conflict resolution but content)")
        print("=" * 80)
        for sig, n in new_by_sig.most_common():
            print(f"  {sig:<6} {fmt_int(n)}")
        print()

    # ------------- CSV -------------
    with OUT_CSV.open("w", encoding="utf-8", newline="") as f:
        w = csv.writer(f)
        w.writerow(["master", "signature", "theme", "count"])
        for (idx, sig), n in sorted(matrix.items(), key=lambda kv: -kv[1]):
            label = masters[idx] if idx < self_idx else "<NEW>"
            theme = SIG_TO_THEME.get(sig, "other")
            w.writerow([label, sig, theme, n])
    print(f"Wrote per-(master,signature) counts to {OUT_CSV}")


if __name__ == "__main__":
    main()
