#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define len 10
#define rows 2
#define lens 3


int main(void)
{
    int *p = 0;

    printf("p位址:%p\n" , p);
    printf("p+1位址:%p\n" , p+1);
    printf("p+2位址:%p\n" , p+2);

    double v = 123.26;
    double *jw = &v;
    printf("v位址:%p\n" , jw);
    printf("v+1位址:%p\n" , jw+1);
    printf("v+2位址:%p\n" , jw+2);
    printf("v-1位址:%p\n" , jw-1);
    printf("v-2位址:%p\n" , jw-2);


    int arr[len] = {0};
    int *ad = arr;

    printf("arr:%p\n" , arr);
    printf("&arr[0]:%p\n" , &arr[0]);

    for (int i = 0; i < len; i++)
    {
        printf("arr[%d]:%p" , i , &arr[i]);
        printf("\tad + %d : %p\n" , i , ad + i);
    }
    
    int arr1[5] = {12,15,48,35,87};
    int *pe = arr1;

    for(int i =0; i < 5 ; i++)
    {
        printf("*(pe+%d): %d" , i , *(pe+i));
        printf("\t*(arr1 + %d) : %d\n" , i , *(arr1 + i));
    }

    int *begin = arr1;
    int *end = *(&arr1 + 1);

    for (int *it = begin; it < end; it++)
    {
        printf("%d " , *it);
    }

    puts("\n");

    int maze[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("%d\n" , sizeof(maze[0]));//maze[0]等於第一列
    printf("%d\n" , sizeof(maze));

    printf("rows: %d\n" , sizeof(maze) / sizeof(maze[0]));//代表著有幾列
    printf("lens: %d\n" , sizeof(maze[0]) / sizeof(maze[0][0]));//代表著有幾行，maze[0]等於第一列，maze[0][0]等於第一個元素

    printf("rows: %d\n" , *(&maze + 1) - maze);//因為一單位以一行為單位，所以為12byte，所以兩項位址相減會等於24，然後除以12
    printf("lens: %d\n" , *(&maze[0] + 1) - (maze[0]));//因為一單位以一元素為單位，所以為4byte，所以兩項相減會等於12，然後除以4

    for (int i = 0; i < 2; i++)
    {
        //int *row = maze[i];
        int (*row)[3] = &maze[i];
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                //printf("%d\n" , row[j]);
                printf("%d\n" , (*row)[j]);
            }else{
                //printf("%d\t" , row[j]);
                printf("%d\t" , (*row)[j]);
            }
        }
        
    }
    
    int row1[3] = {1,2,3};
    int row2[3] = {4,5,6};
    int *maze1[2] = {row1 , row2};
    printf("%p\t%p\t%p\t%p\n" , row1 , row2 , maze[0] , maze[1]);

    for (int i = 0; i < 2; i++)
    {
        int *row1 = maze[i];
        for (int j = 0; j < 3; j++)
        {
            printf("%d" , row1[j]);
        }
        printf("\n");
    }
    

    system("pause");
    return 0;
}