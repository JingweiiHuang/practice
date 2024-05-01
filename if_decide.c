#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for (int i = 0; i < 5; i++)
    {  
    int score = 0;

    printf("¿é¤J¤À¼Æ:");
    scanf("%d" , &score);

    if (score >= 90)
    {
        printf("get A grade\n");
    }else if (score >= 80 && score <90)
    {
        printf("get B grade\n");
    }else if (score >= 70 && score <80)
    {
        printf("get C grade\n");
    }else if (score >= 60 && score <70)
    {
        printf("get D grade\n");
    }else
    {
        printf("get F grade\n");
    }
    }
    system("pause");
    
    return 0;
}