#!/usr/bin/env bash
# run_probe.sh — invoke xEdit headless with our isolated probe data dir.
#
# Usage:
#   ./run_probe.sh <plugins-file> <script.pas> [extra-args...]
#
# XEDIT env var optional; defaults to user's local xEdit fork build.

set -euo pipefail

ROOT="$(cd "$(dirname "$0")" && pwd)"
DATA_DIR="$ROOT/data"
SCRIPTS_DIR="$ROOT/scripts"

XEDIT="${XEDIT:-/c/Users/mschon/repos/TES5Edit/Build/xEdit.exe}"
if [[ ! -f "$XEDIT" ]]; then
  echo "ERROR: xEdit binary not found at $XEDIT" >&2
  exit 2
fi

PLUGINS="$1"; shift
SCRIPT="$1"; shift

if [[ ! -f "$PLUGINS" ]]; then
  echo "ERROR: plugins file not found: $PLUGINS" >&2
  exit 2
fi
if [[ ! -f "$SCRIPTS_DIR/$SCRIPT" ]]; then
  echo "ERROR: script not found: $SCRIPTS_DIR/$SCRIPT" >&2
  exit 2
fi

echo "xEdit:    $XEDIT"
echo "Data:     $DATA_DIR"
echo "Plugins:  $PLUGINS"
echo "Script:   $SCRIPT"
echo "Args:     $*"
echo "---"

"$XEDIT" -tes4 -IKnowWhatImDoing -autoload -autoexit \
  -D:"$DATA_DIR" \
  -P:"$PLUGINS" \
  -script:"$SCRIPTS_DIR/$SCRIPT" \
  "$@"
