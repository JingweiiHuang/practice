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
    
    for (int i = 1 , j = 1; j < 10; i == 9 ? i =  (++j/j) : i++)//���F�n������ĤG��i��U�h�A�G�g��(++j/j)(2/2) = 1 >>�����׬Ҭ�1�A���s�ĤG��}�l�A�Y�O�g��(j++/j)�|�ܦ��q0�}�l�A����|�ܦ�(1/2)=0�A�᭱���[�����G
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