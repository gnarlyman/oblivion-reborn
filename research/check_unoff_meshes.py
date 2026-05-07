"""Check which CONT MODL paths in OOO_Unoficial-Patch.esp are missing on disk."""
import json
import os
import sys

ROW_FILE = r"D:\Modlists\Reborn\research\unoff_cont.json"
MOD_ROOT = r"D:\Modlists\Reborn\mods"

# Cache: build a set of all relative mesh paths under any mods/<mod>/(M|m)eshes/
print("Scanning mod meshes...", file=sys.stderr)
all_meshes: set[str] = set()
for mod in os.listdir(MOD_ROOT):
    for mdir_name in ("meshes", "Meshes"):
        mdir = os.path.join(MOD_ROOT, mod, mdir_name)
        if not os.path.isdir(mdir):
            continue
        for root, _, files in os.walk(mdir):
            rel_root = os.path.relpath(root, mdir).replace("\\", "/").lower()
            for f in files:
                if rel_root == ".":
                    rel = f.lower()
                else:
                    rel = f"{rel_root}/{f.lower()}"
                all_meshes.add(rel)
print(f"Indexed {len(all_meshes)} loose meshes", file=sys.stderr)

# Also load BSAs are not parsed here. We're looking specifically for harvest\
# variants which the OOO Unofficial Patch ships as loose files (or doesn't).

rows = json.load(open(ROW_FILE))
print(f"Total CONT records in OOO_Unoficial-Patch.esp: {len(rows)}")

missing = []
for r in rows:
    modl = r["modl"]
    if not modl:
        continue
    norm = modl.replace("\\", "/").lower()
    if norm in all_meshes:
        continue
    # also check if the path starts with 'harvest/' — the Unofficial Patch
    # specifically claims loose meshes for these
    if not norm.startswith("harvest/"):
        # vanilla path — assume it's in a BSA
        continue
    missing.append(r)

print(f"Missing harvest\\ MODLs: {len(missing)}")
for r in missing:
    print(f"  FID={r['fid']}  EDID={r['edid']:50s}  FULL={r['full']:25s}  MODL={r['modl']}")
