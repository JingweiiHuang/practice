#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int size = 0;

    printf("��J����:");
    scanf("%d" , &size);

    int *arr = (int *)calloc(size , sizeof(int));

    printf("���w����:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = " , i);
        scanf("%d" , arr + i);
    }
    
    printf("��ܤ���:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n" , i , *(arr + i));
    }

    int *arr1 = (int *)realloc(arr , sizeof(int) * size * 2);
    printf("��ܤ���:\n");
    for (int i = 0; i < size * 2; i++)
    {
        printf("arr1[%d] = %d\n" , i ,*(arr1 + i));
    }

    printf("arr��} : %p\n" , arr);
    printf("arr1��} : %p\n" , arr1);

    free(arr1);
    
    

    system("pause");
    return 0;
}