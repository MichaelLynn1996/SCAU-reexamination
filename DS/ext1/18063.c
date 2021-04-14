#include<stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int i;
    struct Node* next;
}Node;

void createLink(Node *head, int n)
{
    Node *p = head;
    for(int i = 1; i <= n; i++)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->i = i;
        temp->next = NULL;
        p->next = temp;
        p = p->next;
    }
    p->next = head->next;
}

void game(Node *head)
{
    int i = 1;
    Node *p = head->next, *q;
    while (p->next != p)
    {
        if (i % 3 == 0)
        {
            q->next = p->next;
            free(p);
            p = q->next;
        }else
        {
            q = p;
            p = q->next;
        }
        i++;
    }
    printf("%d", p->i);
}

int main(int argc, char const *argv[])
{
    int n;
    Node *head = (Node *)malloc(sizeof(Node));
    head->i = -1;
    head->next = NULL;
    scanf("%d", &n);
    createLink(head, n);
    game(head);
    return 0;
}

