#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int asd = 54;
    int *p = &asd;
    printf("asd����}:%p\n" , &asd);
    printf("�ܼƪ���:%d\n" , *p);
    printf("�ܼƪ���}:%p\n" , p);

    *p = 215;
    printf("�ܼƪ���:%d\n" , *p);
    printf("�ܼƪ���}:%p\n" , p);

    void *a = &asd;

    int *iptr = (int*)a;
    printf("%d\n" , *iptr);

    const int x = 10;
    const int y = 50;
    int* const p = &x;

    *p = &y;//�|�o�Ϳ��~�A�]*p �w�Q&x�ᤩ��}

    system("pause");
    return 0;
}