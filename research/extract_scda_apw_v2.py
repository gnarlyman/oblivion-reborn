"""Verify cobPatchOOOQS doesn't exist in APW's merge / CR ESPs."""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from extract_scda_disk import extract  # type: ignore

CANDIDATES = [
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge 2.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW Merge 3.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\APW - Conflict Resolution.esp"),
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\Bashed Patch, 0.esp"),
]

for p in CANDIDATES:
    r = extract(p)
    print(f"{p.name}")
    if not r.get("exists"):
        print("  MISSING")
        continue
    if "error" in r:
        print(f"  cobPatchOOOQS: {r['error']}")
        continue
    print(f"  cobPatchOOOQS PRESENT  scda_len={r['scda_len']}  sha256={r['scda_sha256']}")
