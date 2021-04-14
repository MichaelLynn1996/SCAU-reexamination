#include "stdio.h"
#include "malloc.h"
#define LEN sizeof(struct student)

struct student
{
     long num;
     int score;
     struct student *next;
};

struct student *create(int n)
{ 
     struct student *head=NULL,*p1=NULL,*p2=NULL;
     int i;
     for(i=1;i<=n;i++)
     {  p1=(struct student *)malloc(LEN);
        scanf("%ld",&p1->num);    
        scanf("%d",&p1->score);    
        p1->next=NULL;
        if(i==1) head=p1;
        else p2->next=p1;
        p2=p1;
      }
      return(head);
}

struct student *merge(struct student *head, struct student *head2)
{ 
    struct student *h = head;
    while(h->next != NULL)  h = h->next;
    h->next = head2;
    return head;
}

void print(struct student *head)
{
    struct student *p;
    p=head;
    while(p!=NULL)
    {
        printf("%8ld%8d",p->num,p->score);
        p=p->next;
        printf("\n");
    }
}

int main()
{
    struct student *head, *head2;
    int n;
    long del_num;
    scanf("%d",&n); 
    head=create(n);
    print(head);
    scanf("%d",&n); 
    head2=create(n);
    print(head2);
    head = merge(head, head2);    
    print(head);
    return 0;
}