import asyncio
import pytest
from g5.protocol import Protocol


@pytest.mark.asyncio
async def test_send_command_round_trip(mock_plugin):
    mock_plugin.responses["ping"] = {"ok": True, "msg": "pong"}
    proto = Protocol("127.0.0.1", mock_plugin.port)
    await proto.connect()
    resp = await proto.send_command({"cmd": "ping"})
    assert resp == {"ok": True, "msg": "pong"}
    assert mock_plugin.received == [{"cmd": "ping"}]
    await proto.close()


@pytest.mark.asyncio
async def test_send_command_timeout(mock_plugin):
    # Mock plugin doesn't register a response for "slow", so it returns the unknown-cmd default fast.
    # Real timeout test: configure a hanging server that NEVER responds, and use asyncio.wait_for.
    class HangingPlugin:
        async def start(self):
            self._stop_event = asyncio.Event()
            async def _hang(r, w):
                await self._stop_event.wait()
            self.server = await asyncio.start_server(_hang, "127.0.0.1", 0)
            self.port = self.server.sockets[0].getsockname()[1]
        async def stop(self):
            self._stop_event.set()
            self.server.close()
            await self.server.wait_closed()

    hang = HangingPlugin()
    await hang.start()
    try:
        proto = Protocol("127.0.0.1", hang.port)
        await proto.connect()
        with pytest.raises(asyncio.TimeoutError):
            await asyncio.wait_for(proto.send_command({"cmd": "ping"}), timeout=0.5)
        await proto.close()
    finally:
        await hang.stop()
