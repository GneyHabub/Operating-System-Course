link ../week1/file.txt _ex2.txt
ls -i _ex2.txt
# output: 2911001
find –inum 2911001
# output: ./_ex2.txt
find –inum 2911001 -exec rm {} \;
ls -i _ex2.txt
# output cannot access '_ex2.txt': No such file or directory