"""Plugin record parser — re-exports helpers from research/audit_ooo_enhanced.py.

These helpers were originally written for one-off audit scripts. This module
makes them importable as `predictor.plugin_parser.*` so the predictor package
is self-contained.
"""
import sys
from pathlib import Path

# audit_ooo_enhanced.py lives at D:/Modlists/Reborn/research/. We're at
# D:/Modlists/Reborn/_worktrees/predictor-v1/research/plugin_detector/predictor/.
# The audit module is in the same worktree's research/ directory (worktree
# shares all main-branch files). Fall back to main checkout if not found.
_THIS_DIR = Path(__file__).resolve().parent
_WORKTREE_RESEARCH = _THIS_DIR.parent.parent  # .../research
if not (_WORKTREE_RESEARCH / "audit_ooo_enhanced.py").exists():
    _WORKTREE_RESEARCH = Path(r"D:\Modlists\Reborn\research")

sys.path.insert(0, str(_WORKTREE_RESEARCH))
from audit_ooo_enhanced import (  # type: ignore
    iter_records,
    parse_subrecords,
    cstr,
    load_plugin,
)

__all__ = ["iter_records", "parse_subrecords", "cstr", "load_plugin"]
