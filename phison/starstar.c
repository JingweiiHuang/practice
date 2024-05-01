#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int i , j;
    int col;
    int row;

    printf("enter size:");
    scanf("%d" , &row);

    col = row;
    for(i = 1 ; i <= row ; i++)
    {
        if(i < (row+1)/2)
        {
            for(j = 1 ; j <= row ; j++)
            {
                if((col+1)/2-(i-1) <= j && (col+1)/2+(i-1) >= j)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{
            for(j = 1 ; j <= row ; j++)
            {
                if((col+1)/2-(row-i) <= j && (col+1)/2+(row-i) >= j)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        putchar('\n');
    }

    system("pause");
    return 0;
}