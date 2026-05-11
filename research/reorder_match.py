"""Improved Reborn->APW matching using meta.ini Nexus modid."""
import os, configparser, re

APW_MODS_DIR = r"D:\Modlists\APW\mods"
REBORN_MODS_DIR = r"D:\Modlists\Reborn\mods"
APW_MODLIST = r"D:\Modlists\APW\profiles\A Painted World\modlist.txt"
REBORN_MODLIST = r"D:\Modlists\Reborn\profiles\Reborn-OOO\modlist.txt"


def read_meta(mods_dir, name):
    meta = os.path.join(mods_dir, name, "meta.ini")
    if not os.path.exists(meta):
        return None
    cp = configparser.ConfigParser(interpolation=None, strict=False)
    try:
        cp.read(meta, encoding="utf-8-sig")
    except Exception:
        return None
    g = cp["General"] if cp.has_section("General") else {}
    return {
        "modid": g.get("modid", "0").strip('"'),
        "version": g.get("version", "").strip('"'),
    }


def parse_modlist(path):
    rows = []
    with open(path, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\r\n")
            if not line or line.startswith("#") or line.startswith("*"):
                continue
            if line[0] in "+-":
                state, name = line[0], line[1:]
                kind = "separator" if name.endswith("_separator") else "mod"
                rows.append((kind, state, name))
    return rows


def normalize_name(n):
    """Loose normalize for fuzzy matching."""
    n = n.lower()
    n = re.sub(r"[^a-z0-9]+", " ", n)
    n = re.sub(r"\b(v?\d+[\._\-]?\d*[\._\-]?\d*[a-z]?)\b", "", n)
    n = re.sub(r"\s+", " ", n).strip()
    return n


apw_rows = parse_modlist(APW_MODLIST)
reborn_rows = parse_modlist(REBORN_MODLIST)

apw_names = [n for k, s, n in apw_rows if k == "mod"]
reborn_names = [n for k, s, n in reborn_rows if k == "mod"]

print(f"APW mods: {len(apw_names)}, Reborn-OOO mods: {len(reborn_names)}")

# Direct name match
apw_set = set(apw_names)
direct = {n for n in reborn_names if n in apw_set}
print(f"Direct name match: {len(direct)}")

# modid match for the rest
unmatched = [n for n in reborn_names if n not in apw_set]
# Build APW modid -> name lookup
apw_modid = {}
for n in apw_names:
    m = read_meta(APW_MODS_DIR, n)
    if m and m["modid"] not in ("0", "", None):
        apw_modid.setdefault(m["modid"], []).append(n)

modid_matches = {}
still_unmatched = []
for n in unmatched:
    m = read_meta(REBORN_MODS_DIR, n)
    if m and m["modid"] not in ("0", "", None) and m["modid"] in apw_modid:
        modid_matches[n] = apw_modid[m["modid"]]
    else:
        still_unmatched.append(n)

print(f"modid match: {len(modid_matches)}")
print(f"Still unmatched: {len(still_unmatched)}")
print()
print("=== modid-resolved matches ===")
for r, apw_list in sorted(modid_matches.items()):
    print(f"  REBORN '{r}' -> APW '{apw_list[0]}'" + (f"  (+{len(apw_list)-1} more)" if len(apw_list) > 1 else ""))

# Fuzzy match the still-unmatched
print()
print("=== still unmatched (Reborn-only or naming-divergent) ===")
apw_norm = {normalize_name(n): n for n in apw_names}
fuzzy_matches = {}
genuinely_unmatched = []
for n in still_unmatched:
    nn = normalize_name(n)
    if nn in apw_norm:
        fuzzy_matches[n] = apw_norm[nn]
    else:
        genuinely_unmatched.append(n)
print(f"  fuzzy-normalize matches: {len(fuzzy_matches)}")
for r, a in sorted(fuzzy_matches.items()):
    print(f"    REBORN '{r}' ≈ APW '{a}'")
print()
print(f"  genuinely unmatched (Reborn-only): {len(genuinely_unmatched)}")
for n in genuinely_unmatched:
    print(f"    {n}")
