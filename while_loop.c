#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    int score = 0;
    int sum = 0;
    int count = -1;//為了把一開始分數0抵銷掉

    while (score != -1)
    {
        printf("分數為:");
        scanf("%d" , &score);
        count++;
        sum += score;
    }

    printf("avg = %.2f\n" , (double) sum / count);
    printf("範本幾個:%d\n" , count);
    

    int in = 0;
    int replay = 0;

    do
    {
        printf("輸入數值:");
        scanf("%d" , &in);

        printf("輸入為奇術?:%c\n" , ((in % 2) ? 'y' : 'n'));
        printf("繼續?(0 or 1):");
        scanf("%d" , &replay);
        printf("\n");

    } while (replay);
     
    system("pause");
    return 0;
}