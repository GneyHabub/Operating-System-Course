#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    printf("Welcome to the Shell in Shell! To exit type \"exit\"\n");
    while (1)
    {
        printf("Enter command > ");
        char* inp = malloc(sizeof(char)*100);
        fgets(inp, 100, stdin);
        if (inp[0] == 'e' && inp[1] == 'x' && inp[2] == 'i' && inp[3] == 't')
        {
            break;
        }
        else
        {
            system(inp);
        }  
    }
    printf("***** NestedShells© Company *****\nAll rights reserved.\n");
    
    return 0;
}