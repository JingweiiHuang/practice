#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void count();

void count()
{
    static int c = 1;
    printf("%d\n" , c);
    c++;
}

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        count();
    }

    system("pause");
    return 0;
}