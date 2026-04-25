#!/usr/bin/env bash
# Install a Reborn .wabbajack file into a target directory using wabbajack-cli.
# Usage: scripts/install.sh [Profile] [--target=PATH] [--downloads=PATH] [--force]
#   Profile defaults to Reborn-Base. Looks for D:\Modlists\<Profile>.wabbajack.
#   --target defaults to D:\Modlists\Test\
#   --downloads defaults to D:\Modlists\Reborn\downloads\ (shared cache, no re-download)
#   --force allows installing into a non-empty target (CLOBBERS existing content)
# Env overrides: WJ_CLI, MODLISTS_DIR, REBORN_DIR

set -euo pipefail

WJ_CLI="${WJ_CLI:-/d/Wabbajack/4.2.1.3/wabbajack-cli.exe}"
MODLISTS_DIR="${MODLISTS_DIR:-/d/Modlists}"
REBORN_DIR="${REBORN_DIR:-/d/Modlists/Reborn}"
PROFILE="Reborn-Base"
TARGET=""
DOWNLOADS=""
FORCE=0

while [ $# -gt 0 ]; do
  case "$1" in
    --target=*)    TARGET="${1#--target=}";    shift ;;
    --downloads=*) DOWNLOADS="${1#--downloads=}"; shift ;;
    --force)       FORCE=1; shift ;;
    -h|--help)
      sed -n '2,10p' "$0"; exit 0 ;;
    -*)
      echo "ERROR: unknown flag: $1" >&2; exit 64 ;;
    *)
      PROFILE="$1"; shift ;;
  esac
done

TARGET="${TARGET:-$MODLISTS_DIR/Test}"
DOWNLOADS="${DOWNLOADS:-$REBORN_DIR/downloads}"
WABBAJACK_FILE="$MODLISTS_DIR/$PROFILE.wabbajack"

if [ ! -x "$WJ_CLI" ]; then
  echo "ERROR: wabbajack-cli not found at $WJ_CLI" >&2
  exit 1
fi

if [ ! -f "$WABBAJACK_FILE" ]; then
  echo "ERROR: $WABBAJACK_FILE not found" >&2
  echo "Available .wabbajack files:" >&2
  ls "$MODLISTS_DIR"/*.wabbajack 2>/dev/null | sed 's|.*/||; s|\.wabbajack$||' | sed 's/^/  /' >&2
  exit 2
fi

if [ ! -d "$DOWNLOADS" ]; then
  echo "ERROR: downloads dir not found: $DOWNLOADS" >&2
  exit 2
fi

# Refuse if target non-empty and not --force
if [ -d "$TARGET" ] && [ "$(ls -A "$TARGET" 2>/dev/null)" ]; then
  if [ "$FORCE" -ne 1 ]; then
    echo "ERROR: $TARGET is not empty. Pass --force to overwrite." >&2
    echo "       (contains $(ls -1 "$TARGET" | wc -l) entries, $(du -sh "$TARGET" 2>/dev/null | cut -f1))" >&2
    exit 3
  fi
  echo "WARNING: --force given; existing content in $TARGET will be overwritten."
fi

# Refuse if Wabbajack/MO2/Oblivion is running (file locks)
for proc in ModOrganizer.exe Wabbajack.exe wabbajack-cli.exe Oblivion.exe obse_loader.exe obse64_loader.exe; do
  if tasklist //FI "IMAGENAME eq $proc" 2>/dev/null | grep -qi "$proc"; then
    echo "ERROR: $proc is running. Close it before installing." >&2
    exit 4
  fi
done

mkdir -p "$TARGET"

WABBAJACK_WIN=$(cygpath -w "$WABBAJACK_FILE" 2>/dev/null || echo "$WABBAJACK_FILE")
TARGET_WIN=$(cygpath -w "$TARGET" 2>/dev/null || echo "$TARGET")
DOWNLOADS_WIN=$(cygpath -w "$DOWNLOADS" 2>/dev/null || echo "$DOWNLOADS")

WABBAJACK_SIZE=$(du -h "$WABBAJACK_FILE" | cut -f1)

echo "=== Installing $PROFILE ==="
echo "  Source:    $WABBAJACK_WIN ($WABBAJACK_SIZE)"
echo "  Target:    $TARGET_WIN"
echo "  Downloads: $DOWNLOADS_WIN"
echo ""

START=$(date +%s)
set +e
"$WJ_CLI" install -w "$WABBAJACK_WIN" -o "$TARGET_WIN" -d "$DOWNLOADS_WIN"
EXIT_CODE=$?
set -e
END=$(date +%s)
DURATION=$((END - START))

# wabbajack-cli emits exit code 1 even on successful installs because of an
# unguarded NullReferenceException in StandardInstaller.SetScreenSizeInPrefs()
# (logged misleadingly as "[FATAL] ... due to parse error"). Trust the log,
# not the exit code: a successful install always logs "Finished Installation".
WJ_LOG="$(dirname "$WJ_CLI")/logs/wabbajack-cli.current.log"
if [ "$EXIT_CODE" -ne 0 ]; then
  if [ -f "$WJ_LOG" ] && grep -q "Finished Installation" "$WJ_LOG"; then
    echo "NOTE: wabbajack-cli exited $EXIT_CODE but log shows 'Finished Installation' — treating as success."
  else
    echo "ERROR: wabbajack-cli install exited with code $EXIT_CODE and log has no 'Finished Installation'." >&2
    [ -f "$WJ_LOG" ] && echo "       see $WJ_LOG" >&2
    exit "$EXIT_CODE"
  fi
fi

# Sanity-check: a successful MO2 install drops ModOrganizer.exe + profiles/
if [ -f "$TARGET/ModOrganizer.exe" ] && [ -d "$TARGET/profiles/$PROFILE" ]; then
  TARGET_SIZE=$(du -sh "$TARGET" 2>/dev/null | cut -f1)
  MOD_COUNT=$(ls "$TARGET/mods" 2>/dev/null | wc -l)
  echo ""
  echo "OK: install succeeded in ${DURATION}s"
  echo "    target:   $TARGET_WIN"
  echo "    size:     $TARGET_SIZE"
  echo "    profile:  $PROFILE ($MOD_COUNT mod folders)"
  echo "    next:     launch $TARGET_WIN\\ModOrganizer.exe to verify"
else
  echo "WARNING: install reported success but ModOrganizer.exe / profiles/$PROFILE missing in target" >&2
  exit 5
fi
