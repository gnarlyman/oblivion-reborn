"""Extract cobPatchOOOQS SCDA from APW's BP and Cobl source ESPs."""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from extract_scda_disk import extract  # type: ignore

CANDIDATES = [
    Path(r"D:\Modlists\APW\mods\A Painted World Configs\Bashed Patch, 0.esp"),
    Path(r"D:\Modlists\APW\mods\Cobl\Cobl Tweaks - OOO.esp"),
    Path(r"D:\Modlists\APW\mods\Cobl\Cobl Tweaks - OOO Mergeable.esp"),
]

for p in CANDIDATES:
    r = extract(p)
    print(f"\n{p}")
    if not r.get("exists"):
        print("  MISSING")
        continue
    if "error" in r:
        print(f"  {r['error']}")
        continue
    print(f"  scda_len={r['scda_len']}  sha256={r['scda_sha256']}  compressed={r['compressed']}")
