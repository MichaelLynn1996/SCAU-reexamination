#include<stdio.h>
#include<malloc.h>
#define OK 1 
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int

typedef int Status;
typedef struct
{
	int *elem;
	int length;
	int listsize;
}SqList;

Status InitList_Sq(SqList &L) 
{  // 算法2.3
  // 构造一个空的线性表L。
  L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
  if (!L.elem) return OK;        // 存储分配失败
  L.length = 0;                  // 空表长度为0
  L.listsize = LIST_INIT_SIZE;   // 初始存储容量
  return OK;
} // InitList_Sq

int main(int argc, char const *argv[])
{
  SqList A, B, C;
  if(InitList_Sq(A) && InitList_Sq(B) && InitList_Sq(C))
	{
		scanf("%d", &A.length);
    for (int i = 0; i < A.length; i++)  scanf("%d", &A.elem[i]);
    scanf("%d", &B.length);
    for (int i = 0; i < B.length; i++)  scanf("%d", &B.elem[i]);
    C.length = A.length + B.length;
    int i = 0, j = 0, k = 0;
    for (; k < C.length; k++)
      if (A.elem[i] < B.elem[j])
      {
        C.elem[k] = A.elem[i];
        i++;
        if(i == A.length) break;
      }else
      {
        C.elem[k] = B.elem[j];
        j++;
        if(j == B.length) break;
      }
    k++;
    while(i < A.length)
    {
      C.elem[k] = A.elem[i];
      i++;
      k++;
    }
    while(j < B.length)
    {
      C.elem[k] = B.elem[j];
      j++;
      k++;
    }
    printf("List A:");
    for (int k = 0; k < A.length; k++)  printf("%d ", A.elem[k]);
    printf("\nList B:");
    for (int k = 0; k < B.length; k++)  printf("%d ", B.elem[k]);
    printf("\nList C:");
    for (int k = 0; k < C.length; k++)  printf("%d ", C.elem[k]);
	}
  return 0;
}
