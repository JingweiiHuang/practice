#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int in1 , in2;

    printf("輸入1: , 輸入2:");
    scanf("%d %d" , &in1 , &in2);

    printf("樹入數字:%d %d\n" , in1 , in2);

    fflush(stdin);//清除輸入緩衝區

    char buf[50];
    printf("輸入1~5:");
    scanf("%[1-5]" , buf);//%[1-5]為限制範圍
    printf("輸入字元為:%s\n" , buf);

    system("pause");
    return 0;
}