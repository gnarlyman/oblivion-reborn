import asyncio
import json
import pytest


class MockPlugin:
    """A TCP server that speaks the G5 protocol. Configurable per-command responses."""

    def __init__(self):
        self.server = None
        self.port = 0
        self.responses = {}        # cmd-name -> static response (override)
        self.received = []
        self.next_ref_id = 0xFF000001
        self.spawned_inventory = {}  # ref_id -> [items]
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

                if cmd in self.responses:
                    resp = self.responses[cmd]
                elif cmd == "ping":
                    resp = {"ok": True, "msg": "pong"}
                elif cmd == "coc":
                    resp = {"ok": True}
                elif cmd == "spawn":
                    rid = self.next_ref_id
                    self.next_ref_id += 1
                    self.spawned_inventory[rid] = [
                        {"form_id": 0x000F2A1B, "count": 1, "equipped": True}
                    ]
                    resp = {"ok": True, "ref_id": rid}
                elif cmd == "inspect_inventory":
                    rid = req.get("ref_id")
                    items = self.spawned_inventory.get(rid, [])
                    resp = {"ok": True, "items": items}
                elif cmd == "delete":
                    self.spawned_inventory.pop(req.get("ref_id"), None)
                    resp = {"ok": True}
                elif cmd == "quit":
                    resp = {"ok": True}
                else:
                    resp = {"ok": False, "error": "unknown_cmd"}
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
            if self._task:
                self._task.cancel()
                try:
                    await self._task
                except asyncio.CancelledError:
                    pass


@pytest.fixture
async def mock_plugin():
    plug = MockPlugin()
    await plug.start()
    yield plug
    await plug.stop()
