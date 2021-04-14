#include<stdio.h>
#include<malloc.h>
#define ERROR 0
#define OK 1 
#define ElemType int

typedef int Status;
typedef struct LNode
{
 int data;
 struct LNode *next;
}LNode,*LinkList;

Status CreateLink_L(LinkList &L,int n){
// 创建含有n个元素的单链表
  LinkList p,q;
  int i;
  ElemType e;
  L = new LNode;
  L->next = NULL;              // 先建立一个带头结点的单链表
  q = new LNode;
  q = L;
  for (i=0; i<n; i++) {
    scanf("%d", &e);
    p = new LNode;  // 生成新结点
    // 请补全代码
    p->data = e;
    p->next = NULL;
    q->next = p;
    q = p;
  }
  return OK;
}

Status LoadLink_L(LinkList &L){
// 单链表遍历
    LinkList p = L->next;
    while(p != NULL)    // 请填空
	{
		printf("%d ",p->data); 
		p = p->next;    // 请填空
	}
    printf("\n");
    return OK;
}

LinkList merge(LinkList &A, LinkList &B){
    LinkList L = new LNode;
    LinkList p1 = A->next, p2 = B->next;
    LinkList Lt = L;
    while(p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data)
        {
            Lt->next = p1;
            p1 = p1->next;
        }else
        {
            Lt->next = p2;
            p2 = p2->next;
        }
        Lt = Lt->next;
    }
    if (p1 != NULL)
        Lt->next = p1;
    else if (p2 != NULL)
        Lt->next = p2;
        
    return L;
}

int main(int argc, char const *argv[])
{
    LinkList A, B, C;
    int la, lb;
    scanf("%d", &la);
    if (CreateLink_L(A, la))
    {
        printf("List A:");
        LoadLink_L(A);
    }
    scanf("%d", &lb);
    if (CreateLink_L(B, lb))
    {
        printf("List B:");
        LoadLink_L(B);
    }
    C = merge(A, B);
    printf("List C:");
    LoadLink_L(C);
    
    return 0;
}
