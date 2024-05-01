#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define len 10

int main(void)
{
    int arr1[len] = {0};

    for (int i = 0; i < len; i++)
    {
        printf("%d" , arr1[i]);
    }
    putchar('\n');

    for (int i = 1; i < len +1; i++)
    {
        arr1[i] = i;
        printf("%d" , arr1[i]);
    }

    putchar('\n');

    int *arr2 = arr1;
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        printf("%d" , *(arr2 + i));
    }

    putchar('\n');
    
    int maze[5][10];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            maze[i][j] = (i+1) * (j+1);
            printf("%d\t" , maze[i][j]);
        }
        putchar('\n');
    }

    int arr3[] = {1,5,3,8,4};
    int *re = arr3;
    int (*pe)[5] = &arr3;
    printf("%d\n" , arr3);
    printf("%d\n" , *(&arr3 + 1));
    printf("%d\n" , *(&arr3 + 1) - arr3);

    //printf("%p" . *(&pe + 1));
    printf("%d\n" , (*pe)[4]);
    printf("%d\n" , *(re + 1));

    
    
    
    
    

    system("pause");
    return 0;
}