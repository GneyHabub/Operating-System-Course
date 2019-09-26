#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(){
    int i = 0, f = fork();
    if (f > 0)
    {
        sleep(10);
        kill(0, SIGTERM);
    }else if(f == 0)
    {
        while(1){
            i++;
            printf("I'm alive! #%d\n", i);
            sleep(1);
        }
    }
    
    
}