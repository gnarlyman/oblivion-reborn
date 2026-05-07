"""Headless save-file analyzer that uses Wrye Bash internals.

Bootstraps just enough of WB to call SaveFile.load(), logStats(), findBloating(),
getAbomb(), plus xSE/Pluggy cosave dump_to_log(). No GUI, but still requires the
wxPython runtime (WB modules import wx at module scope).

Usage:
    analyze_saves.py [--profile NAME] [--count N] [--all] [--save NAME]...
                     [--out DIR] [save_dir]

Defaults: profile=Reborn-OOO, count=3 most-recent .ess files. Reports go to
research/saves/reports/ unless --out is given.
"""
from __future__ import annotations

import argparse
import gettext
import os
import sys
import traceback
from pathlib import Path as PyPath

WRYE_BASH_MOPY = r'C:/Users/mschon/repos/wrye-bash/Mopy'
DEFAULT_PROFILE_ROOT = r'D:/Modlists/Reborn/profiles'
DEFAULT_PROFILE = 'Reborn-OOO'
DEFAULT_OUT = r'D:/Modlists/Reborn/research/saves/reports'


def bootstrap_wb():
    """Initialise enough of Wrye Bash to call SaveFile.load() etc."""
    import wx  # noqa: F401  (wx must be importable; balt.py imports it)

    sys.path.insert(0, WRYE_BASH_MOPY)
    gettext.NullTranslations().install()
    # wx.App must exist before any WB module that touches wx classes.
    global _wx_app
    _wx_app = wx.App()

    from bash import bush
    bush._supportedGames()
    bush.game = bush._allGames['Oblivion (Steam)']('')
    bush.game.init()
    return bush


class _MockSaveInfo:
    """Minimal duck-type for SaveFile / OblivionSaveHeader.

    They only need: abs_path (bolt.Path), fn_key (FName-ish), fsize (int).
    makeBackup/setmtime are called by safeSave(), which we do NOT invoke.
    """

    def __init__(self, p: str, GPath):
        self.abs_path = GPath(p)
        self.fn_key = self.abs_path.stail
        self.fsize = os.path.getsize(p)

    def makeBackup(self):
        raise RuntimeError("Refusing to mutate save file")

    def setmtime(self):
        pass


def list_recent_saves(save_dir: PyPath, count: int, names: list[str] | None,
                      include_all: bool) -> list[PyPath]:
    if names:
        out = []
        for n in names:
            p = save_dir / n
            if not p.exists() and not n.endswith('.ess'):
                p = save_dir / (n + '.ess')
            if not p.exists():
                raise SystemExit(f'Save not found: {p}')
            out.append(p)
        return out
    saves = sorted(
        (p for p in save_dir.iterdir()
         if p.is_file() and p.suffix.lower() == '.ess'),
        key=lambda p: p.stat().st_mtime,
        reverse=True,
    )
    if not include_all:
        saves = saves[:count]
    return saves


def analyze_save(save_path: PyPath, bush, GPath, LogFile, SaveFile,
                 OblivionSaveHeader, CosaveTypes) -> dict:
    """Returns a dict with rendered report sections + analysis numbers."""
    si = _MockSaveInfo(str(save_path), GPath)

    # --- Header (cheap; load_image=False to skip the screenshot bytes) ---
    header = OblivionSaveHeader(si, load_image=False)
    si.header = header  # cosave dump_to_log expects header.masters

    sf = SaveFile(si)
    sf.load()

    # --- Stats ---
    stats_log = LogFile()
    sf.logStats(stats_log)

    # --- Bloat scan ---
    created_counts, null_ref_count = sf.findBloating()

    # --- Abomb ---
    tc_size, abomb_counter, abomb_float = sf.getAbomb()
    # 0x49000000 (524288.0f) is the threshold from Save_RepairAbomb.Execute().
    abomb_pct = 100.0 * abomb_float / 524288.0

    # --- Cosaves ---
    cosave_logs: dict[str, str] = {}
    for ext, cosave_cls in CosaveTypes:
        cosave_path = save_path.with_suffix(ext)
        if not cosave_path.exists():
            continue
        try:
            cosave = cosave_cls(GPath(str(cosave_path)))
            clog = LogFile()
            cosave.dump_to_log(clog, header.masters)
            cosave_logs[ext] = clog.out.getvalue()
        except Exception:
            cosave_logs[ext] = f'<dump_to_log failed>\n{traceback.format_exc()}'

    # --- Master list ---
    masters = list(header.masters)

    return {
        'path': save_path,
        'fsize': si.fsize,
        'pc_name': header.pcName,
        'pc_level': header.pcLevel,
        'pc_location': header.pcLocation,
        'game_days': header.gameDays,
        'game_ticks': header.gameTicks,
        'masters': masters,
        'master_count': len(masters),
        'record_count': len(sf.fid_recNum),
        'fid_count': len(sf.fids),
        'created_count': len(sf.created),
        'worldspace_count': len(sf.worldSpaces),
        'lost_refs': sum(1 for f in sf.fids if f == 0),
        'abomb_counter': abomb_counter,
        'abomb_float': abomb_float,
        'abomb_pct': abomb_pct,
        'tes_class_size': tc_size,
        'created_bloat': dict(created_counts),
        'null_ref_count': null_ref_count,
        'stats_log': stats_log.out.getvalue(),
        'cosave_logs': cosave_logs,
    }


