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
