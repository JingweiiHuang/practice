#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define len 10


int main(void)
{

    int arr[len] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("%d " , arr[i]);
    }
    printf("\n");

    int brr[5] = {0,1,2,3,4};
    printf("%d\n" , sizeof(brr[0]));//int一個元素佔4個位址
    printf("%d\n" , sizeof(brr));//5個數字佔20個位址
    int llen = sizeof(brr) / sizeof(brr[0]); 
    printf("%d\n" , llen);

    for(int i = 0 ; i < llen ; i++)
    {
        brr[i] += arr[i]; 
        printf("%d " , brr[i]);
    }

    putchar('\n');

    int arr1[] = {0,2,4,6,8};
    int arr2[] = {0};

    for (int i = 0; i < (sizeof(arr1)/sizeof(arr1[0])); i++)
    {
        arr2[i] = arr1[i];
        printf("%d " , arr1[i]);
        printf("%d " , arr2[i]);
        printf("\n");
    }
    
    system("pause");
    return 0;
}