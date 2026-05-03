"""Scan every active plugin in APW's plugins.txt for cobPatchOOOQS.

Each active plugin name is resolved to a real disk path by walking
APW's modlist.txt in priority order (top-of-file = highest priority),
returning the first mod folder that contains the named ESP/ESM.
"""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from extract_scda_disk import extract  # type: ignore

APW_ROOT = Path(r"D:\Modlists\APW")
PROFILE = APW_ROOT / "profiles" / "A Painted World"


def active_plugins() -> list[str]:
    out = []
    for line in (PROFILE / "plugins.txt").read_text(encoding="utf-8").splitlines():
        s = line.strip()
        if not s or s.startswith("#"):
            continue
        out.append(s)
    return out


def enabled_mods() -> list[str]:
    """Return enabled mod folder names in PRIORITY ORDER (highest priority first).

    modlist.txt convention: top of file = highest priority. So we read
    top-down and return as-is."""
    out = []
    for line in (PROFILE / "modlist.txt").read_text(encoding="utf-8").splitlines():
        s = line.rstrip()
        if s.startswith("+"):
            out.append(s[1:])
    return out


def resolve_plugin(name: str, mod_priority: list[str]) -> Path | None:
    """First enabled mod folder that contains a file with this name."""
    for mod in mod_priority:
        candidate = APW_ROOT / "mods" / mod / name
        if candidate.exists():
            return candidate
    # Fallback: maybe in Stock Game / Data — but APW's data folder is the real
    # mods folder mounted via USVFS, so try Oblivion data root next.
    return None


def main() -> int:
    actives = active_plugins()
    mods = enabled_mods()
    print(f"[scan] {len(actives)} active plugins, {len(mods)} enabled mods")

    hits = []
    misses = 0
    unresolved = []
    for name in actives:
        p = resolve_plugin(name, mods)
        if p is None:
            unresolved.append(name)
            continue
        r = extract(p)
        if "scda_sha256" in r:
            hits.append((name, str(p), r["scda_len"], r["scda_sha256"]))
        else:
            misses += 1

    print(f"\n[results] hits={len(hits)} misses={misses} unresolved={len(unresolved)}")
    for name, path, length, sha in hits:
        print(f"  {name}")
        print(f"    via: {path}")
        print(f"    scda_len={length}  sha256={sha}")
    if unresolved:
        print(f"\n[unresolved] (not in any enabled mod folder)")
        for u in unresolved[:10]:
            print(f"  {u}")
        if len(unresolved) > 10:
            print(f"  ... and {len(unresolved) - 10} more")
    return 0


if __name__ == "__main__":
    sys.exit(main())
