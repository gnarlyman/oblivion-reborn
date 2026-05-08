"""MO2 VFS replication.

Parses modlist.txt and builds a path index mirroring what MO2's USVFS would
present at runtime. Used by the predictor for mesh-existence checks.

modlist.txt convention:
  - Lines starting with '+' are active mods.
  - Lines starting with '-' are inactive (skip).
  - Lines starting with '#' are comments OR separators (skip).
  - Lines starting with '*' are root-level files (out of scope for this spike).
  - Top of file = highest priority (overrides later entries).
"""
from pathlib import Path


def build_loose_index(
    active_mods: list[str],
    mods_dir: Path,
) -> dict[str, Path]:
    """For each active mod (priority-DESCENDING order), walk its loose files.
    Higher-priority mods override lower-priority ones for the same path.

    Returns lowercase_virtual_path → absolute_real_path.

    `lowercase_virtual_path` uses forward slashes and is relative to the
    mod folder root. For Oblivion under MO2, mod folders are presented as
    if their root were the game's Data/ directory.
    """
    index: dict[str, Path] = {}
    # Process priority-DESCENDING (highest priority first). First-write wins.
    for mod_name in active_mods:
        mod_root = mods_dir / mod_name
        if not mod_root.is_dir():
            continue
        for f in mod_root.rglob("*"):
            if not f.is_file():
                continue
            try:
                rel = f.relative_to(mod_root)
            except ValueError:
                continue
            virtual = str(rel).replace("\\", "/").lower()
            if virtual not in index:
                index[virtual] = f
    return index


def parse_modlist(modlist_txt: Path) -> list[str]:
    """Return active mod names in priority-DESCENDING order
    (highest priority first; this matches the file order from top to bottom)."""
    out: list[str] = []
    with modlist_txt.open("r", encoding="utf-8-sig") as f:
        for raw in f:
            line = raw.rstrip("\r\n")
            if not line or line.startswith("#") or line.startswith("*"):
                continue
            if line.startswith("+"):
                out.append(line[1:].strip())
            elif line.startswith("-"):
                continue  # inactive
    return out
