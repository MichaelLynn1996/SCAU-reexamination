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

Status reverse(LinkList &L) {
    LinkList p = L->next, q;
    L->next = NULL;
    while (p != NULL)
    {
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
    
    return OK;
}

int main(int argc, char const *argv[])
{
    LinkList T;
    int l;
    scanf("%d", &l);
    if (CreateLink_L(T, l))
    {
        printf("The List is:");
        LoadLink_L(T);
        if (reverse(T))
        {
            printf("The turned List is:");
            LoadLink_L(T);
        }
        
    }
    return 0;
}
