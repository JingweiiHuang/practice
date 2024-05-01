#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define lenn 80

int main(void)
{
    char buf[80];

    puts("輸入字串:");
    scanf("%s" , buf);
    //fgets(buf , sizeof(buf) / sizeof(buf[0]) , stdin);//會將enter鍵計算進去，讓字串多+1

    size_t len = strlen(buf);
    printf("字串長度為:%lu\n" , len);
    
    char buff[lenn];

    puts("輸入名稱:");
    scanf("%s" , buff);

    int lenofName1 = strlen(buff) +1;//+1是指加上空字元
    char name1[lenofName1];
    strcpy(name1 , buff);
    printf("名稱:%s\n" , name1);
    printf("%d\n" , lenofName1);

    int lenofname2 = lenofName1 -1;//-1是只需複製上一段的字串，所以不用有空字元
    char name2[lenofname2];
    memset(name2 , '\0' , lenofname2);
    strncpy(name2 , buff , lenofname2-3);
    printf("名稱:%s\n" , name2);
    printf("%d\n" , lenofname2);

    char str1[] = "i love ";
    char str2[] = "hello";

    int lennn = strlen(str1) + strlen(str2) +1;//+1是指加上空字元
    char concated[lennn];
    memset(concated , '\0' , lennn);

    strcat(concated , str1);
    strcat(concated , str2);

    printf("%d\n" , lennn);
    printf("串街後:%s\n" , concated);

    system("pause");
    return 0;
}