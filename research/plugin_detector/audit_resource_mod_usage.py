"""Audit which resource-only mods are actually referenced by active plugin records.

Scans every active ARMO / CLOT / WEAP / AMMO record's MODL / MOD2 / MOD3 / MOD4 /
ICON paths, asks the VFS who provides each path, and attributes the reference
to the providing mod.

A "resource-only" mod is an active MO2 mod folder that contains no .esp/.esm/.esl.
For each such mod, we report:
  - exclusive_refs: paths the mod provides where no higher-priority mod ships
    the same path. These are paths that would 404 without this mod.
  - shadowed_refs: paths the mod provides that are also in higher-priority
    mods. The mod's copy is shadowed; not strictly needed for these refs.
  - total_files: how many .nif/.dds/etc. the mod ships under meshes/textures/

A mod with zero exclusive_refs and zero shadowed_refs across the scan is
NOT NEEDED by the active load (record-scan only — see caveats below).

Caveats:
  - Engine-implicit references aren't caught (skeleton.nif, body replacers,
    UI textures, sound sets). Those are pulled by the engine, not by record
    fields. Body replacers / UI mods will look "unneeded" by this scan.
  - NIF-internal texture paths aren't followed. A textures-only mod whose
    files are referenced by another mod's NIF will look "unneeded."
  - MODL paths get normalized to lowercase and forward-slash; case of the
    mod folder is preserved.

Usage:
    python audit_resource_mod_usage.py --profile Reborn-OOO \\
        [--mods "Offhand Weapons" "RealSwords Nord"] \\
        [--report report.md]
"""
import argparse
import json
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))

from predictor.load_order import build_load_order, build_winning_records
from predictor.plugin_parser import parse_subrecords, cstr
from predictor.vfs import VFS, parse_modlist


PATH_SUBRECORDS = {"MODL", "MOD2", "MOD3", "MOD4", "ICON"}
SCAN_SIGNATURES = {"ARMO", "CLOT", "WEAP", "AMMO"}


def attribute_to_mod(provider_path: Path, mods_dir: Path, data_dir: Path) -> str:
    """Map an absolute filesystem path back to its source: a mod name, or
    "Stock Game" for vanilla/DLC content under the data_dir."""
    try:
        provider_path.relative_to(data_dir)
        return "<Stock Game / vanilla>"
    except ValueError:
        pass
    try:
        rel = provider_path.relative_to(mods_dir)
        # First component is the mod name
        return rel.parts[0] if rel.parts else "<unknown>"
    except ValueError:
        return f"<external: {provider_path}>"


