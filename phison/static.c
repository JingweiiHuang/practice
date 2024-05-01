#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int s(int a , int *b)
{
    static int sum = 0;
    sum +=(a+*b);
    (*b)++;
    return sum;
}

int countCalls() {
    // 靜態變數 count 用於記錄函式被調用的次數
    static int count = 0;
    count++; // 每次函式被調用時增加 count 的值
    return count;
}

int increase(int a)
{
    int ans = 0;
    int i=1 , j=1;
    while(i <= a)
    {
        ans += i;
        i += j;
        j++;
    }
    return ans;
}

void inverse(char *arr , int len)
{
    for(int i = 0 ; i < len/2 ; i++)
    {
        char tmp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = tmp;
    }

    for(int i = 0 ; i < len ; i++)
    {
        printf("%c " , arr[i]);
    }
}

int main(void)
{
    int a = 5;
    int b = 2;
    int result1 = 0 , result2 = 0;
    result1 = s(a , &b);
    result2 = s(a , &b);
    int a1 = countCalls();
    int a2 = countCalls();
    int a3 = countCalls();
    int sum = increase(16);

    char arr[] = {"abcde"};

    printf("%d , %d , %d" , result1 , result2 ,a2);
    putchar('\n');
    printf("%d" , sum);
    putchar('\n');
    inverse(arr , 5);
    putchar('\n');

    system("pause");
    return 0;
}