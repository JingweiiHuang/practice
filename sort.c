#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print(int *, int);
void swap(int* , int*);
void bubble(int * , int);
void selection(int* , int);
void insertion(int *,int);
void shell(int* , int);
void quick(int* , int , int);
int pivot(int* , int , int);
void mergesort(int* , int* , int ,int);
void merge(int* , int* , int , int , int);

int main(void)
{
    int arr1[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    bubble(arr1 , len1);
    print(arr1 , len1);

    int arr2[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    selection(arr2 , len2);
    print(arr2 , len2);

    int arr3[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len3 = sizeof(arr3)/sizeof(arr3[0]);
    insertion(arr3 , len3);
    print(arr3 , len3);

    int arr4[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len4 = sizeof(arr4)/sizeof(arr4[0]);
    shell(arr4 , len4);
    print(arr4 , len4);

    int arr5[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len5 = sizeof(arr5)/sizeof(arr5[0]);
    quick(arr5 , 0 , len5-1);
    print(arr5 , len5);

    int arr6[] = {15,8,68,354,98,17,2,85,31,4,19};
    int len6 = sizeof(arr6)/sizeof(arr6[0]);
    int reg6[len6] = {0};
    mergesort(arr6 , reg6 , 0 , len6-1);
    print(arr5 , len5);

    system("pause");
    return 0;
}

void print(int *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    putchar('\n');
}

void swap(int *a , int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}



void bubble(int *arr , int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int flag = 1;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j] , &arr[j+1]);
                flag = 0;                
            }            
        }
        if(flag) break;//當整個檢查過一次已經排好了，就停止
    }
    
}



void selection(int *arr , int size)
{
    for (int i = 0; i < size-1 ; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(&arr[j] , &arr[min]);
            }
            
        }
        
    }
    
}




void insertion(int *arr , int size)
{
    for (int i = 1; i < size; i++)
    {
        int ins = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > ins)
        {
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = ins; 
    }
    
}


void shell(int *arr , int size)
{
    int gap[3] = {3,2,1}; 
    for (int i = 0; i < 3; i++)
    {
        int between = gap[i];
        for (int j = between; j < size; j++)
        {
            int ins = arr[j];
            int k = j - between;
            while (k >=0 && arr[k] > ins)
            {
                arr[k+between] = arr[k];
                k = k - between;
            }
            arr[k+between] = ins;
        }
        
    }
    
}

void quick(int *arr , int left , int right)
{
    if (left < right)
    {
        int pos = pivot(arr , left , right);
        quick(arr , left , pos-1);
        quick(arr , pos+1 , right);
    }
    
}

int pivot(int *arr , int left , int right)
{
    int i = left;
    int j = right-1;
    int p = arr[right];
    while (i < j)
    {
        while (i < right && arr[i] <= p)
        {
            i++;
        }
        while (j > left && arr[j] > p)
        {
            j--;
        }
        if(i < j)
        {
            swap(&arr[i] , &arr[j]);
        }    
    }
    if (arr[i] > p)
    {
        swap(&arr[i] , &arr[right]);
    }
    return i;
    
}




void mergesort(int *arr , int *reg , int front , int end)
{
    if(front < end)
    {
        int mid = front + (end-front)/2;
        mergesort(arr , reg , front , mid);
        mergesort(arr , reg , mid+1 , end);
        merge(arr , reg , front , mid , end);
    } 
}

void merge(int *arr , int *reg , int front , int mid , int end)
{
    int left = front;
    int right = mid+1;

    for(int i = front ; i <= end ; i++)
    {
        if(left == mid+1)
        {
            reg[i] = arr[right];
            right++;
        }else if(right == end+1)
        {
            reg[i] = arr[left];
            left++;
        }else if(arr[left] < arr[right])
        {
            reg[i] = arr[left];
            left++;
        }else{
            reg[i] = arr[right];
            right++;
        }
    }
    
    for (int i = front; i <= end; i++)
    {
        arr[i] = reg[i];
    }

}