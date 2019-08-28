#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *a = malloc(sizeof(char)*50);
	printf("Enter a string not exeeding 50 characters: ");
	scanf("%s", a);
	for(int i = strlen(a); i >=0; i--){
    printf("%c", a[i]);
  }
  return 0;
}
