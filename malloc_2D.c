#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int **arr = (int **)calloc(2 , sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        arr[i] = (int *)calloc(3 , sizeof(int));
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d " , arr[i][j]);
        }
        putchar('\n');
    }

    for (int i = 0; i < 2; i++)
    {
        free(arr[i]);
    }
    

    free(arr);

    int **rar = (int**)malloc(sizeof(int*) * 3);
    int *rarr = (int*)malloc(sizeof(int) * 4);

    for(int i = 0 ; i < 4 ; i++)
    {
        rar[i] = (int*)malloc(sizeof(int));
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            rar[i][j] = (i+1)*(j+1);
            printf("%d " , rar[i][j]); 
        }
        putchar('\n');
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        *rarr[i] = i+1;
        rarr[i] = i+1;
        printf("%d " , rarr[i]); 
    }

   
    system("pause");
    return 0;
}

    arr[0] = "Gold Medal";
    arr[1] = "Silver Medal";
    arr[2] = "Bronze Medal";
 for(int i = 0 ; i < scoreSize-1 ; i++)
    {
        for(int j = i ; j < scoreSize-1-i ; j++)
        {
            if(score[j] < score[j+1])
            {
                swap(&arr[j] , &arr[j+1]);
            }
        }
    }

