in=file.txt
awk -v last="$last" 'END { printf "%s\n",$0=$0+1 }' $in >> $in