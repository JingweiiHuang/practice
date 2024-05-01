#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for(int i = 0 ; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        printf("%d\n" , i);
    }

        for(int i = 0 ; i < 10; i++)
    {
        if(i == 5)
        {
            continue;;//當i=5時，會先跳出這個迴圈(執行continue結束這次迴圈，直接結束這次迴圈)，直接到下一次判斷
        }
        printf("%d\n" , i);
    }

    int input = 0;

    while (1)
    {
        printf("輸入為:");
        scanf("%d" , &input);

        if (input != 0)
        {
            printf("除數為:%.2f\n" , (double)48 / input);
        }
        else
        {
            printf("除數不可為0\n");
            break;
        }
    }
    

    system("pause");
    return 0;
}