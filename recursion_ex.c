#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int plus(int left , int right)
{
    int m = left + right;
    return m;
}

void division(int left , int right)
{
    if (left < right)
    {
        int mid = (left+right)/2;
        division(left , mid);
        division(mid+1 , right);
        int e = plus(left , right);
        printf("%d " , e);
        putchar('\n');
    }
    
}

int main(void)
{
    division(0 ,5);
    system("pause");
    return 0;
}

