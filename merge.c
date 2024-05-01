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
        mergesort(arr , reg , front , mid);//���������̤p���A���P��@�����j����̤p�A�M�����᭱���{���X
        mergesort(arr , reg , mid+1 , rear);//���۴��o�ӡA�᭱�������A�M���̫�A�L�k����front < rear��A����᭱���{���X
        merge(arr , reg , front , mid , rear);
    }
    
}



void merge(int *arr , int *reg , int front , int mid , int rear)
{
    int left = front;
    int right = mid+1;
    
    for (int i = front; i <= rear; i++)//�n����W���g���A�᭱�~�O�g����A���M�P�@��i�|����ӵ��G
    {
        if (left == mid+1)//����פ����
        {
            reg[i] = arr[right];
            right++;
        }
        else if (right == rear+1)//�k��פ����
        {
            reg[i] = arr[left];
            left++;
        }
        else if(arr[left] < arr[right])//���k����
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

