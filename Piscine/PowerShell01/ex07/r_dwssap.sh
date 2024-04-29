cat /etc/passwd | sed '1~2d' | cut -f 1 -d ':' | rev | sort -d -r | sed -z "s/\n/, /g" | cut -d " " -f $FT_LINE1-$FT_LINE2 | cat -e | sed 's/,\$/./g'
