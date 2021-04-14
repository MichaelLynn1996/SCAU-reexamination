#include<stdio.h>
#include<malloc.h>

struct people
{
    int val;
    struct people *next;
};

void create(struct people *head, int n)
{
    struct people *p = head;
    int i = 1;
    while(i <= n)
    {
        struct people *temp = (struct people *)malloc(sizeof(struct people));
        temp->val = i;
        temp->next = NULL;
        p->next = temp;
        p = p->next;
        i++;
    }
    p->next = head->next;
}

void game(struct people *head)
{
    struct people *p = head, *q = p->next;
    int i = 1;
    while (p->next != p)
    {
        if(i % 3 == 0)
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }else
        {
            p = q;
            q = p->next;
        }
        i++;
    }
    printf("%d", p->val);
}

int main()
{
    int n;
    struct people *head = (struct people *)malloc(sizeof(struct people));
    scanf("%d", &n);
    head->next = NULL;
    create(head, n);
    game(head);
    return 0;
}