#!/usr/bin/env bash
set -euo pipefail
# Verify the SHA1 of a file against expected_sha1.txt
# Usage: scripts/verify_sha1.sh <path-to-rom>

if [ $# -lt 1 ]; then
  echo "Usage: $0 <path-to-rom>" >&2
  exit 2
fi
ROM="$1"
if [ ! -f "$ROM" ]; then
  echo "File not found: $ROM" >&2
  exit 1
fi
if [ ! -f expected_sha1.txt ]; then
  echo "expected_sha1.txt missing. Add the expected SHA1 (single line)." >&2
  exit 1
fi
ACTUAL=$(sha1sum "$ROM" | awk '{print $1}')
EXPECTED=$(head -n1 expected_sha1.txt | tr -d '\r\n')
if [ "$ACTUAL" = "$EXPECTED" ]; then
  echo "OK: SHA1 matches ($ACTUAL)"
  exit 0
else
  echo "MISMATCH: actual=$ACTUAL expected=$EXPECTED" >&2
  exit 3
fi
