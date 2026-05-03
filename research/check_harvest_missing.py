"""Check which BP-referenced harvest meshes are missing from any mod folder."""
import json
from pathlib import Path

TSV = Path(json.load(open(r'D:/Modlists/Reborn/research/.repl-daemon/205.out.json'))
           ['envelope']['output_files'][0])
MOD_ROOT = Path(r'D:\Modlists\Reborn\mods')

lines = TSV.read_text(encoding='utf-8').strip().split('\n')
meshes = sorted({line.split('\t')[2] for line in lines})

print(f'Unique harvest\\containers meshes in BP: {len(meshes)}\n')

# Build a set of all .nif files under mods, lowercased basename
nif_basenames = {p.name.lower() for p in MOD_ROOT.rglob('*.nif')}
print(f'Indexed {len(nif_basenames)} .nif basenames across mod folders\n')

present, missing = [], []
for mesh in meshes:
    basename = mesh.replace('\\', '/').split('/')[-1].lower()
    (present if basename in nif_basenames else missing).append(mesh)

print(f'PRESENT on disk ({len(present)}):')
for m in present:
    print(f'  {m}')

print(f'\nMISSING on disk ({len(missing)}):')
for m in missing:
    print(f'  {m}')
