typedef char SElemType;
#include "malloc.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h" // exit()
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;        // Status是函数的类型,其值是函数结果状态代码，如OK等
#define STACK_INIT_SIZE 10 // 存储空间初始分配量
#define STACKINCREMENT 2   // 存储空间分配增量
struct SqStack
{
    SElemType *base; // 在栈构造之前和销毁之后，base的值为NULL
    SElemType *top;  // 栈顶指针
    int stacksize;   // 当前已分配的存储空间，以元素为单位
};                   // 顺序栈

Status InitStack(SqStack &S)
{ // 构造一个空栈S
    S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S.base)
        return FALSE;
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}
Status StackEmpty(SqStack S)
{ // 若栈S为空栈，则返回TRUE，否则返回FALSE
    return S.top == S.base ? OK : FALSE;
}
Status ClearStack(SqStack &S)
{ // 把S置为空栈
    S.top = S.base;
    return OK;
}
Status DestroyStack(SqStack &S)
{ // 销毁栈S，S不再存在
    free(S.base);
    S.base = NULL;
    S.top = NULL;
    S.stacksize = 0;
    return OK;
}
Status Push(SqStack &S, SElemType e)
{ // 插入元素e为新的栈顶元素
    if(S.top - S.base >= S.stacksize)
    {
        S.base = (SElemType *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S.base)
            return ERROR;
        S.top = S.base + S.stacksize;
        S.stacksize += STACKINCREMENT; 
    }
    *S.top++ = e;
    return OK;
}
Status Pop(SqStack &S, SElemType &e)
{ // 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if (S.top == S.base)
        return ERROR;
    e = *--S.top;
    return OK;
}
Status StackTraverse(SqStack S, Status (*visit)(SElemType))
{ // 从栈底到栈顶依次对栈中每个元素调用函数visit()。
    // 一旦visit()失败，则操作失败
    while (S.top > S.base)
        visit(*S.base++);
    printf("\n");
    return OK;
}
Status visit(SElemType c)
{
    printf("%c", c);
    return OK;
}
void LineEdit()
{ // 利用字符栈s，从终端接收一行并送至调用过程的数据区。算法3.2
    SqStack s;
    char ch, c;
    int n, i;
    InitStack(s);
    scanf("%d", &n);
    ch = getchar();
    for (i = 1; i <= n; i++)
    {
        ch = getchar();
        while (ch != '\n')
        {
            switch (ch)
            {
            case '#':
                Pop(s, c);
                break; // 仅当栈非空时退栈
            case '@':
                ClearStack(s);
                break; // 重置s为空栈
            default:
                Push(s, ch); // 有效字符进栈
            }
            ch = getchar(); // 从终端接收下一个字符
        }
        StackTraverse(s, visit);               // 将从栈底到栈顶的栈内字符输出
        ClearStack(s); // 重置s为空栈
    }
    DestroyStack(s);
}
int main()
{
    LineEdit();
    return 0;
}