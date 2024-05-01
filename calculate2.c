#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int score = 0;

while (1)
{

    printf("輸入成績:");
    scanf("%d" , &score);

    printf("是否及格:%c\n" , score >= 60 ? 'y' : 'n');
}
    system("pause");
    return 0;

}