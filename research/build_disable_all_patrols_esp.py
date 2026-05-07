"""Build Reborn - Disable All Patrols.esp — sets the Initial Disable flag
(0x00000800) on all 36 OOO Imperial Legion mounted patrol ACHR placements
plus their horse ACRE placements.

Source ACHR/ACRE records:
  - 17 in Oblivion.esm (vanilla riders + horses)
  - 19 in Oscuro's_Oblivion_Overhaul.esp (B-variant placements OOO adds)
"""
import os
import struct
import zlib
import sys
import hashlib
from pathlib import Path

sys.path.insert(0, "D:/Modlists/Reborn/research")
from oblivion_esp_builder import build_tes4_record, build_grup_record

OBLIVION = "D:/Modlists/Reborn/Stock Game/Data/Oblivion.esm"
OOO_ESP = "D:/Modlists/Reborn/mods/OOO - Oscuro's Oblivion Overhaul - Updated/Oscuro's_Oblivion_Overhaul.esp"
DST = "D:/Modlists/Reborn/mods/Reborn - Disable All Patrols/Reborn - Disable All Patrols.esp"

PATROL_NPCS_BY_OWNER = {
    "Oblivion.esm": {
        0x0700C0, 0x0700C1, 0x0700C2, 0x0700C3, 0x0700C4, 0x0700C5,
        0x0700C6, 0x0700C7, 0x0700C8, 0x0700C9, 0x0700CA, 0x0700CB,
        0x0700CC, 0x0700CD, 0x18BA86, 0x18BA88, 0x18BA89,
    },
    "Oscuro's_Oblivion_Overhaul.esm": {
        0x004D3B, 0x004D3F, 0x0052B7, 0x0052BE, 0x0052C6, 0x0052D1,
        0x0052D4, 0x012391, 0x03A27D, 0x03A286, 0x03A28B, 0x03A290,
        0x03A298, 0x03A29F, 0x03A78C, 0x03A796, 0x03AC9D, 0x03B18A,
        0x03B194,
    },
}

INIT_DISABLE_FLAG = 0x00000800


def parse_masters(data):
    tes4_size = struct.unpack('<I', data[4:8])[0]
    flags = struct.unpack('<I', data[8:12])[0]
    body = data[20:20+tes4_size]
    if flags & 0x40000:
        body = zlib.decompress(body[4:])
    masters, i = [], 0
    while i + 6 <= len(body):
        ss = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        if ss == b'MAST':
            masters.append(body[i+6:i+6+sz].rstrip(b'\x00').decode('latin1'))
        i += 6 + sz
    return masters


def parse_subs(body):
    out = []; i = 0
    while i + 6 <= len(body):
        s = body[i:i+4]; sz = struct.unpack('<H', body[i+4:i+6])[0]
        out.append((s, body[i+6:i+6+sz]))
        i += 6 + sz
    return out


def walk(data, off, end, scan_plugin_name, masters, hits):
    cur = off
    while cur < end:
        sig = data[cur:cur+4]
        if sig == b'GRUP':
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            walk(data, cur+20, cur+size, scan_plugin_name, masters, hits)
            cur += size
        else:
            size = struct.unpack('<I', data[cur+4:cur+8])[0]
            flags = struct.unpack('<I', data[cur+8:cur+12])[0]
            fid = struct.unpack('<I', data[cur+12:cur+16])[0]
            local = fid & 0xFFFFFF
            m_idx = (fid >> 24) & 0xFF
            self_byte = len(masters)
            owner = scan_plugin_name if m_idx == self_byte else (masters[m_idx] if m_idx < len(masters) else None)
            if sig in (b'ACHR', b'ACRE') and owner:
                body_compressed = bool(flags & 0x40000)
                body_size = size
                body = data[cur+20:cur+20+body_size]
                if body_compressed:
                    body = zlib.decompress(body[4:])
                # Look for NAME (base NPC/CREA FID)
                name_fid = None
                for ss, d in parse_subs(body):
                    if ss == b'NAME' and len(d) >= 4:
                        name_fid = struct.unpack('<I', d[:4])[0]
                        break
                if name_fid is not None:
                    n_local = name_fid & 0xFFFFFF
                    n_idx = (name_fid >> 24) & 0xFF
                    n_owner = scan_plugin_name if n_idx == self_byte else (masters[n_idx] if n_idx < len(masters) else None)
                    hits.append({
                        'sig': sig,
                        'rec_owner': owner,
                        'rec_local': local,
                        'rec_fid': fid,
                        'rec_flags': flags,
                        'rec_body': body,
                        'rec_body_was_compressed': body_compressed,
                        'name_owner': n_owner,
                        'name_local': n_local,
                    })
            cur += 20 + size


