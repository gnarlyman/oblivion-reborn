"""Probe: launch xEdit-repl via launcher with proper subprocess pipe capture.

PowerShell's Start-Process doesn't connect stdout pipes to GUI subsystem
children. Python's subprocess.Popen does. This script verifies the
===READY=== marker reaches us via the actual mechanism the wrapper will use.
"""

import subprocess
import sys
import time

LAUNCHER = r"D:\Modlists\Reborn\research\usvfs-poc\UsvfsLauncher\bin\Release\net8.0-windows10.0.17763.0\UsvfsLauncher.exe"
XEDIT = r"D:\Modlists\Reborn\mods\TES4Edit 4.1.5f\TES4Edit 4.1.5f\TES4Edit_patched.exe"

cmd = [
    LAUNCHER,
    r"D:\Modlists\Reborn",
    "Reborn-Base",
    r"D:\Modlists\Reborn",
    XEDIT,
    "-IKnowWhatImDoing",
    "-tes4",
    "-autoload",
    "-autoexit",
    "-repl",
    r"-D:D:\Modlists\Reborn\Stock Game\Data",
    r"-P:D:\Modlists\Reborn\profiles\Reborn-Base\plugins.txt",
]

print(f"Launching: {' '.join(cmd[:5])}...")
t0 = time.perf_counter()
proc = subprocess.Popen(
    cmd,
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE,
    stderr=subprocess.STDOUT,
    text=True,
    bufsize=1,
)

ready_seen = False
ready_at = None
all_lines = []
for line in proc.stdout:
    line = line.rstrip("\n").rstrip("\r")
    all_lines.append(line)
    if "===READY===" in line:
        ready_at = time.perf_counter() - t0
        ready_seen = True
        print(f"\n*** READY MARKER at {ready_at:.2f}s: {line!r}\n")
        # Close stdin so xEdit's loop sees EOF and exits
        proc.stdin.close()

proc.wait(timeout=120)
total = time.perf_counter() - t0

print(f"\nExit code: {proc.returncode}, total wall: {total:.2f}s")
print(f"READY seen: {ready_seen}")
if ready_seen:
    print(f"READY arrived at: {ready_at:.2f}s (boot time)")
print(f"Total stdout lines: {len(all_lines)}")
print("Last 5 lines of stdout:")
for line in all_lines[-5:]:
    print(f"  | {line}")
