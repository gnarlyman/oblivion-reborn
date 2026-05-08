import asyncio
import json
from pathlib import Path
import pytest
from g5.recovery import (
    SpawnRunner, load_completed_form_ids, classify_failure,
)


def test_load_completed_form_ids(tmp_path):
    log = tmp_path / "ground_truth.jsonl"
    log.write_text(
        json.dumps({"form_id": "010052BE", "outcome": "ok"}) + "\n" +
        json.dumps({"form_id": "010052BF", "outcome": "crashed"}) + "\n" +
        json.dumps({"form_id": "010052C0", "outcome": "ok"}) + "\n"
    )
    completed = load_completed_form_ids(log)
    # "crashed" outcomes are NOT considered done — we want to retry once.
    assert completed == {"010052BE", "010052C0"}


def test_classify_failure_socket_drop():
    err = ConnectionResetError("simulated drop")
    assert classify_failure(err) == "crashed"


def test_classify_failure_timeout():
    err = asyncio.TimeoutError()
    assert classify_failure(err) == "timeout"


def test_classify_failure_unknown():
    err = ValueError("weird")
    assert classify_failure(err) == "error"


class FakeLifecycle:
    def __init__(self, protocol):
        self.protocol = protocol
        self.start_count = 0
        self.stop_count = 0
    async def start(self): self.start_count += 1
    async def stop(self): self.stop_count += 1


@pytest.mark.asyncio
async def test_spawn_runner_writes_jsonl(mock_plugin, tmp_path):
    from g5.protocol import Protocol
    from g5.driver import G5Driver
    proto = Protocol("127.0.0.1", mock_plugin.port)
    await proto.connect()
    lc = FakeLifecycle(proto)
    output = tmp_path / "g.jsonl"

    def _build(p):
        d = G5Driver.__new__(G5Driver)
        d.proto = p
        return d

    runner = SpawnRunner(
        lifecycle=lc,
        driver_factory=_build,
        output=output, per_npc_timeout=2.0,
    )
    candidates = [
        {"form_id": 0x010052BE, "edid": "TestNPC1", "ticks_wait": 0},
        {"form_id": 0x010052BF, "edid": "TestNPC2", "ticks_wait": 0},
    ]
    await runner.run(candidates)
    lines = output.read_text().splitlines()
    assert len(lines) == 2
    entry0 = json.loads(lines[0])
    assert entry0["outcome"] == "ok"
    assert entry0["edid"] == "TestNPC1"
