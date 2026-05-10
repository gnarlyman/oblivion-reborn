"""Fetch Nexus mod description HTML via Premium API.

Reads NEXUS_API_KEY from research/.env (never echoes it).
Strips HTML/BBCode so output is grep-friendly.

Two modes:
  python fetch_mod_descriptions.py 49939 54863          # ad-hoc, prints to stdout
  python fetch_mod_descriptions.py --all                # walk manifest.csv, build cache + dump

Bulk mode (--all):
  - Reads manifest.csv, extracts mod_id from nexus_url for every row that has one
  - Caches each mod's API response at research/nexus_cache/<mod_id>.json
  - Re-runs are free (cache hits skip the API). Use --refresh to force re-fetch.
  - Concatenates all descriptions to research/mod_descriptions.txt with manifest
    metadata in the header so grep can scope by status / section / order:
        === <id> | <name> | by <author> | v<ver> | mo2_order=N | section=S | status=X | mod_kind=K ===
"""
from __future__ import annotations

import argparse
import csv
import html
import json
import os
import re
import sys
import time
import urllib.error
import urllib.request
from pathlib import Path

GAME = "oblivion"
SCRIPT_DIR = Path(__file__).parent
ENV_FILE = SCRIPT_DIR / ".env"
MANIFEST = SCRIPT_DIR / "manifest.csv"
CACHE_DIR = SCRIPT_DIR / "nexus_cache"
DUMP_FILE = SCRIPT_DIR / "mod_descriptions.txt"

NEXUS_URL_RE = re.compile(r"nexusmods\.com/oblivion/mods/(\d+)", re.I)


def load_env_file(path: Path) -> None:
    if not path.exists():
        return
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, v = line.split("=", 1)
        k = k.strip()
        v = v.strip().strip('"').strip("'")
        if k and v and k not in os.environ:
            os.environ[k] = v


def api_get(path: str, api_key: str, max_retries: int = 3):
    """GET with backoff for 429 / 5xx."""
    url = f"https://api.nexusmods.com{path}"
    req = urllib.request.Request(url, headers={
        "apikey": api_key,
        "Accept": "application/json",
        "User-Agent": "reborn-research/1.0",
    })
    for attempt in range(max_retries):
        try:
            with urllib.request.urlopen(req, timeout=30) as resp:
                return json.loads(resp.read().decode("utf-8"))
        except urllib.error.HTTPError as e:
            if e.code in (429, 500, 502, 503, 504) and attempt < max_retries - 1:
                wait = 2 ** attempt
                time.sleep(wait)
                continue
            raise


_TAG_RE = re.compile(r"<[^>]+>")
_BR_RE = re.compile(r"<br\s*/?>", re.I)
_BLOCK_RE = re.compile(r"</(p|div|li|tr|h[1-6])>", re.I)
_BBCODE_BLOCK_RE = re.compile(
    r"\[/?(?:b|i|u|s|center|left|right|color|size|font|url|img|quote|spoiler|list|table|tr|td|youtube|video|hr|code|pre)(?:=[^\]]*)?\]",
    re.I,
)
_BBCODE_BULLET_RE = re.compile(r"\[\*\]", re.I)


def strip_html(s: str) -> str:
    if not s:
        return ""
    s = _BR_RE.sub("\n", s)
    s = _BLOCK_RE.sub("\n", s)
    s = _TAG_RE.sub("", s)
    s = _BBCODE_BULLET_RE.sub("\n  - ", s)
    s = _BBCODE_BLOCK_RE.sub("", s)
    s = html.unescape(s)
    s = re.sub(r"[​﻿]", "", s)
    s = re.sub(r"\n{3,}", "\n\n", s)
    return s.strip()


def fetch_one(mod_id: int, api_key: str, *, cache_dir: Path | None, refresh: bool):
    """Return parsed JSON. Honors and updates cache when cache_dir is given."""
    if cache_dir is not None:
        cache_path = cache_dir / f"{mod_id}.json"
        if not refresh and cache_path.exists():
            try:
                cached = json.loads(cache_path.read_text(encoding="utf-8"))
                if "error" not in cached:
                    return cached
            except Exception:
                pass
    data = api_get(f"/v1/games/{GAME}/mods/{mod_id}.json", api_key)
    if cache_dir is not None:
        cache_dir.mkdir(parents=True, exist_ok=True)
        (cache_dir / f"{mod_id}.json").write_text(
            json.dumps(data, ensure_ascii=False, indent=2), encoding="utf-8"
        )
    return data


def render_entry(mod_id: int, data: dict, manifest_row: dict | None, raw: bool) -> str:
    name = data.get("name", "?")
    author = data.get("author", "?")
    ver = data.get("version", "?")
    summary = data.get("summary", "") or ""
    desc = data.get("description", "") or ""
    extras = []
    if manifest_row:
        for k in ("mo2_order", "section", "status", "mod_kind"):
            v = manifest_row.get(k, "").strip()
            if v:
                extras.append(f"{k}={v}")
    extras_str = (" | " + " | ".join(extras)) if extras else ""
    header = f"=== {mod_id} | {name} | by {author} | v{ver}{extras_str} ==="
    body_desc = desc if raw else strip_html(desc)
    return f"{header}\nSUMMARY: {strip_html(summary)}\n---DESCRIPTION---\n{body_desc}\n"


