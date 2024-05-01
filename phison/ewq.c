#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int find(int* , int);
int find2(int* , int , int);

int main(void)
{
    unsigned int i;
    for(i = 10 ; i >= 0 ; i--)
    {
        printf("%d " , i);
        if(i == -10)
        {
            break;
        }
    }
    putchar('\n');
    int a[10] = {1,1,1,1,1,1,1,1,1,0};
    int b[10] = {1,2,4,5,7,8,9,10,12,15};
    int len = sizeof(a)/sizeof(a[0]);
    int ans = find(a , len);
    printf("%d " , ans);
    putchar('\n');
    int ans2 = find2(b , 6 , 10);
    printf("%d " , ans2);
    putchar('\n');

    system("pause");
    return 0;
}

int find(int *arr , int size)
{   
    int l = 0;
    int r = size-1;
    int mid;

    while(l < r)
    {
        mid = (r-l)/2+l;
        if(arr[mid] == 0)
        {
            if(arr[mid-1] == 1)
            {
                return mid;
            }else{
                r = mid - 1;
            }
        }else{
            if(arr[mid + 1] == 0)
            {
                return mid + 1;
            }else{
                l = mid +1 ;
            }
        }
    }
}

int find2(int *arr , int tar , int size)
{
    int l = 0;
    int r = size-1;
    while(l <= r)
    {
        int mid = (r-l)/2+l;
        if(arr[mid] == tar)
        {
            return mid;
        }else if(arr[mid] < tar){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return l;
}



