#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define len 80

int main(void)
{
    char pass[] = "123456";
    char buf[len];

    printf("��J�K�X:");
    fgets(buf , len , stdin);

    if (strncmp(pass , buf , 6) == 0)
    {
        puts("correct");
    }
    else{
        puts("error");
    }
    
    char source[len];
    char search[len];

    printf("��J�r��:");
    fgets(source , len , stdin);

    printf("�j�M�ۦ�:");
    fgets(search , len , stdin);

    search[strlen(search) - 1 ] = '\0';//�h���̫᪺����r��
    printf("%s\n" , search);
    char *loc = strstr(source , search);

    printf("%s\n" , loc);
    printf("%d\n" , loc - source);//loc - source�O��}�۴�
    if(loc == NULL)
    {
        printf("�䤣��\n");
    }
    else{
        printf("�b���ަa %lu �B���\n" , loc - source);
    }

    size_t loc1 = strspn(source , search);
    if (loc1 == strlen(source))
    {
        printf("�����ǰt\n");
    }else{
        printf("�b�a%lu�B��줣�P\n" , loc1+1);
    }

    fflush(stdin);

    char str1[len];
    char str2[len];

    printf("��J�r��:");
    fgets(str1 , len , stdin);

    printf("�j�M�r��:");
    fgets(str2 , len , stdin);
    str2[strlen(str2) - 1] = '\0';

    size_t loc2 = strcspn(str1 , str2);

    if (loc2 == strlen(str1))
    {
        printf("�S������ǰt\n");
    }else{
        printf("���ަ�m %lu �B���\n" , loc2+1);
    }
    
    system("pause");
    return 0;
}