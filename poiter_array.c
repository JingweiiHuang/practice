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

    printf("n��}:%p\n" , &n);
    printf("n��}:%p\n" , p);
    printf("p1��}:%p\n" , p1);
    printf("p1�ƭ�:%d\n" , **p1);


    int arr[2][3] = {{10,20,30},{40,50,60}};
    int (*e)[3] = arr;//�L���x�s�Ĥ@�檺��T
    int (*r)[3] = &arr[1];//�L����O���Ҧ���T�A�A���̪��i�H����0��1�A�������[�W &

         printf("%d\t" , (*e)[2]);//����ܲĤ@�褸������T�A�����A��
         printf("%d\t" , (*r)[2]);//�i�H��ܲĤG���T
   
    system("pause");
    return 0;
}