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
    SqList L;
    if (InitList_Sq(L))
    {
      scanf("%d", &L.length);
      for (int i = 0; i < L.length; i++)
        scanf("%d", &L.elem[i]);
      printf("The List is:");
      for (int i = 0; i < L.length; i++)
        printf("%d ", L.elem[i]);
      int i = 0, j = L.length - 1, temp;
      while(i < j) {
        temp = L.elem[i];
        L.elem[i] = L.elem[j];
        L.elem[j] = temp;
        i++;
        j--;
      }
      printf("\nThe turned List is:");
      for (int i = 0; i < L.length; i++)
        printf("%d ", L.elem[i]);
    }
    
    return 0;
}
