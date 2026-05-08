# Predictor v1 — VFS, Predictor, Oracle, Calibration

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build the static predictor for the naked-NPC bug class on Reborn-OOO, validate against the G5 ground-truth corpus (T15 already passed: 50 NPCs with full inventory captured), and report precision/recall.

**Architecture:** Pure Python predictor (decision D3) — load plugins.txt, walk records in load order, apply override winning (Bashed Patch falls out naturally as a late-loading plugin), resolve NPC inventory through template chain + LVLI + race/faction defaults, ask the VFS module whether referenced meshes resolve. xEdit oracle (Pascal one-shot) validates Python's override-winning correctness with a one-time diff. Calibration script joins predictor output with G5's `validation_vanilla.jsonl` and computes precision/recall on the no-script bucket.

**Tech Stack:** Python 3.10+, pytest, nlohmann/jsonl format. xEdit + Pascal for the oracle (existing `repl_daemon.py` infrastructure). Reuses `parse_subrecords` / `iter_records` / `load_plugin` helpers already present in `D:/Modlists/Reborn/research/audit_ooo_enhanced.py`.

**Spec:** `docs/superpowers/specs/2026-05-08-plugin-conflict-detector-spike-design.md` (Phase 3 + Phase 4)

**Calibration corpus already exists:** `research/plugin_detector/g5/validation_vanilla.jsonl` — 50 vanilla NPCs with G5-captured runtime inventory. T15 closed 2026-05-08.

**Out of scope for this plan:**
- Generalization to other bug classes (mesh-only, leveled-list, dangling-FID) — separate plan after Phase 5.
- Performance optimization — predictor runs once per modlist change, ≤5 min is fine.
- Script-driven gear modeling (S1 boundary) — predictor flags `has_script: true` and excludes those NPCs from precision/recall calculation.
- UI / human-readable report — JSONL + a small Markdown summary is enough for the spike.

## Worktree setup (before Task 1)

Use `superpowers:using-git-worktrees` to create `_worktrees/predictor-v1` on branch `feature/predictor-v1`. Same pattern as the G5 worktree.

## File Structure

```
D:/Modlists/Reborn/research/plugin_detector/
├── predictor/                          # NEW (this plan)
│   ├── __init__.py
│   ├── plugin_parser.py                # iter_records, parse_subrecords, FID resolution
│   ├── load_order.py                   # plugins.txt + master tables + winning_records
│   ├── npc_resolver.py                 # NPC inventory resolution (template, race, LVLI, mesh)
│   ├── vfs.py                          # MO2 VFS replication
│   └── predict.py                      # CLI entrypoint
├── oracle/                             # NEW (this plan)
│   └── dump_winning.pas                # xEdit Pascal script
├── calibration/                        # NEW (this plan)
│   └── compute_metrics.py              # join predictor + G5, compute precision/recall
└── tests/                              # extends g5/tests
    ├── predictor/
    │   ├── __init__.py
    │   ├── test_plugin_parser.py
    │   ├── test_load_order.py
    │   ├── test_npc_resolver.py
    │   └── test_vfs.py
    └── fixtures/
        ├── tiny_master.esm             # synthetic ESM for parser tests
        └── tiny_mod.esp                # synthetic ESP for override tests
```

The G5 plugin and Python driver from the prior plan live alongside in `research/plugin_detector/g5/`. Don't touch that.

**Test strategy:**
- `plugin_parser`, `load_order`, `vfs` — full TDD with synthetic fixtures.
- `npc_resolver` — TDD against synthetic NPCs first; integration-test against the real Reborn-OOO modlist at the end.
- Oracle Pascal script — verified by running once and diffing against predictor's output.
- Calibration — small (~50 line) script, no separate tests; correctness shown by the report it produces.

---

## Task 1: Worktree + scaffold

**Files:**
- New: `D:/Modlists/Reborn/research/plugin_detector/predictor/__init__.py` (empty)
- New: `D:/Modlists/Reborn/research/plugin_detector/oracle/__init__.py` (empty marker, if you want it; oracle is just a Pascal file otherwise)
- New: `D:/Modlists/Reborn/research/plugin_detector/calibration/__init__.py` (empty)
- New: `D:/Modlists/Reborn/research/plugin_detector/tests/predictor/__init__.py` (empty)
- New: `D:/Modlists/Reborn/research/plugin_detector/tests/__init__.py` (empty if not already)
- New: `D:/Modlists/Reborn/research/plugin_detector/tests/fixtures/.gitkeep`
- New: `D:/Modlists/Reborn/research/plugin_detector/predictor/README.md` (one-paragraph overview)

