"""High-level G5 driver: spawn-and-inspect orchestration."""
import asyncio
import time
from typing import Any
from g5.protocol import Protocol


class G5Driver:
    def __init__(self, host: str, port: int):
        self.proto = Protocol(host, port)

    async def connect(self) -> None:
        await self.proto.connect()

    async def close(self) -> None:
        await self.proto.close()

    async def ping(self) -> bool:
        resp = await self.proto.send_command({"cmd": "ping"})
        return resp.get("ok") is True and resp.get("msg") == "pong"

    async def coc(self, edid: str) -> None:
        resp = await self.proto.send_command({"cmd": "coc", "edid": edid})
        if not resp.get("ok"):
            raise RuntimeError(f"coc failed: {resp}")

    async def spawn(self, form_id: int, count: int = 1) -> int:
        resp = await self.proto.send_command({
            "cmd": "spawn",
            "form_id": form_id,
            "count": count,
        })
        if not resp.get("ok"):
            raise RuntimeError(f"spawn failed: {resp}")
        return resp["ref_id"]

    async def inspect_inventory(self, ref_id: int) -> list[dict[str, Any]]:
        resp = await self.proto.send_command({
            "cmd": "inspect_inventory",
            "ref_id": ref_id,
        })
        if not resp.get("ok"):
            raise RuntimeError(f"inspect_inventory failed: {resp}")
        return resp["items"]

    async def delete(self, ref_id: int) -> None:
        resp = await self.proto.send_command({
            "cmd": "delete",
            "ref_id": ref_id,
        })
        if not resp.get("ok"):
            raise RuntimeError(f"delete failed: {resp}")

    async def spawn_and_inspect(
        self,
        form_id: int,
        count: int = 1,
        ticks_wait: int = 10,
        coc_cell: str | None = None,
    ) -> dict[str, Any]:
        """Composed flow: optional coc → spawn → wait → inspect → delete.

        Returns:
            {"form_id": int, "ref_id": int, "inventory": [...], "outcome": str,
             "ticks_to_ready": int, "spawned_at": float}
        """
        spawned_at = time.time()
        if coc_cell is not None:
            await self.coc(coc_cell)
        ref_id = await self.spawn(form_id, count)
        # In real plugin, ticks_wait blocks the game tick. Here, simulate
        # with a short asyncio.sleep so the game has time to populate
        # inventory after OnLoad. ticks_wait=0 in tests to avoid sleeping.
        if ticks_wait > 0:
            await asyncio.sleep(ticks_wait * (1.0 / 30.0))  # 30fps assumption
        try:
            inv = await self.inspect_inventory(ref_id)
            outcome = "ok"
        except Exception as e:
            inv = []
            outcome = f"inspect_failed:{e}"
        try:
            await self.delete(ref_id)
        except Exception:
            pass  # best-effort cleanup
        return {
            "form_id": form_id,
            "ref_id": ref_id,
            "inventory": inv,
            "outcome": outcome,
            "ticks_to_ready": ticks_wait,
            "spawned_at": spawned_at,
        }
