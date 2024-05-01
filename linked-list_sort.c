#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

void print(node *);
void push(node ** , int);
void pop(node **);
void reset(node **);
void bubble(node ** , int);
void bubble2(node**);
void sorted(node*);
void inserttion(node**);
node *last(node*);
node *part(node* , node*);
void quick(node* , node*);

int main(void)
{
    int arr[] = {1,8,6,7,3,1,2,8};
    node *head = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < len ; i++)
    {
        push(&head , arr[i]);
        print(head);
    }
    //bubble(&head , len);
    //inserttion(&head);
    node *last1 = last(head);
    quick(head , last1);
    print(head);
    

    system("pause");
    return 0;
}


node *swap(node *a , node *b)
{
    node *tmp = b->next;
    b->next = a;
    a->next = tmp;
    return b;
}

void bubble(node** head, int count)
{
    node** h;
  
    for (int i = 0; i < count-1; i++) {
        h = head;//head常琌砆э跑筁计┮–Ω锣传常璶穝Ωh = head
        for (int j = 0; j < count - i - 1; j++) {
  
            node* p1 = *h;
            node* p2 = p1->next;
  
            if (p1->data > p2->data) {
                *h = swap(p1, p2);//ゲ斗璶*h
            }
  
            h = &(*h)->next;//ぃノ*head = *head->next硂琌э跑讽headぃ琌э跑龟悔糷head
        }
    }
}



node *sorts = NULL;
void sorted(node *newnode)
{
    if(sorts == NULL || sorts->data >= newnode->data)
    {
        newnode->next = sorts;
        sorts = newnode;
    }else{
        node *current = sorts;
        while(current->next != NULL && current->next->data < newnode->data)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;    
    }
}


void inserttion(node **stack)
{
    node* current = *stack;
    while(current != NULL)
    {
        node *next = current->next;
        sorted(current);
        current = next;
    }
    *stack = sorts;
}


node *last(node *head)
{
    node *tmp = head;
    while(tmp != NULL && tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return tmp;
}


node *part(node *first , node *last)
{
    node *pivot = first;
    node *current = first;
    int tmp = 0;
    while(current != NULL && current != last)
    {
        if(current->data < last->data)//т程рウ砞pivot
        {
            pivot = first;
            tmp = first->data;
            first->data = current->data;
            current->data = tmp;
            first = first->next;
        }
        current = current->next;
    }
    tmp = first->data;//ヘ玡眔first程盢籔程计ユ传
    first->data = last->data;
    last->data = tmp;
    return pivot;
}


void quick(node *first , node *last)
{
    if(first == last)
    {
        return;
    }
    node *pivot = part(first , last);

    if(pivot != NULL && pivot->next != NULL)
    {
        quick(pivot->next , last);
    }
    if(pivot != NULL && first != pivot)
    {
        quick(first , pivot);
    }
}

void print(node *head)
{
    while(head)
    {
        printf("%d " , head->data);
        head = head->next;
    }
    putchar('\n');
}

void push(node **stack , int number)
{
    node *now = (node*)calloc(sizeof(node) , 1);
    now->data = number;
    now->next = *stack;
    *stack = now;
}

void pop(node **stack)
{
    node *now = *stack;
    *stack = now->next;
    free(now);
}

void reset(node **stack)
{
    while(*stack)
    {
        node *now = *stack;
        *stack = now->next;
        free(now);
    }
}