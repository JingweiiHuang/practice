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
node *sort(node * , node *);
node *merge(node *);

int main(void)
{
    node *head1 = NULL;
    node *head2 = NULL;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(i % 2 == 0)
        {
            push(&head1 , i);
        }else{
            push(&head2 , i);
        }
        
    }
    print(head1);
    putchar('\n');
    print(head2);
    putchar('\n');
    node *mm = sort(head1 , head2);
    print(mm);
    putchar('\n');
    node *mm1 = merge(mm);
    print(mm1);
    putchar('\n');

    system("pause");
    return 0;
}

void print(node *head)
{
    while(head)
    {
        printf("%d " , head->val);
        head = head->next;
    }
}

void push(node **stack , int val)
{
    node *now = (node*)malloc(sizeof(node));
    now->val = val;
    now->next = *stack;
    *stack = now;
}

node *sort(node *a , node *b)
{
    if(a == NULL)
    {
        return b;
    }
    else if(b == NULL)
    {
        return a;
    }
    if(a->val < b->val)
    {
        a->next = sort(a->next , b);
        return a;
    }else{
        b->next = sort(a , b->next);
        return b;
    }
}

node *merge(node *head)
{
    node *slow = head;
    node *fast = head;
    node *prev = NULL;
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    while(fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = NULL;

    node *p1 = merge(head);
    node *p2 = merge(slow);

    return sort(p1,p2);
}

