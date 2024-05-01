#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int add(int , int);
int muti(int , int);
int calculate(int (*)(int , int));

int main(void)
{
    //int (*op)(int , int) = add;
    //int result = op(3 , 5);
    printf("%d\n" , calculate(add));
    printf("%d\n" , calculate(muti));

    system("pause");
    return 0;
}

int calculate(int (*op)(int , int))//int (*op)(int , int) = add;，相當於把這個命令放到另一個函式裡面
{
    int result = 1;
    for (int i = 2; i <= 5; i++)
    {
        result = op(result , i);
    }
    
}

int add(int a , int b)
{
    return a + b;
}

int muti(int a , int b)
{
    return a * b;
}