"""Scan a list of plugins for QUST records whose EditorID matches a target.

Used to check whether anything in APW's active load order overrides the
cobPatchOOOQ quest (which would let APW disable it without touching the
script). Reports the override's flags and SCRI subrecord (which points
to the script the quest runs).
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from extract_scda_disk import iter_records, RECORD_HEADER  # type: ignore

TARGET_EDID = b"cobPatchOOOQ\x00"


def find_qust_for_edid(record_body: bytes, target_edid: bytes) -> dict | None:
    pos = 0
    edid: bytes | None = None
    fields = {}
    while pos + 6 <= len(record_body):
        sig = record_body[pos:pos + 4]
        size = struct.unpack_from("<H", record_body, pos + 4)[0]
        data = record_body[pos + 6:pos + 6 + size]
        if sig == b"EDID":
            edid = data
        else:
            fields.setdefault(sig.decode("ascii", "replace"), []).append(data.hex(" ").upper())
        pos += 6 + size
    if edid == target_edid:
        return {"edid": edid.rstrip(b"\x00").decode(), "fields": fields}
    return None


def scan(path: Path) -> dict | None:
    if not path.exists():
        return None
    buf = path.read_bytes()
    if buf[:4] != b"TES4":
        return None
    tes4_size = struct.unpack_from("<I", buf, 4)[0]
    after_tes4 = RECORD_HEADER + tes4_size
    for sig, flags, formid, body in iter_records(buf, after_tes4, len(buf)):
        if sig != b"QUST":
            continue
        m = find_qust_for_edid(body, TARGET_EDID)
        if m:
            return {"formid": f"{formid:08X}",
                    "flags": flags,
                    "fields_seen": list(m["fields"].keys()),
                    "scri": m["fields"].get("SCRI", []),
                    "data": m["fields"].get("DATA", []),
                    "ctda_count": len(m["fields"].get("CTDA", []))}
    return None


def active_plugins(profile_dir: Path) -> list[str]:
    return [s.strip() for s in (profile_dir / "plugins.txt").read_text(encoding="utf-8").splitlines()
            if s.strip() and not s.startswith("#")]


def enabled_mods(profile_dir: Path) -> list[str]:
    return [s[1:] for s in (profile_dir / "modlist.txt").read_text(encoding="utf-8").splitlines()
            if s.startswith("+")]


def resolve(name: str, mod_root: Path, mods: list[str]) -> Path | None:
    for m in mods:
        p = mod_root / m / name
        if p.exists():
            return p
    return None


def main() -> int:
    sets = [
        ("APW",   Path(r"D:\Modlists\APW"),
                  Path(r"D:\Modlists\APW\profiles\A Painted World")),
        ("Reborn-OOO", Path(r"D:\Modlists\Reborn"),
                       Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")),
    ]
    for label, root, prof in sets:
        actives = active_plugins(prof)
        mods = enabled_mods(prof)
        print(f"\n=== {label}: scan {len(actives)} actives for QUST cobPatchOOOQ ===")
        hits = 0
        for name in actives:
            p = resolve(name, root / "mods", mods)
            if p is None:
                continue
            r = scan(p)
            if r:
                hits += 1
                print(f"  {name}")
                print(f"    formid={r['formid']}  flags=0x{r['flags']:08X}")
                print(f"    fields={r['fields_seen']}")
                print(f"    SCRI={r['scri']}")
                print(f"    DATA={r['data']}")
                print(f"    CTDA count={r['ctda_count']}")
        print(f"  total hits: {hits}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
