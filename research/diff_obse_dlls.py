"""Diff DLL files in OBSE\\Plugins\\ directories between APW and Reborn,
and diff Oblivion.ini if both have one."""
import os
import hashlib

def index_dlls(root):
    out = {}
    for dirpath, _, files in os.walk(root):
        norm = dirpath.lower().replace('\\', '/')
        if '/obse/plugins' not in norm:
            continue
        idx = norm.find('/obse/plugins')
        rel_start = dirpath[idx + len('/obse/plugins'):].lstrip('/').lstrip('\\')
        for f in files:
            if not f.lower().endswith('.dll'):
                continue
            full = os.path.join(dirpath, f)
            rel = (rel_start + '/' + f).lstrip('/').lower().replace('\\', '/')
            with open(full, 'rb') as fh:
                data = fh.read()
            h = hashlib.sha256(data).hexdigest()[:12]
            out.setdefault(rel, []).append((full, h, len(data)))
    return out

apw = index_dlls('D:/Modlists/APW/mods')
reb = index_dlls('D:/Modlists/Reborn/mods')

print('=== DLLs only in APW (potentially missing from Reborn) ===')
for rel in sorted(set(apw) - set(reb)):
    p = apw[rel][0]
    print(f'  {rel}  ({p[2]}b)')
    print(f'    {p[0]}')

print('\n=== DLLs only in Reborn ===')
for rel in sorted(set(reb) - set(apw)):
    p = reb[rel][0]
    print(f'  {rel}  ({p[2]}b)')
    print(f'    {p[0]}')

print('\n=== DLLs in both but different SHA256 ===')
for rel in sorted(set(apw) & set(reb)):
    a = apw[rel][0]; r = reb[rel][0]
    if a[1] != r[1]:
        print(f'  {rel}')
        print(f'    APW    sha={a[1]} size={a[2]}')
        print(f'    Reborn sha={r[1]} size={r[2]}')
