"""Download a list of Nexus mods via Premium API.

Reads NEXUS_API_KEY from research/.env (or environment).
Never echoes the key. Saves files to D:\\Modlists\\Reborn\\downloads\\
with MO2-compatible .meta sidecars.

Usage:
    python download_nexus_deps.py [--list]      # show what would download
    python download_nexus_deps.py [--dry-run]   # query API but don't download
    python download_nexus_deps.py               # actually download
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
import urllib.parse
import urllib.request
from pathlib import Path

GAME = "oblivion"
DOWNLOADS = Path(r"D:\Modlists\Reborn\downloads")
ENV_FILE = Path(__file__).parent / ".env"

# Mods to fetch. fileID=None → resolve to the main/latest file via API.
# (mod_id, optional fileID, optional human label)
TARGETS = [
    (14506, 27790, "Dragon Claw Sword And Shield (jojjo) FIXED"),
    (36954, 75771, "Sentinel Legendary Weapons And Armors - Main"),
    (10505,  9393, "Lost Paladins of the Divines 1_0 OMOD-Ready"),
    (23150, 39209, "RealSwords Nord v1_0"),
    (16927, 24116, "UFF Unrepentant Archer"),
    # NOT on Oblivion Nexus (live on TES Alliance / waalx forum):
    #   RealSwords Orc, RealSwords Imperial, WAC
]


def load_env_file(path: Path):
    """Load KEY=VALUE lines from a .env into os.environ. Skip comments / blanks.
    Never logs values."""
    if not path.exists():
        return
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#"):
            continue
        if "=" not in line:
            continue
        k, v = line.split("=", 1)
        k = k.strip()
        v = v.strip().strip('"').strip("'")
        if k and v and k not in os.environ:
            os.environ[k] = v


def api_get(path: str, api_key: str):
    """GET request to Nexus API. Returns parsed JSON."""
    url = f"https://api.nexusmods.com{path}"
    req = urllib.request.Request(url, headers={
        "apikey": api_key,
        "Accept": "application/json",
        "User-Agent": "reborn-deps-downloader/1.0",
    })
    with urllib.request.urlopen(req, timeout=30) as r:
        return json.loads(r.read().decode("utf-8"))


def get_mod_info(mod_id: int, api_key: str):
    return api_get(f"/v1/games/{GAME}/mods/{mod_id}.json", api_key)


def get_files(mod_id: int, api_key: str):
    return api_get(f"/v1/games/{GAME}/mods/{mod_id}/files.json", api_key)


def get_download_link(mod_id: int, file_id: int, api_key: str):
    return api_get(f"/v1/games/{GAME}/mods/{mod_id}/files/{file_id}/download_link.json", api_key)


def pick_main_file(files_json):
    """Pick the most recent main-file (category_id == 1)."""
    files = files_json.get("files", [])
    mains = [f for f in files if f.get("category_id") == 1]
    if not mains:
        # Fall back to any file
        mains = files
    if not mains:
        return None
    # Most recent uploaded_timestamp wins
    mains.sort(key=lambda f: f.get("uploaded_timestamp", 0), reverse=True)
    return mains[0]


def already_downloaded(filename: str) -> bool:
    return (DOWNLOADS / filename).exists()


def write_meta(filename: str, mod_id: int, file_id: int, mod_name: str,
               file_name: str, version: str, url_list: list[str]):
    """Write MO2-compatible .meta sidecar."""
    meta_path = DOWNLOADS / (filename + ".meta")
    url_csv = ";".join(url_list) if url_list else ""
    content = f"""[General]
