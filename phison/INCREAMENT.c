#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int sum = 0;
    int i = 1,j = 0;

    while(i <= 29)
    {
        sum += i;
        j++;
        i += j;
    }

    printf("%d " , sum);

    system("pause");
    return 0;
}