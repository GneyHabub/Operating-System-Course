#include <stdio.h>
#include <stdlib.h>

int main(){
    int pages;
    FILE* fp = fopen ("input.txt", "r");

    printf("Enter the number of pages: ");
    scanf("%d", &pages);
    int misses = pages;
    int counter = pages;
    int* arr = malloc(sizeof(int)*pages);
    unsigned short* table = malloc(sizeof(short)*pages);

    for (size_t i = 0; i < pages; i++)
    {
        for (size_t j = 0; j < pages; j++)
        {
            table[j]>>=1;
        }
        fscanf(fp, "%d", &arr[i]);
        table[i] = table[i] | 1<<15;
    }

    int current = 0;
    
    while (fscanf(fp, "%d", &current) != EOF)
    {
        counter++;
        for (size_t j = 0; j < pages; j++)
        {
            table[j]>>=1;
        }

        short flag = 0;

        for (size_t j = 0; j < pages; j++)
        {
            if (current == arr[j])
            {
                table[j] = table[j] | 1<<15;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            misses++;
            int min = 66000;
            int min_index = 0;
            for (size_t j = 0; j < pages; j++)
            {
                if (table[j] < min)
                {
                    min = table[j];
                    min_index = j;
                }      
            }
            arr[min_index] = current;
            table[min_index] = 1<<15;
        }
        
    }
    
    // for (size_t i = 0; i < pages; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    
    printf("HITRATE: %f\n", (float)(counter - misses)/misses);
    
    return 0;
}