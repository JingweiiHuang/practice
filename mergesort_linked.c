#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




typedef struct Node
{
    int val;
    struct Node *next;
}node;

void print(node*);
void push(node** , int);
void middle(node * , node ** , node**);
node *sorted(node * , node *);
node *mergesort(node *);


int main(void)
{
    int arr[] = {5,8,7,6,1,3,4,9,2};
    node *head = NULL;
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++)
    {
        push(&head , arr[i]);
    }
    print(head);
    head = mergesort(head);
    print(head);

    system("pause");
    return 0;
}

node *sorted(node *a , node *b)
{
    if(a == NULL)
    {
        return b;
    }else if(b == NULL)
    {
        return a;
    }
    if(a->val < b->val)
    {
        a->next = sorted(a->next , b);
        return a;
    }else{
        b->next = sorted(a , b->next);
        return b;
    }
}

node *mergesort(node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    node *slow = head;
    node *fast = head;
    node *prev = NULL;
    while(fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;

    node *p1 = mergesort(head);
    node *p2 = mergesort(slow);
    return sorted(p1 , p2);
}


void print(node *head)
{
    while(head)
    {
        printf("%d " , head->val);
        head = head->next;
    }
    putchar('\n');
}

void push(node **stack , int data)
{
    node *now = (node*)malloc(sizeof(node));
    now->val = data;
    now->next = *stack;
    *stack = now;
}