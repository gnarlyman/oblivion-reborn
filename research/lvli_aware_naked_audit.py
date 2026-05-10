"""LVLI-aware audit for visibly-naked NPCs.

For each NPC override in OOO Enhanced (and BP, since it merges):
  1. Walk CNTO entries.
  2. For each entry, recursively resolve LVLI -> set of CLOT/ARMO.
  3. Union biped slot bitmasks of all resolved items.
  4. Flag NPCs missing coverage in critical visible slots
     (UpperBody, LowerBody, Foot, Hand) ONLY if the master had coverage
     and the resolved coverage is now gone.

Uses winning-record resolution: walks plugins in load order so BP overrides
take precedence over OOO Enhanced.
"""
from __future__ import annotations
import io, sys, struct, zlib
from collections import Counter, defaultdict
from pathlib import Path
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

# Load order: same as Reborn-OOO profile, ESMs first
PLUGINS_TO_LOAD = [
    Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm"),
    next(Path(r"D:\Modlists\Reborn\mods").glob("OOO - Oscuro*/*.esm")),
    Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp"),
    Path(r"D:\Modlists\Reborn\mods\A Painted World Configs\Bashed Patch, 0.esp"),
]
# Note: we load BP from APW for now; Reborn's BP would replace this if/when built

# Visible critical slots: UpperBody (bit 2), LowerBody (bit 3), Hand (bit 4), Foot (bit 5)
CRITICAL_SLOTS = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5)
SLOT_NAMES = {1<<2: "UpperBody", 1<<3: "LowerBody", 1<<4: "Hand", 1<<5: "Foot"}


def slot_str(mask):
    return ",".join(n for bit, n in SLOT_NAMES.items() if mask & bit) or "(none)"


