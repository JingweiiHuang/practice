#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int score = 0;

while (1)
{

    printf("��J���Z:");
    scanf("%d" , &score);

    printf("�O�_�ή�:%c\n" , score >= 60 ? 'y' : 'n');
}
    system("pause");
    return 0;

}