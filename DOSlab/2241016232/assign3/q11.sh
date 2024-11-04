#!/bin/bash
echo "read 2 files"
file1=$1
file2=$2

if [[ ! -f "$file1" ]]; then
    echo "Error: $file1 does not exist."
    exit 1
fi
if [[ ! -f "$file2" ]]; then
    echo "Error: $file2 does not exist."
    exit 1
fi

if cmp -s "$file1" "$file2"; then
    echo "file1 and file2 are the same"
    rm "$file2"
    echo "file2 is deleted "
else
    echo "file1 and file2 are different"
fi