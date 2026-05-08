"""Candidate NPC list loader."""
import json
from pathlib import Path
from typing import Any


def load_candidates(path: Path) -> list[dict[str, Any]]:
    """Load a JSON list of {form_id, edid, [coc_cell, ticks_wait]}.

    form_id may be a hex string ("010052BE") or an int. Returns the list with
    form_id normalized to int.
    """
    with Path(path).open("r", encoding="utf-8") as f:
        raw = json.load(f)
    out = []
    for entry in raw:
        fid = entry["form_id"]
        if isinstance(fid, str):
            fid = int(fid, 16)
        normalized = {**entry, "form_id": fid}
        out.append(normalized)
    return out
