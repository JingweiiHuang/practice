#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    int score = 0;
    int sum = 0;
    int count = -1;//���F��@�}�l����0��P��

    while (score != -1)
    {
        printf("���Ƭ�:");
        scanf("%d" , &score);
        count++;
        sum += score;
    }

    printf("avg = %.2f\n" , (double) sum / count);
    printf("�d���X��:%d\n" , count);
    

    int in = 0;
    int replay = 0;

    do
    {
        printf("��J�ƭ�:");
        scanf("%d" , &in);

        printf("��J���_�N?:%c\n" , ((in % 2) ? 'y' : 'n'));
        printf("�~��?(0 or 1):");
        scanf("%d" , &replay);
        printf("\n");

    } while (replay);
     
    system("pause");
    return 0;
}