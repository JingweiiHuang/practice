#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "function_begin.h"
#include "function_begin.c"




int main(void)
{
    int num = 0;
    int p =0;

    printf("輸入數值:");
    scanf("%d" , &num);

    printf("輸入平方:");
    scanf("%d" , &p);

    printf("%d 平方: %d\n" , num , power2(num));
    printf("%d 的 %d 次方: %d\n" , num , p , power(num , p));


    system("pause");
    return 0;
}