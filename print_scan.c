#include <stdio.h>
#include <stdlib.h>



int main(void)
{

    printf("a:%6.2f\n" , 19.23);
    printf("a:%-6.2f\n" , 19.23);
    printf("%*d\n" , 2 , 5);
    printf("%*d\n" , 4 , 5);
    printf("%.*s\n" , 6 , "gordanhuang");
    printf("%.*s\n" , 12 , "gordanhuang");

    //printf("��J:");
    //scanf("%d" , &in);

    //printf("��J�Ʀr:%d\n" , in);
    system("pause");
    return 0;
}