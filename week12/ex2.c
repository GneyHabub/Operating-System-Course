#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(){
    FILE *in, *out;
    char* inp = malloc(sizeof(char)* 50);
    char* addr = malloc(sizeof(char)* 50);
    scanf("%s", inp);
    int i = 6;
    while (inp[i] != '\0')
    {
        strcat(addr, &inp[i]);
        i++;
    }
    printf("%s", addr);
    
    in = fopen(addr, "r");
    out = fopen("ex2.txt", &inp[5]);

    char* ans = malloc(sizeof(char)*10);
    fgets(ans, 10, in);
    fprintf(out, "%s", ans);

    free(inp);
    free(addr);
    fclose(in);
    fclose(out);

    return 0;
}