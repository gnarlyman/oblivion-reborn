import asyncio
import json
import pytest
import socket
from contextlib import contextmanager


class MockPlugin:
    """A TCP server that speaks the G5 protocol. Configurable per-command responses."""

    def __init__(self):
        self.server = None
        self.port = 0
        self.responses = {}  # cmd -> response dict
        self.received = []
        self._task = None

    async def _handle(self, reader, writer):
        try:
            while True:
                line = await reader.readline()
                if not line:
                    break
                req = json.loads(line.decode().strip())
                self.received.append(req)
                cmd = req.get("cmd")
                resp = self.responses.get(cmd, {"ok": False, "error": "unknown_cmd"})
                writer.write((json.dumps(resp) + "\n").encode())
                await writer.drain()
        except Exception:
            pass
        finally:
            writer.close()

    async def start(self):
        self.server = await asyncio.start_server(self._handle, "127.0.0.1", 0)
        self.port = self.server.sockets[0].getsockname()[1]
        self._task = asyncio.create_task(self.server.serve_forever())

    async def stop(self):
        if self.server:
            self.server.close()
            await self.server.wait_closed()


@pytest.fixture
async def mock_plugin():
    plug = MockPlugin()
    await plug.start()
    yield plug
    await plug.stop()
