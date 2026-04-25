#!/usr/bin/env bash
# Compile a Reborn profile into a .wabbajack file using wabbajack-cli.
# Usage: scripts/compile.sh [Profile]
#   Profile is optional. If given, it must match the active profile in
#   ModOrganizer.ini (selected_profile=...) — wabbajack-cli always compiles
#   whatever profile is currently active in MO2; switch profiles in MO2 first.
# Env overrides: WJ_CLI, REBORN_DIR

set -euo pipefail

WJ_CLI="${WJ_CLI:-/d/Wabbajack/4.2.1.3/wabbajack-cli.exe}"
REBORN_DIR="${REBORN_DIR:-/d/Modlists/Reborn}"
EXPECTED_PROFILE="${1:-}"

if [ ! -x "$WJ_CLI" ]; then
  echo "ERROR: wabbajack-cli not found at $WJ_CLI (override with WJ_CLI=...)" >&2
  exit 1
fi

if [ ! -f "$REBORN_DIR/ModOrganizer.ini" ]; then
  echo "ERROR: $REBORN_DIR/ModOrganizer.ini not found — REBORN_DIR is wrong?" >&2
  exit 2
fi

# Active profile from MO2 (wabbajack-cli compiles this one, period)
ACTIVE_PROFILE=$(grep -E '^selected_profile=' "$REBORN_DIR/ModOrganizer.ini" \
  | sed -E 's/.*@ByteArray\(([^)]+)\).*/\1/')
if [ -z "$ACTIVE_PROFILE" ]; then
  echo "ERROR: could not parse selected_profile from ModOrganizer.ini" >&2
  exit 2
fi

if [ -n "$EXPECTED_PROFILE" ] && [ "$EXPECTED_PROFILE" != "$ACTIVE_PROFILE" ]; then
  echo "ERROR: requested profile '$EXPECTED_PROFILE' but MO2 has '$ACTIVE_PROFILE' active." >&2
  echo "       Switch profiles in MO2 first, then re-run this script." >&2
  exit 3
fi

SETTINGS="$REBORN_DIR/$ACTIVE_PROFILE.compiler_settings"
if [ ! -f "$SETTINGS" ]; then
  echo "ERROR: $SETTINGS not found (no compiler_settings for active profile)" >&2
  exit 2
fi

# Refuse to compile while MO2 or another Wabbajack instance is open against the source
for proc in ModOrganizer.exe Wabbajack.exe wabbajack-cli.exe; do
  if tasklist //FI "IMAGENAME eq $proc" 2>/dev/null | grep -qi "$proc"; then
    echo "ERROR: $proc is running. Close it before compiling (file locks / hash cache)." >&2
    exit 4
  fi
done

# Output path from the .compiler_settings (for reporting only)
OUTPUT_WIN=$(grep -E '"OutputFile"\s*:' "$SETTINGS" | sed -E 's/.*"OutputFile"\s*:\s*"([^"]+)".*/\1/')
OUTPUT_UNIX=$(echo "$OUTPUT_WIN" | sed 's|\\\\|/|g; s|^\([A-Za-z]\):|/\L\1|')
PRE_MTIME=""
if [ -n "$OUTPUT_UNIX" ] && [ -f "$OUTPUT_UNIX" ]; then
  PRE_MTIME=$(stat -c '%Y' "$OUTPUT_UNIX")
fi

REBORN_DIR_WIN=$(cygpath -w "$REBORN_DIR" 2>/dev/null || echo "$REBORN_DIR")

echo "=== Compiling $ACTIVE_PROFILE ==="
echo "  Instance: $REBORN_DIR_WIN"
echo "  Settings: $SETTINGS"
echo "  Output:   $OUTPUT_WIN"
echo ""

START=$(date +%s)
set +e
"$WJ_CLI" compile -i "$REBORN_DIR_WIN"
EXIT_CODE=$?
set -e
END=$(date +%s)
DURATION=$((END - START))

if [ "$EXIT_CODE" -ne 0 ]; then
  echo "ERROR: wabbajack-cli exited with code $EXIT_CODE" >&2
  exit "$EXIT_CODE"
fi

if [ -n "$OUTPUT_UNIX" ] && [ -f "$OUTPUT_UNIX" ]; then
  POST_MTIME=$(stat -c '%Y' "$OUTPUT_UNIX")
  if [ -n "$PRE_MTIME" ] && [ "$POST_MTIME" = "$PRE_MTIME" ]; then
    echo "WARNING: $OUTPUT_WIN was not updated (same mtime as before — compile may have silently failed)" >&2
    exit 5
  fi
  SIZE=$(du -h "$OUTPUT_UNIX" | cut -f1)
  HUMAN_MTIME=$(date -d "@$POST_MTIME" '+%Y-%m-%d %H:%M:%S')
  echo ""
  echo "OK: compile succeeded in ${DURATION}s"
  echo "    file:  $OUTPUT_WIN"
  echo "    size:  $SIZE"
  echo "    mtime: $HUMAN_MTIME"
else
  echo "WARNING: expected output not found ($OUTPUT_UNIX) — check Wabbajack log above" >&2
  exit 5
fi
