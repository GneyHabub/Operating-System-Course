#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16

char* str1 = "Qqqqq";
char str2[16];

int main(){
    int p[2];
    if (pipe(p) < 0) 
        exit(1);
    write(p[1], str1, MSGSIZE);
    read(p[0],str2, MSGSIZE);
    printf("%s\n", str2);
    return 0;
}