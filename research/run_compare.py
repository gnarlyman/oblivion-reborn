"""Run compare_patrol_npc.pas via a one-shot REPLSession."""
import sys
import json
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from repl_client import REPLSession

script_path = Path(__file__).parent / "compare_patrol_npc.pas"
out_path = Path(__file__).parent / "compare_patrol_npc.out.txt"

with REPLSession(profile="Reborn-OOO") as sess:
    res = sess.exec_path(str(script_path))

# Print envelope status, then stdout lines
print(f"== Wall: {res.wall_seconds:.1f}s, ok={res.envelope.get('ok')}")
print(f"== {len(res.stdout_lines)} stdout lines")
print()

with open(out_path, "w") as f:
    for line in res.stdout_lines:
        f.write(line + "\n")

# Also print to stdout for immediate viewing
for line in res.stdout_lines:
    print(line)