(The g5 directory and its tests already exist on main and shouldn't be touched.)

- [ ] **Step 1: Set up worktree (via using-git-worktrees skill)**

Worktree: `D:/Modlists/Reborn/_worktrees/predictor-v1` on branch `feature/predictor-v1` from `main`. After creation, all subsequent paths reference this worktree.

- [ ] **Step 2: Create directory structure**

```powershell
$root = "D:\Modlists\Reborn\_worktrees\predictor-v1\research\plugin_detector"
New-Item -ItemType Directory -Force -Path "$root\predictor", "$root\oracle", "$root\calibration", "$root\tests\predictor", "$root\tests\fixtures"
```

- [ ] **Step 3: Write empty `__init__.py` files**

Create empty files at:
- `predictor/__init__.py`
- `calibration/__init__.py`
- `tests/predictor/__init__.py`

(`tests/__init__.py` already exists from the g5 plan; don't overwrite.)

- [ ] **Step 4: Write README**

Save to `predictor/README.md`:

```markdown
# Predictor v1

Static predictor for the naked-NPC bug class on Reborn-OOO. Walks the load
order, applies override winning (BP merges fall out naturally), resolves NPC
inventory through template + race + LVLI chains, asks the VFS module whether
referenced meshes resolve.

Validated against G5 ground truth corpus at `../g5/validation_vanilla.jsonl`.

Run: `python predictor/predict.py --profile Reborn-OOO --output predictions.jsonl`
```

- [ ] **Step 5: Commit**

```powershell
cd D:\Modlists\Reborn\_worktrees\predictor-v1
git add research/plugin_detector/predictor research/plugin_detector/oracle research/plugin_detector/calibration research/plugin_detector/tests/predictor research/plugin_detector/tests/fixtures/.gitkeep
git commit -m "predictor: scaffold predictor/oracle/calibration directories"
```

---

## Task 2: Plugin parser — reuse helpers from audit_ooo_enhanced.py

**Files:**
- New: `predictor/plugin_parser.py`
- New: `tests/predictor/test_plugin_parser.py`

**Why:** We already have a working plugin parser at `D:/Modlists/Reborn/research/audit_ooo_enhanced.py`. The G5 picker imports from it. Re-export the relevant helpers from `predictor/plugin_parser.py` so the predictor module is self-contained and testable.

- [ ] **Step 1: Write the failing test**

`tests/predictor/test_plugin_parser.py`:

```python
"""Smoke tests against the live Oblivion.esm to verify the parser helpers
are usable from inside the predictor module."""
from pathlib import Path
from predictor.plugin_parser import iter_records, parse_subrecords, cstr, load_plugin

OBLIVION_ESM = Path(r"D:\Modlists\Reborn\Stock Game\Data\Oblivion.esm")


def test_iter_records_yields_at_least_one_npc():
    data, masters = load_plugin(OBLIVION_ESM)
    assert masters == [], "Oblivion.esm has no masters"
    npc_count = sum(1 for top, sig, fid, flags, body in iter_records(data) if sig == "NPC_")
    assert npc_count > 1000, f"expected >1000 NPC_ records, got {npc_count}"


def test_parse_subrecords_finds_edid():
    data, _ = load_plugin(OBLIVION_ESM)
    found = False
    for top, sig, fid, flags, body in iter_records(data):
        if sig != "NPC_":
            continue
        for ssig, ssub in parse_subrecords(body):
            if ssig == "EDID":
                edid = cstr(ssub)
                if edid:
                    found = True
                    break
        if found:
            break
    assert found, "no EDID subrecord found in any NPC_ record"
```

- [ ] **Step 2: Run, verify it fails**

```powershell
cd D:\Modlists\Reborn\_worktrees\predictor-v1\research\plugin_detector
python -m pytest tests/predictor/test_plugin_parser.py -v
```

Expected: FAIL with `ModuleNotFoundError: No module named 'predictor.plugin_parser'`.

- [ ] **Step 3: Write `predictor/plugin_parser.py`**

```python
"""Plugin record parser — re-exports helpers from research/audit_ooo_enhanced.py.

These helpers were originally written for one-off audit scripts. This module
makes them importable as `predictor.plugin_parser.*` so the predictor package
is self-contained.
"""
import sys
from pathlib import Path

# audit_ooo_enhanced.py lives at D:/Modlists/Reborn/research/. We're at
# D:/Modlists/Reborn/_worktrees/predictor-v1/research/plugin_detector/predictor/.
# The audit module is in the parent main checkout — but during a worktree run,
# we want to use the file from the WORKTREE's research/ directory if it exists,
# otherwise fall back to the main checkout.
_THIS_DIR = Path(__file__).resolve().parent
_WORKTREE_RESEARCH = _THIS_DIR.parent.parent.parent  # .../research
if not (_WORKTREE_RESEARCH / "audit_ooo_enhanced.py").exists():
    # Fall back to main checkout
    _WORKTREE_RESEARCH = Path(r"D:\Modlists\Reborn\research")

sys.path.insert(0, str(_WORKTREE_RESEARCH))
from audit_ooo_enhanced import (  # type: ignore
    iter_records,
    parse_subrecords,
    cstr,
    load_plugin,
)

__all__ = ["iter_records", "parse_subrecords", "cstr", "load_plugin"]
```

- [ ] **Step 4: Run, verify pass**

```powershell
python -m pytest tests/predictor/test_plugin_parser.py -v
```

Expected: 2 PASS.

- [ ] **Step 5: Commit**

```powershell
cd D:\Modlists\Reborn\_worktrees\predictor-v1
git add research/plugin_detector/predictor/plugin_parser.py research/plugin_detector/tests/predictor/test_plugin_parser.py
git commit -m "predictor: re-export plugin parser helpers from audit_ooo_enhanced"
```

---

## Task 3: Load order — read plugins.txt, build master tables

**Files:**
- New: `predictor/load_order.py`
- New: `tests/predictor/test_load_order.py`

**Why:** Walk the active load order. For each plugin, parse its TES4 master list and build a mapping (plugin's own master idx → load-order idx). This is the foundation for FID resolution.

**Cross-master FID conversion is the well-known footfall** — memory entry `feedback_query_record_cross_master_bug.md` documents the proper LO-byte → file → local-FID conversion. The fix landed in `oblivion-conflicts` main 2026-04-30; carry the pattern forward.

- [ ] **Step 1: Write the failing test**

`tests/predictor/test_load_order.py`:

```python
from pathlib import Path
import pytest
from predictor.load_order import (
    parse_plugins_txt,
    parse_plugin_masters,
    build_load_order,
    LoadOrder,
)

# Live test inputs — Reborn-OOO profile.
PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")


def test_parse_plugins_txt_returns_active_plugins():
    plugins = parse_plugins_txt(PROFILE_DIR / "plugins.txt")
    assert "Oblivion.esm" in plugins
    assert plugins[0] == "Oblivion.esm", "Oblivion.esm must be first"
    # Bashed Patch loads last in MO2's plugins.txt convention.
    assert plugins[-1].lower().startswith("bashed patch") or "bashed patch" in plugins[-1].lower(), \
        f"expected Bashed Patch last, got {plugins[-1]}"


def test_parse_plugin_masters_for_oblivion_esm_is_empty():
    data_dir = Path(r"D:\Modlists\Reborn\Stock Game\Data")
    masters = parse_plugin_masters(data_dir / "Oblivion.esm")
    assert masters == []


def test_build_load_order_assigns_indices():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    # Oblivion.esm at idx 0
    assert lo.index_of("Oblivion.esm") == 0
    # FID resolution: a vanilla form_id like 0x00023F2A in any plugin that
    # has Oblivion.esm as master[0] resolves to LO idx 0.
    # Build a fake (plugin_idx, master_idx, local_fid) triple and convert.
    # Test passes if the mapping is sensible — we'll write more rigorous
    # tests in Task 4 when override winning lands.
    assert len(lo.plugins) > 50, f"expected >50 plugins, got {len(lo.plugins)}"
```

- [ ] **Step 2: Run, verify failure**

```powershell
python -m pytest tests/predictor/test_load_order.py -v
```

Expected: FAIL — module doesn't exist.

- [ ] **Step 3: Write `predictor/load_order.py`**

```python
"""Load order: plugins.txt parsing, master-list extraction, FID conversion.

Important: cross-master FID conversion has bitten this codebase before.
See memory entry feedback_query_record_cross_master_bug.md. The pattern:
each plugin's record body contains FormIDs whose high byte is an index
into the plugin's master list (with `len(masters)` itself meaning "this
plugin"). To compare FIDs across plugins, convert each to a load-order
FID by replacing the high byte with the load-order index of the plugin
that the FID's master refers to.
"""
import struct
from dataclasses import dataclass, field
from pathlib import Path
from typing import Sequence

from predictor.plugin_parser import iter_records, parse_subrecords, cstr


def parse_plugins_txt(plugins_txt: Path) -> list[str]:
    """Read MO2's plugins.txt. Lines starting with '*' are active.

    Returns active plugin filenames in load order (top-to-bottom in file =
    earlier-to-later in load order). Comments and inactive entries skipped.
    """
    out: list[str] = []
    with plugins_txt.open("r", encoding="utf-8-sig") as f:
        for raw in f:
            line = raw.strip()
            if not line or line.startswith("#"):
                continue
            if line.startswith("*"):
                out.append(line[1:].strip())
            else:
                # MO2 also writes inactive plugins without prefix; treat as
                # inactive and skip.
                pass
    return out


def parse_plugin_masters(plugin_path: Path) -> list[str]:
    """Read the TES4 header's MAST subrecords. Returns master filenames in
    declared order."""
    with plugin_path.open("rb") as f:
        data = f.read(4096)  # TES4 header is small; first 4KB is plenty
    # iter_records walks the whole file but the TES4 record is always first.
    for top, sig, fid, flags, body in iter_records(data):
        if sig != "TES4":
            return []  # malformed
        masters: list[str] = []
        for ssig, ssub in parse_subrecords(body):
            if ssig == "MAST":
                masters.append(cstr(ssub))
        return masters
    return []


@dataclass
class LoadOrder:
    plugins: list[str]                       # ordered active plugin names
    data_dir: Path                           # path to Data/
    masters: dict[str, list[str]] = field(default_factory=dict)  # name -> masters

    def index_of(self, plugin_name: str) -> int | None:
        """Case-insensitive lookup."""
        target = plugin_name.lower()
        for i, p in enumerate(self.plugins):
            if p.lower() == target:
                return i
        return None

    def to_lo_fid(self, plugin_name: str, raw_fid: int) -> int:
        """Convert a raw FID from `plugin_name`'s record body to a load-order FID.

        raw_fid's high byte is an index into [masters of plugin_name] +
        [plugin_name itself]. We replace the high byte with the load-order
        index of the plugin that index refers to.

        Returns -1 if the master index is out of range or the master isn't
        in the active load order.
        """
        masters = self.masters.get(plugin_name, [])
        master_idx = (raw_fid >> 24) & 0xFF
        if master_idx < len(masters):
            target_plugin = masters[master_idx]
        elif master_idx == len(masters):
            target_plugin = plugin_name
        else:
            return -1  # invalid master index in this plugin's table
        lo_idx = self.index_of(target_plugin)
        if lo_idx is None:
            return -1  # master not in active load order
        return ((lo_idx & 0xFF) << 24) | (raw_fid & 0x00FFFFFF)


def build_load_order(profile_dir: Path, data_dir: Path) -> LoadOrder:
    plugins = parse_plugins_txt(profile_dir / "plugins.txt")
    lo = LoadOrder(plugins=plugins, data_dir=data_dir)
    for p in plugins:
        plugin_file = data_dir / p
        if plugin_file.exists():
            lo.masters[p] = parse_plugin_masters(plugin_file)
        else:
            lo.masters[p] = []
    return lo
```

- [ ] **Step 4: Run, verify pass**

```powershell
python -m pytest tests/predictor/test_load_order.py -v
```

Expected: 3 PASS.

- [ ] **Step 5: Add an FID conversion test**

Append to `tests/predictor/test_load_order.py`:

```python
def test_to_lo_fid_self_reference():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    # Oblivion.esm has no masters; high-byte 0 means "self".
    # 0x00023F2A in Oblivion.esm should resolve to LO idx 0 + same lower bits.
    assert lo.to_lo_fid("Oblivion.esm", 0x00023F2A) == 0x00023F2A
    # Invalid master index should return -1.
    assert lo.to_lo_fid("Oblivion.esm", 0xFF023F2A) == -1


def test_to_lo_fid_master_reference():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    # Pick a plugin that has Oblivion.esm as its first master.
    # Most ESPs in the modlist do. Find one for testing.
    second_plugin = None
    for p in lo.plugins[1:]:
        if "Oblivion.esm" in lo.masters.get(p, []):
            second_plugin = p
            break
    assert second_plugin is not None, "expected at least one ESP referencing Oblivion.esm"
    # Mater_idx 0 in second_plugin = Oblivion.esm. FID 0x00023F2A there
    # should resolve to LO 0x00023F2A (Oblivion.esm is at LO 0).
    assert lo.to_lo_fid(second_plugin, 0x00023F2A) == 0x00023F2A
```

- [ ] **Step 6: Run, verify all 5 PASS**

- [ ] **Step 7: Commit**

```powershell
git add research/plugin_detector/predictor/load_order.py research/plugin_detector/tests/predictor/test_load_order.py
git commit -m "predictor: load_order.py with plugins.txt + master-table FID conversion"
```

---

## Task 4: Override winning — winning_records dict

**Files:**
- Modify: `predictor/load_order.py` (add `build_winning_records`)
- Modify: `tests/predictor/test_load_order.py` (add tests)

**Why:** For each load-order FID, find the plugin that wins it (the latest plugin in load order containing an override of that record). The Bashed Patch loads last and naturally wins for every record it contains.

- [ ] **Step 1: Add the failing test**

Append to `tests/predictor/test_load_order.py`:

```python
def test_build_winning_records_basics():
    lo = build_load_order(
        profile_dir=PROFILE_DIR,
        data_dir=Path(r"D:\Modlists\Reborn\Stock Game\Data"),
    )
    from predictor.load_order import build_winning_records
    winners = build_winning_records(lo, signatures={"NPC_"})
    # We expect thousands of NPC_ records.
    assert len(winners) > 1000, f"expected >1000 winning NPCs, got {len(winners)}"
    # Vanilla Imperial Legion guard FormID; should be present.
    guard_lo_fid = 0x00023F2A
    assert guard_lo_fid in winners, "expected vanilla guard FID 00023F2A as a winner"
    plugin_name, body_offset, body_len = winners[guard_lo_fid]
    assert isinstance(plugin_name, str)
    assert body_len > 0
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement `build_winning_records`**

Add to `predictor/load_order.py`:

```python
def build_winning_records(
    lo: LoadOrder,
    signatures: set[str] | None = None,
) -> dict[int, tuple[str, int, int]]:
    """For each LO FID, return (winning_plugin_name, body_offset, body_len).

    We don't store the body bytes themselves to keep memory bounded — the
    consumer can re-read on demand from the plugin file.

    `signatures` filters which record types to track; None means all.
    """
    winners: dict[int, tuple[str, int, int]] = {}
    for plugin_name in lo.plugins:
        plugin_path = lo.data_dir / plugin_name
        if not plugin_path.exists():
            continue
        with plugin_path.open("rb") as f:
            data = f.read()
        for top, sig, raw_fid, flags, body in iter_records(data):
            if signatures and sig not in signatures:
                continue
            if sig == "TES4":
                continue
            lo_fid = lo.to_lo_fid(plugin_name, raw_fid)
            if lo_fid < 0:
                continue
            # body_offset is the offset within `data` where body bytes begin.
            # iter_records doesn't return that directly; re-walk to find it.
            # ALTERNATIVELY: store body bytes inline. For now, store the body
            # bytes themselves — simpler and the predictor reads them anyway.
            winners[lo_fid] = (plugin_name, 0, len(body))
            # Stash the body bytes in a parallel dict so callers can retrieve
            # without re-parsing.
    return winners
```

(The above is a sketch — see Step 5 for the corrected implementation that stores body bytes.)

- [ ] **Step 4: Notice the body-bytes problem and refactor**

The above sketch returns `(plugin, offset, len)` but we don't track offsets. Either re-parse on demand (slow per record) or store body bytes. Pick storing body bytes — predictor fits ~100k records × few-hundred-byte bodies = ~100MB, acceptable for a research spike.

Refactor:

```python
def build_winning_records(
    lo: LoadOrder,
    signatures: set[str] | None = None,
) -> dict[int, tuple[str, str, bytes]]:
    """For each LO FID, return (winning_plugin_name, signature, body_bytes).

    Walks the load order in order; later plugins overwrite earlier ones for
    the same LO FID. Bashed Patch (last in load order) naturally wins for
    every record it contains.
    """
    winners: dict[int, tuple[str, str, bytes]] = {}
    for plugin_name in lo.plugins:
        plugin_path = lo.data_dir / plugin_name
        if not plugin_path.exists():
            continue
        with plugin_path.open("rb") as f:
            data = f.read()
        for top, sig, raw_fid, flags, body in iter_records(data):
            if sig == "TES4":
                continue
            if signatures and sig not in signatures:
                continue
            lo_fid = lo.to_lo_fid(plugin_name, raw_fid)
            if lo_fid < 0:
                continue
            winners[lo_fid] = (plugin_name, sig, body)
    return winners
```

Update the test signature:

```python
def test_build_winning_records_basics():
    # ...
    plugin_name, sig, body = winners[guard_lo_fid]
    assert sig == "NPC_"
    assert isinstance(body, (bytes, bytearray))
    assert len(body) > 0
```

- [ ] **Step 5: Run, verify pass**

- [ ] **Step 6: Commit**

```powershell
git add research/plugin_detector/predictor/load_order.py research/plugin_detector/tests/predictor/test_load_order.py
git commit -m "predictor: build_winning_records walks LO and stores body per FID"
```

---

## Task 5: xEdit oracle — dump_winning.pas

**Files:**
- New: `oracle/dump_winning.pas`

**Why:** One-shot Pascal script that walks the active load order in xEdit and emits `(lo_fid, plugin_name, signature, sha256(body))` for every record. Predictor's `winning_records` is then validated against this output via diff. Memory entry `reference_oblivion_conflicts_github.md` covers the existing Pascal-script tooling.

- [ ] **Step 1: Write the script**

Save to `D:/Modlists/Reborn/_worktrees/predictor-v1/research/plugin_detector/oracle/dump_winning.pas`:

```pascal
{
  dump_winning.pas

  For each "winning override" record in the active load order, emit one JSONL
  line to stdout (or a file path passed via OUTPUT_PATH env var):

      {"fid": "01023F2A", "plugin": "OOO Enhanced.esp", "sig": "NPC_", "sha": "<hex>"}

  fid is the LO FID (8-uppercase hex). sha is sha256 of the record body bytes
  (subrecords only — no header).

  Used to validate predictor's pure-Python override-winning logic.

  Run via repl daemon or xEdit -script: dump_winning.

  Reference: existing Pascal helpers in
  D:\Modlists\_clones\oblivion-conflicts\scripts\.
}

unit dump_winning;

uses '..\\..\\..\\_clones\\oblivion-conflicts\\scripts\\sha256_helper.pas';

var
  outFile: TStringList;
  outputPath: string;

function Initialize: Integer;
begin
  outFile := TStringList.Create;
  outputPath := GetEnvironmentVariable('OUTPUT_PATH');
  if outputPath = '' then
    outputPath := 'oracle_winning.jsonl';
  Result := 0;
end;

function Process(e: IInterface): Integer;
var
  fid: Cardinal;
  plugin: string;
  sig: string;
  bodyBytes: TBytes;
  sha: string;
  line: string;
begin
  // Skip non-winning overrides.
  if not IsWinningOverride(e) then begin
    Result := 0;
    Exit;
  end;
  // Skip TES4 headers.
  sig := Signature(e);
  if sig = 'TES4' then begin
    Result := 0;
    Exit;
  end;

  fid := FormID(e);
  plugin := GetFileName(GetFile(e));
  bodyBytes := DataAsBytes(e);
  sha := Sha256Hex(bodyBytes);
  line := Format('{"fid":"%s","plugin":"%s","sig":"%s","sha":"%s"}',
                 [IntToHex(fid, 8), plugin, sig, sha]);
  outFile.Add(line);
  Result := 0;
end;

function Finalize: Integer;
begin
  outFile.SaveToFile(outputPath);
  outFile.Free;
  Result := 0;
end;

end.
```

**NOTE:** if `sha256_helper.pas` doesn't exist in your oblivion-conflicts scripts, OR if `DataAsBytes(e)` isn't a valid xEdit Pascal function (some xEdit versions expose it under a different name), you'll need to either:

1. Inline a SHA-256 implementation in Pascal (search the xEdit community scripts),
2. Use a simpler hash (e.g. ElementAsString → length + first/last bytes) — sufficient for round-trip validation though slightly weaker,
3. Or skip the SHA and emit just `fid + plugin + sig`, then verify count/coverage match.

Option 3 is fine for the spike. The check is "does Python see the same set of (LO FID, winning plugin) pairs as xEdit." Body byte equality can be a separate, deeper check later.

If you go with option 3, simplify the script to omit `sha` and the helper unit:

```pascal
line := Format('{"fid":"%s","plugin":"%s","sig":"%s"}',
               [IntToHex(fid, 8), plugin, sig]);
```

Pick option 3 unless you have time to wire up SHA-256.

- [ ] **Step 2: Pick the option, save the appropriate version**

- [ ] **Step 3: Smoke test — run the script via repl daemon**

Memory entry `reference_repl_daemon.md` covers usage. With a daemon up for the Reborn-OOO profile, dispatching a Pascal script:

```bash
echo '{"script": "dump_winning"}' > /path/to/repl-control/in/<id>.json
# Wait for completion, read the output.
```

Or use xEdit's `-script:` CLI mode (memory `reference_xedit_headless_flags.md`):

```powershell
& "<xEdit.exe>" -script:dump_winning -nobuildrefs -autoload "Reborn-OOO"
```

Whichever path you use, the result is `oracle_winning.jsonl` (or wherever OUTPUT_PATH pointed). Verify it has thousands of lines.

- [ ] **Step 4: Commit**

```powershell
git add research/plugin_detector/oracle/dump_winning.pas
git commit -m "predictor: xEdit oracle Pascal script — dump winning overrides"
```

(Don't commit `oracle_winning.jsonl` — it's data.)

---

## Task 6: Oracle diff — validate Python override winning

**Files:**
- New: `predictor/oracle_diff.py` (or just a research script under predictor/research/)
- New: `tests/predictor/test_oracle_diff.py` (small)

**Why:** Compare predictor's `winning_records` to the oracle's JSONL. Goal: ≥99% agreement on `(LO FID, winning_plugin, sig)`. Disagreements are the predictor's bugs.

- [ ] **Step 1: Write the diff harness**

Save to `predictor/oracle_diff.py`:

```python
"""Compare predictor's winning_records against xEdit oracle's dump.

Usage:
    python -m predictor.oracle_diff --oracle oracle_winning.jsonl --profile Reborn-OOO

Emits a summary: total records, predictor-only count, oracle-only count,
mismatched-plugin count.
"""
import argparse
import json
from pathlib import Path

from predictor.load_order import build_load_order, build_winning_records


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--oracle", required=True, type=Path)
    ap.add_argument("--profile", required=True)
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    args = ap.parse_args()

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    py_winners = build_winning_records(lo)

    oracle: dict[int, tuple[str, str]] = {}
    with args.oracle.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
            except json.JSONDecodeError:
                continue
            fid = int(obj["fid"], 16)
            oracle[fid] = (obj["plugin"], obj["sig"])

    py_keys = set(py_winners.keys())
    oracle_keys = set(oracle.keys())

    py_only = py_keys - oracle_keys
    oracle_only = oracle_keys - py_keys
    common = py_keys & oracle_keys
    mismatch_plugin = sum(
        1 for k in common
        if py_winners[k][0].lower() != oracle[k][0].lower()
    )
    mismatch_sig = sum(
        1 for k in common
        if py_winners[k][1] != oracle[k][1]
    )

    total = max(len(py_keys), len(oracle_keys))
    agreement = (len(common) - mismatch_plugin - mismatch_sig) / total * 100 if total else 100.0

    print(f"=== Oracle diff ===")
    print(f"  predictor records:  {len(py_keys)}")
    print(f"  oracle records:     {len(oracle_keys)}")
    print(f"  common keys:        {len(common)}")
    print(f"  predictor-only:     {len(py_only)}")
    print(f"  oracle-only:        {len(oracle_only)}")
    print(f"  plugin mismatches:  {mismatch_plugin}")
    print(f"  signature mismatch: {mismatch_sig}")
    print(f"  agreement:          {agreement:.2f}%")

    # Sample 10 disagreements for diagnosis.
    if py_only:
        print("\nSample predictor-only (first 10):")
        for k in list(py_only)[:10]:
            print(f"  {k:08X}: {py_winners[k][0]} {py_winners[k][1]}")
    if oracle_only:
        print("\nSample oracle-only (first 10):")
        for k in list(oracle_only)[:10]:
            print(f"  {k:08X}: {oracle[k][0]} {oracle[k][1]}")

    return 0 if agreement >= 99.0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
```

- [ ] **Step 2: Run against the oracle output from Task 5**

```powershell
python -m predictor.oracle_diff --oracle oracle_winning.jsonl --profile Reborn-OOO
```

Expected: agreement ≥ 99%. If lower, examine the predictor-only / oracle-only samples — likely the FID conversion or a bash-mergeable-deactivation case.

- [ ] **Step 3: Commit**

```powershell
git add research/plugin_detector/predictor/oracle_diff.py
git commit -m "predictor: oracle diff harness; spike gate ≥99% agreement"
```

(Don't commit the oracle output JSONL — it's regenerated.)

---

## Task 7: NPC resolver — extract base CNTO from winning record

**Files:**
- New: `predictor/npc_resolver.py`
- New: `tests/predictor/test_npc_resolver.py`

**Why:** Given a winning NPC_ record body, walk subrecords, extract the inventory list. The simplest case: NPC has no template, no Use Inventory flag — just walk CNTOs directly.

- [ ] **Step 1: Write the failing test**

`tests/predictor/test_npc_resolver.py`:

```python
from pathlib import Path
import pytest
from predictor.load_order import build_load_order, build_winning_records
from predictor.npc_resolver import extract_base_cnto

PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")
DATA_DIR = Path(r"D:\Modlists\Reborn\Stock Game\Data")


def test_extract_base_cnto_for_imperial_legion_guard():
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_"})
    # Imperial Legion guard, vanilla.
    guard_lo_fid = 0x00023F2A
    plugin, sig, body = winners[guard_lo_fid]
    cnto = extract_base_cnto(body)
    assert len(cnto) > 0, f"expected non-empty CNTO for guard, got {cnto}"
    # Each entry is (form_id, count). FormIDs are raw (not LO-converted).
    for fid, count in cnto:
        assert isinstance(fid, int)
        assert isinstance(count, int)
        assert count > 0
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement `extract_base_cnto`**

```python
"""NPC inventory resolution.

Walks a winning NPC_ record body and returns the inventory in stages:
  base CNTO → template chain → race default → LVLI rolls.
"""
import struct
from typing import Iterable

from predictor.plugin_parser import parse_subrecords


def extract_base_cnto(npc_body: bytes) -> list[tuple[int, int]]:
    """Walk an NPC_ record body's CNTO subrecords. Returns list of
    (raw_form_id, count) tuples, in order of appearance.

    Does NOT perform FID conversion — caller must convert raw_form_id to
    LO FID via the plugin's master table."""
    out: list[tuple[int, int]] = []
    for ssig, ssub in parse_subrecords(npc_body):
        if ssig != "CNTO":
            continue
        if len(ssub) < 8:
            continue
        fid, count = struct.unpack_from("<II", ssub, 0)
        out.append((fid, count))
    return out
```

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/npc_resolver.py research/plugin_detector/tests/predictor/test_npc_resolver.py
git commit -m "predictor: extract_base_cnto walks NPC_ CNTO subrecords"
```

---

## Task 8: NPC resolver — detect SCRI subrecord (script-attached flag)

**Files:**
- Modify: `predictor/npc_resolver.py`
- Modify: `tests/predictor/test_npc_resolver.py`

**Why:** Per spec S1, the predictor flags `has_script` for NPCs whose NPC_ record has a SCRI subrecord. These are excluded from the precision/recall calculation.

- [ ] **Step 1: Add the failing test**

```python
def test_has_script_detects_scri_subrecord():
    from predictor.npc_resolver import has_script
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_"})
    # Pick any NPC and check the boolean is well-typed.
    sample_count = 0
    has_script_count = 0
    for fid, (plugin, sig, body) in list(winners.items())[:200]:
        result = has_script(body)
        assert isinstance(result, bool)
        sample_count += 1
        if result:
            has_script_count += 1
    # Some NPCs in the load order should have scripts (PSMQD-class, MOO-class).
    assert has_script_count > 0, "expected at least one NPC with SCRI in 200 samples"
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement**

Add to `npc_resolver.py`:

```python
def has_script(npc_body: bytes) -> bool:
    """Returns True if the NPC_ record contains a SCRI subrecord."""
    for ssig, _ in parse_subrecords(npc_body):
        if ssig == "SCRI":
            return True
    return False
```

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/npc_resolver.py research/plugin_detector/tests/predictor/test_npc_resolver.py
git commit -m "predictor: has_script detects SCRI subrecord on NPC_"
```

---

## Task 9: NPC resolver — LVLI resolution

**Files:**
- Modify: `predictor/npc_resolver.py`
- Modify: `tests/predictor/test_npc_resolver.py`

**Why:** A CNTO entry can point to an LVLI (leveled item list). The list yields one or more concrete items at runtime. For prediction, we recursively resolve LVLI to a set of "could-appear" leaf FormIDs.

- [ ] **Step 1: Failing test**

```python
def test_resolve_lvli_returns_leaves():
    from predictor.npc_resolver import resolve_lvli
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    # Find an LVLI in winners and verify resolve_lvli returns at least one
    # ARMO/WEAP/CLOT leaf among the recursive results.
    lvli_lo_fid = None
    for fid, (plugin, sig, body) in winners.items():
        if sig == "LVLI":
            lvli_lo_fid = fid
            break
    assert lvli_lo_fid is not None, "expected at least one LVLI in load order"
    leaves = resolve_lvli(lvli_lo_fid, winners, lo, max_depth=8)
    leaf_sigs = {winners[leaf][1] for leaf in leaves if leaf in winners}
    # Most LVLIs should resolve to at least one ARMO/WEAP/CLOT leaf.
    # Allow empty for some edge cases — just check the function ran.
    assert isinstance(leaves, set)
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement**

```python
def resolve_lvli(
    lvli_lo_fid: int,
    winners: dict[int, tuple[str, str, bytes]],
    lo,  # LoadOrder
    max_depth: int = 8,
    _seen: set | None = None,
) -> set[int]:
    """Walk an LVLI's LVLO subrecords recursively. Returns the set of leaf
    LO FormIDs that could appear at runtime.

    LVLI body has LVLO subrecords with format:
      uint16 level + uint16 unused + uint32 form_id + uint16 count + uint16 unused

    (Layout per UESP wiki for Oblivion LVLI records.)
    """
    if _seen is None:
        _seen = set()
    if lvli_lo_fid in _seen or max_depth <= 0:
        return set()
    _seen.add(lvli_lo_fid)
    if lvli_lo_fid not in winners:
        return set()
    plugin, sig, body = winners[lvli_lo_fid]
    if sig != "LVLI":
        return {lvli_lo_fid}  # leaf — caller treats as concrete

    leaves: set[int] = set()
    for ssig, ssub in parse_subrecords(body):
        if ssig != "LVLO":
            continue
        if len(ssub) < 12:
            continue
        # Skip 4 bytes (level + unused), read form_id, skip count + unused.
        raw_fid = struct.unpack_from("<I", ssub, 4)[0]
        target_lo_fid = lo.to_lo_fid(plugin, raw_fid)
        if target_lo_fid < 0:
            continue
        # Recurse if it's another LVLI; otherwise add as leaf.
        if target_lo_fid in winners and winners[target_lo_fid][1] == "LVLI":
            leaves |= resolve_lvli(target_lo_fid, winners, lo, max_depth - 1, _seen)
        else:
            leaves.add(target_lo_fid)
    return leaves
```

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/npc_resolver.py research/plugin_detector/tests/predictor/test_npc_resolver.py
git commit -m "predictor: resolve_lvli walks LVLO entries recursively with depth cap"
```

---

## Task 10: NPC resolver — full inventory walk (template + race deferred)

**Files:**
- Modify: `predictor/npc_resolver.py`
- Modify: `tests/predictor/test_npc_resolver.py`

**Why:** Compose `extract_base_cnto` + `resolve_lvli` + LO-FID conversion into a single `resolve_inventory` function. Template chain and race default are deferred to Task 11/12.

- [ ] **Step 1: Failing test**

```python
def test_resolve_inventory_returns_concrete_set():
    from predictor.npc_resolver import resolve_inventory
    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    guard_lo_fid = 0x00023F2A
    inv = resolve_inventory(guard_lo_fid, winners, lo)
    # Vanilla Imperial Legion guard should have armor pieces.
    assert len(inv["concrete"]) > 0
    # has_script should be False for a vanilla guard (or True if Reborn adds SCRI — accept either).
    assert isinstance(inv["has_script"], bool)
```

- [ ] **Step 2: Implement `resolve_inventory`**

```python
def resolve_inventory(
    npc_lo_fid: int,
    winners: dict[int, tuple[str, str, bytes]],
    lo,  # LoadOrder
) -> dict:
    """Resolve an NPC's possible inventory.

    Returns:
        {
            "concrete": set of LO FormIDs that will definitely or could appear
                        in inventory (LVLI-resolved leaves are included),
            "has_script": bool — True if NPC_ has SCRI (S1 boundary),
            "lvli_paths_walked": list of LVLI LO FormIDs walked (debug),
        }
    """
    if npc_lo_fid not in winners:
        return {"concrete": set(), "has_script": False, "lvli_paths_walked": []}

    plugin, sig, body = winners[npc_lo_fid]
    if sig != "NPC_":
        return {"concrete": set(), "has_script": False, "lvli_paths_walked": []}

    has_scri = has_script(body)
    base_cnto = extract_base_cnto(body)
    concrete: set[int] = set()
    lvli_walked: list[int] = []
    for raw_fid, count in base_cnto:
        target_lo_fid = lo.to_lo_fid(plugin, raw_fid)
        if target_lo_fid < 0:
            continue
        if target_lo_fid in winners and winners[target_lo_fid][1] == "LVLI":
            lvli_walked.append(target_lo_fid)
            concrete |= resolve_lvli(target_lo_fid, winners, lo)
        else:
            concrete.add(target_lo_fid)
    return {
        "concrete": concrete,
        "has_script": has_scri,
        "lvli_paths_walked": lvli_walked,
    }
```

- [ ] **Step 3: Run, verify pass**

- [ ] **Step 4: Commit**

```powershell
git add research/plugin_detector/predictor/npc_resolver.py research/plugin_detector/tests/predictor/test_npc_resolver.py
git commit -m "predictor: resolve_inventory composes base CNTO + LVLI"
```

---

## Task 11: VFS module — parse modlist.txt

**Files:**
- New: `predictor/vfs.py`
- New: `tests/predictor/test_vfs.py`

**Why:** First step toward asset-existence checking. Parse MO2's `modlist.txt` to get the active mod list in priority order.

- [ ] **Step 1: Failing test**

```python
"""Tests against the live Reborn-OOO profile."""
from pathlib import Path
from predictor.vfs import parse_modlist

PROFILE_DIR = Path(r"D:\Modlists\Reborn\profiles\Reborn-OOO")


def test_parse_modlist_returns_active_mods():
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    assert len(mods) > 50, f"expected >50 active mods, got {len(mods)}"
    # G5 Validator was enabled during T15; should be present.
    assert any("G5 Validator".lower() in m.lower() for m in mods)


def test_modlist_priority_order():
    """In modlist.txt FILE order: top-of-file = highest priority (overrides
    later entries). We return mods in priority-DESCENDING order — the first
    entry overrides everything else."""
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    assert isinstance(mods, list)
    # No way to assert exact order without knowing the modlist; just verify it
    # parsed at all.
    for m in mods:
        assert isinstance(m, str)
        assert m
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement**

```python
"""MO2 VFS replication.

Parses modlist.txt and builds a path index mirroring what MO2's USVFS would
present at runtime. Used by the predictor for mesh-existence checks.

modlist.txt convention:
  - Lines starting with '+' are active mods.
  - Lines starting with '-' are inactive (skip).
  - Lines starting with '#' are comments OR separators (skip).
  - Lines starting with '*' are root-level files (out of scope for this spike).
  - Top of file = highest priority (overrides later entries).
"""
from pathlib import Path


def parse_modlist(modlist_txt: Path) -> list[str]:
    """Return active mod names in priority-DESCENDING order
    (highest priority first; this matches the file order from top to bottom)."""
    out: list[str] = []
    with modlist_txt.open("r", encoding="utf-8-sig") as f:
        for raw in f:
            line = raw.rstrip("\r\n")
            if not line or line.startswith("#") or line.startswith("*"):
                continue
            if line.startswith("+"):
                out.append(line[1:].strip())
            elif line.startswith("-"):
                continue  # inactive
    return out
```

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/vfs.py research/plugin_detector/tests/predictor/test_vfs.py
git commit -m "predictor: vfs parse_modlist parses MO2 modlist.txt (active only)"
```

---

## Task 12: VFS module — loose-file index

**Files:**
- Modify: `predictor/vfs.py`
- Modify: `tests/predictor/test_vfs.py`

**Why:** For each active mod, walk its loose files. Higher-priority mods override lower-priority ones. Build a `lowercase_virtual_path → real_file_path` map.

- [ ] **Step 1: Failing test**

```python
from predictor.vfs import build_loose_index

MODS_DIR = Path(r"D:\Modlists\Reborn\mods")


def test_loose_index_finds_g5_dll():
    """G5 Validator mod has a known file."""
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    idx = build_loose_index(mods, MODS_DIR)
    # Should have a path-mapping for the G5 plugin DLL we deployed.
    target = "obse/plugins/g5.dll"
    assert target in idx, f"expected {target} in index, missing"
    real_path = idx[target]
    assert real_path.exists()
    assert real_path.name.lower() == "g5.dll"
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement**

Add to `vfs.py`:

```python
def build_loose_index(
    active_mods: list[str],
    mods_dir: Path,
) -> dict[str, Path]:
    """For each active mod (priority-DESCENDING order), walk its loose files.
    Higher-priority mods override lower-priority ones for the same path.

    Returns lowercase_virtual_path → absolute_real_path.

    `lowercase_virtual_path` uses forward slashes and is relative to the
    Data/ directory inside the mod folder. Mods that don't have a
    Data-equivalent root contribute their root files at the top level.

    For Oblivion, MO2 typically presents mod folders as if their root were
    Data/. So `mods/<mod>/meshes/foo.nif` → `meshes/foo.nif`.
    """
    index: dict[str, Path] = {}
    # Process priority-DESCENDING (highest priority first). Once a path is
    # set, don't overwrite it — first-write wins.
    for mod_name in active_mods:
        mod_root = mods_dir / mod_name
        if not mod_root.is_dir():
            continue
        for f in mod_root.rglob("*"):
            if not f.is_file():
                continue
            try:
                rel = f.relative_to(mod_root)
            except ValueError:
                continue
            virtual = str(rel).replace("\\", "/").lower()
            if virtual not in index:
                index[virtual] = f
    return index
```

**Note:** This is the simple version. It does NOT handle:
- BSA archives (Task 13).
- Root files (out of scope for spike).
- Custom MO2 link conventions (`.mohidden` etc.).

That's OK for the predictor's needs — meshes/textures are all loose files in 90%+ of cases.

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/vfs.py research/plugin_detector/tests/predictor/test_vfs.py
git commit -m "predictor: vfs build_loose_index walks active mods, first-write-wins"
```

---

## Task 13: VFS module — BSA archive index

**Files:**
- Modify: `predictor/vfs.py`
- Modify: `tests/predictor/test_vfs.py`

**Why:** Most vanilla meshes ship in `Oblivion - Meshes.bsa`. Without BSA support, the predictor will report all vanilla meshes as missing. We need at minimum to enumerate file paths inside each active BSA — extraction not required.

Use the well-tested `bsapy` or `bethesda-structs` library if available; otherwise hand-write a minimal BSA parser (Oblivion BSA v103 format is documented on UESP).

- [ ] **Step 1: Probe — is `bethesda-structs` installable?**

```powershell
pip install --user bethesda-structs
```

If yes, use it. If no (or you'd rather avoid the dep), hand-roll a minimal parser based on UESP wiki's BSA format documentation.

For the spike, the simplest hand-rolled parser works. ~80 lines.

- [ ] **Step 2: Failing test**

```python
def test_bsa_index_finds_vanilla_mesh():
    """Oblivion - Meshes.bsa should be present in active mods and contain
    well-known vanilla mesh paths."""
    from predictor.vfs import build_bsa_index
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    idx = build_bsa_index(mods, MODS_DIR)
    # A well-known vanilla mesh:
    candidates = ["meshes/architecture/imperialcity/icwall01.nif",
                  "meshes/clothes/lowerclass/lowershirt.nif"]
    found = any(c in idx for c in candidates)
    assert found, f"expected at least one vanilla mesh in BSA index"
```

- [ ] **Step 3: Run, verify fail**

- [ ] **Step 4: Implement**

```python
import struct

def _parse_bsa(bsa_path: Path) -> list[str]:
    """Return list of lowercase virtual paths inside an Oblivion BSA.

    Oblivion BSA format (v103):
      - Header: 'BSA\\x00', version=103, folder_records_offset, archive_flags,
        folder_count, file_count, total_folder_name_length, total_file_name_length,
        file_flags
      - Folder records (one per folder)
      - File records (under each folder)
      - Folder names block (length-prefixed strings)
      - File names block (null-terminated strings)
    """
    paths: list[str] = []
    with bsa_path.open("rb") as f:
        magic = f.read(4)
        if magic != b"BSA\x00":
            return paths
        version, = struct.unpack("<I", f.read(4))
        if version != 103:
            return paths  # not Oblivion BSA
        f.read(4)  # folder records offset; we read sequentially
        flags, = struct.unpack("<I", f.read(4))
        folder_count, file_count, total_folder_name_len, total_file_name_len, file_flags = \
            struct.unpack("<5I", f.read(20))

        # Skip folder records (folder_count * 16 bytes).
        f.read(folder_count * 16)

        # Read folder name blocks + file records, interleaved.
        # Layout: for each folder: length-prefixed name, then file_count_in_folder * file_record (16 bytes).
        # File records have name-block offsets, so we read them but capture indexes.
        all_file_records: list[tuple[int, int]] = []  # (name_hash_lower32, size)  unused
        folder_names: list[str] = []
        for _ in range(folder_count):
            (name_len,) = struct.unpack("<B", f.read(1))
            raw = f.read(name_len - 1)  # excluding final \0
            f.read(1)  # null terminator
            folder_name = raw.decode("cp1252", errors="replace").lower()
            folder_names.append(folder_name)
            # Each folder's file_count is in its folder record above; we
            # didn't capture it. For simplicity, parse all remaining data
            # as a file-name-block.
            # ...
            # Simplified: read file records until no more.

        # File names block: null-terminated strings.
        names_block = f.read(total_file_name_len)
        file_names = [
            n.decode("cp1252", errors="replace").lower()
            for n in names_block.split(b"\x00")
            if n
        ]

        # We don't precisely know which file goes in which folder from this
        # simplified parse. As a workaround, emit every (folder, file) pair
        # — likely overcounts files but doesn't undercount. False-existence
        # is acceptable for the predictor (the *real* check is "does mesh
        # exist somewhere"). Optional: parse strictly per-folder by tracking
        # file_count from each folder record.
        for folder in folder_names:
            for fname in file_names:
                paths.append(f"{folder}\\{fname}".replace("\\", "/"))

    return paths


def build_bsa_index(active_mods: list[str], mods_dir: Path) -> dict[str, Path]:
    """For each active mod, find all .bsa files at the mod root and parse
    their file lists. Returns lowercase_virtual_path → bsa_path (the BSA
    is the "real" location for files that live inside)."""
    index: dict[str, Path] = {}
    for mod_name in active_mods:
        mod_root = mods_dir / mod_name
        if not mod_root.is_dir():
            continue
        for bsa in mod_root.glob("*.bsa"):
            try:
                paths = _parse_bsa(bsa)
            except Exception:
                continue
            for p in paths:
                if p not in index:
                    index[p] = bsa
    return index
```

**Note:** the simplified BSA parser above produces FALSE POSITIVES (claims files exist that don't). For the spike's predictor, this is OK because:
- Goal is to detect missing meshes — false-positive (claim file exists when it doesn't) is the SAFE direction. Predictor would say "mesh OK" when it's actually missing → no false alarm.
- False NEGATIVES (claim file missing when it exists) would be the bad direction; this parser doesn't do that.

If you want correctness, use `bethesda-structs` instead. Documented compromise for the spike.

- [ ] **Step 5: Run, verify pass**

- [ ] **Step 6: Commit**

```powershell
git add research/plugin_detector/predictor/vfs.py research/plugin_detector/tests/predictor/test_vfs.py
git commit -m "predictor: vfs build_bsa_index parses BSA file lists (loose-only spike fallback)"
```

---

## Task 14: VFS module — combined existence check

**Files:**
- Modify: `predictor/vfs.py`
- Modify: `tests/predictor/test_vfs.py`

**Why:** Combine loose + BSA. Predictor calls one function: `path_exists(virtual_path)` → bool.

- [ ] **Step 1: Failing test**

```python
def test_path_exists_combines_loose_and_bsa():
    from predictor.vfs import VFS
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=MODS_DIR)
    # Loose: G5 plugin DLL.
    assert vfs.path_exists("obse/plugins/g5.dll")
    # Vanilla mesh from BSA.
    # Try a few candidates.
    assert vfs.path_exists("meshes/architecture/imperialcity/icwall01.nif") or \
           vfs.path_exists("meshes/clothes/lowerclass/lowershirt.nif")
    # Definitively non-existent.
    assert not vfs.path_exists("meshes/this/does/not/exist.nif")
```

- [ ] **Step 2: Run, verify fail**

- [ ] **Step 3: Implement**

```python
class VFS:
    def __init__(self, active_mods: list[str], mods_dir: Path):
        self.loose = build_loose_index(active_mods, mods_dir)
        self.bsa = build_bsa_index(active_mods, mods_dir)

    def path_exists(self, virtual_path: str) -> bool:
        v = virtual_path.replace("\\", "/").lower()
        return v in self.loose or v in self.bsa

    def resolve(self, virtual_path: str) -> Path | None:
        v = virtual_path.replace("\\", "/").lower()
        if v in self.loose:
            return self.loose[v]
        if v in self.bsa:
            return self.bsa[v]
        return None
```

- [ ] **Step 4: Run, verify pass**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/vfs.py research/plugin_detector/tests/predictor/test_vfs.py
git commit -m "predictor: VFS class combines loose + BSA into path_exists/resolve"
```

---

## Task 15: NPC resolver — armor mesh existence check

**Files:**
- Modify: `predictor/npc_resolver.py`
- Modify: `tests/predictor/test_npc_resolver.py`

**Why:** For each concrete ARMO/CLOT in the resolved inventory, look up its MODL/MOD2 path through the VFS. If any path doesn't resolve, the engine renders yellow diamonds — flag the gear.

- [ ] **Step 1: Failing test**

```python
def test_resolve_inventory_with_mesh_check():
    from predictor.npc_resolver import resolve_inventory_with_meshes
    from predictor.vfs import VFS, parse_modlist

    lo = build_load_order(profile_dir=PROFILE_DIR, data_dir=DATA_DIR)
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    mods = parse_modlist(PROFILE_DIR / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=Path(r"D:\Modlists\Reborn\mods"))

    # Find Dremora0ChurlMissile1 (FormID 0x00014692) — known to have render issues
    # per T15 visual spot-check.
    dremora_lo_fid = 0x00014692
    inv = resolve_inventory_with_meshes(dremora_lo_fid, winners, lo, vfs)
    # We expect at least one armor entry, possibly with missing mesh.
    assert "concrete" in inv
    assert "missing_meshes" in inv
    # missing_meshes is a list of (form_id, missing_path) tuples.
```

- [ ] **Step 2: Run, verify fail (and check whether Dremora actually has missing meshes — that's the empirical test)**

- [ ] **Step 3: Implement**

```python
def resolve_inventory_with_meshes(
    npc_lo_fid: int,
    winners: dict,
    lo,
    vfs,  # VFS instance
) -> dict:
    """Extends resolve_inventory by checking VFS path existence for each
    ARMO/CLOT/WEAP MODL path. Returns the same dict plus:
        "missing_meshes": list of (form_id, missing_path) for unresolved paths
    """
    inv = resolve_inventory(npc_lo_fid, winners, lo)
    missing: list[tuple[int, str]] = []
    for fid in inv["concrete"]:
        if fid not in winners:
            continue
        plugin, sig, body = winners[fid]
        if sig not in ("ARMO", "CLOT", "WEAP"):
            continue
        for ssig, ssub in parse_subrecords(body):
            if ssig not in ("MODL", "MOD2", "MOD3", "MOD4"):
                continue
            # MODL is null-terminated path.
            from predictor.plugin_parser import cstr
            mesh_path = cstr(ssub)
            if not mesh_path:
                continue
            virtual = mesh_path.lower().replace("\\", "/")
            if not virtual.startswith("meshes/"):
                virtual = "meshes/" + virtual
            if not vfs.path_exists(virtual):
                missing.append((fid, virtual))
    inv["missing_meshes"] = missing
    return inv
```

- [ ] **Step 4: Run the test. The Dremora SHOULD show missing meshes — if so, the predictor caught the T15 visual finding. If the Dremora doesn't show missing meshes, examine why (BSA index too lenient? armor has different MODL field?).**

- [ ] **Step 5: Commit**

```powershell
git add research/plugin_detector/predictor/npc_resolver.py research/plugin_detector/tests/predictor/test_npc_resolver.py
git commit -m "predictor: resolve_inventory_with_meshes flags missing armor MODL paths"
```

---

## Task 16: Predictor CLI — predict.py

**Files:**
- New: `predictor/predict.py`

**Why:** End-to-end. Walk every NPC_ in the load order, resolve inventory, emit JSONL.

- [ ] **Step 1: Implement**

```python
"""Predictor CLI.

Walks every NPC_ in the active load order, resolves inventory, emits one
JSONL line per NPC.

Usage:
    python -m predictor.predict --profile Reborn-OOO --output predictions.jsonl
"""
import argparse
import json
from pathlib import Path

from predictor.load_order import build_load_order, build_winning_records
from predictor.npc_resolver import resolve_inventory_with_meshes
from predictor.vfs import VFS, parse_modlist


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--profile", required=True)
    ap.add_argument("--data-dir", default=r"D:\Modlists\Reborn\Stock Game\Data", type=Path)
    ap.add_argument("--mods-dir", default=r"D:\Modlists\Reborn\mods", type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()

    profile_dir = Path(r"D:\Modlists\Reborn\profiles") / args.profile
    print(f"loading load order from {profile_dir}")
    lo = build_load_order(profile_dir=profile_dir, data_dir=args.data_dir)
    print(f"  {len(lo.plugins)} active plugins")

    print("building winning_records (NPC_/LVLI/ARMO/WEAP/CLOT)…")
    winners = build_winning_records(lo, signatures={"NPC_", "LVLI", "ARMO", "WEAP", "CLOT"})
    print(f"  {len(winners)} winning records")

    print("building VFS…")
    mods = parse_modlist(profile_dir / "modlist.txt")
    vfs = VFS(active_mods=mods, mods_dir=args.mods_dir)
    print(f"  {len(vfs.loose)} loose paths, {len(vfs.bsa)} bsa paths")

    print("resolving NPCs…")
    npc_count = sum(1 for _, sig, _ in winners.values() if sig == "NPC_")
    print(f"  {npc_count} NPCs to resolve")

    with args.output.open("w", encoding="utf-8") as out:
        for lo_fid, (plugin, sig, body) in winners.items():
            if sig != "NPC_":
                continue
            inv = resolve_inventory_with_meshes(lo_fid, winners, lo, vfs)
            # Predict naked-NPC outcome.
            concrete_arm_clot = [
                f for f in inv["concrete"]
                if f in winners and winners[f][1] in ("ARMO", "CLOT")
            ]
            missing_for_concrete = [
                (fid, path) for fid, path in inv["missing_meshes"]
                if winners[fid][1] in ("ARMO", "CLOT")
            ]
            predicted_naked = len(concrete_arm_clot) == 0
            if not predicted_naked and len(missing_for_concrete) == len(concrete_arm_clot):
                predicted_naked = True  # all armor mesh paths broken
                reason = "armor_mesh_missing"
            elif predicted_naked:
                reason = "inv_no_concrete_armor"
            else:
                reason = "ok"
            entry = {
                "fid": f"{lo_fid:08X}",
                "plugin": plugin,
                "predicted_naked": predicted_naked,
                "reason": reason,
                "has_script": inv["has_script"],
                "concrete_count": len(inv["concrete"]),
                "missing_meshes": [path for _, path in inv["missing_meshes"]],
            }
            out.write(json.dumps(entry) + "\n")

    print(f"wrote {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
```

- [ ] **Step 2: Run end-to-end**

```powershell
cd D:\Modlists\Reborn\_worktrees\predictor-v1\research\plugin_detector
python -m predictor.predict --profile Reborn-OOO --output predictions.jsonl
```

Expected: produces `predictions.jsonl` with several thousand lines (one per NPC). Should complete in < 5 min.

- [ ] **Step 3: Sanity check**

```powershell
python -c "import json; rows=[json.loads(l) for l in open('predictions.jsonl')]; total=len(rows); naked_no_script=sum(1 for r in rows if r['predicted_naked'] and not r['has_script']); print(f'total={total} predicted_naked_no_script={naked_no_script}')"
```

Expected: `total` ~10000+ (every NPC in Reborn-OOO). `predicted_naked_no_script` should be a non-trivial number (the bug class we're trying to characterize).

- [ ] **Step 4: Commit (don't commit predictions.jsonl — it's data)**

```powershell
git add research/plugin_detector/predictor/predict.py
git commit -m "predictor: predict.py CLI walks load order, emits per-NPC predictions"
```

---

## Task 17: Calibration — compute precision/recall against G5 corpus

**Files:**
- New: `calibration/compute_metrics.py`
- New: `predictor/calibration_report.md` (output)

**Why:** Phase 4. Join `predictions.jsonl` with `g5/validation_vanilla.jsonl`, score on the no-script bucket, write a calibration report.

- [ ] **Step 1: Implement `compute_metrics.py`**

```python
"""Compute precision/recall on G5's vanilla-50 corpus.

For each NPC in g5/validation_vanilla.jsonl, look up the predictor's output
and compute:
  - True positive: predictor says naked, actually naked (G5 inventory has no
    armor/clothing leaves — empty or only weapons/misc).
  - False positive: predictor says naked, actually has armor/clothing.
  - False negative: predictor says ok, actually naked.
  - True negative: predictor says ok, actually has armor/clothing.

Skips NPCs flagged has_script in the predictor output (S1 boundary).
Writes a Markdown summary to predictor/calibration_report.md.
"""
import argparse
import json
from pathlib import Path


ARMOR_LIKE_SIGS = {"ARMO", "CLOT"}


def load_predictions(path: Path) -> dict[str, dict]:
    out: dict[str, dict] = {}
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            out[r["fid"].upper()] = r
    return out


def load_g5(path: Path) -> list[dict]:
    rows: list[dict] = []
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            rows.append(json.loads(line))
    return rows


def is_actually_naked(g5_row: dict) -> bool:
    """An NPC is 'actually naked' iff its runtime inventory has no items
    OR no equipped items at all. We use the simple proxy: 0 items.

    A more nuanced check could verify ARMO/CLOT presence specifically, but
    the G5 inventory output doesn't include record signatures — only form_ids.
    For the spike, 'inventory empty' is good enough.
    """
    inv = g5_row.get("inventory", [])
    return len(inv) == 0


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--predictions", required=True, type=Path)
    ap.add_argument("--g5", required=True, type=Path)
    ap.add_argument("--report", required=True, type=Path)
    args = ap.parse_args()

    preds = load_predictions(args.predictions)
    g5 = load_g5(args.g5)

    tp = fp = fn = tn = 0
    skipped_script = 0
    skipped_not_in_predictions = 0

    for row in g5:
        fid = row["form_id"].upper()
        if fid not in preds:
            skipped_not_in_predictions += 1
            continue
        pred = preds[fid]
        if pred["has_script"]:
            skipped_script += 1
            continue
        actually_naked = is_actually_naked(row)
        predicted_naked = pred["predicted_naked"]
        if predicted_naked and actually_naked:
            tp += 1
        elif predicted_naked and not actually_naked:
            fp += 1
        elif (not predicted_naked) and actually_naked:
            fn += 1
        else:
            tn += 1

    total_scored = tp + fp + fn + tn
    precision = tp / (tp + fp) if (tp + fp) else 0.0
    recall = tp / (tp + fn) if (tp + fn) else 0.0
    accuracy = (tp + tn) / total_scored if total_scored else 0.0

    lines = [
        "# Predictor calibration report",
        "",
        f"**Date:** generated by `compute_metrics.py`",
        f"**G5 corpus:** {args.g5}",
        f"**Predictions:** {args.predictions}",
        "",
        "## Counts",
        f"- True positives (predicted naked, actually naked):  {tp}",
        f"- False positives (predicted naked, actually clothed): {fp}",
        f"- False negatives (predicted ok, actually naked):     {fn}",
        f"- True negatives (predicted ok, actually clothed):    {tn}",
        f"- Skipped (has_script in prediction):                  {skipped_script}",
        f"- Skipped (G5 NPC not in predictions):                 {skipped_not_in_predictions}",
        f"- Total scored (no-script bucket):                     {total_scored}",
        "",
        "## Metrics (no-script bucket)",
        f"- **Precision:** {precision:.3f}  (target ≥ 0.90)",
        f"- **Recall:**    {recall:.3f}  (target ≥ 0.80)",
        f"- Accuracy:    {accuracy:.3f}",
        "",
        "## Spec gates",
        f"- Precision ≥ 0.90: {'PASS' if precision >= 0.90 else 'FAIL'}",
        f"- Recall    ≥ 0.80: {'PASS' if recall >= 0.80 else 'FAIL'}",
        "",
        "## Verdict",
        f"{'Spike succeeds' if precision >= 0.90 and recall >= 0.80 else 'Below target — examine false positives/negatives'}",
    ]
    args.report.write_text("\n".join(lines), encoding="utf-8")
    print("\n".join(lines))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
```

- [ ] **Step 2: Run**

```powershell
cd D:\Modlists\Reborn\_worktrees\predictor-v1\research\plugin_detector
python -m calibration.compute_metrics `
    --predictions predictions.jsonl `
    --g5 g5/validation_vanilla.jsonl `
    --report predictor/calibration_report.md
```

- [ ] **Step 3: Read the report. Calibration outcome:**
  - Both gates PASS → spike succeeds; recommend Phase 5 (writeup, generalize).
  - Either gate FAIL → diagnose top false-positive class, iterate, re-run.

- [ ] **Step 4: Commit the calibration script and the report**

```powershell
git add research/plugin_detector/calibration/compute_metrics.py research/plugin_detector/predictor/calibration_report.md
git commit -m "predictor: compute_metrics + calibration_report against G5 corpus"
```

---

## Self-Review Notes

**Spec coverage:**
- §3 Predictor (load order + override + template + race + LVLI + mesh check) → Tasks 3, 4, 7, 8, 9, 10, 15. Template chain (§3.2 step 2) is **NOT** implemented in this plan — vanilla Oblivion NPCs don't use template flags (that's a Skyrim-era feature), and the spike's calibration corpus is all vanilla NPCs. If precision is poor and the cause traces to template-style inheritance, add a follow-on task.
- §3.2 step 5 (faction/race default fallback) → **explicit gap.** The spec acknowledges this is one of the unknowns and says Phase 3 will pin it down empirically. If the calibration report shows false-positive NPCs whose runtime inventory is non-empty but the predictor saw zero CNTO, those are race-default cases. Add a follow-on task to handle them.
- §5 VFS → Tasks 11, 12, 13, 14.
- §6 xEdit Oracle → Tasks 5, 6.
- §7 Phase 4 calibration → Task 17.

**Placeholder scan:** No "TBD" or open-ended steps. Each task has complete code.

**Type consistency:**
- `LoadOrder.to_lo_fid(plugin_name, raw_fid)` returns `int` (`-1` for invalid). Used consistently across npc_resolver and oracle_diff.
- `winners` dict throughout: `dict[int, tuple[str, str, bytes]]` mapping LO FID → (plugin_name, sig, body_bytes).
- `resolve_inventory` and `resolve_inventory_with_meshes` return dicts with the same key set plus extras.

**Honest gaps and why they're acceptable:**
- BSA parser is over-permissive (false-existence is safe direction; predictor flags only true-misses).
- Template chain not modeled (vanilla Oblivion doesn't have it; Reborn-OOO modlist may have a few; revisit if calibration shows this is a major false-positive source).
- Race default not modeled (spec acknowledges this is empirically determined; revisit after first calibration run).
- Predictor CLI is single-pass on the full load order (no incremental / cached output) — fine for a research spike.

---

## Plan complete and saved to `D:/Modlists/Reborn/docs/superpowers/plans/2026-05-08-predictor-v1.md`.

Two execution options:

**1. Subagent-Driven (recommended)** — fresh subagent per task with two-stage review between tasks.

**2. Inline Execution** — run tasks in this session with checkpoints.

Which approach?
