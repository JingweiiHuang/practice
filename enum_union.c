#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    
    char cvalue;
    int ivalue;
    double dvalue;
    enum {C, I, D} type;
}Head;

void readchar(Head *head , char cvalue)
{
    head->cvalue = cvalue;
    head->type = C;
}

void readint(Head *head , int ivalue)
{
    head->ivalue = ivalue;
    head->type = I;
}

void readdouble(Head *head , double dvalue)
{
    head->dvalue = dvalue;
    head->type = D;
}

void print(Head *head )
{
    switch (head->type)
    {
    case 0:
        printf("%c\n" , head->cvalue);
        break;
    case 1:
        printf("%c\n" , head->ivalue);
        break;
    case 2:
        printf("%c\n" , head->dvalue);
        break;
    }
}

int main()
{
    Head head1;

    readchar(&head1 , 'a');
    print(&head1);

    readdouble(&head1 , 20.00);
    print(&head1);

    readint(&head1 , 5);
    print(&head1);

  //  printf("%s" , head1.type);

    system("pause");
    return 0;
}