#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int age = 15;
    float score = 99.90;
    char person = 'g';
    printf("\n年級\t分數\t姓名\n");
    printf("%d\t%.2f\t%c\n" , age , score , person);
    system("pause");
    return 0;
}