"""pick_vanilla_50.py — deterministically pick 50 vanilla NPCs for T15 self-validation.

Criteria:
  - From Oblivion.esm only (high byte of form_id == 0x00)
  - Has at least one CNTO subrecord (explicit inventory)
  - Has an EDID that isn't empty
  - EDID does not start with 'Test', '_' and does not contain 'Internal' or 'Debug'
  - EDID does not contain 'Quest' (script-driven gear)
  - Picks 50 deterministically via random.seed(42)

Output: research/plugin_detector/g5/tests/fixtures/vanilla_50.json
"""
from __future__ import annotations

import json
import random
import struct
import sys
import zlib
from pathlib import Path

VANILLA = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")
OUT = Path(__file__).parent.parent / "tests" / "fixtures" / "vanilla_50.json"

TICKS_WAIT_DEFAULT = 30

# ---------------------------------------------------------------------------
# Parsing helpers (inlined from audit_ooo_enhanced.py)
# ---------------------------------------------------------------------------

def parse_subrecords(body: bytes):
    subs = []
    off = 0
    pending = None
    while off + 6 <= len(body):
        sig = body[off:off + 4].decode("latin-1", "replace")
        size = struct.unpack_from("<H", body, off + 4)[0]
        off += 6
        if sig == "XXXX":
            pending = struct.unpack_from("<I", body, off)[0]
            off += size
            continue
        if pending is not None:
            size = pending
            pending = None
        subs.append((sig, body[off:off + size]))
        off += size
    return subs


def cstr(b: bytes) -> str:
    end = b.find(b"\x00")
    return b[:end].decode("latin-1", "replace") if end >= 0 else b.decode("latin-1", "replace")


def load_plugin(path: Path):
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        raise RuntimeError(f"Not TES4: {path}")
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    masters = []
    for sig, sub in parse_subrecords(data[20:20 + tes4_size]):
        if sig == "MAST":
            masters.append(cstr(sub).lower())
    return data, masters


def iter_records(data: bytes):
    """Yield (top_group_label, sig, r_fid, r_flags, body) for every record."""
    if data[0:4] != b"TES4":
        return
    tes4_size = struct.unpack_from("<I", data, 4)[0]

    def walk(off, end, top_label):
        while off < end:
            tag = data[off:off + 4].decode("latin-1", "replace")
            if tag == "GRUP":
                grp_size = struct.unpack_from("<I", data, off + 4)[0]
                yield from walk(off + 20, off + grp_size, top_label)
                off += grp_size
                continue
            r_size = struct.unpack_from("<I", data, off + 4)[0]
            r_flags = struct.unpack_from("<I", data, off + 8)[0]
            r_fid = struct.unpack_from("<I", data, off + 12)[0]
            body = data[off + 20:off + 20 + r_size]
            if r_flags & 0x00040000:
                try:
                    body = zlib.decompress(body[4:])
                except Exception:
                    pass
            yield top_label, tag, r_fid, r_flags, body
            off += 20 + r_size

    off = 20 + tes4_size
    while off < len(data):
        if data[off:off + 4] != b"GRUP":
            break
        grp_size = struct.unpack_from("<I", data, off + 4)[0]
        grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
        grp_end = off + grp_size
        yield from walk(off + 20, grp_end, grp_label)
        off = grp_end


# ---------------------------------------------------------------------------
# EDID filter helpers
# ---------------------------------------------------------------------------

SKIP_PREFIXES_LOWER = ("test", "_")
SKIP_SUBSTRINGS_LOWER = ("internal", "debug", "quest")


def edid_ok(edid: str) -> bool:
    if not edid:
        return False
    edid_lower = edid.lower()
    for prefix in SKIP_PREFIXES_LOWER:
        if edid_lower.startswith(prefix):
            return False
    for sub in SKIP_SUBSTRINGS_LOWER:
        if sub in edid_lower:
            return False
    return True


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    print(f"Loading {VANILLA} …", flush=True)
    data, masters = load_plugin(VANILLA)
    print(f"  Masters: {masters}", flush=True)

    candidates: list[dict] = []
    total_npc = 0
    skipped_fid = 0
    skipped_edid = 0
    skipped_no_cnto = 0

    for top, sig, r_fid, r_flags, body in iter_records(data):
        if sig != "NPC_":
            continue
        total_npc += 1

        # Only records owned by Oblivion.esm itself (high byte == 0x00)
        if (r_fid >> 24) != 0x00:
            skipped_fid += 1
            continue

        subs = parse_subrecords(body)
        sub_map: dict[str, list[bytes]] = {}
        for s, sb in subs:
            sub_map.setdefault(s, []).append(sb)

        # Must have EDID
        edid_raw = sub_map.get("EDID", [b""])[0]
        edid = cstr(edid_raw)
        if not edid_ok(edid):
            skipped_edid += 1
            continue

        # Must have at least one CNTO
        if "CNTO" not in sub_map:
            skipped_no_cnto += 1
            continue

        form_id_str = f"{r_fid:08X}"
        candidates.append({"form_id": form_id_str, "edid": edid, "ticks_wait": TICKS_WAIT_DEFAULT})

    print(f"  Total NPC_ records: {total_npc}", flush=True)
    print(f"  Skipped (wrong master byte): {skipped_fid}", flush=True)
    print(f"  Skipped (EDID filter):       {skipped_edid}", flush=True)
    print(f"  Skipped (no CNTO):           {skipped_no_cnto}", flush=True)
    print(f"  Candidates passing filters:  {len(candidates)}", flush=True)

    if len(candidates) < 50:
        print("WARNING: fewer than 50 candidates — relaxing EDID substring filters", flush=True)
        # Re-run with only prefix filters (drop substring filters)
        candidates = []
        for top, sig, r_fid, r_flags, body in iter_records(data):
            if sig != "NPC_":
                continue
            if (r_fid >> 24) != 0x00:
                continue
            subs = parse_subrecords(body)
            sub_map = {}
            for s, sb in subs:
                sub_map.setdefault(s, []).append(sb)
            edid_raw = sub_map.get("EDID", [b""])[0]
            edid = cstr(edid_raw)
            if not edid:
                continue
            edid_lower = edid.lower()
            for prefix in SKIP_PREFIXES_LOWER:
                if edid_lower.startswith(prefix):
                    break
            else:
                if "CNTO" in sub_map:
                    candidates.append({"form_id": f"{r_fid:08X}", "edid": edid, "ticks_wait": TICKS_WAIT_DEFAULT})
        print(f"  Candidates after relaxed filter: {len(candidates)}", flush=True)

    random.seed(42)
    picked = random.sample(candidates, min(50, len(candidates)))
    # Sort by form_id for deterministic, readable output
    picked.sort(key=lambda x: x["form_id"])

    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(json.dumps(picked, indent=2) + "\n", encoding="utf-8")
    print(f"\nWrote {len(picked)} entries to {OUT}", flush=True)

    if len(picked) < 50:
        print(f"ERROR: only {len(picked)} candidates available — cannot reach 50.", flush=True)
        sys.exit(1)


if __name__ == "__main__":
    main()