def main():
    print("Loading plugins in load order…", flush=True)
    plugins = []
    for path in PLUGINS_TO_LOAD:
        if not path.exists():
            print(f"  ! missing: {path}")
            continue
        try:
            data, masters = load_plugin(path)
            plugins.append({"name": path.name.lower(), "data": data, "masters": masters, "path": path})
            print(f"  ✓ {path.name} ({len(data):,} bytes, {len(masters)} masters)")
        except Exception as e:
            print(f"  ! failed to load {path.name}: {e}")

    # Build runtime FormID resolver. Each plugin's runtime byte = its position in load order.
    # We treat the load order = list above (Oblivion=0, OOO=1, OOO Enhanced=2, BP=3).
    # Real runtime bytes differ but for diff-detection we only need consistent FID identity.
    runtime_byte = {p["name"]: i for i, p in enumerate(plugins)}

    def file_to_runtime_fid(file_fid: int, owning_plugin_name: str, owning_plugin_masters: list[str]) -> int:
        """Convert a record's file-FID to a load-order-relative runtime FID."""
        high = (file_fid >> 24) & 0xFF
        local = file_fid & 0xFFFFFF
        owner = owning_plugin_name.lower()
        if high == len(owning_plugin_masters):
            # Self-reference — owning plugin is the source
            byte = runtime_byte.get(owner)
        elif high < len(owning_plugin_masters):
            mp = owning_plugin_masters[high].lower()
            byte = runtime_byte.get(mp)
        else:
            return None
        if byte is None:
            return None
        return (byte << 24) | local

    # First pass: build winning-record map for NPC_, CLOT, ARMO, LVLI
    # (later plugins win)
    winning = {}  # runtime_fid -> (sig, body, owning_plugin)
    for p in plugins:
        for top, sig, r_fid, _, body in iter_records(p["data"]):
            if sig not in ("NPC_", "CLOT", "ARMO", "LVLI"): continue
            rt = file_to_runtime_fid(r_fid, p["name"], p["masters"])
            if rt is None: continue
            winning[rt] = (sig, body, p["name"], p["masters"])

    print(f"\n  winning records indexed: {len(winning)}")

    # Helper: get biped slot mask for a CLOT/ARMO record
    def biped_mask(body):
        for ssig, sub in parse_subrecords(body):
            if ssig == "BMDT" and len(sub) >= 4:
                return struct.unpack_from("<I", sub, 0)[0]
        return 0

    # Helper: list LVLI entries (LVLO subrecords)
    def lvli_entries(body):
        out = []
        for ssig, sub in parse_subrecords(body):
            if ssig == "LVLO" and len(sub) >= 8:
                # LVLO: short level, short padding, fid, short count, short padding (12 bytes)
                item_fid = struct.unpack_from("<I", sub, 4)[0]
                out.append(item_fid)
        return out

    # Helper: recursively resolve an item FID to set of (sig, slot_mask)
    # Returns the union of biped slots covered by the item or any LVLI it resolves to
    def resolve_slots(file_fid: int, owner_name: str, owner_masters: list[str], visited: set) -> int:
        rt = file_to_runtime_fid(file_fid, owner_name, owner_masters)
        if rt is None or rt in visited:
            return 0
        visited.add(rt)
        win = winning.get(rt)
        if not win:
            return 0
        sig, body, win_owner, win_masters = win
        if sig in ("CLOT", "ARMO"):
            return biped_mask(body)
        if sig == "LVLI":
            mask = 0
            for entry_fid in lvli_entries(body):
                mask |= resolve_slots(entry_fid, win_owner, win_masters, visited)
            return mask
        return 0

    # Pass 2: for each NPC override, compute master vs override slot coverage
    print("\nAuditing NPC overrides for true visible-naked drift…", flush=True)
    visible_naked = []
    enh_idx = next((i for i, p in enumerate(plugins) if "ooo enhanced" in p["name"]), None)
    bp_idx = next((i for i, p in enumerate(plugins) if "bashed patch" in p["name"]), None)
    if enh_idx is None:
        print("  ! OOO Enhanced not found")
        return

    enh = plugins[enh_idx]
    enh_self_idx = len(enh["masters"])

    # For each NPC record in OOO Enhanced (override only), find master in OOO.esm/Oblivion.esm
    for top, sig, r_fid, _, body in iter_records(enh["data"]):
        if sig != "NPC_": continue
        if (r_fid >> 24) & 0xFF == enh_self_idx: continue
        rt = file_to_runtime_fid(r_fid, enh["name"], enh["masters"])
        if rt is None: continue
        # Use WINNING record (BP wins if present)
        sig_w, win_body, win_owner, win_masters = winning[rt]

        # Find master record (first occurrence — the source of truth)
        master_body = None
        master_owner = None
        master_masters = None
        for p in plugins:
            for top2, sig2, r_fid2, _, body2 in iter_records(p["data"]):
                if sig2 != "NPC_": continue
                rt2 = file_to_runtime_fid(r_fid2, p["name"], p["masters"])
                if rt2 == rt:
                    if (r_fid2 >> 24) & 0xFF != len(p["masters"]):
                        continue  # this plugin is itself an override
                    master_body = body2
                    master_owner = p["name"]
                    master_masters = p["masters"]
                    break
            if master_body: break

        if master_body is None: continue

        # Get CNTO lists
        def cnto_list(b):
            return [struct.unpack_from("<I", sub, 0)[0]
                    for ssig, sub in parse_subrecords(b)
                    if ssig == "CNTO" and len(sub) >= 4]

        master_cnto = cnto_list(master_body)
        winning_cnto = cnto_list(win_body)

        master_slot_mask = 0
        for it in master_cnto:
            master_slot_mask |= resolve_slots(it, master_owner, master_masters, set())

        winning_slot_mask = 0
        for it in winning_cnto:
            winning_slot_mask |= resolve_slots(it, win_owner, win_masters, set())

        # Did the master have critical-slot coverage that the winning record now lacks?
        master_critical = master_slot_mask & CRITICAL_SLOTS
        winning_critical = winning_slot_mask & CRITICAL_SLOTS
        lost = master_critical & ~winning_critical

        if lost:
            edid = ""; full = ""
            for ssig, sub in parse_subrecords(win_body):
                if ssig == "EDID": edid = cstr(sub)
                elif ssig == "FULL": full = cstr(sub)
            visible_naked.append({
                "fid": f"0x{rt:08X}",
                "local": rt & 0xFFFFFF,
                "edid": edid,
                "full": full,
                "winning_plugin": win_owner,
                "lost_slots": slot_str(lost),
                "master_slots": slot_str(master_critical),
                "winning_slots": slot_str(winning_critical),
                "master_cnto_count": len(master_cnto),
                "winning_cnto_count": len(winning_cnto),
            })

    print(f"\n=== TRUE visible-naked NPCs (after LVLI traversal + BP merge): {len(visible_naked)} ===\n")
    if visible_naked:
        print(f"{'FID':12s} {'EDID':35s} {'Lost':25s} {'Winning plugin'}")
        for r in sorted(visible_naked, key=lambda x: x["lost_slots"])[:50]:
            print(f"  {r['fid']:10s}  {(r['full'] or r['edid'])[:33]:33s}  {r['lost_slots']:23s}  {r['winning_plugin']}")
        if len(visible_naked) > 50:
            print(f"\n  ... +{len(visible_naked) - 50} more")

    # Save
    import json
    out = Path(r"D:\Modlists\Reborn\research\ooo_enh_lvli_aware_naked.jsonl")
    with out.open("w", encoding="utf-8") as f:
        for r in visible_naked:
            f.write(json.dumps(r) + "\n")
    print(f"\nReport: {out}")


if __name__ == "__main__":
    main()
