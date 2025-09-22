#!/usr/bin/env bash
set -euo pipefail

if [ $# -lt 1 ]; then
  echo "Usage: $0 <rom_path>"
  exit 2
fi

ROM="$1"
EXPECTED_SHA1="d8343e69a7dc63b869cf6361d87cde64444281d3"

if [ ! -f "$ROM" ]; then
  echo "ROM file not found: $ROM"
  exit 1
fi

ACTUAL_SHA1=$(sha1sum "$ROM" | awk '{print $1}')

echo "ROM: $ROM"
echo "Size: $(stat -c%s "$ROM") bytes"
echo "Expected SHA1: $EXPECTED_SHA1"
echo "Actual SHA1:   $ACTUAL_SHA1"

if [ "$ACTUAL_SHA1" = "$EXPECTED_SHA1" ]; then
  echo "✅ SUCCESS: ROM matches expected SHA1!"
  exit 0
else
  echo "❌ MISMATCH: ROM does not match expected SHA1"
  echo "Differences found - need to fix segments/data"
  exit 1
fi
