#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for(int i = 0 ; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        printf("%d\n" , i);
    }

        for(int i = 0 ; i < 10; i++)
    {
        if(i == 5)
        {
            continue;;//��i=5�ɡA�|�����X�o�Ӱj��(����continue�����o���j��A���������o���j��)�A������U�@���P�_
        }
        printf("%d\n" , i);
    }

    int input = 0;

    while (1)
    {
        printf("��J��:");
        scanf("%d" , &input);

        if (input != 0)
        {
            printf("���Ƭ�:%.2f\n" , (double)48 / input);
        }
        else
        {
            printf("���Ƥ��i��0\n");
            break;
        }
    }
    

    system("pause");
    return 0;
}