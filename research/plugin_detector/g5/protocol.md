# G5 Wire Protocol

TCP, line-delimited JSON. One command per line, one response per line.
Server listens on `127.0.0.1:13580` by default.

## Conventions

- All requests: `{"cmd": "<name>", ...}`
- All responses: `{"ok": <bool>, ...}` — `ok=false` means error, `error` field describes.
- Form IDs may be hex strings (`"010052BE"`) or integers.
- Ref IDs are returned as integers.

## Commands

### `ping`
**Req:** `{"cmd": "ping"}`
**Resp:** `{"ok": true, "msg": "pong"}`

### `coc`
**Req:** `{"cmd": "coc", "edid": "WeyeBoatHouse"}`
**Resp:** `{"ok": true}`

### `spawn`
**Req:** `{"cmd": "spawn", "form_id": "010052BE", "count": 1}`
**Resp:** `{"ok": true, "ref_id": 4278191617}`
Effect: `player.placeatme <form_id> <count>` — spawned NPC's RefID returned.

### `inspect_inventory`
**Req:** `{"cmd": "inspect_inventory", "ref_id": 4278191617}`
**Resp:** `{"ok": true, "items": [{"form_id": 991258, "count": 1, "equipped": true}, ...]}`
Walks `TESContainer` + `ExtraContainerChanges` and returns the merged inventory.

### `delete`
**Req:** `{"cmd": "delete", "ref_id": 4278191617}`
**Resp:** `{"ok": true}`
Effect: `prid <fid>; disable; markfordelete`.

### `quit`
**Req:** `{"cmd": "quit"}`
**Resp:** `{"ok": true, "msg": "quitting"}`
Effect: posts `WM_QUIT` to the game; process exits after reply.

## Error responses

`{"ok": false, "error": "<code>", "detail": "<optional message>"}`

Error codes: `parse`, `missing_cmd`, `unknown_cmd`, `missing_form_id`, `missing_ref_id`, `missing_edid`, `console_exec_failed`, `ref_not_found`, `exception`.
