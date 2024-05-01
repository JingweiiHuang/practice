#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int increase(int *n)//取得該位址的值，改變位址的值，可以連同一開始複製的值一起更改
{
    *n = *n + 1;
    return *n;
}

int increase1(int m)//複製一份x的值過來，所以原本的x還是x
{
    m = m + 1;
    return m;
}

int* ints(int , int);

int *ints(int size , int init)
{
    int *arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        arr[i] = init + 2 * i;
    }
    return arr;
    
}

void print(int len , int *arr)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d " , arr[i]);
    }
    
}

int main(void)
{
    int x =10;
    printf("%d\n" , increase1(x));
    printf("%d\n" , x);
    printf("%d\n" , increase(&x));//取得x位址為多少
    printf("%d\n" , x);

    int size = 0;
    int init = 0;

    printf("陣列大小:");
    scanf("%d" , &size);

    printf("元素初始:");
    scanf("%d" , &init);

    int *arr = ints(size , init);
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n" , i , *(arr + i));//*(arr + i)
    }
    
    free(arr);

    int arr2[] = {1,2,3,4,5};
    print(5 , arr2);

    putchar('\n');
    

    system("pause");
    return 0;
}

