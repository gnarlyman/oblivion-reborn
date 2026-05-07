"""Compare OOO override chains between APW and Reborn-OOO.

Reads the stdout of probe 400_enum_ooo_overrides.submit.pas from both profiles'
.out.json files. Produces:
  - records-only-overridden-in-APW.csv: records APW has overrides for that
      Reborn doesn't
  - records-with-different-overrider-set.csv: records both override but with
      different chain composition
  - apw-only-plugins.txt: unique plugin names that appear in APW chains but
      not in Reborn chains
"""
import json
import sys
import csv
from pathlib import Path

def parse_overrides(out_json_path):
    """Returns dict {(src,sig,local_fid): {edid, chain_set, chain_list}}"""
    d = json.loads(Path(out_json_path).read_text())
    lines = d.get('stdout_lines', [])
    rows = {}
    in_section = False
    for line in lines:
        if line == '=START_OOO_OVERRIDES=':
            in_section = True
            continue
        if line == '=END_OOO_OVERRIDES=':
            break
        if not in_section or line.startswith('=') or '|' not in line:
            continue
        parts = line.split('|', 4)
        if len(parts) != 5:
            continue
        src, sig, fid, edid, chain = parts
        chain_list = chain.split('>')
        # First entry is the source itself; overriders are [1:]
        overriders = chain_list[1:] if len(chain_list) > 1 else []
        key = (src, sig, fid)
        rows[key] = {
            'edid': edid,
            'chain_list': chain_list,
            'overriders_set': frozenset(overriders),
            'overriders_list': overriders,
        }
    return rows

def main(apw_path, reborn_path, out_dir):
    apw = parse_overrides(apw_path)
    reborn = parse_overrides(reborn_path)
    print(f"APW overrides: {len(apw)}")
    print(f"Reborn overrides: {len(reborn)}")

    out_dir = Path(out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)

    # 1. Records APW overrides that Reborn doesn't override at all
    only_apw = []
    for key, val in apw.items():
        if key not in reborn:
            only_apw.append((key, val))
    print(f"\nRecords overridden in APW but NOT in Reborn: {len(only_apw)}")

    with open(out_dir / 'apw-only-records.csv', 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['src', 'sig', 'local_fid', 'edid', 'apw_overriders'])
        for (src, sig, fid), val in sorted(only_apw, key=lambda kv: (kv[0][1], kv[0][0])):
            w.writerow([src, sig, fid, val['edid'], '|'.join(val['overriders_list'])])

    # 2. Records both override but APW has plugins Reborn doesn't
    different_sets = []
    for key in apw.keys() & reborn.keys():
        apw_set = apw[key]['overriders_set']
        reborn_set = reborn[key]['overriders_set']
        only_in_apw = apw_set - reborn_set
        if only_in_apw:
            different_sets.append((key, apw[key], reborn[key], only_in_apw))
    print(f"Records both override but APW has extra plugins: {len(different_sets)}")

    with open(out_dir / 'apw-extra-overriders.csv', 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['src', 'sig', 'local_fid', 'edid', 'apw_only_plugins',
                    'apw_full_chain', 'reborn_full_chain'])
        for (src, sig, fid), apw_val, reborn_val, extra in sorted(
                different_sets, key=lambda kv: (kv[0][1], kv[0][0])):
            w.writerow([src, sig, fid, apw_val['edid'],
                        '|'.join(sorted(extra)),
                        '|'.join(apw_val['overriders_list']),
                        '|'.join(reborn_val['overriders_list'])])

    # 3. Plugin-frequency: which plugins touch the most OOO records in APW vs Reborn
    apw_plugin_counts = {}
    reborn_plugin_counts = {}
    for val in apw.values():
        for p in val['overriders_set']:
            apw_plugin_counts[p] = apw_plugin_counts.get(p, 0) + 1
    for val in reborn.values():
        for p in val['overriders_set']:
            reborn_plugin_counts[p] = reborn_plugin_counts.get(p, 0) + 1

    apw_plugins = set(apw_plugin_counts)
    reborn_plugins = set(reborn_plugin_counts)
    apw_only_plugins = apw_plugins - reborn_plugins

    with open(out_dir / 'plugin-frequency.csv', 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['plugin', 'apw_count', 'reborn_count', 'apw_only'])
        all_plugins = sorted(apw_plugins | reborn_plugins)
        for p in all_plugins:
            ac = apw_plugin_counts.get(p, 0)
            rc = reborn_plugin_counts.get(p, 0)
            w.writerow([p, ac, rc, p in apw_only_plugins])

    print(f"\nPlugins overriding OOO records in APW only: {len(apw_only_plugins)}")
    for p in sorted(apw_only_plugins, key=lambda p: -apw_plugin_counts[p])[:30]:
        print(f"  {apw_plugin_counts[p]:6d}  {p}")

    print(f"\nWrote: {out_dir}/apw-only-records.csv ({len(only_apw)} rows)")
    print(f"Wrote: {out_dir}/apw-extra-overriders.csv ({len(different_sets)} rows)")
    print(f"Wrote: {out_dir}/plugin-frequency.csv")

if __name__ == '__main__':
    if len(sys.argv) != 4:
        print("usage: diff_ooo_overrides.py <apw_out.json> <reborn_out.json> <out_dir>")
        sys.exit(1)
    main(sys.argv[1], sys.argv[2], sys.argv[3])
