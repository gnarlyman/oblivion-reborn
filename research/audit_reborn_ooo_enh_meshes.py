"""Re-audit OOO Enhanced.esp broken meshes against the FRESH Reborn install."""
from __future__ import annotations
import io, sys
from pathlib import Path
from collections import Counter, defaultdict
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

ESP = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
print(f"ESP size: {ESP.stat().st_size:,} bytes")
data, masters = load_plugin(ESP)
self_idx = len(masters)

# Build known-files set from Reborn mods + stock data
known = set()
roots = [
    (Path(r"D:\Modlists\Reborn\mods"), True),  # strip mod-name prefix
    (Path(r"D:\Modlists\Reborn\Stock Game\Data"), False),
]
for root, strip_mod_name in roots:
    if not root.exists():
        continue
    for p in root.rglob("*"):
        if not p.is_file():
            continue
        sfx = p.suffix.lower()
        if sfx not in (".nif", ".dds"):
            continue
        try:
            rel = p.relative_to(root)
        except Exception:
            continue
        parts = rel.parts
        if strip_mod_name and len(parts) > 1:
            relpath = "/".join(parts[1:]).lower().replace("\\", "/")
        else:
            relpath = "/".join(parts).lower().replace("\\", "/")
        known.add(relpath)
print(f"  known files: {len(known)}")

# Walk records and find broken meshes
broken_paths = 0
broken_records = []
silverthorn_records = []
vermillion_records = []
for top, sig, r_fid, _, body in iter_records(data):
    if sig not in ("ARMO", "CLOT", "WEAP", "CREA", "STAT", "ACTI", "DOOR", "FURN"):
        continue
    if (r_fid >> 24) & 0xFF != self_idx:
        continue
    edid = ""
    paths = []
    for ssig, sub in parse_subrecords(body):
        if ssig == "EDID":
            edid = cstr(sub)
        elif ssig in ("MODL", "MOD2", "MOD3", "MOD4"):
            p = cstr(sub).lower().replace("\\", "/")
            if p:
                full = p if p.startswith("meshes/") else "meshes/" + p
                paths.append((ssig, full))
    rec_broken = [(t, p) for t, p in paths if p not in known]
    if rec_broken:
        broken_paths += len(rec_broken)
        broken_records.append((sig, edid, rec_broken))
        if "silverthorn" in edid.lower():
            silverthorn_records.append((edid, rec_broken))
        elif "vermillion" in edid.lower():
            vermillion_records.append((edid, rec_broken))

print(f"\nBroken-mesh path refs: {broken_paths}")
print(f"Records with broken refs: {len(broken_records)}")

# Cluster broken paths by directory
from collections import Counter, defaultdict
clusters = defaultdict(int)
for sig, edid, paths in broken_records:
    for tag, p in paths:
        parts = p.split("/")
        key = "/".join(parts[1:3]) if len(parts) > 3 else "/".join(parts[1:])
        clusters[key] += 1

print(f"\nClusters of broken paths:")
for key, n in sorted(clusters.items(), key=lambda kv: -kv[1])[:20]:
    print(f"  [{n:3d}]  meshes/{key}/...")

print(f"\nSilverthorn records: {len(silverthorn_records)}")
for edid, paths in silverthorn_records[:5]:
    print(f"  {edid}")
    for t, p in paths[:2]:
        print(f"    {t}: {p}")

print(f"\nVermillion records: {len(vermillion_records)}")
for edid, paths in vermillion_records[:5]:
    print(f"  {edid}")
    for t, p in paths[:2]:
        print(f"    {t}: {p}")
