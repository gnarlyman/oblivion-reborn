"""Root conftest for plugin_detector tests.

Ensures the plugin_detector directory is on sys.path so that
`predictor.*` resolves to the top-level predictor/ package and not
to tests/predictor/ (which would shadow it under pytest's default
import mode).
"""
import sys
from pathlib import Path

# Insert the plugin_detector root at position 0 so the top-level
# predictor/ package takes priority over tests/predictor/.
_root = str(Path(__file__).resolve().parent)
if _root not in sys.path:
    sys.path.insert(0, _root)