gameName=Oblivion
modID={mod_id}
fileID={file_id}
url=\"{url_csv}\"
name={file_name}
description=Downloaded via Nexus API by download_nexus_deps.py
modName={mod_name}
version={version}
fileTime=
fileCategory=1
category=
repository=Nexus
installed=false
uninstalled=false
paused=false
removed=false
"""
    meta_path.write_text(content, encoding="utf-8")


def download_file(url: str, dest: Path):
    """Stream a download to disk."""
    # URL-encode path component while preserving query string (Nexus CDN URLs
    # contain spaces in filenames that urllib refuses to send raw).
    parts = urllib.parse.urlsplit(url)
    safe_path = urllib.parse.quote(parts.path, safe="/")
    encoded = urllib.parse.urlunsplit((parts.scheme, parts.netloc, safe_path, parts.query, parts.fragment))
    req = urllib.request.Request(encoded, headers={"User-Agent": "Mozilla/5.0"})
    with urllib.request.urlopen(req, timeout=120) as r:
        total = int(r.headers.get("Content-Length", "0") or 0)
        downloaded = 0
        chunk = 64 * 1024
        with dest.open("wb") as f:
            while True:
                data = r.read(chunk)
                if not data:
                    break
                f.write(data)
                downloaded += len(data)
                if total:
                    pct = downloaded * 100 // total
                    sys.stdout.write(f"\r    {downloaded // 1024:>8} / {total // 1024} KB ({pct}%)")
                    sys.stdout.flush()
        sys.stdout.write("\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--list", action="store_true", help="list targets and exit")
    ap.add_argument("--dry-run", action="store_true", help="query API but don't download")
    args = ap.parse_args()

    load_env_file(ENV_FILE)

    if args.list:
        print("Targets:")
        for mid, fid, label in TARGETS:
            print(f"  modID={mid:6d}  fileID={fid}  {label}")
        return

    api_key = os.environ.get("NEXUS_API_KEY", "").strip()
    if not api_key:
        print("ERROR: NEXUS_API_KEY not set. Add it to research/.env or export it.")
        sys.exit(1)
    # Don't echo the key. Just confirm presence via length:
    print(f"API key loaded ({len(api_key)} chars)")

    DOWNLOADS.mkdir(parents=True, exist_ok=True)

    for mid, fid, label in TARGETS:
        print(f"\n=== mod {mid}: {label} ===")
        try:
            info = get_mod_info(mid, api_key)
        except Exception as e:
            print(f"  !! failed to fetch mod info: {e}")
            continue
        mod_name = info.get("name", f"mod{mid}")
        print(f"  Name: {mod_name}")

        if fid is None:
            files = get_files(mid, api_key)
            f = pick_main_file(files)
            if not f:
                print("  !! no main file found")
                continue
            fid = f["file_id"]
        else:
            # Validate file exists
            files = get_files(mid, api_key)
            f = next((x for x in files.get("files", []) if x.get("file_id") == fid), None)
            if not f:
                print(f"  !! file {fid} not in mod's file list")
                continue

        print(f"  File: {f.get('name')} (id={fid}, size={f.get('size_in_bytes', 0):,} B)")
        filename = f.get("file_name") or f.get("name")
        if not filename:
            print("  !! no filename")
            continue

        if already_downloaded(filename):
            print(f"  already in downloads/: {filename}")
            continue

        if args.dry_run:
            print(f"  [dry-run] would download {filename}")
            continue

        try:
            links = get_download_link(mid, fid, api_key)
        except Exception as e:
            print(f"  !! download_link failed: {e}")
            continue
        if not links:
            print("  !! empty download links")
            continue

        # Pick first CDN URL
        urls = [l.get("URI") for l in links if l.get("URI")]
        if not urls:
            print("  !! no URLs")
            continue
        url = urls[0]

        dest = DOWNLOADS / filename
        print(f"  -> {dest.name}")
        try:
            download_file(url, dest)
        except Exception as e:
            print(f"  !! download failed: {e}")
            if dest.exists():
                dest.unlink()
            continue

        write_meta(filename, mid, fid, mod_name, filename, f.get("version", ""), urls)
        print(f"  done.")
        # Be polite to the API
        time.sleep(0.5)


if __name__ == "__main__":
    main()
