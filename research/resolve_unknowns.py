"""Resolve '?' source masters in apw_records_by_source.csv by:
   1) finding which APW mod folder ships each unknown .esp
   2) looking up that folder in manifest.csv
"""
import csv
import os
from pathlib import Path

CSV_IN = Path(r"D:\Modlists\Reborn\research\apw_records_by_source.csv")
MANIFEST = Path(r"D:\Modlists\Reborn\research\manifest.csv")
APW_MODS = Path(r"D:\Modlists\APW\mods")

# Read current CSV
with CSV_IN.open(encoding="utf-8", newline="") as f:
    reader = csv.DictReader(f)
    rows = list(reader)
    orig_fieldnames = reader.fieldnames

# Read manifest -> dict keyed by apw_name
manifest = {}
with MANIFEST.open(encoding="utf-8", newline="") as f:
    reader = csv.DictReader(f)
    for r in reader:
        manifest[r["apw_name"]] = r

# Build index: lowercase esp filename -> [folder names]
print("Indexing APW mod folders...")
esp_index = {}
for folder in APW_MODS.iterdir():
    if not folder.is_dir():
        continue
    fname = folder.name
    if fname.endswith("_separator"):
        continue
    try:
        for child in folder.iterdir():
            n = child.name.lower()
            if n.endswith(".esp") or n.endswith(".esm"):
                esp_index.setdefault(n, []).append(fname)
    except (PermissionError, OSError):
        pass

print(f"Indexed {len(esp_index)} unique .esp/.esm filenames across mod folders")

# Resolve unknowns
resolutions = []  # list of (source_master, folder, status, note)
unresolved = []

for row in rows:
    if row["reborn_status"] != "?":
        continue
    sm = row["source_master"]
    key = sm.lower()
    folders = esp_index.get(key, [])
    if not folders:
        unresolved.append(sm)
        row["resolution_notes"] = "no APW mod folder ships this .esp"
        continue
    # Try to find folder in manifest
    matched_folder = None
    matched_status = None
    note = ""
    for folder in folders:
        if folder in manifest:
            matched_folder = folder
            matched_status = manifest[folder]["status"]
            break
    if matched_folder is None:
        # Folder ships .esp but no manifest row.
        matched_folder = folders[0]
        matched_status = "(not in manifest)"
        note = f"ships in folder '{folders[0]}' (no manifest row)"
        if len(folders) > 1:
            note += f"; also in: {folders[1:]}"
    else:
        if len(folders) > 1:
            note = f"manifest match; also shipped by: {[f for f in folders if f != matched_folder]}"
    row["reborn_folder"] = matched_folder
    row["reborn_status"] = matched_status
    row["resolution_notes"] = note
    resolutions.append((sm, matched_folder, matched_status, note))

# Add resolution_notes column for everyone (blank for non-resolved)
for row in rows:
    row.setdefault("resolution_notes", "")

new_fieldnames = list(orig_fieldnames) + ["resolution_notes"]

# Write back
with CSV_IN.open("w", encoding="utf-8", newline="") as f:
    writer = csv.DictWriter(f, fieldnames=new_fieldnames)
    writer.writeheader()
    for row in rows:
        writer.writerow(row)

# Summary
print()
print(f"=== Resolved {len(resolutions)} unknowns ===")
status_counts = {}
for _, _, status, _ in resolutions:
    status_counts[status] = status_counts.get(status, 0) + 1
for s, c in sorted(status_counts.items(), key=lambda x: -x[1]):
    print(f"  {s}: {c}")

print()
print(f"=== Unresolved: {len(unresolved)} ===")
for sm in unresolved:
    print(f"  {sm}")

print()
print("=== Resolutions ===")
for sm, folder, status, note in resolutions:
    n = f"  ({note})" if note else ""
    print(f"  {sm} -> {folder} [{status}]{n}")
