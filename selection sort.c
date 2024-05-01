#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(int * , int *);
void print(int* , int);
void selection1(int* , int);
void selection2(int* , int);
void selection3(int* , int);

int main(void)
{
    int arr[] = {5,8,9,1,2,4,25,68,45};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection1(arr , len);
    print(arr , len);
    selection2(arr , len);
    putchar('\n');
    print(arr , len);
    selection3(arr , len);
    putchar('\n');
    print(arr , len);
    system("pause");
    return 0;
}

void selection1(int *arr , int size)
{
    int min;
    for (int i = 0; i < size-1 ; i++)
    {
        min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            
        }
        swap(&arr[min] , &arr[i]);
    }
    
}

void selection2(int *arr , int size)
{
    int min;
    for (int i = 0; i < size-1 ; i++)
    {
        min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                swap(&arr[min] , &arr[j]);
            }
            
        }
        
    }
    
}

void selection3(int *arr , int size)
{
    for (int i = 0; i < size-1 ; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i] , &arr[j]);
            }
            
        }
        
    }
    
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
    
}