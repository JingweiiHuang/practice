#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



typedef struct Node{
    int data;
    struct Node *next;
}node;

void push(node **stack , int val)
{
    node *now = (node*)malloc(sizeof(node));
    now->data = val;
    now->next = *stack;
    *stack = now;
}

void swap(node *a , node *b)
{
    int tmp = b->data;
    b->data = a->data;
    a->data = tmp;
    
}

int main(void)
{
    int arr[5] = {1,2,5,8,6};
    int *ptr = (int*)(&arr);
    printf("%d %d\n " , *ptr++ , *++ptr);
    putchar('\n');

  
    int *p;
    int n = 7;
    p = (int*)0x0061FF08;
    *p = 445566;
    printf("%d %p" , *p , p);
    putchar('\n');

    node *head = 0;
    node *prev = NULL;
    for(int i = 0 ; i < 5 ; i++)
    {
        push(&head , arr[i]);
    }

    swap(head->next , head->next->next->next);

    while(head)
    {
        printf("%d " , head->data);
        head = head->next;
    }
    putchar('\n');


    system("pause");
    return 0;
}