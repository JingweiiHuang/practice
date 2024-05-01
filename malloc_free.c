#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(int argc , char *argv[])
{
    int *p = (int *)malloc(100);

    printf("空間位址:%p\n" , p);
    printf("儲存值:%d\n" , *p);

    *p = 200;

    printf("空間位址:%p\n" , p);
    printf("儲存值:%d\n" , *p);

    free(p);
    
    int size = 0;

    printf("輸入長度:");
    scanf("%d" , &size);


    int *arr = (int *)malloc(size * sizeof(int));

    printf("指定元素:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = " , i);
        scanf("%d" , arr + i);
    }

    printf("顯示元素:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n" , i ,*(arr+i));
    }

    free(arr);
    
    
    
    system("pause");
    return 0;
}