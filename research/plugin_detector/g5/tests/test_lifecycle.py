import asyncio
import pytest
from unittest.mock import AsyncMock, MagicMock, patch
from g5.lifecycle import GameLifecycle


@pytest.mark.asyncio
async def test_start_polls_until_ping_succeeds():
    fake_proto = MagicMock()
    # First two pings fail, third succeeds.
    pings = [
        ConnectionRefusedError(),
        ConnectionRefusedError(),
        {"ok": True, "msg": "pong"},
    ]
    async def fake_connect():
        if isinstance(pings[0], Exception): raise pings.pop(0)
    async def fake_send(_):
        nxt = pings.pop(0)
        if isinstance(nxt, Exception): raise nxt
        return nxt
    fake_proto.connect = fake_connect
    fake_proto.send_command = fake_send
    fake_proto.close = AsyncMock()

    fake_proc = MagicMock()
    fake_proc.poll.return_value = None  # process running

    with patch("g5.lifecycle.subprocess.Popen", return_value=fake_proc):
        lc = GameLifecycle(
            launcher="C:/fake/launcher.exe",
            profile="Reborn-OOO",
            port=13580,
            poll_interval=0.01,
            poll_timeout=5.0,
            protocol_factory=lambda h, p: fake_proto,
        )
        await lc.start()
        assert fake_proc.poll.called

    await lc.stop()


@pytest.mark.asyncio
async def test_start_times_out_when_socket_never_opens():
    fake_proto = MagicMock()
    async def always_fail():
        raise ConnectionRefusedError()
    fake_proto.connect = always_fail
    fake_proto.close = AsyncMock()

    fake_proc = MagicMock()
    fake_proc.poll.return_value = None

    with patch("g5.lifecycle.subprocess.Popen", return_value=fake_proc):
        lc = GameLifecycle(
            launcher="C:/fake/launcher.exe",
            profile="Reborn-OOO",
            port=13580,
            poll_interval=0.01,
            poll_timeout=0.05,
            protocol_factory=lambda h, p: fake_proto,
        )
        with pytest.raises(TimeoutError):
            await lc.start()
