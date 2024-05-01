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
    if (left < right)//執行條件，遞迴會在要是left = right時終止，看下面左右邊(有機會左邊等於右邊)
    {
        int pos = pivot(arr , left , right);//找出茅定點
        quick(arr , left , pos - 1);//分左邊的
        quick(arr , pos + 1 , right);//分右邊的
    }
    
}

int pivot(int *arr , int left , int right)
{
    int i = left;
    int j = right-1;//右邊要減1
    int p = arr[right];

    while (i < j)
    {
        while (i < right && arr[i] < p)//i小於right代表遞迴要終結
        {
            i++;
        }
        while (j > left && arr[j] > p)
        {
            j--;
        }
        if (i < j)//這裡是靠index比較，不是靠實際數字
        {
            swap(&arr[i] , &arr[j]);
        }
        
    }
    if (arr[i] > p)//此處為若是i>j的時候，也就是交叉的時候
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