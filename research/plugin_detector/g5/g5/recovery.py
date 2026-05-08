"""Crash recovery: detect failures, restart game, resume from JSONL checkpoint."""
import asyncio
import json
from pathlib import Path
from typing import Any


def load_completed_form_ids(jsonl_path: Path) -> set[str]:
    """Read JSONL log and return the set of form_ids with outcome=ok.

    Crashed/timeout/error outcomes are NOT considered done — those NPCs will
    be retried on resume.
    """
    if not jsonl_path.exists():
        return set()
    completed: set[str] = set()
    with jsonl_path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                entry = json.loads(line)
            except json.JSONDecodeError:
                continue
            if entry.get("outcome") == "ok":
                fid = entry.get("form_id")
                if isinstance(fid, str):
                    completed.add(fid.upper())
                elif isinstance(fid, int):
                    completed.add(f"{fid:08X}")
    return completed


def classify_failure(exc: BaseException) -> str:
    """Map a Python exception to an outcome string."""
    if isinstance(exc, asyncio.TimeoutError):
        return "timeout"
    if isinstance(exc, (ConnectionResetError, ConnectionAbortedError, BrokenPipeError, ConnectionError)):
        return "crashed"
    return "error"


def append_jsonl(path: Path, entry: dict[str, Any]) -> None:
    with path.open("a", encoding="utf-8") as f:
        f.write(json.dumps(entry) + "\n")


class SpawnRunner:
    """Drive G5Driver across a candidate list with crash recovery and JSONL output.

    The lifecycle and driver are injected so tests can pass mocks; production code
    composes them in g5_driver.py.
    """

    def __init__(self, lifecycle, driver_factory, output: Path,
                 per_npc_timeout: float = 60.0, max_restarts: int = 50):
        self.lifecycle = lifecycle
        self.driver_factory = driver_factory  # callable: lifecycle.protocol -> driver
        self.output = output
        self.per_npc_timeout = per_npc_timeout
        self.max_restarts = max_restarts
        self.restarts = 0

    async def run(self, candidates: list[dict[str, Any]]) -> None:
        completed = load_completed_form_ids(self.output)
        await self.lifecycle.start()
        driver = self.driver_factory(self.lifecycle.protocol)
        for cand in candidates:
            fid_hex = f"{cand['form_id']:08X}"
            if fid_hex in completed:
                continue
            try:
                result = await asyncio.wait_for(
                    driver.spawn_and_inspect(
                        form_id=cand["form_id"],
                        coc_cell=cand.get("coc_cell"),
                        ticks_wait=cand.get("ticks_wait", 10),
                    ),
                    timeout=self.per_npc_timeout,
                )
                entry = {**result, "form_id": fid_hex, "edid": cand.get("edid")}
            except BaseException as e:
                entry = {
                    "form_id": fid_hex,
                    "edid": cand.get("edid"),
                    "outcome": classify_failure(e),
                    "error": str(e),
                }
            append_jsonl(self.output, entry)

            if entry["outcome"] in ("crashed", "timeout"):
                if self.restarts >= self.max_restarts:
                    raise RuntimeError(
                        f"max_restarts ({self.max_restarts}) exceeded; aborting")
                self.restarts += 1
                await self.lifecycle.stop()
                await self.lifecycle.start()
                driver = self.driver_factory(self.lifecycle.protocol)
        await self.lifecycle.stop()
