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
        int (*re)[3] = &maze2[i];//�Y�O�ϥ�int *re = maze[i]�N��O�N�Ĥ@�椸����re�o�ӫ���(�}�C)�A�ӥثe�o�ؼg�k�O���Nmaze[i]��Ӱ}�C����}�s��re�o�Ӧ��T��int���ת��}�C����
        for (int j = 0; j < (sizeof(maze2[0]) / sizeof(maze2[0][0])); j++)
        {
            printf("%d " , (*re)[j]);//�ҥH��X���ܥi�H�gre[j]�A�ثe�o�g�k�N�O�Nre��}���X�A�M�ᦳ3��int���סA�C�Ӧs�@�ӭȡA�i�H�ݦ��O&maze[0]�M&maze[1]�A�U���T�Ӫ���
        }
        putchar('\n');
    }
    
    

    system("pause");
    return 0;
}