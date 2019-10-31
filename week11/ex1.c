#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main(){
  int file = open("ex1.txt", O_RDWR);

  struct stat stat = {};
  fstat(file, &stat);

  off_t size = stat.st_size; 
  char *addr;
  addr = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, file, 0);

  strcpy(addr, "This is a nice day");
  return 0;
} 