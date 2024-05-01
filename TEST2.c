#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


    int second(int num1)
    {
        return num1 *= num1;
    }

    int power(int num1 , int p1 )
    {
        int r = 1;
        for (int i = 0; i < p1; i++)
        {
            r *= num1;
        }
        return r;
    }

    void swap(int *a , int *b)
    {
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
    }


int main(void)
{
    int adc[] = {1,2,4,8,3,4,2};
  //  int *pe = adc;
    int max = 0;

    for (int i = 1; i < sizeof(adc) / sizeof(adc[0]); i++)
    {
        if(adc[i] > adc[max])
        {
            max = i;
        }
    }

    printf("%d\n" , sizeof(adc)/ sizeof(adc[0]));
    printf("%d\n" , max);
    printf("%d\n" , adc[0]);
    printf("%d\n" , adc[max]);

    int num1 = 0;
    int p1 = 0;
    printf("輸入:");
    scanf("%d" , &num1);

    printf("輸入平方:");
    scanf("%d" , &p1);

    printf("%d的平方:%d\n" , num1 , second(num1));
    printf("%d的%d次方:%d\n" , num1 , p1 , power(num1 , p1));

    int a = 3;
    int b = 5;
    swap(&a , &b);

    printf("%d\n" , a);
    printf("%d\n" , b);


    system("pause");
    return 0;
}