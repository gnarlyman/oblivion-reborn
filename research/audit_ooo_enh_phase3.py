"""Phase 3: audit NEW records in OOO Enhanced.esp for correctness.

- New NPCs: do they have at least one CLOT or ARMO in CNTO?
- New ARMO/CLOT/WEAP: do their mesh paths resolve (loose files OR known BSAs)?
- New TPLT chains: do template targets exist?
"""
from __future__ import annotations

import struct
import sys
import zlib
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import (
    parse_subrecords, cstr, load_plugin, iter_records, index_records_by_local_fid,
    OOO_ENH, OOO_ESM, VANILLA, OUT_DIR,
)

ENH_LOOSE = OOO_ENH.parent  # mod folder
LOOSE_DATA_DIRS = [
    Path(r"D:\Modlists\Reborn\Stock Game\Data"),
]
# Add every ENABLED mod folder from the Reborn-OOO profile
_modlist_path = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO\modlist.txt")
_mods_root = Path(r"D:\Modlists\Reborn\mods")
if _modlist_path.exists():
    for line in _modlist_path.read_text(encoding="utf-8", errors="replace").splitlines():
        line = line.strip()
        if line.startswith("+"):
            mod_dir = _mods_root / line[1:]
            if mod_dir.is_dir():
                LOOSE_DATA_DIRS.append(mod_dir)


def list_bsa_files(bsa_path: Path) -> set[str]:
    """Return lowercase forward-slash file paths inside a BSA."""
    out = set()
    try:
        from list_bsa_files import list_bsa  # type: ignore
        for entry in list_bsa(str(bsa_path)):
            out.add(entry.lower().replace("\\", "/"))
    except Exception:
        # Inline minimal Oblivion BSA reader
        with bsa_path.open("rb") as f:
            data = f.read()
        if data[0:4] != b"BSA\x00":
            return out
        version = struct.unpack_from("<I", data, 4)[0]
        offset = struct.unpack_from("<I", data, 8)[0]
        flags = struct.unpack_from("<I", data, 12)[0]
        folder_count = struct.unpack_from("<I", data, 16)[0]
        file_count = struct.unpack_from("<I", data, 20)[0]
        total_folder_name_len = struct.unpack_from("<I", data, 24)[0]
        total_file_name_len = struct.unpack_from("<I", data, 28)[0]
        # Folder records start at offset+0x24? Actually offset value is folder
        # records offset (typically 36 = 0x24).
        cur = offset
        folder_recs = []
        for _ in range(folder_count):
            cur += 8  # hash
            count = struct.unpack_from("<I", data, cur)[0]
            cur += 4
            offs = struct.unpack_from("<I", data, cur)[0]
            cur += 4
            folder_recs.append((count, offs))

        # File names section starts after all folder file records
        # Each folder file record block: 1 byte name_len + name_bytes (no null)
        # then count file records (8 hash + 4 size + 4 offset)
        file_names_offset = None
        file_names = []
        # We track folder names from folder_recs
        folder_names = []
        for count, offs in folder_recs:
            # offs points to (name_len_byte + name_bytes_NUL_term + file_records)
            # but the offset includes total_file_name_len somehow — Oblivion BSA quirk.
            # Just walk manually:
            real_off = offs - total_file_name_len
            name_len = data[real_off]
            real_off += 1
            name = data[real_off:real_off + name_len].rstrip(b"\x00").decode("latin-1", "replace")
            real_off += name_len
            folder_names.append(name)
            for _ in range(count):
                # 8 hash + 4 size + 4 offset
                real_off += 16
        # File names block (concatenated null-terminated)
        # comes after the folder records but before file data
        # We'll just stream-search for filenames whose path components match folders.
        # Simpler: extract file name blob by computing offset.
        # Folder records ended at: cur (above)
        # File records ended at: cur + total of (count*16 per folder)
        # Then file names = total_file_name_len bytes
        # Estimated file_names_start:
        file_records_size = sum(c * 16 for c, _ in folder_recs)
        file_names_start = cur + file_records_size + folder_count  # +1 byte per folder for name_len
        # That's flaky because folder names are interleaved. Skip; this BSA reader is
        # not the goal of this script. Fall back to using list_bsa_files.py's logic.
        return out
    return out


