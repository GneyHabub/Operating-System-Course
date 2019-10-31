#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>

int main() {
int src, dest;
char *src_addr, *dest_addr;
size_t f_size;

src = open("ex1.txt", O_RDONLY);
f_size = lseek(src, 0, SEEK_END);
src_addr = mmap(NULL, f_size, PROT_READ, MAP_PRIVATE, src, 0);

dest = open("ex1.memcpy.txt", O_RDWR | O_CREAT, 0666);
ftruncate(dest, f_size);
dest_addr = mmap(NULL, f_size, PROT_READ | PROT_WRITE, MAP_SHARED, dest, 0);
memcpy(dest_addr, src_addr, f_size);

close(src);
close(dest);
return 0;
}