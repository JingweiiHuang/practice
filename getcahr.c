#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char c;

    printf("��J�r��:");
    c = getchar();

    putchar(c);
    putchar('\n');

    fflush(stdin);

    char str[20];

    puts("��J�r��:");
    fgets(str , sizeof(str) , stdin);

    puts("��J�r�ꬰ:");
    puts(str);
    
    system("pause");
    return 0;
}