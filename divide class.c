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



int pivot(int *arr, int left , int right)
{
    int i = left;
    int j = right-1;
    int pos = arr[right];

    while(i < j)
    {
        while(i < right && arr[i] <= pos)
        {
            i++;
        }
        while(j > left && arr[j] > pos)
        {
            j--;
        }
        if(i < j)
        {
            swap(&arr[i] , &arr[j]);
        }
    }
    if(arr[i] > pos)
    {
        swap(&arr[i] , &arr[right]);
    }
    return i;
}

void quick(int *arr , int left , int right)
{
    if(left < right)
    {
        int p = pivot(arr , left , right);
        quick(arr , left , p-1);
        quick(arr , p+1 , right);
    }
}

int divide(int *arr , int n , int m)
{
    int t = 0;
    if(m > n)
    {
        return 0;
    }
    quick(arr , 0 , n-1);
    while(arr[n-m] > 0)
    {
        t++;
        for(int i = n-m ; i < n ; i++)
        {
            arr[i]--;
        }
        quick(arr , 0 , n-1);
    }
    return t;
}


int main(void)
{
    int nums[4] = {5,7,4,9};
    int g;
    int m = 2;

    g = divide(nums , 4 , 2);
    printf("%d" , g);
    putchar('\n');
    

    system("pause");
    return 0;
}