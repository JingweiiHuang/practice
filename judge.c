#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char num = 255;
    printf("%d\n" , ~num);

    int in = 0;
    printf("��J�����:");
    scanf("%d" , &in);

    printf("��J���_��:%c\n" , in & 1 ? 'y' : 'n');//�줸�B�n�A�]�_�Ʀb�G�줸�B��U�̥k��Ҭ�1�A�T�i�Q�Φ��覡�P�_

    fflush(stdin);

    int c = 1;

    for(int i = 0 ; i <= 5 ; i++)
    {

    printf("2��%d����:%d\n" , i , c);
    c = c << 1;
    }

    system("pause");
    return 0;
}