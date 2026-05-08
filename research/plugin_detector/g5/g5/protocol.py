"""Wire protocol for G5 — line-delimited JSON over TCP."""
import asyncio
import json
from typing import Any


class Protocol:
    def __init__(self, host: str, port: int):
        self.host = host
        self.port = port
        self.reader: asyncio.StreamReader | None = None
        self.writer: asyncio.StreamWriter | None = None

    async def connect(self) -> None:
        self.reader, self.writer = await asyncio.open_connection(self.host, self.port)

    async def send_command(self, command: dict[str, Any]) -> dict[str, Any]:
        if self.writer is None or self.reader is None:
            raise RuntimeError("not connected")
        line = json.dumps(command) + "\n"
        self.writer.write(line.encode())
        await self.writer.drain()
        response_line = await self.reader.readline()
        if not response_line:
            raise ConnectionError("plugin closed connection")
        return json.loads(response_line.decode().strip())

    async def close(self) -> None:
        if self.writer is not None:
            try:
                self.writer.close()
                await self.writer.wait_closed()
            finally:
                self.writer = None
                self.reader = None
