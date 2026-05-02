"""Minimal persistent-mode xEdit REPL client.

Spawns oblivion-usvfs-launcher in --repl-server mode and drives it over
stdin/stdout using the REPL framing protocol:

    ===READY=== <session-id>            once, after xEdit boot
    ===END_SOURCE===                    terminator for client-supplied source
    ===RESULT=== <one-line-json>        start of result envelope
    ===END_RESULT===                    terminator for result
    STDOUT: <line>                      AddMessage / wbProgress output

Library use:

    with REPLSession() as repl:
        env_a = repl.exec_path("script_a.pas")
        env_b = repl.exec_path("script_b.pas")
        # in-memory plugin tree + record mutations persist across exec calls;
        # Pascal user vars do NOT (each ExecuteScript builds a fresh
        # TJvInterpreterProgram).

CLI use:

    python repl_client.py script1.pas script2.pas ...
"""
from __future__ import annotations

import argparse
import json
import subprocess
import sys
import threading
import time
from dataclasses import dataclass
from pathlib import Path
from typing import Any

LAUNCHER_DEFAULT = (
    r"D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\bin\Release"
    r"\net8.0-windows10.0.17763.0\UsvfsLauncher.exe"
)
MODLIST_DEFAULT = r"D:\Modlists\Reborn"
PROFILE_DEFAULT = "Reborn-Base"
XEDIT_DEFAULT = (
    r"D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f"
    r"\TES4Edit_patched.exe"
)

READY = "===READY==="
END_SOURCE = "===END_SOURCE==="
RESULT = "===RESULT==="
END_RESULT = "===END_RESULT==="


@dataclass
class ExecResult:
    envelope: dict[str, Any]
    stdout_lines: list[str]
    wall_seconds: float


