"""Build a nullification mod that mirrors residual broken-mesh paths to
existing loose substitutes. Eliminates yellow-exclamation diamonds at the
cost of visual fidelity (broken items render as a plausible vanilla-ish
substitute based on filename keywords).

Sources are existing loose meshes in the user's installed mods (no BSA
extraction needed)."""
from __future__ import annotations

import json
import re
import shutil
from collections import Counter
from pathlib import Path

# --- substitute mesh sources (must all exist on disk) ---
SUBS = {
    "cuirass_m":   Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\m\cuirass.nif"),
    "cuirass_f":   Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\f\cuirass.nif"),
    "greaves_m":   Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\m\greaves.nif"),
    "greaves_f":   Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\f\greaves.nif"),
    "boots":       Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\f\boots.nif"),
    "gauntlets":   Path(r"D:\Modlists\Reborn\mods\Seamless - OCOv2\meshes\armor\iron\f\gauntlets.nif"),
    "robe":        Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\Clothes\KDRobes\MVermillion.nif"),
    "ring":        Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\Clothes\ring\ArthasRingBlack.nif"),
    "amulet":      Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\Clothes\amulet\ArthasAmuletBlack.nif"),
    "container":   Path(r"D:\Modlists\Reborn\mods\Useful Meshes Collection\meshes\Stroti\ayleidFurniture\container\arSkell01.nif"),
    "skeleton":    Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\creatures\Bubbulture\skeleton.nif"),
    "fallback":    Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\meshes\Clothes\KDRobes\MVermillion.nif"),
}

DEST = Path(r"D:\Modlists\Reborn\mods\Reborn - OOO Enhanced Residual Mesh Nullify")


def classify(path: str) -> str:
    """Pick the most appropriate substitute key for a broken-mesh path."""
    p = path.lower()
    is_f = "/f/" in p
    if "skeleton.nif" in p:
        return "skeleton"
    if "/container/" in p or "skell" in p:
        return "container"
    if "ring" in p:
        return "ring"
    if "amulet" in p or "darnoras" in p:
        return "amulet"
    if "cuirass" in p:
        return "cuirass_f" if is_f else "cuirass_m"
    if "greaves" in p or "pants" in p:
        return "greaves_f" if is_f else "greaves_m"
    if "boots" in p or "shoes" in p:
        return "boots"
    if "gauntlets" in p or "gloves" in p or "bra" in p:
        return "gauntlets"
    if "robe" in p or "shirt" in p or "outfit" in p or "hood" in p or "helmet" in p or "circlet" in p or "mask" in p:
        return "robe"
    return "fallback"


def main():
    # Verify all sources exist
    print("Verifying substitute sources:")
    for k, src in SUBS.items():
        ok = "✓" if src.exists() else "✗"
        print(f"  {ok}  {k}: {src.name}")
        if not src.exists():
            print(f"      ! source missing — abort")
            return 1

    DEST.mkdir(parents=True, exist_ok=True)

    rows = [json.loads(l) for l in open(r"D:\Modlists\Reborn\research\ooo_enhanced_audit_phase3_new_content.jsonl")]
    mesh_rows = [r for r in rows if r.get("phase") == "3b_mesh_problem"]

    # Dedupe by path
    seen_paths = set()
    todo = []
    for r in mesh_rows:
        if r["path"] in seen_paths:
            continue
        seen_paths.add(r["path"])
        todo.append(r)

    print(f"\n{len(todo)} unique broken paths to mirror\n")

    by_class: Counter = Counter()
    copied = 0
    for r in todo:
        path = r["path"]   # e.g. "meshes/exnem/femaleeyecandy/armor/hellspawnarmor/xnm_cloudpli_boots.nif"
        sub_key = classify(path)
        by_class[sub_key] += 1
        src = SUBS[sub_key]
        # Strip 'meshes/' prefix from target so we can put it under DEST/meshes/
        target_rel = path.replace("/", "\\")
        dst = DEST / target_rel
        if dst.exists() and dst.stat().st_size == src.stat().st_size:
            continue
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(src, dst)
        copied += 1

    print(f"Copied {copied} mirror files")
    print(f"\nClassification breakdown:")
    for k, n in by_class.most_common():
        print(f"  {k:12s}: {n}")

    meta = DEST / "meta.ini"
    if not meta.exists():
        meta.write_text(
            "[General]\n"
            "gameName=oblivion\n"
            "modid=0\n"
            "version=1.0.0\n"
            "category=\"-1,\"\n"
            "comments=Substitute mesh copies at residual broken paths so OOO Enhanced items render as plausible vanilla-ish substitutes (no yellow-exclamation diamonds). Activate AFTER OOO Enhanced and AFTER any dependency mods (Apophis, Plipo, etc).\n"
            "notes=Built by research/build_nullify_mod.py.\n",
            encoding="utf-8",
        )
        print(f"\n  wrote meta.ini at {meta}")

    print(f"\nMod folder: {DEST}")


if __name__ == "__main__":
    main()
