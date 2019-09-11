#include <stdio.h>
#include <unistd.h>
int main()
{
  int n = fork();
  if(n == 0)
    printf("Hello from the parent! PID - %d\n", n);
  else
    printf("Hello from the child! PID - %d\n", n);
  return 0;
}