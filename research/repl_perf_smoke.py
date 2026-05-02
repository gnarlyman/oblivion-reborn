"""End-to-end perf smoke for the persistent xEdit REPL.

Demonstrates the cold-boot-once-then-warm pattern by:
  1. Spawning launcher --repl-server (one cold boot to READY)
  2. Running each Phase 2a/2b/4 smoke script in sequence
  3. Running 10 sequential trivial point queries (warm floor)

Prints a wall-time table at the end. The point of the exercise is to
show that the cold-boot cost is paid once and amortized over N
subsequent calls — same load order, no re-init per script.

Run:
    python repl_perf_smoke.py
"""
from __future__ import annotations

import sys
import time
from pathlib import Path

# Allow `python repl_perf_smoke.py` from any cwd
HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from repl_client import REPLSession  # type: ignore[import-not-found]

SMOKES = [
    ("phase2a-addmessage", HERE / "repl-smoke-script.pas"),
    ("phase2b-helpers",    HERE / "repl-helpers-smoke.pas"),
    ("phase4-mutation",    HERE / "repl-mutation-probe.pas"),
]
POINT_QUERY = HERE / "repl-point-query.pas"
WARM_RUNS = 10


def main() -> int:
    print("[smoke] spawning launcher; cold boot ~25s on first READY")
    with REPLSession() as repl:
        print(f"[smoke] cold boot to READY: {repl.cold_boot_seconds:.2f}s")
        rows: list[tuple[str, float, str]] = []

        for name, path in SMOKES:
            r = repl.exec_path(path)
            ok = "ok" if r.envelope.get("ok") else "FAIL"
            rows.append((name, r.wall_seconds, ok))
            print(f"  {name:<22} {r.wall_seconds:7.3f}s  {ok}  "
                  f"summary={r.envelope.get('summary')!r}")

        print(f"[smoke] running {WARM_RUNS} sequential point queries")
        t0 = time.monotonic()
        warm_times: list[float] = []
        for i in range(WARM_RUNS):
            r = repl.exec_path(POINT_QUERY)
            warm_times.append(r.wall_seconds)
            ok = "ok" if r.envelope.get("ok") else "FAIL"
            rows.append((f"point-query-{i+1:02d}", r.wall_seconds, ok))
        warm_total = time.monotonic() - t0

    print()
    print("=" * 56)
    print(f"{'step':<24} {'wall':>10} {'status':>10}")
    print("-" * 56)
    print(f"{'cold boot to READY':<24} "
          f"{repl.cold_boot_seconds:>9.2f}s  {'(once)':>10}")
    for name, wall, ok in rows:
        print(f"  {name:<22} {wall:>9.3f}s  {ok:>10}")
    print("-" * 56)
    if warm_times:
        avg = sum(warm_times) / len(warm_times)
        mn, mx = min(warm_times), max(warm_times)
        print(f"point-query stats   n={len(warm_times)}  "
              f"min={mn:.3f}s  avg={avg:.3f}s  max={mx:.3f}s  "
              f"total={warm_total:.2f}s")
    print(f"amortization: cold boot ({repl.cold_boot_seconds:.1f}s) "
          f"+ {len(rows)} warm scripts "
          f"({sum(w for _, w, _ in rows):.2f}s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
