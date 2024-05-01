#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(int* , int*);
void print(int* , int);
void quick(int* , int , int);
int pivot(int *, int , int);

int main(void)
{
    int arr1[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    quick(arr1 , 0 , len1-1);
    print(arr1 , len1);
    system("pause");
    return 0;
}


void quick(int *arr , int left , int right)
{
    if (left < right)//�������A���j�|�b�n�Oleft = right�ɲפ�A�ݤU�����k��(�����|���䵥��k��)
    {
        int pos = pivot(arr , left , right);//��X�T�w�I
        quick(arr , left , pos - 1);//�����䪺
        quick(arr , pos + 1 , right);//���k�䪺
    }
    
}

int pivot(int *arr , int left , int right)
{
    int i = left;
    int j = right-1;//�k��n��1
    int p = arr[right];

    while (i < j)
    {
        while (i < right && arr[i] < p)//i�p��right�N���j�n�׵�
        {
            i++;
        }
        while (j > left && arr[j] > p)
        {
            j--;
        }
        if (i < j)//�o�̬O�aindex����A���O�a��ڼƦr
        {
            swap(&arr[i] , &arr[j]);
        }
        
    }
    if (arr[i] > p)//���B���Y�Oi>j���ɭԡA�]�N�O��e���ɭ�
    {
        swap(&arr[i] , &arr[right]);
    }
    return i;
}





void swap(int *a , int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print(int *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    putchar('\n');
    
}