def scan(path, plugin_name):
    data = open(path, 'rb').read()
    masters = parse_masters(data)
    tes4_size = struct.unpack('<I', data[4:8])[0]
    hits = []
    walk(data, 20+tes4_size, len(data), plugin_name, masters, hits)
    return hits


def patrol_horses_used(achr_hits):
    """Look at each ACHR's XHRS subrecord to find linked horse ACRE FIDs."""
    horse_keys = set()  # set of (owner, local_fid)
    for h in achr_hits:
        if h['sig'] != b'ACHR':
            continue
        # Need to re-parse body for XHRS
        for ss, d in parse_subs(h['rec_body']):
            if ss == b'XHRS' and len(d) >= 4:
                fid = struct.unpack('<I', d[:4])[0]
                # Resolve owner same way as before
                # We need access to ACHR's masters list — but we don't have it here
                # Easier: just record owner from same plugin context
                # However XHRS could point to OOO ESM-added horse from OOO ESP-context
                # We treat 'self' references as scan_plugin_name (which we don't track here)
                horse_keys.add(('UNRESOLVED', fid))
    return horse_keys


def build_disabled_record(rec_dict, src_master_list, dst_master_list, dst_self_byte):
    """Take an ACHR/ACRE record from source, rewrite its master-byte to point
    into our destination ESP's master list, and set Initial Disable flag."""
    sig = rec_dict['sig']
    src_local = rec_dict['rec_local']
    src_owner = rec_dict['rec_owner']
    new_m = dst_master_list.index(src_owner)
    new_fid = (new_m << 24) | src_local

    # Body: re-emit, optionally remap NAME / XHRS internal master bytes
    body = rec_dict['rec_body']
    new_subs = []
    for s, d in parse_subs(body):
        if s in (b'NAME', b'XHRS', b'XESP', b'XOWN', b'CNTO') and len(d) >= 4:
            ref_fid = struct.unpack('<I', d[:4])[0]
            ref_local = ref_fid & 0xFFFFFF
            ref_idx = (ref_fid >> 24) & 0xFF
            ref_owner = src_owner if ref_idx == len(src_master_list) else (src_master_list[ref_idx] if ref_idx < len(src_master_list) else None)
            if ref_owner and ref_owner in dst_master_list:
                new_idx = dst_master_list.index(ref_owner)
                new_ref_fid = (new_idx << 24) | ref_local
                d = struct.pack('<I', new_ref_fid) + d[4:]
            else:
                # Unresolvable cross-master — drop subrecord entirely to avoid corruption
                continue
        new_subs.append(s + struct.pack('<H', len(d)) + d)
    new_body = b''.join(new_subs)

    # Header: clear compressed flag, set Initial Disable, keep Persistent
    new_flags = (rec_dict['rec_flags'] & ~0x40000) | INIT_DISABLE_FLAG

    new_header = (
        sig +
        struct.pack('<I', len(new_body)) +
        struct.pack('<I', new_flags) +
        struct.pack('<I', new_fid) +
        b'\x00' * 4   # versionControl
    )
    return new_header + new_body


