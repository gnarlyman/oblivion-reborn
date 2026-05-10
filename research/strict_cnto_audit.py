"""Strict CNTO drift audit: find NPCs where master has a CLOT/ARMO that
override drops, AND override doesn't add a replacement CLOT/ARMO covering
the same biped slot. Distinguishes 'gear swap' (acceptable) from 'item
just gone' (visible bug).
"""
from __future__ import annotations
import io, sys, struct, zlib
from collections import Counter, defaultdict
from pathlib import Path
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
sys.path.insert(0, r"D:\Modlists\Reborn\research")
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

ENH = Path(r"D:\Modlists\Reborn\mods\OOO Enhanced\OOO Enhanced.esp")
OOO = next(Path(r"D:\Modlists\Reborn\mods").glob("OOO - Oscuro*/*.esm"))
VAN = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")

print("Loading plugins...", flush=True)
enh_data, enh_masters = load_plugin(ENH)
self_idx = len(enh_masters)
ooo_data, _ = load_plugin(OOO)
van_data, _ = load_plugin(VAN)

# Build BIPED-SLOT lookup for every CLOT/ARMO across all 3 plugins.
# Biped flags: bit 0=head, 1=hair, 2=upperbody, 3=lowerbody, 4=hand, 5=foot,
#              6=rightring, 7=leftring, 8=amulet, 9=weapon, ...
print("Building biped-slot lookup...", flush=True)
biped_slot = {}  # (alias, local_fid) → bitmask of slots covered
def index_clot_armo(data, alias, masters_):
    self_i = len(masters_)
    for top, sig, r_fid, _, body in iter_records(data):
        if sig not in ("CLOT", "ARMO"): continue
        local = r_fid & 0xFFFFFF
        flags = 0
        for ssig, sub in parse_subrecords(body):
            if ssig == "BMDT" and len(sub) >= 4:
                flags = struct.unpack_from("<I", sub, 0)[0]
                break
        biped_slot[(alias, local)] = flags

index_clot_armo(ooo_data, "ooo", [])
index_clot_armo(van_data, "van", [])
index_clot_armo(enh_data, "self", enh_masters)
print(f"  {len(biped_slot)} CLOT/ARMO records indexed")

def resolve_item_alias(file_fid, masters_):
    """Translate an item FormID's high byte into an alias for biped lookup."""
    high = (file_fid >> 24) & 0xFF
    local = file_fid & 0xFFFFFF
    self_i = len(masters_)
    if high == self_i:
        return ("self", local)
    if high < len(masters_):
        mp = masters_[high].lower()
        if "oblivion.esm" in mp:
            return ("van", local)
        if "oscuro" in mp and ".esm" in mp:
            return ("ooo", local)
    return None

def get_slots(item_fid, owning_masters):
    """Return biped slot bitmask for an item, or 0 if not a CLOT/ARMO."""
    key = resolve_item_alias(item_fid, owning_masters)
    if not key: return 0
    return biped_slot.get(key, 0)

def slot_names(mask):
    names = []
    SLOTS = ["Head", "Hair", "UpperBody", "LowerBody", "Hand", "Foot",
             "RightRing", "LeftRing", "Amulet", "Weapon", "BackWeapon",
             "SideWeapon", "Quiver", "Shield", "Torch", "Tail"]
    for i, n in enumerate(SLOTS):
        if mask & (1 << i):
            names.append(n)
    return names

# Build NPC master lookup
master_npcs_ooo = {}
master_npcs_van = {}
for top, sig, r_fid, _, body in iter_records(ooo_data):
    if sig == "NPC_":
        master_npcs_ooo[r_fid & 0xFFFFFF] = body
for top, sig, r_fid, _, body in iter_records(van_data):
    if sig == "NPC_":
        master_npcs_van[r_fid & 0xFFFFFF] = body

def cnto_list(body):
    items = []
    for ssig, sub in parse_subrecords(body):
        if ssig == "CNTO" and len(sub) >= 8:
            items.append(struct.unpack_from("<I", sub, 0)[0])
    return items

