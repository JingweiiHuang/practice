#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d*%d = %2d " , i ,j , i*j );
        }
        puts(" ");
    }
    printf("\n\n");
    
    for (int i = 1 , j = 1; j < 10; i == 9 ? i =  (++j/j) : i++)//為了要能夠讓第二行進行下去，故寫成(++j/j)(2/2) = 1 >>此答案皆為1，重新第二行開始，若是寫成(j++/j)會變成從0開始，等於會變成(1/2)=0，後面為加的結果
    {
        printf("%d*%d = %2d%c" , i , j , i*j , i == 9 ? '\n' : ' ');
    }

    printf("\n\n");

    int a = 2;
    int b = 0;
    b = a/a;
    printf("%d",b);
    b = (a++)/(a);
    printf("%d",b);
    

    system("pause");
    return 0;
}