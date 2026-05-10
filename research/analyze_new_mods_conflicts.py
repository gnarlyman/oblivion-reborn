"""Pull every conflict-bearing record involving the three new Reborn-OOO additions
(Frostcrag Reborn, KotN Revelation, OCRP) plus their compat patches.

For each new plugin, report:
  - records it touches that someone else overrides (others-win-over-us)
  - records others touch where it wins (we-win-over-others)
  - per-signature breakdown
  - caConflict / caConflictCritical highlights
"""
import collections
import json
import os
import sys

sys.stdout.reconfigure(encoding="utf-8")

SWEEP = r"D:\Modlists\_clones\oblivion-conflicts\cache\reborn-ooo-2026-05-09.json"

NEW_MODS = {
    "Frostcrag Reborn": [
        "DLCFrostcragReborn.esp",
        "FrostcragRebornCobl.esp",
        "DLCFrostcrag - OOO Adaptation.esp",
    ],
    "KotN Revelation": [
        "Knights - Revelation.esm",
        "Knights - Revelation.esp",
        "Knights of Nine - OOO Enhanced Adaptation.esp",
    ],
    "OCRP": [
        "Oblivion Content Restoration Project.esp",
        "Infiltration Fix for OOO Enhanced and ORP.esp",
    ],
}

ALL_NEW_PLUGINS = {p for plist in NEW_MODS.values() for p in plist}

with open(SWEEP, encoding="utf-8") as f:
    sweep = json.load(f)

records = sweep["results"]
print(f"Loaded {len(records):,} conflict-bearing records from sweep ({sweep['meta']['load_order'].__len__()} plugins)\n")

def chain_plugins(rec):
    return [c["plugin"] for c in rec["chain"]]

# Find all plugin names actually in the sweep so we can flag missing patches
seen_plugins = set()
for r in records:
    for p in chain_plugins(r):
        seen_plugins.add(p)

print("=== Plugin presence check ===")
for label, plugins in NEW_MODS.items():
    for p in plugins:
        present = "in sweep" if p in seen_plugins else "NOT IN SWEEP (unloaded or unused)"
        print(f"  {label:18} | {p:60} | {present}")

print()

# Partition records by relationship to each new-plugin set
for label, plugins in NEW_MODS.items():
    pset = set(plugins)
    others_win = []   # we touch the record but don't win
    we_win_over_others = []  # we win over a non-new-mod
    high_status = []  # caConflict or caConflictCritical involving us
    for r in records:
        chain = chain_plugins(r)
        if not (pset & set(chain)):
            continue
        winner = r.get("winner", "")
        status = r.get("status", "")
        if status in ("caConflict", "caConflictCritical"):
            high_status.append(r)
        if winner in pset:
            # we win — list non-new losers
            losers = [p for p in chain if p not in pset and p != winner]
            if losers:
                we_win_over_others.append((r, losers))
        else:
            others_win.append((r, winner))
    print(f"=== {label} ===")
    print(f"  records involving this mod set: {sum(1 for r in records if pset & set(chain_plugins(r)))}")
    print(f"  -> someone else wins: {len(others_win)}")
    print(f"  -> we win over an outsider: {len(we_win_over_others)}")
    print(f"  -> caConflict/caConflictCritical: {len(high_status)}")

    # Top winners over us (where we lose)
    winner_counts = collections.Counter(w for _, w in others_win)
    print(f"  Top plugins winning OVER us:")
    for w, c in winner_counts.most_common(10):
        print(f"     {c:>4}  {w}")

    # Top sigs for high-status conflicts
    sig_counts = collections.Counter(r["sig"] for r in high_status)
    print(f"  caConflict by sig:")
    for s, c in sig_counts.most_common(10):
        print(f"     {c:>4}  {s}")

    # Show first 8 caConflict / caConflictCritical for inspection
    print(f"  First 8 high-status records:")
    for r in high_status[:8]:
        print(f"     [{r['status']:20}] {r['sig']} {r['fid']} edid={r.get('edid','')[:35]:<35} winner={r['winner']}")
    print()

# Cross-pair: do any of these three mods conflict with each other?
print("=== Cross-conflicts AMONG the three new mods ===")
all_new = set()
for plist in NEW_MODS.values():
    all_new |= set(plist)
cross = []
for r in records:
    chain_set = set(chain_plugins(r))
    new_in_chain = chain_set & all_new
    # Need at least 2 distinct new-mod GROUPS in the chain to count as cross
    groups_in_chain = [
        g for g, plist in NEW_MODS.items() if set(plist) & chain_set
    ]
    if len(set(groups_in_chain)) >= 2:
        cross.append((r, groups_in_chain))
print(f"  Cross-mod records: {len(cross)}")
for r, groups in cross[:15]:
    print(f"     [{r['status']:18}] {r['sig']} {r['fid']} edid={r.get('edid','')[:30]:<30} groups={','.join(sorted(set(groups)))} winner={r['winner']}")
