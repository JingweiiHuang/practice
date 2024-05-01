#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    char text[] = "hello";
    int len = sizeof(text) / sizeof(text[0]);

    for (int i = 0; i < len; i++)
    {
        if (text[i] == '\0')
        {
            puts("null");
        }
        else
        {
            printf("%c " , text[i]);
        }
    }
    printf("陣列長度: %d\n" , len);
    printf("字串長度: %d\n" , strlen(text)); 


    char buf[50];
    printf("輸入字串:");
    scanf("%s" , buf);
    printf("你輸入的字串為:%s\n" , buf);

    system("pause");
    return 0;
}