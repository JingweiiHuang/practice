#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char c;

    printf("輸入字元:");
    c = getchar();

    putchar(c);
    putchar('\n');

    fflush(stdin);

    char str[20];

    puts("輸入字串:");
    fgets(str , sizeof(str) , stdin);

    puts("輸入字串為:");
    puts(str);
    
    system("pause");
    return 0;
}