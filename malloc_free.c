#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(int argc , char *argv[])
{
    int *p = (int *)malloc(100);

    printf("�Ŷ���}:%p\n" , p);
    printf("�x�s��:%d\n" , *p);

    *p = 200;

    printf("�Ŷ���}:%p\n" , p);
    printf("�x�s��:%d\n" , *p);

    free(p);
    
    int size = 0;

    printf("��J����:");
    scanf("%d" , &size);


    int *arr = (int *)malloc(size * sizeof(int));

    printf("���w����:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = " , i);
        scanf("%d" , arr + i);
    }

    printf("��ܤ���:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n" , i ,*(arr+i));
    }

    free(arr);
    
    
    
    system("pause");
    return 0;
}