import asyncio
import pytest
from g5.driver import G5Driver


@pytest.mark.asyncio
async def test_spawn_and_inspect_returns_inventory(mock_plugin):
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    result = await driver.spawn_and_inspect(
        form_id=0x010052BE, count=1, ticks_wait=0)
    assert result["outcome"] == "ok"
    assert result["form_id"] == 0x010052BE
    assert result["inventory"] == [
        {"form_id": 0x000F2A1B, "count": 1, "equipped": True}
    ]
    await driver.close()


@pytest.mark.asyncio
async def test_spawn_and_inspect_cleans_up(mock_plugin):
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    await driver.spawn_and_inspect(form_id=0x010052BE, ticks_wait=0)
    cmds = [r["cmd"] for r in mock_plugin.received]
    assert cmds == ["spawn", "inspect_inventory", "delete"]
    assert mock_plugin.spawned_inventory == {}
    await driver.close()


@pytest.mark.asyncio
async def test_coc_before_spawn_when_cell_specified(mock_plugin):
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    await driver.spawn_and_inspect(
        form_id=0x010052BE, ticks_wait=0, coc_cell="WeyeBoatHouse")
    cmds = [r["cmd"] for r in mock_plugin.received]
    assert cmds == ["coc", "spawn", "inspect_inventory", "delete"]
    assert mock_plugin.received[0]["edid"] == "WeyeBoatHouse"
    await driver.close()
