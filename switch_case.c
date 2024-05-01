#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for (int i = 0; i < 5; i++)
    {
    
    int score = 0;
    int level = 0;

    printf("輸入成績:");
    scanf("%d" , &score);
    level = score/10;

    switch (level)
    {
    case 10://因為若是為100分，也是A，顧可以不用判斷 case10 直接輸出A
    {
        int a = 100;
        printf("%d\n" , a);
    }
        break;
    case 9:
    puts("A");
        break;
    case 8:
    puts("B");
        break;

    case 7:
    puts("C");
        break;

    case 6:
    puts("D");
        break;

    default:
    puts("F");
        break;
    }
    }
    system("pause");
    return 0;
}