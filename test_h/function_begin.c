#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "function_begin.h"


    int power2(int num)
    {
        return power(num , 2);
    }

    int power(int n , int p)
    {
        int r = 1;
        for (int i = 0; i < p; i++)
        {
            r *= n;
        }
        return r;
    }