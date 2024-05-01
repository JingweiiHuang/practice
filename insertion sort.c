#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print(int* , int);
void insertion(int * , int);

int main(void)
{
    int arr[] = {5,8,7,3,9,4,56,87,21,47};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertion(arr , len);
    print(arr , len);

    system("pause");
    return 0;
}


void insertion(int *arr , int size)
{
    for (int i = 1; i < size; i++)
    {
        int insert_num = arr[i];//插入的數等於第二個開始
        int j = i-1;//把j設成與前面一個數比較

        while (j >= 0 && insert_num < arr[j])//當插入的數小於前一個數
        {
            arr[j+1] = arr[j];//先把大的數字輸入到後面那個地方
            j = j-1;//為了要比前面幾個，所以要將j每次都減1，直到比到第一個
        }
        arr[j+1] = insert_num;//將比較過後的後一個，插入原本要比較的那個小數字
    }
    
}
int insertion(int* arr , int size)
{
    int ins;
    for (int i = 1; i < size; i++)
    {
        ins = arr[i];
        int j = i-1;
        while (j >= 0 && ins < arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = ins;
    }
    
}



void print(int *arr , int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    
}