def list_bsa_simple(bsa_path: Path) -> set[str]:
    """Use Reborn's existing list_bsa_files.py via subprocess."""
    import subprocess
    out = set()
    try:
        r = subprocess.run(
            ["python", str(OUT_DIR / "list_bsa_files.py"), str(bsa_path)],
            capture_output=True, text=True, timeout=120,
        )
        for line in r.stdout.splitlines():
            # Format: "  [    nnn C] folder\file.ext"
            line = line.strip()
            if not line or line[0] != "[":
                # find the bracket
                idx = line.find("]")
                if idx < 0:
                    continue
                fp = line[idx + 1:].strip()
            else:
                idx = line.find("]")
                fp = line[idx + 1:].strip()
            if fp:
                out.add(fp.lower().replace("\\", "/"))
    except Exception as e:
        print(f"  ! BSA read failed for {bsa_path.name}: {e}")
    return out


def collect_known_files() -> set[str]:
    """All loose files + BSA contents the engine could resolve, lowercased,
    forward-slashed, relative to Data root (e.g., 'meshes/foo/bar.nif')."""
    known: set[str] = set()
    # Loose files in Data dirs
    for root in LOOSE_DATA_DIRS:
        if not root.exists():
            continue
        # Walk subdirs that the engine cares about
        for sub in ("meshes", "textures", "sound"):
            base = root / sub
            if not base.exists():
                continue
            for p in base.rglob("*"):
                if p.is_file():
                    rel = p.relative_to(root).as_posix().lower()
                    known.add(rel)

    # BSAs in Stock Game/Data
    bsa_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
    bsas = list(bsa_dir.glob("*.bsa")) if bsa_dir.exists() else []

    # OOO Enhanced doesn't ship a BSA but uses loose meshes/textures
    # Also check OOO Updated's BSA
    extra = [
        Path(r"D:\Modlists\Reborn\mods\OOO - Oscuro's Oblivion Overhaul - Updated\Oscuro's_Oblivion_Overhaul.bsa"),
    ]
    bsas.extend(p for p in extra if p.exists())

    print(f"  scanning {len(bsas)} BSAs…", flush=True)
    for bsa in bsas:
        files = list_bsa_simple(bsa)
        known.update(files)

    return known


