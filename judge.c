#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char num = 255;
    printf("%d\n" , ~num);

    int in = 0;
    printf("輸入正整數:");
    scanf("%d" , &in);

    printf("輸入為奇數:%c\n" , in & 1 ? 'y' : 'n');//位元遮罩，因奇數在二位元運算下最右邊皆為1，固可利用此方式判斷

    fflush(stdin);

    int c = 1;

    for(int i = 0 ; i <= 5 ; i++)
    {

    printf("2的%d次方:%d\n" , i , c);
    c = c << 1;
    }

    system("pause");
    return 0;
}