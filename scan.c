#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int in1 , in2;

    printf("��J1: , ��J2:");
    scanf("%d %d" , &in1 , &in2);

    printf("��J�Ʀr:%d %d\n" , in1 , in2);

    fflush(stdin);//�M����J�w�İ�

    char buf[50];
    printf("��J1~5:");
    scanf("%[1-5]" , buf);//%[1-5]������d��
    printf("��J�r����:%s\n" , buf);

    system("pause");
    return 0;
}