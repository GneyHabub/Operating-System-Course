#include <stdio.h>

int main(){
  int* pc;
  int c;
  c = 22;
  printf("Adress of c: %d\n", &c);
  printf("Value of c: %d\n", c);
  pc = &c;
  printf("Adress of pc: %d\n", &pc);
  printf("Value of pc: %d\n", pc);
  c = 11;
  printf("Adress of pc: %d\n", &pc);
  printf("Value of pc: %d\n", pc);
  *pc = 2;
  printf("Adress of c: %d\n", &c);
  printf("Value of c: %d\n", c);
  return 0;
}
