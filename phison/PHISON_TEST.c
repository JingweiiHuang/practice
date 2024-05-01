#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MIN(a,b) ((a) <= (b) ? (a) : (b))

void ph(int *arr , int size)
{
    int *ptr = arr;
    for(int i = 0 ; i < size ; i++)
    {
        if(*ptr == i)
        {
            ptr++;
        }else{
            printf("%d " , i);
        }
    }
    
}

void phee(int *arr , int size , int b)
{   
    int min = b*10;
    int max = (b+1)*10-1;
    int *ptr = arr;
    while(*ptr < min)
    {
        ptr++;
    }

    for(int i = min ; i <= max ; i++)
    {
        if(*ptr == i)
        {
            ptr++;
        }else{
            printf("%d " , i);
        }
    }
}

int main(void)
{
    int a[10] = {1,3,5,7,10,15,18,26,45,47};
    ph(a , 100);
    putchar('\n');
    phee(a , 100 , 1);
    putchar('\n');
    int *ptr = a;
    printf("%d %d" , *ptr , *ptr++);

    system("pause");
    return 0;
}


