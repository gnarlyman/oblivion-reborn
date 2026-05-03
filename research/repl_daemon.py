"""Persistent xEdit REPL daemon.

Boots ONE REPLSession and keeps it warm. Polls a control directory for
`*.submit.pas` files; runs each, writes `*.out.json` next to it, renames
the .submit.pas to .done.pas. Stays alive until the .stop marker file
appears or stdin EOF.

Usage:
    python repl_daemon.py [--profile Reborn-Base|Reborn-OOO] [--ctrl-dir PATH]

Submit pattern (from a separate process):
    1. Write   <ctrl-dir>/<id>.submit.pas
    2. Poll    <ctrl-dir>/<id>.out.json   until present
    3. Read    that envelope

Markers in the control dir:
    .ready       — written once REPL is booted and accepting work
    .stop        — touch this to ask the daemon to exit cleanly
"""
from __future__ import annotations

import argparse
import json
import sys
import time
import traceback
from pathlib import Path

from repl_client import REPLSession, MODLIST_DEFAULT, XEDIT_DEFAULT

DEFAULT_CTRL_DIR = Path(r"D:\Modlists\Reborn\research\.repl-daemon")


def main(profile: str, ctrl_dir: Path, modlist: str, xedit_exe: str) -> int:
    ctrl_dir.mkdir(exist_ok=True)
    # Clear stale markers
    for marker in (".ready", ".stop"):
        p = ctrl_dir / marker
        if p.exists():
            p.unlink()
    print(f"[daemon] modlist={modlist} profile={profile} ctrl_dir={ctrl_dir}", flush=True)
    print(f"[daemon] booting xEdit (cold ~6s)…", flush=True)

    try:
        with REPLSession(profile=profile, modlist=modlist, xedit_exe=xedit_exe) as repl:
            print(f"[daemon] READY in {repl.cold_boot_seconds:.2f}s", flush=True)
            (ctrl_dir / ".ready").write_text(
                f"profile={profile}\ncold_boot={repl.cold_boot_seconds:.2f}\n",
                encoding="utf-8")

            while True:
                if (ctrl_dir / ".stop").exists():
                    print("[daemon] .stop seen, shutting down", flush=True)
                    return 0

                pending = sorted(ctrl_dir.glob("*.submit.pas"))
                if not pending:
                    time.sleep(0.1)
                    continue

                for pas in pending:
                    stem = pas.name[: -len(".submit.pas")]
                    out = ctrl_dir / f"{stem}.out.json"
                    done = ctrl_dir / f"{stem}.done.pas"
                    print(f"[daemon] -> {pas.name}", flush=True)
                    try:
                        r = repl.exec_path(pas)
                        payload = {
                            "ok": True,
                            "envelope": r.envelope,
                            "stdout_lines": r.stdout_lines,
                            "wall_seconds": r.wall_seconds,
                        }
                    except Exception:
                        payload = {
                            "ok": False,
                            "error": traceback.format_exc(),
                        }
                    out.write_text(json.dumps(payload, indent=2),
                                   encoding="utf-8")
                    try:
                        pas.rename(done)
                    except OSError:
                        pas.unlink()
                    print(f"[daemon] <- {out.name} "
                          f"({payload.get('wall_seconds', 0):.3f}s)",
                          flush=True)
    except Exception:
        traceback.print_exc()
        return 1


if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--profile", default="Reborn-OOO")
    ap.add_argument("--ctrl-dir", type=Path, default=DEFAULT_CTRL_DIR)
    ap.add_argument("--modlist", default=MODLIST_DEFAULT)
    ap.add_argument("--xedit-exe", default=XEDIT_DEFAULT)
    a = ap.parse_args()
    sys.exit(main(a.profile, a.ctrl_dir, a.modlist, a.xedit_exe))
