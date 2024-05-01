#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int **arr1 = (int **)calloc(2 , sizeof(int));

    arr1[0] = (int *)calloc(3 , sizeof(int));
    arr1[1] = (int *)calloc(5 , sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("%d " , arr1[0][i]);
    }

    putchar('\n');

    for (int i = 0; i < 5; i++)
    {
        printf("%d " , arr1[1][i]);
    }
    
    putchar('\n');

    for (int i = 0; i < 2; i++)
    {
        free(arr1[i]);
    }

    free(arr1);


    system("pause");
    return 0;
}