def extract_paths(body: bytes) -> list[tuple[str, str]]:
    """Walk a record body, return list of (subrec_sig, path) for path-bearing subrecs."""
    out = []
    for ssig, ssub in parse_subrecords(body):
        if ssig not in PATH_SUBRECORDS:
            continue
        s = cstr(ssub)
        if not s:
            continue
        # Normalize: lowercase, forward slashes
        v = s.lower().replace("\\", "/")
        if ssig in ("MODL", "MOD2", "MOD3", "MOD4"):
            if not v.startswith("meshes/"):
                v = "meshes/" + v
        elif ssig == "ICON":
            if not v.startswith("textures/"):
                v = "textures/" + v
        out.append((ssig, v))
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--profile", default="Reborn-OOO")
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--mods-dir", default=r"D:\Modlists\Reborn\mods", type=Path)
    ap.add_argument("--mods", nargs="*",
                    help="optional list of specific mod names to focus the report on")
    ap.add_argument("--report", type=Path,
                    help="optional markdown report path")
    ap.add_argument("--evidence-json", type=Path,
                    help="optional JSON output with full per-record evidence")
    ap.add_argument("--signatures", nargs="*", default=sorted(SCAN_SIGNATURES),
                    help=f"record signatures to scan (default: {sorted(SCAN_SIGNATURES)})")
    args = ap.parse_args()

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    print(f"loading load order from {profile_dir}")
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    print(f"  {len(lo.plugins)} active plugins")

    sigs = set(args.signatures)
    print(f"building winners ({sorted(sigs)})...")
    winners = build_winning_records(lo, signatures=sigs)
    print(f"  {len(winners)} winning records")

    print("building VFS...")
    active_mods = parse_modlist(profile_dir / "modlist.txt")
    vfs = VFS(active_mods=active_mods, mods_dir=args.mods_dir, data_dir=args.data_dir)
    print(f"  {len(vfs.loose)} loose paths, {len(vfs.bsa)} bsa paths")

    # Identify resource-only active mods.
    resource_only_mods: list[str] = []
    for mod_name in active_mods:
        mod_root = args.mods_dir / mod_name
        if not mod_root.is_dir():
            continue
        if any(mod_root.glob("*.esp")) or any(mod_root.glob("*.esm")) or any(mod_root.glob("*.esl")):
            continue
        if mod_name.endswith("_separator"):
            continue
        resource_only_mods.append(mod_name)
    print(f"  {len(resource_only_mods)} active resource-only mods")

    # Scan paths.
    refs_by_mod: dict[str, list[dict]] = defaultdict(list)
    missing_paths: list[dict] = []
    total_paths_scanned = 0
    total_paths_resolved = 0

    # Build a quick "is this path provided by a higher-priority mod than X" check.
    # The VFS already does this implicitly via the priority order in build_loose_index
    # and build_bsa_index — vfs.resolve(path) returns the WINNING (highest-priority)
    # provider. So a mod's "exclusive ref" check = is the VFS resolve attribution
    # exactly that mod?
    # But we ALSO want to know if a mod ships a file that's shadowed. For that we
    # need a per-mod file index. We rebuild a thinner one.
    print("indexing per-mod loose files...")
    per_mod_files: dict[str, set[str]] = {}
    for mod_name in resource_only_mods:
        mod_root = args.mods_dir / mod_name
        files: set[str] = set()
        for f in mod_root.rglob("*"):
            if not f.is_file():
                continue
            try:
                rel = f.relative_to(mod_root)
            except ValueError:
                continue
            files.add(str(rel).replace("\\", "/").lower())
        per_mod_files[mod_name] = files

    print("scanning records...")
    for lo_fid, (plugin, sig, body) in winners.items():
        if sig not in sigs:
            continue
        edid = ""
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
                break
        for ssig, vpath in extract_paths(body):
            total_paths_scanned += 1
            provider = vfs.resolve(vpath)
            if provider is None:
                missing_paths.append({
                    "fid": f"{lo_fid:08X}",
                    "edid": edid,
                    "sig": sig,
                    "winner_plugin": plugin,
                    "subrec": ssig,
                    "path": vpath,
                })
                continue
            total_paths_resolved += 1
            mod = attribute_to_mod(provider, args.mods_dir, args.data_dir)
            refs_by_mod[mod].append({
                "fid": f"{lo_fid:08X}",
                "edid": edid,
                "sig": sig,
                "winner_plugin": plugin,
                "subrec": ssig,
                "path": vpath,
                "provider": str(provider),
            })

    print(f"  scanned {total_paths_scanned} paths, "
          f"resolved {total_paths_resolved}, "
          f"missing {len(missing_paths)}")

    # Per-mod summary (resource-only only).
    summary: list[dict] = []
    for mod_name in resource_only_mods:
        files_in_mod = per_mod_files.get(mod_name, set())
        refs = refs_by_mod.get(mod_name, [])
        # Shadowed files: in this mod but a higher-priority mod also provides them.
        # A file is shadowed if the VFS resolve doesn't attribute to this mod
        # AND the file path is in this mod's files.
        # We can compute this by walking refs across ALL mods and seeing which
        # paths appear in this mod's files but are attributed elsewhere.
        # For simplicity we do not compute shadowed-but-unreferenced counts;
        # we DO compute shadowed-and-referenced (i.e. paths referenced by some
        # record where this mod ships the file but a higher-priority mod won).
        shadowed_refs: list[dict] = []
        for other_mod, other_refs in refs_by_mod.items():
            if other_mod == mod_name:
                continue
            for r in other_refs:
                if r["path"] in files_in_mod:
                    shadowed_refs.append({**r, "winner_mod": other_mod})
        summary.append({
            "mod": mod_name,
            "total_files_loose": len(files_in_mod),
            "exclusive_refs": len(refs),
            "shadowed_refs": len(shadowed_refs),
            "verdict": (
                "NEEDED (exclusive refs)" if refs
                else ("SHADOWED (same files in higher-priority mod)" if shadowed_refs
                      else "NOT REFERENCED by record-scan")
            ),
        })

    # Sort: NEEDED first (most refs first), then SHADOWED, then NOT REFERENCED.
    def sort_key(s):
        if s["verdict"].startswith("NEEDED"):
            return (0, -s["exclusive_refs"])
        if s["verdict"].startswith("SHADOWED"):
            return (1, -s["shadowed_refs"])
        return (2, s["mod"])
    summary.sort(key=sort_key)

    # Print to stdout.
    print()
    print(f"{'='*80}")
    print(f"Per-mod summary ({len(summary)} resource-only mods):")
    print(f"{'='*80}")
    if args.mods:
        focus = set(m.lower() for m in args.mods)
        focused = [s for s in summary if s["mod"].lower() in focus]
        if focused:
            print(f"\n[FOCUSED on --mods]")
            for s in focused:
                print(f"  {s['verdict']:50s} {s['mod']}")
                print(f"      total_files_loose={s['total_files_loose']}, "
                      f"exclusive_refs={s['exclusive_refs']}, "
                      f"shadowed_refs={s['shadowed_refs']}")
            print()

    print(f"{'mod':<55s} {'verdict':<45s} {'refs':>6s}  {'shad':>5s}  {'files':>6s}")
    print(f"{'-'*55} {'-'*45} {'-'*6}  {'-'*5}  {'-'*6}")
    for s in summary:
        print(f"{s['mod']:<55s} {s['verdict']:<45s} "
              f"{s['exclusive_refs']:>6d}  {s['shadowed_refs']:>5d}  {s['total_files_loose']:>6d}")

    # Write reports.
    if args.report:
        write_report(args.report, summary, refs_by_mod, missing_paths,
                     args.profile, total_paths_scanned, total_paths_resolved,
                     focus=args.mods or [])
        print(f"\nwrote markdown report to {args.report}")

    if args.evidence_json:
        evidence = {
            "profile": args.profile,
            "summary": summary,
            "refs_by_mod": {m: refs_by_mod[m] for m in resource_only_mods},
            "missing_paths": missing_paths,
            "totals": {
                "paths_scanned": total_paths_scanned,
                "paths_resolved": total_paths_resolved,
                "paths_missing": len(missing_paths),
            },
        }
        args.evidence_json.write_text(json.dumps(evidence, indent=2), encoding="utf-8")
        print(f"wrote per-record evidence to {args.evidence_json}")

    return 0


