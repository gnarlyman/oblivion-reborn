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
async def test_exec_console_returns_captured_lines(mock_plugin):
    mock_plugin.responses["exec"] = {
        "ok": True, "lines": ["Stage = 50.00"]
    }
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    lines = await driver.exec_console("getstage MS40")
    assert lines == ["Stage = 50.00"]
    sent = mock_plugin.received[-1]
    assert sent == {"cmd": "exec", "line": "getstage MS40"}
    await driver.close()


@pytest.mark.asyncio
async def test_exec_console_returns_empty_list_when_no_output(mock_plugin):
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    lines = await driver.exec_console("tfc")
    assert lines == []
    await driver.close()


@pytest.mark.asyncio
async def test_query_is_alias_for_exec_console(mock_plugin):
    mock_plugin.responses["exec"] = {
        "ok": True, "lines": ["BretonRace"]
    }
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    lines = await driver.query("getrace")
    assert lines == ["BretonRace"]
    await driver.close()


@pytest.mark.asyncio
async def test_player_add_item_still_works_with_lines_response(mock_plugin):
    """Existing fire-and-forget callers must keep working — they ignore lines."""
    driver = G5Driver("127.0.0.1", mock_plugin.port)
    await driver.connect()
    await driver.player_add_item(0x000F2A1B, 1)
    sent = mock_plugin.received[-1]
    assert sent["cmd"] == "exec"
    assert sent["line"] == "Player.AddItem 000F2A1B 1"
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
