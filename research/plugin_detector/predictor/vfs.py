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
from typing import Iterator


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


def _parse_bsa(bsa_path: Path) -> Iterator[str]:
    """Enumerate virtual paths inside a BSA v103/v104/v105 archive.

    Uses bethesda-structs to parse the BSA header and directory/file-name
    records without reading file data.  Returns lowercase forward-slash paths
    relative to the virtual Data/ root (e.g. ``meshes/foo/bar.nif``).

    This is exact — every path that actually lives in the BSA is emitted.
    It is NOT over-permissive; bethesda-structs reads the real record structure.
    """
    from bethesda_structs.archive.bsa import BSAArchive

    archive = BSAArchive.parse_file(str(bsa_path))
    c = archive.container
    file_names = c.file_names  # list of bare filenames, parallel to all file records
    file_index = 0
    for block in c.directory_blocks:
        # Directory names are Pascal-prefixed and carry a trailing null byte.
        dir_name: str = block.name.rstrip("\x00") if block.name else ""
        for _ in block.file_records:
            fname = file_names[file_index]
            raw = (dir_name + "/" + fname) if dir_name else fname
            yield raw.lower().replace("\\", "/")
            file_index += 1


def build_bsa_index(
    active_mods: list[str],
    mods_dir: Path,
    data_dir: Path | None = None,
) -> dict[str, Path]:
    """For each active mod (priority-DESCENDING), find all .bsa at mod root
    and parse their file lists. Optionally also includes BSAs from `data_dir`
    (vanilla + DLC) at the LOWEST priority — mod-folder BSAs win over Data/
    BSAs for the same path.

    Returns lowercase_virtual_path → bsa_path.

    ``bsa_path`` is the BSA file that contains the virtual path (the
    "real" location on disk).  Higher-priority mods (earlier in
    ``active_mods``) win on conflicts, matching MO2 first-write semantics.

    Implementation note: uses bethesda-structs' BSAArchive to parse
    directory/file-name records only — file data is never read.  This makes
    even 1.7 GB archives parse in under a second.
    """
    index: dict[str, Path] = {}

    # First pass: mod-folder BSAs in priority order (existing logic).
    for mod_name in active_mods:
        mod_root = mods_dir / mod_name
        if not mod_root.is_dir():
            continue
        for bsa in mod_root.glob("*.bsa"):
            try:
                for virtual in _parse_bsa(bsa):
                    if virtual not in index:
                        index[virtual] = bsa
            except Exception:
                continue

    # Second pass: Data/ BSAs at the bottom of priority (vanilla + DLC fallback).
    if data_dir is not None and data_dir.is_dir():
        for bsa in data_dir.glob("*.bsa"):
            try:
                for virtual in _parse_bsa(bsa):
                    if virtual not in index:
                        index[virtual] = bsa
            except Exception:
                continue

    return index


class VFS:
    """Replicates MO2's USVFS file presentation for read queries.

    Combines loose-file priority (highest-priority active mod's loose files)
    with BSA archive contents. Loose files always shadow BSAs.
    """

    def __init__(
        self,
        active_mods: list[str],
        mods_dir: Path,
        data_dir: Path | None = None,
    ):
        self.loose: dict[str, Path] = build_loose_index(active_mods, mods_dir)
        self.bsa: dict[str, Path] = build_bsa_index(active_mods, mods_dir, data_dir)

    def path_exists(self, virtual_path: str) -> bool:
        v = virtual_path.replace("\\", "/").lower()
        return v in self.loose or v in self.bsa

    def resolve(self, virtual_path: str) -> Path | None:
        v = virtual_path.replace("\\", "/").lower()
        if v in self.loose:
            return self.loose[v]
        if v in self.bsa:
            return self.bsa[v]
        return None


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
