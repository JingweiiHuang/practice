#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print_abcd(char* , int);

int main(void)
{
    char str[] = "abcdef";
    int ns = strlen(str);
    print_abcd(str , ns);


    system("pause");
    return 0;
}


void print_abcd(char *st , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("%c\n" , st[i]);
    }

    for(int len = 2 ; len < n ; len++)
    {
        for(int i = 0 ; i <= n - len ; i++)
        {
            for(int j = i ; j < i + len ; j++)
            {
                printf("%c" , st[j]);
            }
            printf("\n");
        }
    }

    printf("%s\n" , st);
}

