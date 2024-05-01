#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define row 2
#define len 3

int main(void)
{
    int maze[row][len] = {
        {1,2,3},
        {4,5,6}
    };

    int (*mazeBegin)[len] = maze;
    int (*mazeEnd)[len] = *(&maze+1);
    for (int (*rows)[len] = mazeBegin; rows < mazeEnd; rows++)
    {
        int *begin = *rows;
        int *end = *(rows+1);
        for (int *it = begin; it < end; it++)
        {
            printf("%d\t" , *it);
        }
        printf("\n");
    }
    
    int n = 10;
    int *p = &n;
    int **p1 = &p;

    printf("n位址:%p\n" , &n);
    printf("n位址:%p\n" , p);
    printf("p1位址:%p\n" , p1);
    printf("p1數值:%d\n" , **p1);


    int arr[2][3] = {{10,20,30},{40,50,60}};
    int (*e)[3] = arr;//他能儲存第一行的資訊
    int (*r)[3] = &arr[1];//他能夠記錄所有資訊，括號裡的可以換成0或1，但必須加上 &

         printf("%d\t" , (*e)[2]);//能顯示第一航元素的資訊，必須括號
         printf("%d\t" , (*r)[2]);//可以顯示第二行資訊
   
    system("pause");
    return 0;
}