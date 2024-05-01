#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int size = 0;

    printf("輸入長度:");
    scanf("%d" , &size);

    int *arr = (int *)calloc(size , sizeof(int));

    printf("指定元素:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = " , i);
        scanf("%d" , arr + i);
    }
    
    printf("顯示元素:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n" , i , *(arr + i));
    }

    int *arr1 = (int *)realloc(arr , sizeof(int) * size * 2);
    printf("顯示元素:\n");
    for (int i = 0; i < size * 2; i++)
    {
        printf("arr1[%d] = %d\n" , i ,*(arr1 + i));
    }

    printf("arr位址 : %p\n" , arr);
    printf("arr1位址 : %p\n" , arr1);

    free(arr1);
    
    

    system("pause");
    return 0;
}