#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    for (size_t i = 0; i < 5; i++)
    {
        int pid = fork();
        sleep(5);
    }
}