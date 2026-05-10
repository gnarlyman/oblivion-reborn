"""Re-run mesh existence check with OOO Enhanced - Resources archive included."""
from __future__ import annotations
import struct
import sys
import zlib
from collections import Counter
from pathlib import Path

sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import (
    parse_subrecords, cstr, load_plugin, iter_records,
    OOO_ENH, OUT_DIR,
)
from audit_ooo_enh_phase3 import collect_known_files


def main():
    enh_data, enh_masters = load_plugin(OOO_ENH)
    self_idx = len(enh_masters)

    print("Building known-file set (loose + 18 BSAs)…", flush=True)
    known = collect_known_files()

    # Augment with OOO Enhanced - Resources archive contents
    # Format: every line is a path with prefix "00 Main\..." or similar
    res_list = Path(r"D:\Modlists\Reborn\research\ooo_resources_files.txt").read_text(encoding="utf-8", errors="replace").splitlines()
    res_added = 0
    for p in res_list:
        # Strip BAIN top-level subpath ("00 Main\", "10 DLCs\", etc.)
        p = p.strip()
        if not p:
            continue
        # Replace backslash, normalize
        norm = p.replace("\\", "/").lower()
        # Remove leading "NN xxx/" prefix if present (BAIN structure)
        parts = norm.split("/", 1)
        if len(parts) == 2 and parts[0].split(" ")[0].isdigit():
            norm = parts[1]
        if norm.startswith("meshes/") or norm.startswith("textures/") or norm.startswith("sound/"):
            known.add(norm)
            res_added += 1

    print(f"  +{res_added} files from OOO Enhanced - Resources archive")
    print(f"  total known: {len(known)}\n", flush=True)

    # Re-run mesh check
    mesh_problems = []
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig not in ("ARMO", "CLOT", "WEAP", "CREA", "STAT", "ACTI", "DOOR", "FURN"):
            continue
        high = (r_fid >> 24) & 0xFF
        if high != self_idx:
            continue
        edid = ""
        paths_to_check = []
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig in ("MODL", "MOD2", "MOD3", "MOD4"):
                p = cstr(ssub).lower().replace("\\", "/")
                if p:
                    full = p if p.startswith("meshes/") else "meshes/" + p
                    paths_to_check.append((ssig, full))

        for tag, p in paths_to_check:
            if p not in known:
                mesh_problems.append((sig, edid, tag, p, f"0x{r_fid:08X}"))

    by_sig = Counter(m[0] for m in mesh_problems)
    print(f"NEW records with unresolvable mesh paths (with Resources installed): {len(mesh_problems)}")
    for s, n in by_sig.most_common():
        print(f"  {s}: {n}")
    print(f"\nSample:")
    for sig, edid, tag, p, fid in mesh_problems[:25]:
        print(f"  {fid} {sig:5s} {edid[:32]:32s} {tag}: {p}")

    out = OUT_DIR / "ooo_enh_mesh_problems_with_resources.jsonl"
    import json
    with out.open("w") as f:
        for sig, edid, tag, p, fid in mesh_problems:
            f.write(json.dumps({"fid": fid, "sig": sig, "edid": edid, "subrec": tag, "path": p}) + "\n")
    print(f"\nWrote {out}")


if __name__ == "__main__":
    main()
