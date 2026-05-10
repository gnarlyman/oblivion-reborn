"""Sweep every NPC_ override in OOO Enhanced.esp and diff its CNTO list
against the master record's CNTO list (in OOO.esm or Oblivion.esm).

Reports any items present in the master record but absent from the override —
i.e. items the override silently drops.

Output:
  - JSONL of all affected NPCs with their dropped items
  - Stdout summary count

Usage:
    python sweep_ooo_enhanced_cnto_drops.py
"""
from __future__ import annotations

import json
import struct
import sys
import zlib
from collections import defaultdict
from pathlib import Path

OOO_ESM = Path(r"D:\Modlists\Reborn\mods\OOO - Oscuro's Oblivion Overhaul - Updated\Oscuro's_Oblivion_Overhaul.esm")
OOO_ENH = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
VANILLA = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")
OUT_PATH = Path(r"D:\Modlists\Reborn\research\ooo_enhanced_cnto_drops.jsonl")


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
    """Returns (data_bytes, masters_list[index -> filename_lower]).
    masters_list[N] = file-master-index N → filename. self_index = len(masters)."""
    data = path.read_bytes()
    if data[0:4] != b"TES4":
        raise RuntimeError(f"not TES4: {path}")
    tes4_size = struct.unpack_from("<I", data, 4)[0]
    tes4_body = data[20:20 + tes4_size]
    masters = []
    for sig, sub in parse_subrecords(tes4_body):
        if sig == "MAST":
            masters.append(cstr(sub).lower())
    return data, masters


def iter_records(data: bytes, target_grp: str):
    """Yield (r_fid, r_flags, r_size, body_decompressed) for every record
    of the given top-level group signature, walking nested CELL/WRLD groups too."""
    if data[0:4] != b"TES4":
        return
    tes4_size = struct.unpack_from("<I", data, 4)[0]

    def walk(off, end):
        while off < end:
            tag = data[off:off + 4].decode("latin-1", "replace")
            if tag == "GRUP":
                grp_size = struct.unpack_from("<I", data, off + 4)[0]
                grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
                grp_end = off + grp_size
                yield from walk(off + 20, grp_end)
                off = grp_end
                continue
            r_size = struct.unpack_from("<I", data, off + 4)[0]
            r_flags = struct.unpack_from("<I", data, off + 8)[0]
            r_fid = struct.unpack_from("<I", data, off + 12)[0]
            body = data[off + 20:off + 20 + r_size]
            if r_flags & 0x00040000:
                body = zlib.decompress(body[4:])
            if tag == target_grp:
                yield r_fid, r_flags, body
            off += 20 + r_size

    # Iterate top-level groups
    off = 20 + tes4_size
    while off < len(data):
        if data[off:off + 4] != b"GRUP":
            break
        grp_size = struct.unpack_from("<I", data, off + 4)[0]
        grp_label = data[off + 8:off + 12].decode("latin-1", "replace")
        grp_end = off + grp_size
        if grp_label == target_grp:
            yield from walk(off + 20, grp_end)
        off = grp_end


def fid_to_normalized(file_fid: int, masters: list[str], self_name: str) -> tuple[str, int]:
    """Translate a file-local FormID to (source_plugin_name_lower, local_24bit_fid)."""
    high = (file_fid >> 24) & 0xFF
    local = file_fid & 0x00FFFFFF
    if high < len(masters):
        src = masters[high]
    else:
        src = self_name.lower()
    return (src, local)


def cnto_items(body: bytes, masters: list[str], self_name: str):
    """Return list of (normalized_item_key, count) for all CNTO subrecords."""
    out = []
    for sig, sub in parse_subrecords(body):
        if sig != "CNTO":
            continue
        if len(sub) < 8:
            continue
        item_fid = struct.unpack_from("<I", sub, 0)[0]
        count = struct.unpack_from("<i", sub, 4)[0]
        key = fid_to_normalized(item_fid, masters, self_name)
        out.append((key, count, item_fid))
    return out


def get_npc_subs(body: bytes):
    """Return dict-ish (last-wins for non-CNTO) mapping signature → bytes,
    plus a list of CNTO entries."""
    info = {}
    cntos = []
    for sig, sub in parse_subrecords(body):
        if sig == "CNTO":
            cntos.append(sub)
        else:
            info[sig] = sub
    return info, cntos


def index_npcs(data: bytes):
    """Return dict local_fid → record body bytes for every NPC_ in the plugin."""
    out = {}
    for r_fid, r_flags, body in iter_records(data, "NPC_"):
        local = r_fid & 0x00FFFFFF
        out[local] = (r_fid, body)
    return out


ITEM_GROUPS = ("CLOT", "ARMO", "WEAP", "AMMO", "ALCH", "INGR",
               "BOOK", "MISC", "KEYM", "LIGH", "APPA", "SLGM",
               "LVLI", "SGST")


def build_item_index(data: bytes):
    """Map local_fid → (signature, edid, full) for every item-class record."""
    out = {}
    for grp in ITEM_GROUPS:
        for r_fid, r_flags, body in iter_records(data, grp):
            local = r_fid & 0x00FFFFFF
            subs = dict(parse_subrecords(body))
            edid = cstr(subs.get("EDID", b""))
            full = cstr(subs.get("FULL", b""))
            out[local] = (grp, edid, full)
    return out