def render_report(r: dict) -> str:
    lines: list[str] = []
    lines.append('=' * 79)
    lines.append(f'SAVE: {r["path"].name}')
    lines.append('=' * 79)
    lines.append(f'  path           : {r["path"]}')
    lines.append(f'  fsize          : {r["fsize"]:,} bytes')
    lines.append(f'  pc_name        : {r["pc_name"]!r}')
    lines.append(f'  pc_level       : {r["pc_level"]}')
    lines.append(f'  pc_location    : {r["pc_location"]!r}')
    lines.append(f'  game_days      : {r["game_days"]}')
    lines.append(f'  game_ticks     : {r["game_ticks"]} '
                 f'({r["game_ticks"]/1000.0/60.0:.1f} game-minutes)')
    lines.append(f'  master_count   : {r["master_count"]}')
    lines.append(f'  record_count   : {r["record_count"]:,}')
    lines.append(f'  fid_count      : {r["fid_count"]:,}')
    lines.append(f'  created_count  : {r["created_count"]:,}')
    lines.append(f'  worldspace_ct  : {r["worldspace_count"]:,}')
    lines.append(f'  lost_refs (=0) : {r["lost_refs"]}')
    lines.append('')
    lines.append('--- Abomb (animation slowdown) ---')
    lines.append(f'  counter        : 0x{r["abomb_counter"]:08X}')
    lines.append(f'  as float       : {r["abomb_float"]:.4f}')
    lines.append(f'  progress to fault : {r["abomb_pct"]:.2f}%   '
                 '(WB recommends repair >>50%)')
    lines.append('')
    lines.append('--- Bloat scan (findBloating) ---')
    if r['created_bloat']:
        lines.append('  Duplicated created items:')
        for (sig, name), n in sorted(r['created_bloat'].items(),
                                     key=lambda kv: -kv[1]):
            try:
                sig_s = sig.decode('ascii', errors='replace')
            except Exception:
                sig_s = repr(sig)
            try:
                name_s = name.decode('cp1252', errors='replace')
            except Exception:
                name_s = repr(name)
            lines.append(f'    {sig_s} {name_s!r}: {n}')
    else:
        lines.append('  Duplicated created items: NONE flagged')
    lines.append(f'  Null-ref objects: {r["null_ref_count"]}')
    lines.append('')
    lines.append('--- Masters (in save) ---')
    for i, m in enumerate(r['masters']):
        lines.append(f'  [{i:02X}] {m}')
    lines.append('')
    return '\n'.join(lines)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('save_dir', nargs='?',
                    help='Override save directory (default: profile saves)')
    ap.add_argument('--profile', default=DEFAULT_PROFILE)
    ap.add_argument('--profile-root', default=DEFAULT_PROFILE_ROOT)
    ap.add_argument('--count', type=int, default=3,
                    help='Most-recent N .ess to analyze (default 3)')
    ap.add_argument('--all', action='store_true', help='Analyze every .ess')
    ap.add_argument('--save', action='append', default=[],
                    help='Specific save filename (repeatable). '
                         'Overrides --count/--all.')
    ap.add_argument('--out', default=DEFAULT_OUT,
                    help='Output directory for per-save reports')
    ap.add_argument('--no-cosave', action='store_true',
                    help='Skip OBSE/Pluggy cosave dump (much shorter reports)')
    args = ap.parse_args()

    if args.save_dir:
        save_dir = PyPath(args.save_dir)
    else:
        save_dir = PyPath(args.profile_root) / args.profile / 'saves'
    if not save_dir.is_dir():
        raise SystemExit(f'Save dir not found: {save_dir}')

    out_dir = PyPath(args.out)
    out_dir.mkdir(parents=True, exist_ok=True)

    bush = bootstrap_wb()
    from bash.bolt import GPath, LogFile
    from bash.bosh._saves import SaveFile
    from bash.bosh.save_headers import OblivionSaveHeader
    from bash.bosh.cosaves import get_cosave_types, xSECosave, PluggyCosave

    # Wire cosave class-vars (matches what saveInfos does on real startup).
    get_cosave_types(bush.game.fsName, None,
                     bush.game.Se.cosave_tag, bush.game.Se.cosave_ext)
    cosave_types = [] if args.no_cosave else [
        ('.obse', xSECosave),
        ('.pluggy', PluggyCosave),
    ]

    saves = list_recent_saves(save_dir, args.count,
                              args.save or None, args.all)
    if not saves:
        print(f'No .ess files in {save_dir}')
        return 1

    print(f'Analyzing {len(saves)} save(s) from {save_dir}')
    print(f'Reports -> {out_dir}\n')

    summary_rows: list[tuple] = []
    for sp in saves:
        print(f'  {sp.name} ...', end='', flush=True)
        try:
            r = analyze_save(sp, bush, GPath, LogFile, SaveFile,
                             OblivionSaveHeader, cosave_types)
        except Exception:
            print(' FAIL')
            traceback.print_exc()
            continue

        report = render_report(r)
        report_body = [report, '\n--- WB logStats() output ---\n', r['stats_log']]
        for ext, txt in r['cosave_logs'].items():
            report_body.append(f'\n--- Cosave dump ({ext}) ---\n')
            report_body.append(txt)

        out_file = out_dir / (sp.stem + '.report.txt')
        out_file.write_text(''.join(report_body), encoding='utf-8',
                            errors='replace')
        print(f' OK  ({out_file.stat().st_size:,} bytes)')

        summary_rows.append((
            sp.name, r['fsize'], r['pc_level'], r['game_days'],
            r['record_count'], r['fid_count'], r['created_count'],
            r['lost_refs'], r['abomb_pct'], len(r['created_bloat']),
            r['null_ref_count'], r['master_count'],
        ))

    if summary_rows:
        print()
        hdr = ('save', 'fsize', 'lvl', 'days', 'records', 'fids',
               'created', 'lostRefs', 'abomb%', 'bloatGrp',
               'nullRefs', 'masters')
        widths = [max(len(str(h)), max(len(str(r[i])) for r in summary_rows))
                  for i, h in enumerate(hdr)]
        widths[0] = max(widths[0], 36)
        fmt = '  '.join(f'{{:<{widths[0]}}}' if i == 0
                        else f'{{:>{widths[i]}}}' for i in range(len(hdr)))
        print(fmt.format(*hdr))
        print(fmt.format(*('-' * w for w in widths)))
        for row in summary_rows:
            row_s = list(row)
            row_s[1] = f'{row_s[1]:,}'
            row_s[4] = f'{row_s[4]:,}'
            row_s[5] = f'{row_s[5]:,}'
            row_s[8] = f'{row_s[8]:.2f}'
            print(fmt.format(*row_s))

        summary_csv = out_dir / 'summary.csv'
        import csv
        with summary_csv.open('w', encoding='utf-8', newline='') as fh:
            w = csv.writer(fh)
            w.writerow(hdr)
            w.writerows(summary_rows)
        print(f'\nsummary.csv -> {summary_csv}')

    return 0


if __name__ == '__main__':
    raise SystemExit(main())
