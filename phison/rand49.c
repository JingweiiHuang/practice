#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>//(rand())

int main(void)
{
    int dt[7];
    srand(time(0));
    for(int i = 0 ; i < 7 ; i++)
    {
        dt[i] = (rand()%49)+1;
        int val = dt[i];
        for(int j = 0 ; j < i ; j++)
        {
            if(val == dt[j])
            {
                i--;
            }
        }
    }
    

    for(int i = 0 ; i < 7 ; i++)
    {
        printf("%d " , dt[i]);
    }
    

    system("pause");
    return 0;
}

// int main(void)
// {
//     int dtht[7];
//     int j;
//     srand(time(0));
//     for(int i = 0 ; i < 7 ; i++)
//     {
//         int tmp = (rand()%49)+1;
//         for(j = 0 ; j < i ; j++)
//         {
//             if(dtht[j] == tmp)
//             {
//                 i--;
//                 break;
//             }
//         }
//         if(tmp != dtht[j])
//         {
//             dtht[i] = tmp;
//         }
//     }

//     for(int i = 0 ; i < 7 ; i++)
//     {
//         printf("%d " , dtht[i]);
//     }

//     system("pause");
//     return 0;
// }

// int re[7];
//     int j;
//     srand(time(0));
//     for(int i = 0 ; i < 7 ; i++)
//     {
//         re[i] = (rand()%49)+1;
//         for(j = 0 ; j < i ; j++)
//         {
//             if(re[i] == re[j])
//             {
//                 i--;
//                 break;
//             }
//         }
//     }

//     for(int i = 0 ; i < 7 ; i++)
//     {
//         printf("%d " , re[i]);
//     }

