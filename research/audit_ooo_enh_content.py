"""Enumerate OOO Enhanced's NEW content in detail.

For each new record class, dump readable metadata so we can categorize what
is actually being added: which quests, which NPC types, which creature kinds,
what equipment themes.
"""
from __future__ import annotations

import json
import re
import struct
import sys
import zlib
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import (
    parse_subrecords, cstr, load_plugin, iter_records,
    OOO_ENH, OOO_ESM, VANILLA, OUT_DIR,
)


def fid_unpack(b: bytes) -> int:
    if len(b) < 4:
        return 0
    return struct.unpack_from("<I", b)[0]


def build_name_index(data, file_alias):
    """Map (alias, sig, local_fid) → (edid, full)."""
    out = {}
    for top, sig, r_fid, _, body in iter_records(data):
        local = r_fid & 0x00FFFFFF
        edid = ""
        full = ""
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
        out[(file_alias, sig, local)] = (edid, full)
    return out


def main():
    enh_data, enh_masters = load_plugin(OOO_ENH)
    self_idx = len(enh_masters)
    print(f"Self idx: {self_idx} (file masters: {enh_masters})\n")

    print("Building cross-plugin name index...", flush=True)
    ooo_data, _ = load_plugin(OOO_ESM)
    van_data, _ = load_plugin(VANILLA)
    name_idx = {}
    name_idx.update(build_name_index(enh_data, "self"))
    name_idx.update(build_name_index(ooo_data, "ooo.esm"))
    name_idx.update(build_name_index(van_data, "oblivion.esm"))

    def resolve_fid(fid: int):
        high = (fid >> 24) & 0xFF
        local = fid & 0x00FFFFFF
        if high == self_idx:
            alias = "self"
        elif high < len(enh_masters):
            mp = enh_masters[high]
            if "oblivion.esm" in mp:
                alias = "oblivion.esm"
            elif "oscuro" in mp.lower() and ".esm" in mp:
                alias = "ooo.esm"
            else:
                return None
        else:
            return None
        # We don't know the sig; try common ones
        for sig in ("CELL", "WRLD", "FACT", "RACE", "CLAS", "QUST", "NPC_", "CREA",
                    "WEAP", "ARMO", "CLOT", "LVLI", "LVLC", "PACK"):
            r = name_idx.get((alias, sig, local))
            if r:
                return (sig, r[0], r[1])
        return None

    # ============================================================
    # NEW QUESTS
    # ============================================================
    print("=" * 70)
    print("NEW QUESTS")
    print("=" * 70)
    quest_count = 0
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig != "QUST":
            continue
        if (r_fid >> 24) & 0xFF != self_idx:
            continue
        quest_count += 1
        edid, full = "", ""
        priority = 0
        flags = 0
        stages = []
        scri = 0
        cur_stage = None
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
            elif ssig == "DATA" and len(ssub) >= 2:
                flags = ssub[0]
                priority = ssub[1]
            elif ssig == "SCRI" and len(ssub) >= 4:
                scri = fid_unpack(ssub)
            elif ssig == "INDX" and len(ssub) >= 2:
                if cur_stage is not None:
                    stages.append(cur_stage)
                cur_stage = {"index": struct.unpack_from("<H", ssub)[0], "entries": []}
            elif ssig == "CNAM" and cur_stage is not None:
                # CNAM under QUST stage = journal entry text
                cur_stage["entries"].append(cstr(ssub))
            elif ssig == "QSDT" and cur_stage is not None:
                # QSDT under stage = stage flags
                pass
        if cur_stage is not None:
            stages.append(cur_stage)
        last_text = ""
        for st in stages[::-1]:
            for e in st["entries"]:
                if e:
                    last_text = e
                    break
            if last_text:
                break
        print(f"\n  [{r_fid & 0xFFFFFF:06X}] {edid}  ({full!r})")
        print(f"    flags=0x{flags:02X} priority={priority}  stages={len(stages)}")
        if scri:
            r = resolve_fid(scri)
            print(f"    script: {r}")
        for st in stages[:8]:
            sample = next((e for e in st["entries"] if e), "")
            print(f"      stage {st['index']:3d}: {sample[:120]}")
        if len(stages) > 8:
            print(f"      ... +{len(stages) - 8} more stages")
    print(f"\nTotal NEW quests: {quest_count}")

    # ============================================================
    # NEW NPCS (categorized)
    # ============================================================
    print("\n" + "=" * 70)
    print("NEW NPCS — categorized by EDID prefix and faction")
    print("=" * 70)

    new_npcs = []
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig != "NPC_":
            continue
        if (r_fid >> 24) & 0xFF != self_idx:
            continue
        edid, full = "", ""
        race_fid = 0
        class_fid = 0
        factions = []
        cnto_count = 0
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
            elif ssig == "RNAM" and len(ssub) >= 4:
                race_fid = fid_unpack(ssub)
            elif ssig == "CNAM" and len(ssub) >= 4:
                class_fid = fid_unpack(ssub)
            elif ssig == "SNAM" and len(ssub) >= 8:
                # Faction membership
                f = struct.unpack_from("<I", ssub)[0]
                rank = ssub[4]
                factions.append((f, rank))
            elif ssig == "CNTO":
                cnto_count += 1
        new_npcs.append({
            "fid": r_fid,
            "edid": edid,
            "full": full,
            "race": race_fid,
            "class": class_fid,
            "factions": factions,
            "cnto": cnto_count,
        })

    print(f"\nTotal NEW NPCs: {len(new_npcs)}\n")

    # Bucket by EDID prefix patterns
    buckets = defaultdict(list)

    def bucket_for(edid: str) -> str:
        e = edid
        if re.match(r"^ZZZOOO", e):
            e = e[6:]
        if re.match(r"^OOO", e):
            e = e[3:]
        # Try common prefixes
        prefixes = ["Astral", "Sylvan", "Skyrim", "Vampire", "Lich", "Necromancer",
                    "Dremora", "Daedra", "BlackBow", "Mythic", "Pilgrim", "Bandit",
                    "Marauder", "Conjurer", "Mage", "Acolyte", "Knight", "Skeleton",
                    "Naked", "Underworld", "Outlaw", "Forest", "Cult", "PuTrid",
                    "AdventurerNPC", "AdventurerLight", "AdventurerHeavy",
                    "Drinkblade", "Dunlevyer", "Atronach"]
        for p in prefixes:
            if e.lower().startswith(p.lower()):
                return p
        return "Other"

    for n in new_npcs:
        b = bucket_for(n["edid"])
        buckets[b].append(n)

    print("Buckets (top by count):")
    for b, lst in sorted(buckets.items(), key=lambda kv: -len(kv[1])):
        print(f"  {b:20s} {len(lst):4d}")

    print("\nFull list by bucket (FULL name shown when present):")
    for b, lst in sorted(buckets.items(), key=lambda kv: -len(kv[1])):
        print(f"\n--- {b} ({len(lst)}) ---")
        seen_names = set()
        for n in lst:
            label = n["full"] or n["edid"]
            # de-dupe display by name+race
            r = resolve_fid(n["race"])
            race_name = (r[1] or r[0]) if r else ""
            key = (label, race_name)
            if key in seen_names:
                continue
            seen_names.add(key)
            print(f"  [{n['fid'] & 0xFFFFFF:06X}] {label:35s}  race={race_name or '?'}  cnto_items={n['cnto']}")
            if len(seen_names) > 20:
                print(f"  ... +{len(lst) - 20} more variants")
                break

    # ============================================================
    # NEW CREATURES (categorized)
    # ============================================================
    print("\n" + "=" * 70)
    print("NEW CREATURES — categorized")
    print("=" * 70)

    new_crea = []
    for top, sig, r_fid, _, body in iter_records(enh_data):
        if sig != "CREA":
            continue
        if (r_fid >> 24) & 0xFF != self_idx:
            continue
        edid, full = "", ""
        nam0 = ""
        tplt = 0
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
            elif ssig == "FULL":
                full = cstr(ssub)
            elif ssig == "NAM0":
                nam0 = cstr(ssub)
            elif ssig == "TPLT" and len(ssub) >= 4:
                tplt = fid_unpack(ssub)
        new_crea.append({"fid": r_fid, "edid": edid, "full": full, "model": nam0, "tplt": tplt})

    print(f"\nTotal NEW creatures: {len(new_crea)}\n")

    crea_buckets = defaultdict(list)
    for c in new_crea:
        e = c["edid"]
        if e.startswith("ZZZOOO"):
            e = e[6:]
        if e.startswith("OOO"):
            e = e[3:]
        # Heuristic categorization based on EDID and FULL name
        text = (e + " " + c["full"]).lower()
        for k in ("dremora", "daedra", "atronach", "skeleton", "lich", "vampire",
                 "necromancer", "spider", "wolf", "spectre", "wraith", "ghost",
                 "ogre", "goblin", "minotaur", "troll", "imp", "scamp", "demon",
                 "guardian", "demonic", "frostatronach", "warhorse", "nightmare",
                 "boss", "prophecy", "marshmerrow"):
            if k in text:
                crea_buckets[k].append(c)
                break
        else:
            crea_buckets["other"].append(c)

    print("Categories:")
    for cat, lst in sorted(crea_buckets.items(), key=lambda kv: -len(kv[1])):
        print(f"  {cat:20s} {len(lst):4d}")

    for cat, lst in sorted(crea_buckets.items(), key=lambda kv: -len(kv[1])):
        print(f"\n--- {cat} ({len(lst)}) ---")
        seen = set()
        for c in lst:
            label = c["full"] or c["edid"]
            if label in seen:
                continue
            seen.add(label)
            print(f"  [{c['fid'] & 0xFFFFFF:06X}] {label:40s}  model={c['model']}")
            if len(seen) > 20:
                print(f"  ... +{len(lst) - 20} more variants in this bucket")
                break

    # Save full lists
    out = OUT_DIR / "ooo_enh_new_content.jsonl"
    with out.open("w") as f:
        for n in new_npcs:
            n["kind"] = "NPC_"
            f.write(json.dumps(n) + "\n")
        for c in new_crea:
            c["kind"] = "CREA"
            f.write(json.dumps(c) + "\n")
    print(f"\nFull list: {out}")


if __name__ == "__main__":
    main()