def parse_manifest(path: Path) -> list[dict]:
    """Return manifest rows that carry a Nexus mod ID, with mod_id added."""
    rows = []
    with path.open("r", encoding="utf-8", newline="") as f:
        reader = csv.DictReader(f)
        for row in reader:
            url = (row.get("nexus_url") or "").strip()
            m = NEXUS_URL_RE.search(url)
            if not m:
                continue
            row["mod_id"] = int(m.group(1))
            rows.append(row)
    return rows


def cmd_adhoc(mod_ids: list[int], api_key: str, raw: bool) -> int:
    for mid in mod_ids:
        try:
            data = fetch_one(mid, api_key, cache_dir=None, refresh=True)
        except Exception as exc:
            print(f"\n=== mod {mid}: ERROR {exc} ===")
            continue
        print()
        print(render_entry(mid, data, manifest_row=None, raw=raw), end="")
    return 0


def cmd_all(api_key: str, raw: bool, refresh: bool, sleep_ms: int) -> int:
    rows = parse_manifest(MANIFEST)
    print(f"# {len(rows)} manifest rows with Nexus URLs", file=sys.stderr)

    # Dedupe by mod_id but remember first manifest row per id (preserves manifest order in output)
    seen: dict[int, dict] = {}
    ordered: list[int] = []
    for row in rows:
        mid = row["mod_id"]
        if mid not in seen:
            seen[mid] = row
            ordered.append(mid)

    CACHE_DIR.mkdir(parents=True, exist_ok=True)
    fetched_now = 0
    errors: list[tuple[int, str]] = []
    sleep_s = sleep_ms / 1000.0

    with DUMP_FILE.open("w", encoding="utf-8") as out:
        for i, mid in enumerate(ordered, 1):
            row = seen[mid]
            cache_path = CACHE_DIR / f"{mid}.json"
            cached = (not refresh) and cache_path.exists()
            try:
                data = fetch_one(mid, api_key, cache_dir=CACHE_DIR, refresh=refresh)
            except Exception as exc:
                msg = f"{type(exc).__name__}: {exc}"
                errors.append((mid, msg))
                # Persist error stub so we don't re-hammer the API on failures
                cache_path.write_text(
                    json.dumps({"error": msg, "mod_id": mid}, ensure_ascii=False, indent=2),
                    encoding="utf-8",
                )
                out.write(f"=== {mid} | {row.get('apw_name','?')} | ERROR: {msg} ===\n\n")
                continue

            out.write(render_entry(mid, data, manifest_row=row, raw=raw))
            out.write("\n")

            if not cached:
                fetched_now += 1
                if sleep_s > 0:
                    time.sleep(sleep_s)
            if i % 50 == 0 or i == len(ordered):
                print(f"# {i}/{len(ordered)} done ({fetched_now} fetched, {len(errors)} errors)",
                      file=sys.stderr)

    print(f"# wrote {DUMP_FILE} ({DUMP_FILE.stat().st_size:,} bytes)", file=sys.stderr)
    if errors:
        print(f"# {len(errors)} errors:", file=sys.stderr)
        for mid, msg in errors[:10]:
            print(f"#   {mid}: {msg}", file=sys.stderr)
        if len(errors) > 10:
            print(f"#   ... and {len(errors) - 10} more", file=sys.stderr)
    return 0


def main() -> int:
    try:
        sys.stdout.reconfigure(encoding="utf-8", errors="replace")
        sys.stderr.reconfigure(encoding="utf-8", errors="replace")
    except Exception:
        pass
    ap = argparse.ArgumentParser()
    ap.add_argument("mod_ids", nargs="*", type=int, help="Mod IDs (omit when using --all)")
    ap.add_argument("--all", action="store_true",
                    help="Walk manifest.csv, populate nexus_cache/, write mod_descriptions.txt")
    ap.add_argument("--refresh", action="store_true",
                    help="(--all) ignore cache, re-fetch every mod")
    ap.add_argument("--sleep-ms", type=int, default=50,
                    help="(--all) sleep between API calls (default: 50ms ≈ 20 req/s)")
    ap.add_argument("--raw", action="store_true", help="keep raw HTML/BBCode")
    args = ap.parse_args()

    if args.all and args.mod_ids:
        ap.error("--all and explicit mod_ids are mutually exclusive")
    if not args.all and not args.mod_ids:
        ap.error("specify mod IDs or pass --all")

    load_env_file(ENV_FILE)
    api_key = os.environ.get("NEXUS_API_KEY")
    if not api_key:
        print("ERROR: NEXUS_API_KEY not set", file=sys.stderr)
        return 1
    print(f"# API key loaded ({len(api_key)} chars)", file=sys.stderr)

    if args.all:
        return cmd_all(api_key, raw=args.raw, refresh=args.refresh, sleep_ms=args.sleep_ms)
    return cmd_adhoc(args.mod_ids, api_key, raw=args.raw)


if __name__ == "__main__":
    raise SystemExit(main())
