#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int con(int n)
{
    if(n == 1)
    {
        return 1;
    }else{
        return con(n-1)+n-1;
    }
}

int main(void)//1+2+4+7+11+16+22+29
{
    int *p;
    p = (int*)0x0061FF00;
    *p = 1234;
    printf("%d %p" , *p , p);
    putchar('\n');

    int sum1 = 0;
    for(int i = 1 ; i <= 6 ; i++)
    {
        sum1 += con(i);
    }

    int sum2 = 1;
    int pre = 1;
    int j = 1;
    int next = 0;

    for(int i = 1 ; i <= 5 ; i++)
    {
        next = pre + j;
        pre = next;
        sum2 += pre;
        j++;
    }

    int sum3 = 0 , k = 1 , y = 1;
    while(k <= 16)
    {
        sum3 += k;
        k += y;
        y++;
    }

    

    printf("%d %d %d" , sum1 , sum2 , sum3);
    putchar('\n');

    system("pause");
    return 0;
}

void find(unsigned int dataA , unsigned int dataB)
{
    unsigned int listhead = 0;
    unsigned int found = listhead;
    int prev = NULL;
    int next = NULL;

    while(ListArray[found].nextptr != NULL)
    {
        if(ListArray[found].DataH == dataA && ListArray[found].DataL == dataB)
        {
            if(prev == NULL)
            {
                printf("prev : NULL , found : listhead");
            }else{
                printf("prev : %d , found : %d" , prev , found);
            }
        }
        next = ListArray[found].nextptr;
        if(ListArray[next].DataH << 16 + ListArray[next].DataL) > (dataA << 16 + dataB)
        {
            break;
        }
        prev = found;
        found = ListArray[found].nextptr;
    }

    
}



