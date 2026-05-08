"""G5 driver CLI."""
import argparse
import asyncio
from pathlib import Path
from g5.candidates import load_candidates
from g5.driver import G5Driver
from g5.lifecycle import GameLifecycle
from g5.recovery import SpawnRunner


def main() -> int:
    p = argparse.ArgumentParser(description="G5 — live RPC validator driver")
    p.add_argument("--launcher", default=r"D:\Modlists\Reborn\tools\oblivion-usvfs-launcher\oblivion-usvfs-launcher.exe",
                   help="path to oblivion-usvfs-launcher.exe")
    p.add_argument("--profile", required=True, help="MO2 profile name")
    p.add_argument("--candidate-list", required=True, type=Path,
                   help="JSON list of {form_id, edid, [coc_cell, ticks_wait]}")
    p.add_argument("--output", required=True, type=Path,
                   help="JSONL output (resumable)")
    p.add_argument("--port", type=int, default=13580)
    p.add_argument("--per-npc-timeout", type=float, default=60.0)
    p.add_argument("--max-restarts", type=int, default=50)
    args = p.parse_args()

    candidates = load_candidates(args.candidate_list)

    lifecycle = GameLifecycle(
        launcher=args.launcher,
        profile=args.profile,
        port=args.port,
    )

    def driver_factory(proto):
        d = G5Driver.__new__(G5Driver)
        d.proto = proto
        return d

    runner = SpawnRunner(
        lifecycle=lifecycle,
        driver_factory=driver_factory,
        output=args.output,
        per_npc_timeout=args.per_npc_timeout,
        max_restarts=args.max_restarts,
    )

    asyncio.run(runner.run(candidates))
    print(f"done; output written to {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
