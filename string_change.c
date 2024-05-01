#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <errno.h>
#define len 80


int main(void)
{
    printf("\"1010\"\t二進位 : \t%ld\n" , strtol("1010" , NULL , 2));
    printf("\"12\"\t八進位 : \t%ld\n" , strtol("12" , NULL , 8));
    printf("\"A\"\t十六進位 : \t%ld\n" , strtol("A" , NULL , 16));
    printf("\"012\"\t自動 : \t%ld\n" , strtol("012" , NULL , 0));
    printf("\"0xA\"\t自動 : \t%ld\n" , strtol("0xA" , NULL , 0));
    printf("\"junk\"\t自動 : \t%ld\n" , strtol("junk" , NULL , 0));

    long a = strtol("99999999999999999999999999999" , NULL , 10);

    if (errno == ERANGE)
    {
        printf("超出範圍\n");
        errno = 0;
    }else{
        printf("%d\n" , a);
    }
    
    int i,j,k;
    float x,y;
    char str1[10],str2[4];

    sscanf("25 54.32E-1 Thompson 56 789 123 56" , "%d %f %9s %2d %f %d %s3[0-9]" , &i ,&x ,str1 ,&j ,&y ,&k ,str2);
    printf("%d %f %s %d %f %d %s\n" , i,x,str1,j,y,k,str2);


    int b = snprintf(NULL , 0 , "%d %f %s %d %s" , 25 , 54.3255 , "thom" , 56 , "78");
    char str[b+1];//最後會有空字元

    snprintf(str , sizeof(str) , "%d %f %s %d %s" , 25 , 54.3255 , "thom" , 56 , "78");
    printf("%s\n" , str);

    char str3[] = "abc";
    char str4[] = "def";

    int cx = snprintf(NULL , 0 , "%s%s" , str3 ,str4);
    char comb[cx + 1];

    snprintf(comb , sizeof(comb) , "%s%s" , str3 , str4);
    printf("%s\n" , comb);

    system("pause");
    return 0;
}