# Now scan every override NPC in OOO Enhanced and find true visible-naked cases.
visible_naked = []  # (fid, edid, full, lost_slots, lost_items, replacement_status)
for top, sig, r_fid, _, body in iter_records(enh_data):
    if sig != "NPC_": continue
    if (r_fid >> 24) & 0xFF == self_idx: continue
    high = (r_fid >> 24) & 0xFF
    local = r_fid & 0xFFFFFF
    mp = enh_masters[high].lower()
    if "oblivion.esm" in mp:
        master_body = master_npcs_van.get(local)
        master_owning = []
    elif "oscuro" in mp and ".esm" in mp:
        master_body = master_npcs_ooo.get(local)
        master_owning = ["oblivion.esm"]
    else:
        continue
    if master_body is None: continue

    edid = ""; full = ""
    for ssig, sub in parse_subrecords(body):
        if ssig == "EDID": edid = cstr(sub)
        elif ssig == "FULL": full = cstr(sub)

    master_items = cnto_list(master_body)
    override_items = cnto_list(body)

    # Compute slot coverage on each side
    master_slot_mask = 0
    master_items_by_slot = defaultdict(list)
    for it in master_items:
        s = get_slots(it, master_owning if "oblivion.esm" in mp else ["oblivion.esm"])
        if s:
            master_slot_mask |= s
            for i in range(16):
                if s & (1 << i):
                    master_items_by_slot[i].append(it)

    override_slot_mask = 0
    override_items_by_slot = defaultdict(list)
    for it in override_items:
        s = get_slots(it, enh_masters)
        if s:
            override_slot_mask |= s
            for i in range(16):
                if s & (1 << i):
                    override_items_by_slot[i].append(it)

    # Slots covered in master but NOT in override → visible bug
    lost_slot_mask = master_slot_mask & ~override_slot_mask

    # Filter to slots that produce visible nudity: UpperBody, LowerBody, Foot, Hand, Head, Hair
    # (Rings/amulets/weapons missing don't make NPCs look naked)
    visible_slots_mask = 0b0000000000111101  # bits 0,2,3,4,5 = head, upper, lower, hand, foot
    visible_lost = lost_slot_mask & visible_slots_mask

    if visible_lost:
        # Find which master items in those slots are now missing
        lost_items = []
        for i in range(16):
            if visible_lost & (1 << i):
                lost_items.extend(master_items_by_slot[i])
        visible_naked.append({
            "fid": r_fid,
            "local": local,
            "edid": edid,
            "full": full,
            "master_plugin": mp,
            "lost_slot_names": slot_names(visible_lost),
            "lost_item_count": len(lost_items),
            "master_total": len(master_items),
            "override_total": len(override_items),
        })

print(f"\n=== TRUE visible-naked NPCs: {len(visible_naked)} ===")
print("(NPCs where master had a clothing/armor item in head/upper/lower/hand/foot slot, override dropped it, and override has no replacement covering that slot)\n")

# Group by master plugin and show representative examples
by_master = defaultdict(list)
for r in visible_naked:
    by_master[r["master_plugin"]].append(r)

for mp, lst in sorted(by_master.items()):
    print(f"\n--- {mp}: {len(lst)} NPCs ---")
    by_slots = Counter(tuple(r["lost_slot_names"]) for r in lst)
    print(f"  Slot-loss distribution:")
    for slots, n in by_slots.most_common(8):
        print(f"    {slots}: {n} NPCs")
    print(f"\n  Top 15 by lost item count:")
    for r in sorted(lst, key=lambda x: -x["lost_item_count"])[:15]:
        print(f"    0x{r['local']:06X}  {(r['full'] or r['edid'])[:35]:35s}  master={r['master_total']:2d} ovr={r['override_total']:2d}  lost slots: {r['lost_slot_names']}")

# Write JSONL for downstream use
import json
out = Path(r"D:\Modlists\Reborn\research\ooo_enh_visible_naked.jsonl")
with out.open("w", encoding="utf-8") as f:
    for r in visible_naked:
        f.write(json.dumps(r) + "\n")
print(f"\nReport: {out}")
