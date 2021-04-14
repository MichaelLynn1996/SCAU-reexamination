//  甲   乙   丙
//  A   B   C
#include<stdio.h>
#include<math.h>

void printR(int v, int M, int end)
{
    if(v > M)   printf("Cong");
    else if(v < M)  printf("Gai");
    else    printf("Ping");
    if(end == 1)    printf(" ");
    else if(end == 2)   printf("\n");
}

int main()
{
    int A = -1, B, C;
    int M, X, Y;
    scanf("%d %d %d", &M, &X, &Y);
    for(int i = 10; i < 100; i++)
    {
        int tempA = i;
        int tempB = i / 10 + i % 10 * 10;
        if(abs(tempA - tempB) % X == 0 && tempB % Y == 0 && abs(tempA - tempB) / X == tempB / Y)
        {
            A = tempA;
            B = tempB;
            C = B / Y;
        }
    }
    if(A == -1) printf("No Solution\n");
    else
    {
        printf("%d ", A);
        printR(A, M, 1);
        printR(B, M, 1);
        printR(C, M, 2);
    }
    return 0;
}