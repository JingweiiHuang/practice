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

    printf("��J�ƭ�:");
    scanf("%d" , &num);

    printf("��J����:");
    scanf("%d" , &p);

    printf("%d ����: %d\n" , num , power2(num));
    printf("%d �� %d ����: %d\n" , num , p , power(num , p));


    system("pause");
    return 0;
}