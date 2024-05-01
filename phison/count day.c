#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int day , month , year , plus;
    printf("輸入目前時間:");
    scanf("%d  %d  %d" , &year , &month , &day);
    putchar('\n');
    printf("輸入加入天數:");
    scanf("%d" , &plus);
    putchar('\n');
    int sum = day + plus;
    int leak = 0;


    while(sum > mon[month-1])
    {
        if(mon[month-1] == 2)
        {
            if((year%400 == 0) || (year%100 != 0) && (year%4 == 0))
            {
                mon[month-1] = 29;
                leak = 1;
            }else{
                mon[month-1] = 28;
                leak = 0;
            }
        }
        
            sum -= mon[month-1];
            month++;
            if(month > 12)
            {
                year++;
                month = 1;
            } 
        
    }

    day = sum;

    printf("目前時間:%d  %d  %d" , year , month , day);

    system("pause");
    return 0;
}