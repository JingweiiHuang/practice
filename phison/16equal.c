#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

bool isequal(unsigned short a)
{
    unsigned short hex[4];
    hex[0] = (a & 0xF000) >> 12;
    hex[1] = (a & 0x0F00) >> 8;
    hex[2] = (a & 0x00F0) >> 4;
    hex[3] = (a & 0x000F);

    return ((hex[0] == hex[1]) && (hex[1] == hex[2]) && (hex[2] == hex[3]));
}

int main(void)
{
    printf("%d" , isequal(8738));

    system("pause");
    return 0;
}