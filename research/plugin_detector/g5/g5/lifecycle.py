"""Process lifecycle: launch Oblivion via oblivion-usvfs-launcher, wait for socket."""
import asyncio
import subprocess
import time
from typing import Callable
from g5.protocol import Protocol


class GameLifecycle:
    def __init__(
        self,
        launcher: str,
        profile: str,
        port: int = 13580,
        poll_interval: float = 0.5,
        poll_timeout: float = 60.0,
        protocol_factory: Callable[[str, int], Protocol] | None = None,
    ):
        self.launcher = launcher
        self.profile = profile
        self.port = port
        self.poll_interval = poll_interval
        self.poll_timeout = poll_timeout
        self.protocol_factory = protocol_factory or (lambda h, p: Protocol(h, p))
        self.process: subprocess.Popen | None = None
        self.protocol: Protocol | None = None

    async def start(self) -> None:
        cmd = [self.launcher, "--profile", self.profile]
        self.process = subprocess.Popen(cmd)
        deadline = time.monotonic() + self.poll_timeout
        last_err: Exception | None = None
        while time.monotonic() < deadline:
            if self.process.poll() is not None:
                raise RuntimeError(
                    f"game process exited during boot (code {self.process.returncode})")
            try:
                proto = self.protocol_factory("127.0.0.1", self.port)
                await proto.connect()
                resp = await proto.send_command({"cmd": "ping"})
                if resp.get("ok") and resp.get("msg") == "pong":
                    self.protocol = proto
                    return
                await proto.close()
            except (ConnectionRefusedError, OSError) as e:
                last_err = e
            await asyncio.sleep(self.poll_interval)
        raise TimeoutError(
            f"game socket did not come up within {self.poll_timeout}s; last_err={last_err}")

    async def stop(self) -> None:
        if self.protocol is not None:
            try:
                await self.protocol.send_command({"cmd": "quit"})
            except Exception:
                pass
            try:
                await self.protocol.close()
            except Exception:
                pass
            self.protocol = None
        if self.process is not None:
            try:
                self.process.wait(timeout=10)
            except subprocess.TimeoutExpired:
                self.process.kill()
                self.process.wait()
            self.process = None
