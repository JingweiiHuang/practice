#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(int argc , char *argv[])
{
    char text1[] = "hello";
    const char *text2 = "hello";

    const char *text = text1;
    char *text3 = text1;
    text = text2;
    text3 = (char*)text2;

    typedef const char * String;
    String names[] = {"jason" , "amy" , "jessica"};

    for (int i = 0; i < 3; i++)
    {
        String name = names[i];
        printf("%s\n" , name);//names[i]，不能寫name[i]，會無法顯示
    }

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n" , argv[i]);
    }
    
    
    system("pause");
    return 0;
}