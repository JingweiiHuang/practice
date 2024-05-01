#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    for ( int i = 0; i < 10; i++)
    {
    printf("µ²ªG:%d\n" , rand()%100);
    }

    for (int count = 0; count < 10 ; count++)
    {
        count = count %10;
        printf("%d\n" , count);
        if (count == 9)
        {
            printf("end\n");
        }
        
    }

    int as = 10;
    printf("%f\n" , (double) as / 3);
    printf("%d\n" , as / 3);
    
    system("pause");
    return 0;
    
}