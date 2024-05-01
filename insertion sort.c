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
        int insert_num = arr[i];//���J���Ƶ���ĤG�Ӷ}�l
        int j = i-1;//��j�]���P�e���@�ӼƤ��

        while (j >= 0 && insert_num < arr[j])//���J���Ƥp��e�@�Ӽ�
        {
            arr[j+1] = arr[j];//����j���Ʀr��J��᭱���Ӧa��
            j = j-1;//���F�n��e���X�ӡA�ҥH�n�Nj�C������1�A������Ĥ@��
        }
        arr[j+1] = insert_num;//�N����L�᪺��@�ӡA���J�쥻�n��������Ӥp�Ʀr
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
