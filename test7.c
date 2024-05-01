#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




typedef struct node
{
    char data;
    struct node *next;
}nodes;

void link(const char* , nodes* , nodes* ,int);
void print(const nodes *);

int main(void)
{
    const char letter[] = {'a' , 'c' , 't'};
    nodes act[3];
    nodes *head = &act[0];
    nodes *pre = &act[0];
    int len = sizeof(act) / sizeof(act[0]);
    char target = 'c';

    printf("%d\n" , sizeof(act) / sizeof(act[0]));
    link(letter , head, act , len);
    putchar('\n');
    print(&act[0]);
    while (head !=0)
    {
        if (head->data == target)
        {
            printf("found!!\n");
            nodes *loc = head->next;//head->next指的是t的位址，因為head->next = &act[2]，在還沒插入之前
            nodes x;
            x.data = 'x';
            x.next = loc;
            head->next = &x;
            pre->next = head->next;//pre的位址會直接指向目前head的位址
            break;
        }
        pre = head;//這行是指每次都會先跟head一樣
        head = head->next;//但head會先領先pre一格
        if (head == 0)
        {
            printf("not found\n");
        }
        
    }
    print(&act[0]);
    

    system("pause");
    return 0;
}

    void link(const char letter[] , nodes *head , nodes act[] , int len)
    {
        for (int i = 0; i < len; i++)
        {
            head->data = letter[i];
            if (i == len - 1)
            {
                head->next = 0;
            }else{
                head->next = &act[i+1];
            }
            printf("%c" , head->data);
            head = head->next;
            
        }
        
        
    }



    void print(const nodes *head)
    {
        while(head != 0)
        {
            printf("%c\n" , head->data);
            head = head->next;
        }

    }
