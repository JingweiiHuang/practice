#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h> 

int *unrepeated(int *arr , int size , int *returnsize)
{
    int max = arr[0];
    for(int i = 1 ; i < size ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int *h = (int*)calloc(sizeof(int) , max+1);

    for(int i = 0 ; i < size ; i++)
    {
        h[arr[i]]++;
    }

    int cnt = 0;

    for(int i = 0 ; i < max+1 ; i++)
    {
        if(h[i] == 1)
        {
            cnt++;
        }
    }
    if(cnt == 0)
    {
        return NULL;
    }

    *returnsize = cnt;

    int j = 0;

    int *ans = (int*)calloc(sizeof(int) , cnt);
    for(int i = 0 ; i < max+1 ; i++)
    {
        if(h[i] == 1)
        {
            ans[j++] = i;
        }
    }
    
    free(h);
    return &ans[0];
    // for(int i = 0 ; i < j ; i++)
    // {
    //     printf("%d " , ans[i]);
    // }

}

int main(void)
{
    int a[10] = {1,1,1,1,3,3,9,6,5,8};
    int resize = 0;
    int *ans = unrepeated(a , 10 , &resize);
    
    for(int i = 0 ; i < resize ; i++)
    {
        printf("%d " , ans[i]);
    }
    
    
    system("pause");
    return 0;
}

// int a = 0;

//     int max = arr[0];
//     for(int i = 1 ; i < size ; i++)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     int *h = (int*)calloc(sizeof(int) , max+1);
//     for(int i = 0 ; i < size ; i++)
//     {
//         h[arr[i]]++;
//     }

//     for(int i = 0 ; i < max+1 ; i++)
//     {
//         if(h[i] == 1)
//         {
//             a++;
//         }
//     }

//     int *ans = (int*)malloc(sizeof(int) * a);

//     if(a == 0)
//     {
//         return NULL;
//     }

//     int j = 0;
//     for(int i = 0 ; i < max+1 ; i++)
//     {
//         if(h[i] == 1)
//         {
//             ans[j] = i;
//             j++;
//         }
//     }
//     free(h);
//     *returnsize = a;
//     return ans;