def main():
    print(f"loading OOO.esm…", flush=True)
    ooo_data, ooo_masters = load_plugin(OOO_ESM)
    print(f"  masters: {ooo_masters}")
    ooo_npcs = index_npcs(ooo_data)
    print(f"  NPC_ count: {len(ooo_npcs)}")
    ooo_items = build_item_index(ooo_data)
    print(f"  item-class records: {len(ooo_items)}")

    print(f"loading OOO Enhanced.esp…", flush=True)
    enh_data, enh_masters = load_plugin(OOO_ENH)
    print(f"  masters: {enh_masters}")
    enh_npcs = index_npcs(enh_data)
    print(f"  NPC_ count: {len(enh_npcs)}")
    enh_items = build_item_index(enh_data)
    print(f"  item-class records: {len(enh_items)}")

    print(f"loading Oblivion.esm…", flush=True)
    van_data, van_masters = load_plugin(VANILLA)
    print(f"  masters: {van_masters}")
    van_npcs = index_npcs(van_data)
    print(f"  NPC_ count: {len(van_npcs)}")
    van_items = build_item_index(van_data)
    print(f"  item-class records: {len(van_items)}")

    # Per-plugin item index for cross-plugin lookups
    item_idx_by_plugin = {
        OOO_ESM.name.lower():        ooo_items,
        OOO_ENH.name.lower():        enh_items,
        VANILLA.name.lower():        van_items,
        "oscuro's_oblivion_overhaul.esm": ooo_items,
        "ooo enhanced.esp":          enh_items,
        "oblivion.esm":              van_items,
    }

    drops_total = 0
    affected = 0
    drop_summary = defaultdict(int)  # (src, local) → drop count across NPCs

    with OUT_PATH.open("w", encoding="utf-8") as out:
        for local_fid, (r_fid, enh_body) in enh_npcs.items():
            high_in_enh = (r_fid >> 24) & 0xFF
            if high_in_enh >= len(enh_masters):
                # NPC added by OOO Enhanced itself — no master to compare
                continue
            master_plugin = enh_masters[high_in_enh]

            if "oscuro" in master_plugin:
                source_data = ooo_data
                source_masters = ooo_masters
                source_self = OOO_ESM.name
                source_npcs = ooo_npcs
            elif "oblivion.esm" in master_plugin:
                source_data = van_data
                source_masters = van_masters
                source_self = VANILLA.name
                source_npcs = van_npcs
            else:
                continue

            if local_fid not in source_npcs:
                continue
            src_r_fid, src_body = source_npcs[local_fid]

            src_info, src_cntos = get_npc_subs(src_body)
            enh_info, enh_cntos = get_npc_subs(enh_body)

            src_items = cnto_items(src_body, source_masters, source_self)
            enh_items = cnto_items(enh_body, enh_masters, OOO_ENH.name)

            src_keys = {k for k, c, _ in src_items}
            enh_keys = {k for k, c, _ in enh_items}

            dropped_keys = src_keys - enh_keys
            if not dropped_keys:
                continue
            affected += 1

            # Look up details for the dropped items: try to find each in either OOO.esm,
            # Oblivion.esm, or OOO Enhanced.esp by signature/EDID/FULL
            dropped_details = []
            for k in dropped_keys:
                src_plugin_lower, item_local = k
                # Find original count + raw FID in src_items
                cnt_orig = 0
                raw_fid_orig = 0
                for kk, c, raw in src_items:
                    if kk == k:
                        cnt_orig = c
                        raw_fid_orig = raw
                        break
                # Cross-plugin lookup: items can live in OOO.esm, Oblivion.esm, or OOO Enhanced.esp
                item_edid = ""
                item_full = ""
                item_sig = ""
                idx = item_idx_by_plugin.get(src_plugin_lower, {})
                hit = idx.get(item_local)
                if hit:
                    item_sig, item_edid, item_full = hit
                else:
                    # Fall back: search all plugin item indexes
                    for plug_idx in (van_items, ooo_items, enh_items):
                        if item_local in plug_idx:
                            item_sig, item_edid, item_full = plug_idx[item_local]
                            break
                dropped_details.append({
                    "src_plugin": src_plugin_lower,
                    "local_fid": f"{item_local:06X}",
                    "raw_fid": f"{raw_fid_orig:08X}",
                    "count": cnt_orig,
                    "sig": item_sig,
                    "edid": item_edid,
                    "full": item_full,
                })
                drop_summary[k] += 1
                drops_total += 1

            # Get NPC EDID + FULL for context
            edid = cstr(src_info.get("EDID", b""))
            full = cstr(src_info.get("FULL", b""))

            row = {
                "npc_local_fid": f"{local_fid:06X}",
                "npc_edid": edid,
                "npc_full": full,
                "master_plugin": master_plugin,
                "src_cnto_count": len(src_items),
                "enh_cnto_count": len(enh_items),
                "dropped_items": dropped_details,
            }
            out.write(json.dumps(row, ensure_ascii=False) + "\n")

    print(f"\nAffected NPCs: {affected}")
    print(f"Total dropped CNTO entries: {drops_total}")
    print(f"\nMost-dropped items:")
    for (src, local), n in sorted(drop_summary.items(), key=lambda kv: -kv[1])[:20]:
        print(f"  {src} 0x{local:06X}  -> dropped from {n} NPCs")
    print(f"\nFull report: {OUT_PATH}")


if __name__ == "__main__":
    main()
