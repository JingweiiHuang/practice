#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct nodes
{
    char data;
    struct nodes *next;
}node;

void print(const node*);
void push(node** , char);
void pop(node**);


int main(void)
{
    int *a;
    int b = 5;
    printf("%p\n" , a);
    printf("%p\n" , &b);
    a = &b;
    printf("%p\n" , &b);
    printf("%p\n" , a);
    

    node *head = 0;
    node *now = 0;
    for (int i = 0; i < 5; i++)
    {
        //declare a memory space for a node by DMA
        now = (node*)malloc(sizeof(node));
        now->data = 'a'+i;
        now->next = 0;
        //add linked//先想第二個，一開始會把head = now寫出來，再去想now->next = head
        now->next = head;
        head = now;
        print(head);
    }

    while (head != 0)
    {
        node *del = head;
        head = head->next;
        print(head);
        free(del);
    }
    print(head);

    node *head1 = 0;//會需要使用取址的方式，因為若是使用函式，只會將值複製，所以必須使用取址
    push(&head1 , 'g');
    push(&head1 , 'd');
    push(&head1 , 'f');
    push(&head1 , 'w');
    push(&head1 , 'y');
    push(&head1 , 'k');
    push(&head1 , 'r');
    print(head1);
    pop(&head1);
    print(head1);
    pop(&head1);
    print(head1);
    pop(&head1);
    print(head1);
    pop(&head1);
    print(head1);


    system("pause");
    return 0;
}

void print(const node *head)
{
    while(head != 0)
    {
        printf("%c " , head->data);
        head = head->next;
    }
    putchar('\n');
}

void push(node **stack , char letter)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = letter;
    temp->next = *stack;//取這個整個節點的位址，可以想成原本是=head(單位址)變成取位址所以要變成*stack(*head)
    *stack = temp;
}

void pop(node **stack)
{
    node *temp = *stack;
    *stack = temp->next;
    free(temp);
}