#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int increase(int *n)//���o�Ӧ�}���ȡA���ܦ�}���ȡA�i�H�s�P�@�}�l�ƻs���Ȥ@�_���
{
    *n = *n + 1;
    return *n;
}

int increase1(int m)//�ƻs�@��x���ȹL�ӡA�ҥH�쥻��x�٬Ox
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
    printf("%d\n" , increase(&x));//���ox��}���h��
    printf("%d\n" , x);

    int size = 0;
    int init = 0;

    printf("�}�C�j�p:");
    scanf("%d" , &size);

    printf("������l:");
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

