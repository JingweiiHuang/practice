#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define len 80

int main(void)
{
    char pass[] = "123456";
    char buf[len];

    printf("輸入密碼:");
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

    printf("輸入字串:");
    fgets(source , len , stdin);

    printf("搜尋自串:");
    fgets(search , len , stdin);

    search[strlen(search) - 1 ] = '\0';//去除最後的換行字元
    printf("%s\n" , search);
    char *loc = strstr(source , search);

    printf("%s\n" , loc);
    printf("%d\n" , loc - source);//loc - source是位址相減
    if(loc == NULL)
    {
        printf("找不到\n");
    }
    else{
        printf("在索引地 %lu 處找到\n" , loc - source);
    }

    size_t loc1 = strspn(source , search);
    if (loc1 == strlen(source))
    {
        printf("完全匹配\n");
    }else{
        printf("在地%lu處找到不同\n" , loc1+1);
    }

    fflush(stdin);

    char str1[len];
    char str2[len];

    printf("輸入字串:");
    fgets(str1 , len , stdin);

    printf("搜尋字串:");
    fgets(str2 , len , stdin);
    str2[strlen(str2) - 1] = '\0';

    size_t loc2 = strcspn(str1 , str2);

    if (loc2 == strlen(str1))
    {
        printf("沒有任何匹配\n");
    }else{
        printf("索引位置 %lu 處找到\n" , loc2+1);
    }
    
    system("pause");
    return 0;
}