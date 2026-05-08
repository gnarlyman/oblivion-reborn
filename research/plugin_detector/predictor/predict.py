"""Predictor CLI.

Walks every NPC_ in the active load order, resolves inventory, emits one
JSONL line per NPC.

Usage:
    python -m predictor.predict --profile Reborn-OOO --output predictions.jsonl
"""
import argparse
import json
from pathlib import Path

from predictor.load_order import build_load_order, build_winning_records
from predictor.npc_resolver import resolve_inventory_with_meshes
from predictor.vfs import VFS, parse_modlist


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--profile", required=True)
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--mods-dir", default=r"D:\Modlists\Reborn\mods", type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    print(f"loading load order from {profile_dir}")
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    print(f"  {len(lo.plugins)} active plugins")

    print("building winning_records (NPC_/LVLI/ARMO/WEAP/CLOT)…")
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    print(f"  {len(winners)} winning records")

    print("building VFS…")
    mods = parse_modlist(profile_dir / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=args.mods_dir, data_dir=args.data_dir)
    print(f"  {len(vfs.loose)} loose paths, {len(vfs.bsa)} bsa paths")

    print("resolving NPCs…")
    npc_count = sum(1 for _, sig, _ in winners.values() if sig == "NPC_")
    print(f"  {npc_count} NPCs to resolve")

    written = 0
    with args.output.open("w", encoding="utf-8") as out:
        for lo_fid, (plugin, sig, body) in winners.items():
            if sig != "NPC_":
                continue
            inv = resolve_inventory_with_meshes(lo_fid, winners, lo, vfs)
            concrete_arm_clot = [
                f for f in inv["concrete"]
                if f in winners and winners[f][1] in ("ARMO", "CLOT")
            ]
            missing_for_concrete = [
                (fid, path) for fid, path in inv["missing_meshes"]
                if fid in winners and winners[fid][1] in ("ARMO", "CLOT")
            ]
            predicted_naked = len(concrete_arm_clot) == 0
            if not predicted_naked and len(missing_for_concrete) >= len(concrete_arm_clot):
                # If every concrete armor piece's mesh is missing, NPC will
                # appear visually-broken.
                predicted_naked = True
                reason = "armor_mesh_missing"
            elif predicted_naked:
                reason = "inv_no_concrete_armor"
            else:
                reason = "ok"
            entry = {
                "fid": f"{lo_fid:08X}",
                "plugin": plugin,
                "predicted_naked": predicted_naked,
                "reason": reason,
                "has_script": inv["has_script"],
                "concrete_count": len(inv["concrete"]),
                "missing_meshes": [path for _, path in inv["missing_meshes"]],
            }
            out.write(json.dumps(entry) + "\n")
            written += 1

    print(f"wrote {written} predictions to {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
