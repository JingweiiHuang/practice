#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


char *func()
{
    int i;
    char *arr = (char*)malloc(sizeof(char) * 20);
    for(i = 0 ; i < 20 ; i++)
    {
        arr[i] = '0'+i;
    }
    return arr;
}

int main(void)
{
    char *buf;
    int i;
    buf = func();
    char a = 5;
    for(i = 0 ; i < 20 ; i++)
    {
        printf("%c " , buf[i]);
    }
    printf("%c " , a);
    system("pause");
    return 0;
}