#!/bin/bash
grep -v "^#" /etc/passwd | awk -F: 'NR % 2 == 0 {print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd ',' - | sed 's/,/, /g; s/$/./'
