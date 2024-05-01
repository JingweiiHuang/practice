#include <stdio.h>
#include <stdlib.h>



int main()
{
    char c = '\'';
    char a[20];
    printf("short\t\t%lu\n" , sizeof(short));
    printf("int\t%lu\n" , sizeof(int));
    printf("long\t%lu\n" , sizeof(long));
    printf("a\t%lu\n" , sizeof(a));
    printf("單引號自元:%c\n" , c);
    printf("");
    system("pause");
    return 0;
}