#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int pow10(int);


bool test(int x)
{
    if ((x%2) == 0)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int isPalindrome(int x) 
{
    int size = 0;
    int a;
    if(x <= 0)
    {
        return 0;
    }else{
        a = x;
    }
    int mid ;
    while(a>0)
    {
        size++;
        a = a/10;
    }
    int arr[size];

    for(int i = 0 ; i < size ; i++)
    {
        arr[i] = x%10;
        x = x/10;
    }

    if((size%2) == 1)
    {
        mid = (size/2);
        int in = size-1;
        int flag;
        for(int i = 0 ; i < mid ; i++)
        {
            if(arr[in] == arr[i])
            {
                flag = 1;
                in--;
            }else{
                flag = 0;
                break;
            }
        }
        return flag;
    }
    else
    {
        int t = size/2;
        int ind = size-1;
        int flag;
        for(int i = 0 ; i < t ; i++)
        {
            if(arr[ind] == arr[i])
            {
                flag = 1;
                ind--;
                
            }else{
                flag = 0;
                break;               
            }
        }
        return flag;
    }      
}

void fe(const char **s)
{
    printf("%s" , s[0]);
}

int main(void)
{
    int a = 12130;
    int arr[5];
    for(int i = 0 ; i < 2 ; i++)
    {
        arr[i] = a%10;
        a = a/10;
    }
    printf("%d,%d " , arr[0] , arr[1]);
    printf("%d " , isPalindrome(22));
    printf("%d " , test(121));

    const char *s[] = {"vd"};
    int ie = strlen(*s);
    printf("%c " , &s[0]);
    printf("%d " , ie);

    const char *v[] = {"ad" , "fe"};

    fe(v);
    putchar('\n');

    const char *sle = "kda";
    int h[126] = {0};
    printf("%d" , h[sle[2]]);
    putchar('\n');
    printf("%d" , 's');
    putchar('\n');

    int cnt = 3;
    int ans = 0;
    for(int i = 0 ; i < cnt ; i++)
    {
        ans = ans + (2) * (pow10(cnt-1-i));
    }
    printf("%d" , ans);
    putchar('\n');

    system("pause");
    return 0;
}

int pow10(int a)
{
    int re = 1;
    for(int i = 0 ; i < a ; i++)
    {
        re *= 10; 
    }
    return re;
}

