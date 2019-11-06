#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
    char* str = malloc(sizeof(char)*20);
    FILE *in, *out;
    in = fopen("/dev/random", "r");
    out = fopen("ex1.txt", "w");

    fread(str, sizeof(char), 30, in);
    fprintf(out, "%s", str);

    fclose(in);
    fclose(out);

    return 0;
}