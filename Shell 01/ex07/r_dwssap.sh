#!/bin/sh
cat /etc/passwd | sed '/^#/d' | awk 'NR%2 == 0' | cut -d : -f 1 | rev | sort -rd | sed -n $FT_LINE1,$FT_LINE2\p | tr '\n' ',' | sed 's/,/, /g' | sed 's/\, $/./g' | tr -d "\n"
