#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include<signal.h>
#include <sys/wait.h>

int main() {
  int p1;
  int _pipe[2];

  if (pipe(_pipe)<0) 
    exit(1);

  p1 = fork();
  if (p1>0) {
    int p2 = fork();

    if (p2>0) {
      close(_pipe[0]);
      write(_pipe[1], &p2, sizeof(p2));
      close(_pipe[1]);

      printf("First-child is waiting for status change.\n");
      int f;
      waitpid(p2, &f, 0);
    }
    else if(p2 == 0) {
      printf("Second child\n");
    }

  }
  else if(p1 == 0){
    pid_t p2;
    close(_pipe[1]);
    read(_pipe[0], &p2, sizeof(p2));
    close(_pipe[0]);
    sleep(2);
    kill(p2, SIGSTOP);
  }

  return 0;
}