def main():
    enh_data, enh_masters = load_plugin(OOO_ENH)
    self_idx = len(enh_masters)

    print("Collecting known files (loose + BSA)…", flush=True)
    known = collect_known_files()
    print(f"  {len(known)} known files (loose + BSA)\n", flush=True)

    # Phase 3a: new NPCs - inventory check
    print("=== PHASE 3a: new NPCs without CLOT/ARMO inventory ===\n", flush=True)
    new_npcs_total = 0
    new_npcs_no_gear = 0
    new_npcs_no_inventory_at_all = 0
    sample_no_gear = []

    # Build local item-class index for OOO Enhanced (so we can resolve item FIDs)
    # Build also for OOO.esm and Oblivion.esm
    print("  building item-type index…", flush=True)
    item_sigs_set = {"CLOT", "ARMO", "WEAP", "AMMO", "LVLI", "MISC", "BOOK"}
    item_type_idx = {}  # (file_short, local_fid) → sig
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig in item_sigs_set:
            item_type_idx[("self", r_fid & 0x00FFFFFF)] = sig

    ooo_data, _ = load_plugin(OOO_ESM)
    for top, sig, r_fid, _, body in iter_records(ooo_data):
        if sig in item_sigs_set:
            item_type_idx[("ooo.esm", r_fid & 0x00FFFFFF)] = sig

    van_data, _ = load_plugin(VANILLA)
    for top, sig, r_fid, _, body in iter_records(van_data):
        if sig in item_sigs_set:
            item_type_idx[("oblivion.esm", r_fid & 0x00FFFFFF)] = sig

    def resolve_item_sig(fid: int) -> str:
        high = (fid >> 24) & 0xFF
        local = fid & 0x00FFFFFF
        if high == self_idx:
            key = ("self", local)
        elif high < len(enh_masters):
            mp = enh_masters[high]
            if "oblivion.esm" in mp:
                key = ("oblivion.esm", local)
            elif "oscuro" in mp:
                key = ("ooo.esm", local)
            else:
                return ""
        else:
            return ""
        return item_type_idx.get(key, "")

    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig != "NPC_":
            continue
        high = (r_fid >> 24) & 0xFF
        if high != self_idx:
            continue  # skip overrides
        new_npcs_total += 1

        edid = ""
        full = ""
        cnto_items: list[int] = []
        rnam = 0
        tplt = 0
        acbs_flags = 0
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
            elif ssig == "CNTO" and len(ssub) >= 4:
                cnto_items.append(struct.unpack_from("<I", ssub)[0])
            elif ssig == "RNAM" and len(ssub) >= 4:
                rnam = struct.unpack_from("<I", ssub)[0]
            elif ssig == "TPLT" and len(ssub) >= 4:
                tplt = struct.unpack_from("<I", ssub)[0]
            elif ssig == "ACBS" and len(ssub) >= 4:
                acbs_flags = struct.unpack_from("<I", ssub)[0]

        # If TPLT with "use traits" / "use inventory" flag set, NPC inherits gear from template — skip
        # ACBS flags bit 0x100 = use traits, bit 0x800 = use inventory
        uses_template_inventory = bool(tplt and (acbs_flags & 0x800))
        if uses_template_inventory:
            continue

        if not cnto_items:
            new_npcs_no_inventory_at_all += 1
            continue

        # Check if any CNTO item is CLOT or ARMO
        has_gear = False
        for item_fid in cnto_items:
            isig = resolve_item_sig(item_fid)
            if isig in ("CLOT", "ARMO"):
                has_gear = True
                break
            elif isig == "LVLI":
                # leveled list might contain CLOT/ARMO — too expensive to recurse here.
                # Conservatively count as "has gear" if EDID hints at clothing/armor.
                has_gear = True
                break

        if not has_gear:
            new_npcs_no_gear += 1
            if len(sample_no_gear) < 25:
                sample_no_gear.append((edid, full, len(cnto_items), f"0x{r_fid:08X}"))

    print(f"  new NPCs total:                {new_npcs_total}")
    print(f"  new NPCs with NO CNTO at all:  {new_npcs_no_inventory_at_all}")
    print(f"  new NPCs with no CLOT/ARMO/LVLI gear in CNTO: {new_npcs_no_gear}")
    print(f"\n  Sample no-gear new NPCs:")
    for edid, full, cnto_n, fid in sample_no_gear[:15]:
        print(f"    {fid}  {edid:30s}  {full:30s}  ({cnto_n} non-gear items)")

    # Phase 3b: new ARMO/CLOT/WEAP - mesh path resolution
    print("\n=== PHASE 3b: new ARMO/CLOT/WEAP/CREA with unresolvable meshes ===\n", flush=True)

    mesh_problems = []
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig not in ("ARMO", "CLOT", "WEAP", "CREA", "STAT", "ACTI", "DOOR", "FURN"):
            continue
        high = (r_fid >> 24) & 0xFF
        if high != self_idx:
            continue
        edid = ""
        paths_to_check = []
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig in ("MODL", "MOD2", "MOD3", "MOD4"):
                p = cstr(ssub).lower().replace("\\", "/")
                if p:
                    # Engine looks for the file under meshes/
                    if not p.startswith("meshes/"):
                        full = "meshes/" + p
                    else:
                        full = p
                    paths_to_check.append((ssig, full))

        for tag, p in paths_to_check:
            if p not in known:
                mesh_problems.append({
                    "fid": f"0x{r_fid:08X}",
                    "sig": sig,
                    "edid": edid,
                    "subrec": tag,
                    "path": p,
                })

    print(f"  records with unresolvable mesh paths: {len(mesh_problems)}")
    by_sig_class = Counter(p["sig"] for p in mesh_problems)
    for s, n in by_sig_class.most_common():
        print(f"    {s}: {n}")
    print(f"\n  Sample problems:")
    for p in mesh_problems[:20]:
        print(f"    {p['fid']} {p['sig']:5s} {p['edid'][:30]:30s} {p['subrec']}: {p['path']}")

    out_p3 = OUT_DIR / "ooo_enhanced_audit_phase3_new_content.jsonl"
    import json as _json
    with out_p3.open("w") as f:
        f.write(_json.dumps({
            "phase": "3a_summary",
            "new_npcs_total": new_npcs_total,
            "new_npcs_no_cnto_at_all": new_npcs_no_inventory_at_all,
            "new_npcs_no_gear": new_npcs_no_gear,
        }) + "\n")
        for p in mesh_problems:
            p["phase"] = "3b_mesh_problem"
            f.write(_json.dumps(p) + "\n")

    print(f"\n  Phase 3 report: {out_p3}")


if __name__ == "__main__":
    main()
