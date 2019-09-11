#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    printf("Welcome to the Shell in Shell! To exit type \"exit\"\n");
    while (1)
    {
        printf("Enter command > ");
        char* inp = malloc(sizeof(char)*15);
        scanf("%s", inp);
        if (strcmp(inp, "exit") == 0)
        {
            break;
        }else if (strcmp(inp, "ls") == 0)
        {
            system("ls");
        }else if (strcmp(inp, "pwd") == 0)
        {
            system("pwd");
        }else if (strcmp(inp, "top") == 0)
        {
            system("top");
        }else if (strcmp(inp, "pstree") == 0)
        {
            system("pstree");
        }else if (strcmp(inp, "help") == 0)
        {
            system("help");
        }else if (strcmp(inp, "mkdir") == 0)
        {
            char* dir_name = malloc(sizeof(char)*20);
            scanf("%s", dir_name);
            strcat(inp, " ");
            strcat(inp, dir_name);
            system(inp);
            free(dir_name);
        }else if (strcmp(inp, "cd") == 0)
        {
            char* dir_name = malloc(sizeof(char)*50);
            scanf("%s", dir_name);
            strcat(inp, " ");
            strcat(inp, dir_name);
            system(inp);
            free(dir_name);
        }else
        {
            printf("Unknown command! try: help\n");
        }
        
    }
    printf("***** NestedShells© Company *****\nAll rights reserved.\n");
    
    return 0;
}