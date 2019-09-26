#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) 
{ 
    printf("\nCaught signal %d\n", sig); 
    exit(0);
}

int main(){
    signal(SIGINT, handle_sigint); 
    while (1) 
    { 
        printf("ЫЫЫЫ\n"); 
        sleep(1); 
    }

    return 0;
}