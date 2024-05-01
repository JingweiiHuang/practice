#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int i = 0;
    int num = 0;
    int a = 2;
    int b = 3;
    
    num = ++i;
    printf("%d\n" , num); //相當於 i = i+1 ; num = i 

    num = --i;
    printf("%d\n" , num);

    num = i++;
    printf("%d\n" , num); //相當於 num = i ; i = i+1 

    num = i--;
    printf("%d\n" , num);

    a = pow(a,b); //pow為次方函數
    printf("%d\n" , a);

    a %= b; 
    printf("%d\n" , a);

    a <<= b;
    printf("%d\n" , a);

    system("pause");
    return 0;
}