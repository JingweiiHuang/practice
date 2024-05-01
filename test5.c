#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef const char* string;
typedef struct 
{
    char number[10];
    char airline[30];
    char origin[4],destination[4];
    int frequency,sitcap;
    double duration;
}flight;

    void get_number(flight);
    void getarrow(flight*);

void printSubstrings(char *str, int n) {
    // ?出??字符子串
    printf("Single character substrings:\n");
    for (int i = 0; i < n; i++) {
        printf("%c\n", str[i]);
    }
    
    // ?出?度? 2 到 n-1 的子串
    printf("\nLength-2 to Length-%d substrings:\n", n-1);
    for (int len = 2; len < n; len++) {
        for (int i = 0; i <= n - len; i++) {
            for (int j = i; j < i + len; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
        }
    }
    
    // ?出整?字符串
    printf("\nLength-%d substring:\n", n);
    printf("%s\n", str);
}

int main(void)
{
    string name[] = {"amy" , "flora" , "listen"};
    char abc[] = "a";

    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {
        printf("%s\t" , name[i]);
    }

    printf("\n");
    printf("%d\n" , sizeof(name));
    printf("%s\n" , abc);

    //flight no367 = {"367" , "chanlong" , "tpe" , "jpn" , 7 , 500 , 3};
    flight no367 , no368; 
    flight fly[10] ;

    for (int i = 0; i < 10; i++)
    {
        flight fly[0];
        fly[0].sitcap = 400;
        printf("sit[%d] = %d\n" , i , fly[0].sitcap + i*100);
    }
    
    
    strcpy(no367.number , "ek367");
    strcpy(no367.airline , "chanlong");
    strcpy(no367.origin , "tpe");
    strcpy(no367.destination , "jpn");
    no367.frequency = 7;
    no367.sitcap = 500;
    no367.duration = 3.5;

    flight n367 = no367;
    printf("%s\n" , n367.number);
    get_number(n367);
    
    flight *n = &n367;
    printf("%d\n" , n->sitcap);
    getarrow(n);
    getarrow(&n367);

    putchar('\n');

    char str[] = "abcdef";
    int ne = strlen(str);
    printSubstrings(str, ne);

    system("pause");
    return 0;
}

void get_number(flight fl)
{
    printf("%s\n" , fl.number);
}

void getarrow(flight *fl)
{
    printf("%s\n" , fl->number);
}