#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MIN(a,b) ((a) <= (b) ? (a) : (b))

int gcb(int a , int b)
{
    if(b > a)
    {
        int tmp = a;
        b = a;
        a = tmp;
    }
    if(b == 0)
    {
        return a;
    }
    return gcb(b , a%b);
    
}

int gdb(int a , int b)
{
    int base = gcb(a , b);
    return a*b/base;
}

bool xx(int a , int b)
{
    if(a == 1 || b == 1)
    {
        return true;
    }
    while(b > 0)
    {
        int tmp = a%b;
        a = b;
        b = tmp;
        if(b == 0)
        {
            return false;
            break;
        }else if(b == 1)
        {
            return true;
            break;
        }
    }
}

int swap(int a , int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return a;
}

void dexbin(int a)
{
    int bin[32] = {0};
    int i = 0;
    while(a)
    {
        if((a & 1) == 1)
        {
            bin[i] = 1;
        }else{
            bin[i] = 0;
        }
        a >>= 1;
        i++;
    }

    for(int i = 31 ; i >=0 ;i--)
    {
        printf("%d" , bin[i]);
    }
}

void dexhex(int a)
{
    unsigned char hex[8];
    int i = 0;
    while(a)
    {
        int tmp = a % 16;
        if(tmp > 9)
        {
            hex[i] = 'A'- 10 + tmp;
        }else{
            hex[i] = '0' + tmp;
        }
        i++;
        a >>= 4;
        
    }
    for(int k = i-1 ; k >= 0 ; k--)
    {
        printf("%c" , hex[k]);
    }
}

int findmax(int a)
{
    int cnt= 0;
    while(a)
    {
        cnt++;
        a >>= 1;
    }
    return cnt;

}

double mypow(double a , int n)
{
    double ans = 1;
    int k = 0;
    if(n == 0)
    {
        return 1;
    }
    if(n < 0)
    {
        n = -n;
        k = 1;
    }
    for(int i = 0 ; i < n ; i++)
    {
        ans *= a;
    }

    if(k == 1)
    {
        return 1/ans;
    }else{
        return ans;
    }
    
}

void swap(char *a , char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}



int main(void)
{
    int ans;
    ans = gcb(57,21);
    printf("gcb : %d " , ans);
    putchar('\n');
    int ans1 = gdb(57,21);
    printf("gdb : %d " , ans1);
    putchar('\n');
    int x = xx(30 , 1);
    printf("xx %d" , x);
    putchar('\n');
    int wa = swap(5,8);
    printf("swap %d" , wa);
    putchar('\n');
    dexbin(598259);
    putchar('\n');
    dexhex(54);
    putchar('\n');
    int wp = findmax(98);
    printf("max1 = %d" , wp);
    putchar('\n');
    double ww = mypow(9 , 4);
    printf("pow = %f" , ww);
    putchar('\n');

    char d[] = "abcdefg";
    for(int i = 0 ; i < 7/2 ; i++)
    {
        swap(&d[i] , &d[6-i]);
    }
    for(int i = 0 ; i < 7 ; i++)
    {
        printf("%c " , d[i]);
    }
    putchar('\n');
    int a[] = {2,5,6};
    int *p = a;
    printf("%d" , *p++);
    int least = MIN(*p++ , 8);
    printf("%d" , least);
    

    system("pause");
    return 0;
}