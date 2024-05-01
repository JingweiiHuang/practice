#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int arr[5][8];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            arr[i][j] = (i+1) * (j+1);
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }

    printf("%d\n" , sizeof(arr));

    int maze[3][5] = {
        {1,5,8,3,6},
        {8,6,4,9,3},
        {7,6,36,4,9}
        };

    
    int (*arr1)[3][5] = &maze;
    for (int i = 0; i < sizeof(arr1[0]) / sizeof(arr1[0][0]); i++)
    {
        for (int j = 0; j < sizeof(arr1[0][0]) / sizeof(arr1); j++)
        {
            printf("%d " , (*arr1)[i][j]);
    }
    printf("\n");
    }
    
    printf("%d\n" , sizeof(arr1));
    for (int i = 0; i < 3; i++)
    {
        int *arr2 = maze[i];
        for (int j = 0; j < 5; j++)
        {
            printf("%d " , arr2[j]);
        }
        printf("\n");
    }
    
    
   
    

    system("pause");
    return 0;
}