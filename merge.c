#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print(int *,int);
void mergesort(int* , int* , int , int);
void merge(int* , int* , int , int , int);

int main(void)
{
    int arr[] = {2,58,4,9,74,65,83,28,19,47};
    int len = sizeof(arr)/sizeof(arr[0]);
    int reg[len] = {0};
    mergesort(arr , reg , 0 , len-1);
    print(arr , len);

    system("pause");
    return 0;
}

void mergesort(int *arr , int *reg , int front , int rear)
{
    if (front < rear)
    {
        int mid = (front + rear)/2;
        mergesort(arr , reg , front , mid);//先分裂成最小塊，等同於一直遞迴直到最小，然後執行後面的程式碼
        mergesort(arr , reg , mid+1 , rear);//接著換這個，後面的部分，然後到最後，無法滿足front < rear後，執行後面的程式碼
        merge(arr , reg , front , mid , rear);
    }
    
}



void merge(int *arr , int *reg , int front , int mid , int rear)
{
    int left = front;
    int right = mid+1;
    
    for (int i = front; i <= rear; i++)//要先把上限寫完，後面才是寫比較，不然同一個i會有兩個結果
    {
        if (left == mid+1)//左邊終止條件
        {
            reg[i] = arr[right];
            right++;
        }
        else if (right == rear+1)//右邊終止條件
        {
            reg[i] = arr[left];
            left++;
        }
        else if(arr[left] < arr[right])//左右邊比較
        {
            reg[i] = arr[left];
            left++;
        }
        else
        {
            reg[i] = arr[right];
            right++;
        }
    }
    for (int i = front; i <= rear; i++)
    {
        arr[i] = reg[i];
    }
    
    
}

void print(int *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    putchar('\n');
}

