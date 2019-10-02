#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    printf("Give the N: ");
    scanf("%d", &n);

    int* arr = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}