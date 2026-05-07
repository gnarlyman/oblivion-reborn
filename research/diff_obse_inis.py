"""Sweep all INI/TOML/JSON/CFG files in OBSE\\Plugins\\ across APW and Reborn,
report differences."""
import os
import hashlib
import sys
sys.stdout.reconfigure(encoding='utf-8')


def index_obse_inis(root):
    out = {}
    for dirpath, _, files in os.walk(root):
        norm = dirpath.lower().replace('\\', '/')
        if '/obse/plugins' not in norm:
            continue
        # Get relative path from OBSE/Plugins onward
        idx = norm.find('/obse/plugins')
        rel_start = dirpath[idx + len('/obse/plugins'):].lstrip('/').lstrip('\\')
        for f in files:
            if not f.lower().endswith(('.ini', '.toml', '.json', '.cfg')):
                continue
            full = os.path.join(dirpath, f)
            rel = (rel_start + '/' + f).lstrip('/').lower()
            with open(full, 'rb') as fh:
                data = fh.read()
            h = hashlib.sha256(data).hexdigest()[:12]
            out.setdefault(rel, []).append((full, h, len(data)))
    return out


apw = index_obse_inis('D:/Modlists/APW/mods')
reb = index_obse_inis('D:/Modlists/Reborn/mods')

print('=== INI files that exist in BOTH but differ ===')
diffs = 0
for rel in sorted(set(apw) & set(reb)):
    a = apw[rel][0]
    r = reb[rel][0]
    if a[1] != r[1]:
        diffs += 1
        print(f'\n  {rel}')
        print(f'    APW    sha={a[1]} size={a[2]}')
        print(f'    Reborn sha={r[1]} size={r[2]}')
        print(f'    APW path:    {a[0]}')
        print(f'    Reborn path: {r[0]}')
print(f'\nTotal differing: {diffs}')

print('\n=== INIs only in APW ===')
for rel in sorted(set(apw) - set(reb)):
    print(f'  {rel}')

print('\n=== INIs only in Reborn ===')
for rel in sorted(set(reb) - set(apw)):
    print(f'  {rel}')
