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
        //add linked//���Q�ĤG�ӡA�@�}�l�|��head = now�g�X�ӡA�A�h�Qnow->next = head
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

    node *head1 = 0;//�|�ݭn�ϥΨ��}���覡�A�]���Y�O�ϥΨ禡�A�u�|�N�Ƚƻs�A�ҥH�����ϥΨ��}
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
    temp->next = *stack;//���o�Ӿ�Ӹ`�I����}�A�i�H�Q���쥻�O=head(���})�ܦ�����}�ҥH�n�ܦ�*stack(*head)
    *stack = temp;
}

void pop(node **stack)
{
    node *temp = *stack;
    *stack = temp->next;
    free(temp);
}