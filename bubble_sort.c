#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(int* , int*);
void print(int* ,int);

int main(void)
{   
    int flag;
    int arr[] = {5,1,3,4,8,9,7,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len-1; i++)
    {
        flag = 1;
        for(int j=0; j < len -1 - i ; j++)
        {
            if (arr[j+1] <= arr[j])
            {    
                swap(&arr[j+1] , &arr[j]);
                flag = 0;
                if (flag)
                {
                    break;
                }
                
            }
        }
    }
    print(arr , len);
    putchar('\n');
    printf("len:%d\n" , len);
    printf("max:%d\n" , arr[len-1]);

     int (*arr1)[8] = &arr;
     int *arr2 = arr;
     

     printf("%d\n" , (*arr1)[5]);
     printf("%d\n" , arr2[5]);



    system("pause");
    return 0;
}

void swap(int *a , int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print(int *array , int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        printf("%d " , array[i]);
    }
    
}
