#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    int gcd(int , int);
    int gcd1(int , int);

    int gcd(int n , int m)
    {
        if (m == 0)
        {
            return n;
        }else{
            return gcd(m , n % m);
        }
        
    }

    int gcd1(int n , int m)
    {
        while(m != 0)
        {
            int r = n % m;
            n = m;
            m = r;
        }
        return n;
    }


int main(void)
{
    int a = 0;
    int b = 0;

    printf("¿é¤J¨â¼Æ:");
    scanf("%d %d" , &a , &b);

    printf("gcd: %d\n" , gcd(a ,b));
    printf("gcd: %d\n" , gcd1(a ,b));

    system("pause");
    return 0;
}