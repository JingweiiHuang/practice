#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int x = 21;
    int size = 0;
    int a , flag;
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
    printf("%d " ,a);

    for(int i = 0 ; i < size ; i++)
    {
        arr[i] = a%10;
        a = a/10;
        
    }
    printf("%d " ,arr[1]);

    if((size%2) == 1)
    {
        mid = (size/2);
        int in = size-1;
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
    }
    else
    {
        int t = size/2;
        int ind = size-1;
        printf("%d" , arr[ind]);
        for(int i = 0 ; i < t ; i++)
        {
            if(arr[ind] == arr[i])
            {
                printf("%d , %d" , arr[ind] , arr[i]);
                flag = 1;
                ind--;
                printf("%d , %d" , arr[ind] , arr[i]);
                
            }else{
                flag = 0;
                break;               
            }
        }
        
    }      

    printf("%d" , flag);
    

    system("pause");
    return 0;
}