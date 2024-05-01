#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


typedef struct nodes
{
    char data;
    struct nodes *next;
}node;


void print(node*);
void push(node** , char);
void pop(node**);
void release(node**);

int main(void)
{
 
    node *head = 0;
    char input = '*';
    for (int i = 0; i < 10; i++)
    {
        push(&head , 'b' + 2*i);
        print(head);
    }
    for (int i = 0; i < 5; i++)
    {
        pop(&head);
        print(head);
    }

    node a , r;
    a.data = 'a';
    a.next = 0;
    r.data = 'r';
    r.next = 0;

    node *now = 0;
    node *new1 = 0;
    node *pre = 0;
    new1 = &a;
    now = head;

    //insert a

    while(now != 0 && new1->data < now->data)
    {
        pre = now;
        now = now->next;
    }
  //  node *loc = head->next;
  //  new1->next = loc;
  //  pre->next = new1;

    if (pre == 0)//當為開頭插入時
    {
        new1->next = head;
        head = new1;
    }else{
        pre->next = new1;
        new1->next = now;
    }
    print(head);//要寫head，上述動作只是將新的點串上去，因此會改變head，若是寫pre，則只會印出插入點的前一個點到最後



    printf("enter letter:");
    scanf("%c" , &input);
    if (input !='*')
    {
        node *new2 = (node*)malloc(sizeof(node));
        new2->data = input;
        new2->next = 0;
        node *pre1 = 0;
        node *now1 = head;
        while (now1 && new2->data < now1->data)//若是符合條件，now就要移到下一個
        {
            pre1 = now1;
            now1 = now1->next;
        }

        if (pre1 == 0)
        {
            new2->next = head;
            head = new2;
        }else{
            pre1->next = new2;
            new2->next = now1;
        }
        
    }
    print(head);

    node h;
    h.data = 'h';
    h.next = 0;
    node *pre2 = 0;
    node *now2 = head;
    while (now2 && now2->data != h.data)
    {
        pre2 = now2;
        now2 = now2->next;
    }
    if (pre2 != 0)
    {
        pre2->next = now2->next;
        free(now2);
    }else{
        head = head->next;
        free(now2);
    }
    print(head);

    release(&head);
  
 
    system("pause");
    return 0;
}


void print(node *head)
{
    while (head != 0)
    {
        printf("%c " , head->data);
        head = head->next;
    }
    putchar('\n');
}


void push(node **stack , char letter)
{
    node *now = (node*)malloc(sizeof(node));
    now->data = letter;
    now->next = *stack;
    *stack = now;    
}


void pop(node **stack)
{
    node *now = *stack;
    *stack = now->next;
    free(now);
}


void release(node **stack)
{
    while (*stack)
    {
        node *now = *stack;
        *stack = now->next;
        free(now);
    }
    
}

