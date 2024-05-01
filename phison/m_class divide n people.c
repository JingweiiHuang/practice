#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(int *a , int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int pivot(int* arr , int left , int right)
{
    int i = left;
    int j = right-1;
    int p = arr[right];

    while(i < j)
    {
        while(i < right && arr[i] <= p)
        {
            i++;
        }
        while(j > left && arr[j] > p)
        {
            j--;
        }
        if(i < j)
        {
            swap(&arr[i] , &arr[j]);
        }
    }
    if(arr[i] > p)
    {
        swap(&arr[i] , &arr[right]);
    }
    return i;
}

void quick(int *arr , int left , int right)
{
    if(left < right)
    {
        int pos = pivot(arr , left , right);
        quick(arr , left , pos-1);
        quick(arr , pos+1 , right);
    }
}

int divide(int *arr , int n , int m)
{
    if(n > m)
    {
        return 0;
    }
    int cnt = 0;
    quick(arr , 0 , m-1);
    while(arr[m-n] > 0)
    {
        for(int i = m-1 ; i >= m-n ; i--)
        {
            arr[i]--;
        }
        cnt++;
        quick(arr , 0 , m-1);
    }
    return cnt;

    
}

int main(void)
{
    int re[6] = {2,8,3,4,5,6};
    int ans = 0;
    quick(re , 0 , 5);
    for(int i = 0 ; i < 6 ; i++)
    {
        printf("%d " , re[i]);
    }
    ans = divide(re , 5 , 6);
    putchar('\n');
    printf("%d " , ans);

    system("pause");
    return 0;
}