def main():
    # Step 1: scan Oblivion.esm and OOO ESP for ACHR/ACRE records pointing at patrol NPCs
    obl_hits = scan(OBLIVION, "Oblivion.esm")
    ooo_hits = scan(OOO_ESP, "Oscuro's_Oblivion_Overhaul.esp")

    # Filter: keep ACHRs whose NAME points at a patrol NPC; keep ACREs reached via XHRS
    patrol_owner_locals = {(o, fid) for o, fids in PATROL_NPCS_BY_OWNER.items() for fid in fids}

    keep_achr = []
    horse_keys = set()  # (owner, local_fid) of linked horses
    for h in obl_hits + ooo_hits:
        if h['sig'] != b'ACHR':
            continue
        if (h['name_owner'], h['name_local']) not in patrol_owner_locals:
            continue
        keep_achr.append(h)
        # Get its XHRS
        for s, d in parse_subs(h['rec_body']):
            if s == b'XHRS' and len(d) >= 4:
                xhrs_fid = struct.unpack('<I', d[:4])[0]
                xhrs_local = xhrs_fid & 0xFFFFFF
                xhrs_idx = (xhrs_fid >> 24) & 0xFF
                # Resolve XHRS owner: re-load source plugin's master list to translate
                # For Oblivion.esm-based ACHRs, master byte 0x00 = Oblivion.esm itself (self).
                # For OOO ESP-based ACHRs, master byte may reference its master list.
                if h['rec_owner'] == "Oblivion.esm":
                    # self_byte for Oblivion.esm = 0 (no masters)
                    xhrs_owner = "Oblivion.esm"
                else:
                    # OOO ESP — masters: [Oblivion.esm, OOO ESM, UOP, DLC SI, US patch]
                    # self_byte = 5
                    OOO_MASTERS = ['Oblivion.esm', "Oscuro's_Oblivion_Overhaul.esm", 'Unofficial Oblivion Patch.esp', 'DLCShiveringIsles.esp', 'Unofficial Shivering Isles Patch.esp']
                    if xhrs_idx == 5:
                        xhrs_owner = h['rec_owner']
                    elif xhrs_idx < 5:
                        xhrs_owner = OOO_MASTERS[xhrs_idx]
                    else:
                        xhrs_owner = None
                if xhrs_owner:
                    horse_keys.add((xhrs_owner, xhrs_local))
                break

    print(f"Kept ACHRs: {len(keep_achr)}")
    print(f"Horse keys: {len(horse_keys)}")

    # Find ACRE records matching horse_keys
    keep_acre = []
    for h in obl_hits + ooo_hits:
        if h['sig'] != b'ACRE':
            continue
        if (h['rec_owner'], h['rec_local']) in horse_keys:
            keep_acre.append(h)
    print(f"Kept ACREs: {len(keep_acre)}")

    # Build dst master list
    needed_masters = {h['rec_owner'] for h in keep_achr + keep_acre}
    dst_masters = ['Oblivion.esm']
    for m in sorted(needed_masters - {'Oblivion.esm'}):
        dst_masters.append(m)
    print(f"Dst masters: {dst_masters}")
    dst_self_byte = len(dst_masters)

    # Build override records
    achr_records = []
    for h in keep_achr:
        # Need to get source masters list for the ACHR's plugin
        if h['rec_owner'] == 'Oblivion.esm':
            src_masters = []
        else:
            src_masters = ['Oblivion.esm', "Oscuro's_Oblivion_Overhaul.esm", 'Unofficial Oblivion Patch.esp', 'DLCShiveringIsles.esp', 'Unofficial Shivering Isles Patch.esp']
        achr_records.append(build_disabled_record(h, src_masters, dst_masters, dst_self_byte))

    acre_records = []
    for h in keep_acre:
        if h['rec_owner'] == 'Oblivion.esm':
            src_masters = []
        else:
            src_masters = ['Oblivion.esm', "Oscuro's_Oblivion_Overhaul.esm", 'Unofficial Oblivion Patch.esp', 'DLCShiveringIsles.esp', 'Unofficial Shivering Isles Patch.esp']
        acre_records.append(build_disabled_record(h, src_masters, dst_masters, dst_self_byte))

    total_records = len(achr_records) + len(acre_records)
    print(f"Total records to write: {total_records}")

    # Build TES4 + GRUPs
    tes4 = build_tes4_record(dst_masters, total_records, author='Reborn-DisableAllPatrols')
    achr_grup = build_grup_record(b'ACHR', b''.join(achr_records))
    acre_grup = build_grup_record(b'ACRE', b''.join(acre_records))

    out = Path(DST)
    out.parent.mkdir(parents=True, exist_ok=True)
    esp = tes4 + achr_grup + acre_grup
    with open(out, 'wb') as f:
        f.write(esp)
    print(f"\nWrote: {out}")
    print(f"  Size: {len(esp)} bytes")
    print(f"  SHA256: {hashlib.sha256(esp).hexdigest()}")

    # Write meta.ini
    meta = out.parent / 'meta.ini'
    meta.write_text('''[General]
gameName=Oblivion
modid=0
version=1.0.0
notes=Disables all 36 OOO Imperial Legion mounted patrol ACHRs and their horse ACREs by setting the Initial Disable flag (record-header bit 0x800) on each. Diagnostic ESP for confirming patrol-stream-in is the BSTaskManager UAF crash trigger; once confirmed, can be replaced with a more surgical fix. Should load LAST. The 17 vanilla patrol ACHRs come from Oblivion.esm; the 19 B-variant placements come from Oscuro's_Oblivion_Overhaul.esp.
''', encoding='ascii')


if __name__ == '__main__':
    main()