class REPLSession:
    def __init__(
        self,
        *,
        launcher: str = LAUNCHER_DEFAULT,
        modlist: str = MODLIST_DEFAULT,
        profile: str = PROFILE_DEFAULT,
        xedit_exe: str = XEDIT_DEFAULT,
        boot_timeout_sec: float = 300.0,
    ) -> None:
        self.launcher = launcher
        self.modlist = modlist
        self.profile = profile
        self.xedit_exe = xedit_exe
        self.boot_timeout_sec = boot_timeout_sec
        self._proc: subprocess.Popen | None = None
        self._stderr_lines: list[str] = []
        self._stderr_thread: threading.Thread | None = None
        self.cold_boot_seconds: float | None = None

    def __enter__(self) -> "REPLSession":
        self.start()
        return self

    def __exit__(self, *exc) -> None:
        self.close()

    def start(self) -> None:
        if self._proc is not None:
            raise RuntimeError("session already started")
        args = [
            self.launcher, "--repl-server",
            self.modlist, self.profile, self.modlist,  # 3rd is usvfs install dir
            self.xedit_exe,
            "-IKnowWhatImDoing", "-tes4", "-autoload", "-repl",
            f"-D:{self.modlist}\\Stock Game\\Data",
            f"-P:{self.modlist}\\profiles\\{self.profile}\\plugins.txt",
        ]
        t0 = time.monotonic()
        self._proc = subprocess.Popen(
            args,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            bufsize=1,  # line-buffered
            encoding="utf-8",
        )
        # Drain stderr in a background thread so the pipe doesn't fill up
        # mid-script and stall the launcher.
        def _drain() -> None:
            assert self._proc is not None and self._proc.stderr is not None
            for line in self._proc.stderr:
                self._stderr_lines.append(line.rstrip("\r\n"))
        self._stderr_thread = threading.Thread(target=_drain, daemon=True)
        self._stderr_thread.start()

        # Block until READY (~25s on Reborn-Base).
        deadline = t0 + self.boot_timeout_sec
        while True:
            if time.monotonic() > deadline:
                self._kill()
                raise TimeoutError(f"no READY in {self.boot_timeout_sec}s")
            line = self._readline()
            if line is None:
                self._kill()
                raise EOFError(
                    "launcher closed stdout before READY; stderr:\n"
                    + "\n".join(self._stderr_lines))
            if line.startswith(READY):
                self.cold_boot_seconds = time.monotonic() - t0
                return

    def exec_source(self, source: str) -> ExecResult:
        if self._proc is None:
            raise RuntimeError("session not started")

        # Neutralize stray marker lines in source — same convention the
        # launcher applies for --exec mode.
        safe_lines = [
            ("{ neutralized: " + L + " }")
            if L.strip() in (READY, END_SOURCE, RESULT, END_RESULT)
            else L
            for L in source.splitlines()
        ]

        t0 = time.monotonic()
        assert self._proc.stdin is not None
        self._proc.stdin.write("\n".join(safe_lines) + "\n")
        self._proc.stdin.write(END_SOURCE + "\n")
        self._proc.stdin.flush()

        stdout_lines: list[str] = []
        envelope_line: str | None = None
        while True:
            line = self._readline()
            if line is None:
                raise EOFError(
                    "launcher closed during exec; stderr:\n"
                    + "\n".join(self._stderr_lines))
            if line.startswith("STDOUT: "):
                stdout_lines.append(line[len("STDOUT: "):])
            elif line.startswith(RESULT):
                envelope_line = line
            elif line == END_RESULT:
                break
        wall = time.monotonic() - t0

        if envelope_line is None:
            raise RuntimeError("END_RESULT without RESULT")
        envelope = json.loads(envelope_line[len(RESULT):].strip())
        return ExecResult(envelope=envelope,
                          stdout_lines=stdout_lines,
                          wall_seconds=wall)

    def exec_path(self, path: str | Path) -> ExecResult:
        return self.exec_source(Path(path).read_text(encoding="utf-8"))

    def stderr(self) -> list[str]:
        return list(self._stderr_lines)

    def close(self, wait_seconds: float = 10.0) -> int:
        if self._proc is None:
            return 0
        try:
            if self._proc.stdin and not self._proc.stdin.closed:
                self._proc.stdin.close()
            self._proc.wait(timeout=wait_seconds)
        except subprocess.TimeoutExpired:
            self._kill()
        if self._stderr_thread is not None:
            self._stderr_thread.join(timeout=2)
        rc = self._proc.returncode
        self._proc = None
        return rc

    def _readline(self) -> str | None:
        assert self._proc is not None and self._proc.stdout is not None
        line = self._proc.stdout.readline()
        if line == "":
            return None
        return line.rstrip("\r\n")

    def _kill(self) -> None:
        if self._proc is not None:
            try:
                self._proc.kill()
            except OSError:
                pass


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("scripts", nargs="+", help="Pascal script paths")
    ap.add_argument("--profile", default=PROFILE_DEFAULT)
    ap.add_argument("--modlist", default=MODLIST_DEFAULT)
    ap.add_argument("--launcher", default=LAUNCHER_DEFAULT)
    ap.add_argument("--xedit-exe", default=XEDIT_DEFAULT)
    ap.add_argument("--show-stderr", action="store_true")
    args = ap.parse_args(argv)

    print(f"[client] spawning launcher (boot may take ~25s on first run)",
          file=sys.stderr)
    with REPLSession(launcher=args.launcher,
                     modlist=args.modlist,
                     profile=args.profile,
                     xedit_exe=args.xedit_exe) as repl:
        print(f"[client] cold boot -> READY: {repl.cold_boot_seconds:.2f}s",
              file=sys.stderr)

        results: list[tuple[str, ExecResult]] = []
        for i, p in enumerate(args.scripts, 1):
            r = repl.exec_path(p)
            results.append((p, r))
            ok = "ok" if r.envelope.get("ok") else "FAIL"
            print(f"[script {i}/{len(args.scripts)}] {Path(p).name}  "
                  f"{r.wall_seconds:.3f}s  {ok}  "
                  f"stdout_lines={len(r.stdout_lines)}",
                  file=sys.stderr)
            for line in r.stdout_lines:
                print(f"    | {line}", file=sys.stderr)
            print(f"    envelope: {json.dumps(r.envelope)}", file=sys.stderr)

        if args.show_stderr:
            print("\n--- launcher stderr ---", file=sys.stderr)
            for line in repl.stderr():
                print(line, file=sys.stderr)

    print(f"[client] cold-boot {repl.cold_boot_seconds:.2f}s + "
          f"{len(results)} warm runs in "
          f"{sum(r.wall_seconds for _, r in results):.3f}s",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
