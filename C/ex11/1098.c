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

struct student *insert(struct student *head, struct student *stud)
{  
    struct student *h = head;
    while (h != NULL)
    {
        if(h->next == NULL)
        { 
            h->next = stud;
            break;
        }
        else if(h->num < stud->num && h->next->num > stud->num)
        {
            stud->next = h->next;
            h->next = stud;
            break;
        }
        else    h = h->next;
    }
    return head;
}

int main()
{
    struct student *head,*stu;
    int n;
    scanf("%d",&n);   
    head=create(n);
    print(head);
    stu=(struct student *)malloc(LEN);
    scanf("%ld",&stu->num);        
    scanf("%d",&stu->score);    
    stu->next = NULL;
    head=insert(head,stu);
    print(head);
    return 0;
}