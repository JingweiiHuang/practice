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
    printf("�}�C����: %d\n" , len);
    printf("�r�����: %d\n" , strlen(text)); 


    char buf[50];
    printf("��J�r��:");
    scanf("%s" , buf);
    printf("�A��J���r�ꬰ:%s\n" , buf);

    system("pause");
    return 0;
}