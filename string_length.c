#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define lenn 80

int main(void)
{
    char buf[80];

    puts("��J�r��:");
    scanf("%s" , buf);
    //fgets(buf , sizeof(buf) / sizeof(buf[0]) , stdin);//�|�Nenter��p��i�h�A���r��h+1

    size_t len = strlen(buf);
    printf("�r����׬�:%lu\n" , len);
    
    char buff[lenn];

    puts("��J�W��:");
    scanf("%s" , buff);

    int lenofName1 = strlen(buff) +1;//+1�O���[�W�Ŧr��
    char name1[lenofName1];
    strcpy(name1 , buff);
    printf("�W��:%s\n" , name1);
    printf("%d\n" , lenofName1);

    int lenofname2 = lenofName1 -1;//-1�O�u�ݽƻs�W�@�q���r��A�ҥH���Φ��Ŧr��
    char name2[lenofname2];
    memset(name2 , '\0' , lenofname2);
    strncpy(name2 , buff , lenofname2-3);
    printf("�W��:%s\n" , name2);
    printf("%d\n" , lenofname2);

    char str1[] = "i love ";
    char str2[] = "hello";

    int lennn = strlen(str1) + strlen(str2) +1;//+1�O���[�W�Ŧr��
    char concated[lennn];
    memset(concated , '\0' , lennn);

    strcat(concated , str1);
    strcat(concated , str2);

    printf("%d\n" , lennn);
    printf("����:%s\n" , concated);

    system("pause");
    return 0;
}