"""Check how many of OOO Enhanced's 289 broken mesh paths are covered by APW's mod folder."""
from __future__ import annotations
import io, json, sys
from pathlib import Path
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
from collections import Counter, defaultdict

APW_MODS = Path(r"D:\Modlists\APW\mods")

# Build all-files set
print("Indexing APW mod files...", flush=True)
known = set()
n = 0
for p in APW_MODS.rglob("*"):
    if p.is_file() and p.suffix.lower() in (".nif", ".dds"):
        # Find mods/ root and take the relative path inside the mod
        try:
            rel = p.relative_to(APW_MODS)
        except Exception:
            continue
        # Strip the mod-name top dir, what remains is the data-relative path
        parts = rel.parts
        if len(parts) > 1:
            inner = "/".join(parts[1:]).lower().replace("\\", "/")
            known.add(inner)
        n += 1
print(f"  {n} files scanned, {len(known)} unique data-relative paths\n")

# Load broken-mesh paths from previous audit
rows = [json.loads(l) for l in open(r"D:/Modlists/Reborn/research/ooo_enh_mesh_problems_with_resources.jsonl")]
print(f"Total broken meshes (with Resources): {len(rows)}")

resolved = []
unresolved = []
for r in rows:
    p = r["path"].lower()
    if p in known:
        resolved.append(r)
    else:
        unresolved.append(r)

print(f"  Resolved by APW mods: {len(resolved)}")
print(f"  Still broken in APW:  {len(unresolved)}\n")

# Cluster the still-broken
clusters = defaultdict(list)
for r in unresolved:
    parts = r["path"].split("/")
    key = "/".join(parts[1:3]) if len(parts) > 3 else "/".join(parts[1:])
    clusters[key].append(r)

print(f"== Still-broken clusters ({len(clusters)}) ==")
for key, items in sorted(clusters.items(), key=lambda kv: -len(kv[1])):
    sigs = Counter(i["sig"] for i in items)
    sample = items[0]["path"]
    print(f"  [{len(items):3d}]  meshes/{key}/...   {dict(sigs)}")
    print(f"          sample: {sample}")
    print()

# Sample resolved (sanity check)
if resolved:
    print(f"\n== Sample resolved (first 10) ==")
    for r in resolved[:10]:
        print(f"  {r['path']}")