def write_report(path: Path, summary, refs_by_mod, missing_paths, profile,
                 paths_scanned, paths_resolved, focus: list[str]) -> None:
    lines = [
        f"# Resource-mod usage audit — {profile}",
        "",
        "Scans active ARMO/CLOT/WEAP/AMMO records' MODL/ICON paths and "
        "attributes each to the mod folder providing the resource via VFS.",
        "",
        "## Totals",
        f"- Paths scanned: {paths_scanned}",
        f"- Paths resolved: {paths_resolved}",
        f"- Paths NOT resolved (broken refs): {len(missing_paths)}",
        "",
        "## Verdict legend",
        "- **NEEDED** — at least one active record references a path the "
        "VFS attributes to this mod (i.e., this mod's copy is the winning "
        "provider). Removing the mod would break those references.",
        "- **SHADOWED** — the mod ships files referenced by some record, "
        "but a higher-priority mod also ships the same paths and wins. "
        "Removing the mod would not break references (the higher-priority "
        "mod still provides the path).",
        "- **NOT REFERENCED** — no scanned record references any path the "
        "mod provides. Either the mod's content is engine-implicit (skeleton, "
        "body, UI), referenced via NIF-internal textures (out of scope), "
        "or simply not used by the active load.",
        "",
    ]
    if focus:
        lines.append("## Focused mods")
        lines.append("")
        focus_lower = set(m.lower() for m in focus)
        for s in summary:
            if s["mod"].lower() not in focus_lower:
                continue
            lines.append(f"### {s['mod']}")
            lines.append(f"- Verdict: **{s['verdict']}**")
            lines.append(f"- Total loose files: {s['total_files_loose']}")
            lines.append(f"- Exclusive refs: {s['exclusive_refs']}")
            lines.append(f"- Shadowed refs: {s['shadowed_refs']}")
            refs = refs_by_mod.get(s["mod"], [])
            if refs:
                lines.append("")
                lines.append("Sample referencing records (up to 20):")
                for r in refs[:20]:
                    lines.append(f"  - {r['sig']} `{r['edid']}` 0x{r['fid']} "
                                 f"({r['winner_plugin']}) → `{r['subrec']}` `{r['path']}`")
            lines.append("")

    lines.append("## Full table")
    lines.append("")
    lines.append("| mod | verdict | exclusive | shadowed | total files |")
    lines.append("|---|---|---:|---:|---:|")
    for s in summary:
        lines.append(f"| {s['mod']} | {s['verdict']} | "
                     f"{s['exclusive_refs']} | {s['shadowed_refs']} | "
                     f"{s['total_files_loose']} |")

    if missing_paths:
        lines.append("")
        lines.append(f"## Broken refs ({len(missing_paths)} paths NOT resolved by VFS)")
        lines.append("")
        lines.append("First 50:")
        for r in missing_paths[:50]:
            lines.append(f"- {r['sig']} `{r['edid']}` 0x{r['fid']} "
                         f"({r['winner_plugin']}) → `{r['subrec']}` `{r['path']}`")

    path.write_text("\n".join(lines), encoding="utf-8")


if __name__ == "__main__":
    raise SystemExit(main())
