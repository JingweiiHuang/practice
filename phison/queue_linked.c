#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Node
{
    int val;
    struct Node *next;
}node;

void queue(node ** , node **,int);
void print(node *);
void pop(node **);
int getfirst(node*);
int getlast(node*);
int getsize(node*);
void stack(node ** , int);

int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    node *head = NULL;
    node *prev = NULL;
    for(int i = 0 ; i < 9 ; i++)
    {
        queue(&head , &prev , arr[i]);
    }
    print(head);
    putchar('\n');
    node *head1 = NULL;
    for(int i = 0 ; i < 9 ; i++)
    {
        stack(&head1 , arr[i]);
    }
    print(head1);
    putchar('\n');
    for(int i = 0 ; i < 4 ; i++)
    {
        pop(&head);
    }
    print(head);
    putchar('\n');
    int f = getfirst(head);
    printf("%d" , f);
    putchar('\n');
    int l = getlast(head);
    printf("%d" , l);
    putchar('\n');
    int s = getsize(head);
    printf("%d" , s);
    putchar('\n');

    system("pause");
    return 0;
}

void queue(node **first , node **last , int val)
{
    node *now = (node*)malloc(sizeof(node));
    now->val = val;
    now->next = NULL;
    node *prev = *last;

    if(*first == NULL)
    {
        *first = now;
    }else{
        prev->next = now;
    }
    *last = now;
}

void pop(node **first)
{
    node *curr = *first;
    *first = curr->next;
    free(curr);
}

int getfirst(node *head)
{
    if(head != NULL)
    {
        return head->val;
    }
}

int getlast(node *head)
{
    while(head->next)
    {
        head = head->next;
    }
    return head->val;
}

int getsize(node *head)
{
    int cnt = 0;
    while(head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print(node *head)
{
    while(head)
    {
        printf("%d " , head->val);
        head = head->next;
    }
}

void stack(node **first , int val)
{
    node *now = (node*)malloc(sizeof(node));
    now->val = val;
    now->next = *first;
    *first = now;

}