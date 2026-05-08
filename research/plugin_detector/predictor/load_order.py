"""Load order: plugins.txt parsing, master-list extraction, FID conversion.

Important: cross-master FID conversion has bitten this codebase before.
See memory entry feedback_query_record_cross_master_bug.md. The pattern:
each plugin's record body contains FormIDs whose high byte is an index
into the plugin's master list (with `len(masters)` itself meaning "this
plugin"). To compare FIDs across plugins, convert each to a load-order
FID by replacing the high byte with the load-order index of the plugin
that the FID's master refers to.
"""
import struct
from dataclasses import dataclass, field
from pathlib import Path
from typing import Sequence

from predictor.plugin_parser import iter_records, parse_subrecords, cstr


def parse_plugins_txt(plugins_txt: Path) -> list[str]:
    """Read MO2's plugins.txt.

    MO2 supports two formats:
    - Prefix format: lines starting with '*' are active; others are inactive.
    - Plain format: all non-comment, non-blank lines are active (no '*' used).

    We auto-detect by checking whether any non-comment line uses the '*' prefix.
    Returns active plugin filenames in load order (top-to-bottom in file =
    earlier-to-later in load order).
    """
    lines: list[str] = []
    with plugins_txt.open("r", encoding="utf-8-sig") as f:
        for raw in f:
            line = raw.strip()
            if not line or line.startswith("#"):
                continue
            lines.append(line)

    # Detect format: if any line begins with '*', use prefix-selection.
    prefix_format = any(l.startswith("*") for l in lines)
    if prefix_format:
        return [l[1:].strip() for l in lines if l.startswith("*")]
    else:
        # Plain format — every non-comment, non-blank line is active.
        return lines


def parse_plugin_masters(plugin_path: Path) -> list[str]:
    """Read the TES4 header's MAST subrecords. Returns master filenames in
    declared order.

    Note: iter_records skips the TES4 header (it walks GRUP-contained records).
    We parse the TES4 header directly using struct, matching the load_plugin
    pattern from audit_ooo_enhanced.py.
    """
    import struct as _struct
    with plugin_path.open("rb") as f:
        data = f.read(4096)  # TES4 header is small; first 4KB is plenty
    if len(data) < 24 or data[:4] != b"TES4":
        return []
    tes4_size = _struct.unpack_from("<I", data, 4)[0]
    body = data[20:20 + tes4_size]
    masters: list[str] = []
    for ssig, ssub in parse_subrecords(body):
        if ssig == "MAST":
            masters.append(cstr(ssub))
    return masters


@dataclass
class LoadOrder:
    plugins: list[str]                       # ordered active plugin names
    data_dir: Path                           # path to Data/
    masters: dict[str, list[str]] = field(default_factory=dict)  # name -> masters
    plugin_paths: dict[str, Path] = field(default_factory=dict)  # lower(name) -> Path

    def index_of(self, plugin_name: str) -> int | None:
        """Case-insensitive lookup."""
        target = plugin_name.lower()
        for i, p in enumerate(self.plugins):
            if p.lower() == target:
                return i
        return None

    def resolve_plugin_path(self, plugin_name: str) -> Path | None:
        """Return the filesystem path for a plugin, or None if not found."""
        return self.plugin_paths.get(plugin_name.lower())

    def to_lo_fid(self, plugin_name: str, raw_fid: int) -> int:
        """Convert a raw FID from `plugin_name`'s record body to a load-order FID.

        raw_fid's high byte is an index into [masters of plugin_name] +
        [plugin_name itself]. We replace the high byte with the load-order
        index of the plugin that index refers to.

        Returns -1 if the master index is out of range or the master isn't
        in the active load order.
        """
        masters = self.masters.get(plugin_name, [])
        master_idx = (raw_fid >> 24) & 0xFF
        if master_idx < len(masters):
            target_plugin = masters[master_idx]
        elif master_idx == len(masters):
            target_plugin = plugin_name
        else:
            return -1
        lo_idx = self.index_of(target_plugin)
        if lo_idx is None:
            return -1
        return ((lo_idx & 0xFF) << 24) | (raw_fid & 0x00FFFFFF)


def _build_plugin_index(data_dir: Path, mods_dir: Path | None) -> dict[str, Path]:
    """Build a case-insensitive filename → Path index for all plugins.

    Searches data_dir first (vanilla/DLC), then mods_dir (MO2 installed mods).
    mods_dir layout: mods/<ModName>/<plugin.esp|esm>
    """
    index: dict[str, Path] = {}
    for p in data_dir.glob("*.es[mp]"):
        index[p.name.lower()] = p
    if mods_dir and mods_dir.is_dir():
        for p in mods_dir.glob("*/*.es[mp]"):
            key = p.name.lower()
            if key not in index:  # data_dir takes priority
                index[key] = p
    return index


def build_load_order(
    profile_dir: Path,
    data_dir: Path,
    mods_dir: Path | None = None,
) -> LoadOrder:
    """Build a LoadOrder from a MO2 profile.

    Args:
        profile_dir: MO2 profile directory containing plugins.txt.
        data_dir: Path to the game's Data/ directory (vanilla + DLC files).
        mods_dir: Optional path to MO2's mods/ directory. When provided,
            plugins installed as MO2 mods are found via a glob search.
            Defaults to data_dir.parent.parent / "mods" (the standard MO2
            layout: <install>/Stock Game/Data/ → <install>/mods/).
    """
    if mods_dir is None:
        candidate = data_dir.parent.parent / "mods"
        if candidate.is_dir():
            mods_dir = candidate

    plugins = parse_plugins_txt(profile_dir / "plugins.txt")
    plugin_index = _build_plugin_index(data_dir, mods_dir)
    lo = LoadOrder(plugins=plugins, data_dir=data_dir, plugin_paths=plugin_index)
    for p in plugins:
        plugin_file = plugin_index.get(p.lower())
        if plugin_file and plugin_file.exists():
            lo.masters[p] = parse_plugin_masters(plugin_file)
        else:
            lo.masters[p] = []
    return lo


def build_winning_records(
    lo: LoadOrder,
    signatures: set[str] | None = None,
) -> dict[int, tuple[str, str, bytes]]:
    """For each LO FID, return (winning_plugin_name, signature, body_bytes).

    Walks the load order in order; later plugins overwrite earlier ones for
    the same LO FID. This works correctly even when Bashed Patch is NOT last
    in load order (which is the case in Reborn-OOO — MOO loads after BP).

    `signatures` filters which record types to track; None means all.
    """
    winners: dict[int, tuple[str, str, bytes]] = {}
    for plugin_name in lo.plugins:
        plugin_path = lo.resolve_plugin_path(plugin_name)
        if plugin_path is None or not plugin_path.exists():
            continue
        with plugin_path.open("rb") as f:
            data = f.read()
        for top, sig, raw_fid, flags, body in iter_records(data):
            if sig == "TES4":
                continue
            if signatures and sig not in signatures:
                continue
            lo_fid = lo.to_lo_fid(plugin_name, raw_fid)
            if lo_fid < 0:
                continue
            winners[lo_fid] = (plugin_name, sig, body)
    return winners
