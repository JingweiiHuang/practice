#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    for (int i = 0; i < 5; i++)
    {
    
    int score = 0;
    int level = 0;

    printf("��J���Z:");
    scanf("%d" , &score);
    level = score/10;

    switch (level)
    {
    case 10://�]���Y�O��100���A�]�OA�A�U�i�H���ΧP�_ case10 ������XA
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