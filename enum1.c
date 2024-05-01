#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//const int  action_stop = 0;
//const int  action_right = 1;
//const int  action_left = 2;
//const int  action_up = 3;
//const int  action_down = 4;

enum action {
    stop = 1 , right , left , up , down
};

void play(enum action action)
{
    switch (action)
    {
    case stop:
        printf("stop,%d" , stop);
        break;
    case right:
        printf("stop,%d" , right);
        break;
    case left:
        puts("left");
        break;
    case up:
        puts("up");
        break;
    case down:
        puts("down");
        break;    
    
    default:
    puts("not support");
    }
}

int main(void)
{
    play(right);
    play(stop);

    system("pause");
    return 0;
}