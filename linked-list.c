#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef const char* string;

typedef struct node
{
    string data;
    struct node *next;
}Node;

void printnodes(const Node*);
void printnodec(const Node*);

int main(void)
{
    Node data1,data2,data3;
    data1.data = "yes"; 
    data1.next = &data2;
    data1.next->data = "no";//data2.data = "no"
    data1.next->next = &data3;
    data1.next->next->data = "yes la";
    data1.next->next->next = 0;
    printnodes(&data1);
    Node *head = &data1;

    printf("data1 is %s(ptr = %p)\n" , data1.data , data1.next);
    printf("data2 is %s(ptr = %p)\n" , data2.data , data2.next);

    printf("memory location of data1 is %p\n" , &data1.data);
    printf("memory location of data1 is %p\n" , &data1);
    printf("memory location of data2 is %p\n" , &data2);

    string letter[] = {"i" , "love" , "you" ,"too"};
    Node act[4];
    Node *head1 = &act[0];

    for (int i = 0; i < 4; i++)
    {
        head1->data = letter[i];
        if (i == 3)
        {
            head1->next = 0;
        }else{
            head1->next = &act[i+1];
        }
            printf("node[%d] = %s %p\n" , i , head1->data , head1->next);
            head1 = head1->next;
        
    }
    printnodes(&act[0]);
    putchar('\n');
    printf("%p\t%p\t%p\t%p" , act[0].next , act[1].next , act[2].next , act[3].next);

    system("pause");
    return 0;
}

void printnodes(const Node *head)
{
    while (head != 0)
    {
        printf("%s\n" , head->data);
        head = head->next;
    }
    
}

void printnodec(const Node *head)
{
    while (head != 0)
    {
        printf("%c\n" , head->data);
        head = head->next;
    }
    
}