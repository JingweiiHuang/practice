#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int asd = 54;
    int *p = &asd;
    printf("asd:%p\n" , &asd);
    printf("跑计:%d\n" , *p);
    printf("跑计:%p\n" , p);

    *p = 215;
    printf("跑计:%d\n" , *p);
    printf("跑计:%p\n" , p);

    void *a = &asd;

    int *iptr = (int*)a;
    printf("%d\n" , *iptr);

    const int x = 10;
    const int y = 50;
    int* const p = &x;

    *p = &y;//穦祇ネ岿粇*p 砆&x结ぉ

    system("pause");
    return 0;
}