#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define row 9
#define col 9
#define rows 2
#define cols 3

int main(void)
{
    int maze[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            maze[i][j] = (i+1) * (j+1);
            printf("%2d\t" , maze[i][j]);
        }
        putchar('\n');
    }

    int maze1[rows][cols] = {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < rows; i++)
    {
        int *rowss = maze[i];
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t" , rowss[j]);
        }
        putchar('\n');
    }

    int maze2[2][3] = {{1,2,6} , {4,8,3}};

    for (int i = 0; i < (sizeof(maze2) / sizeof(maze2[0])); i++)
    {
        int (*re)[3] = &maze2[i];//若是使用int *re = maze[i]意思是將第一行元素給re這個指標(陣列)，而目前這種寫法是指將maze[i]整個陣列的位址存到re這個有三個int長度的陣列指標
        for (int j = 0; j < (sizeof(maze2[0]) / sizeof(maze2[0][0])); j++)
        {
            printf("%d " , (*re)[j]);//所以輸出的話可以寫re[j]，目前這寫法就是將re位址取出，然後有3個int長度，每個存一個值，可以看成是&maze[0]和&maze[1]，各有三個長度
        }
        putchar('\n');
    }
    
    

    system("pause");
    return 0;
}