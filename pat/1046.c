#include<stdio.h>

int main()
{
    int N, a = 0, b = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if(a2 == a1 + b1 && b2 != a1 + b1)  b++;
        else if(a2 != a1 + b1 && b2 == a1 + b1) a++;
    }
    printf("%d %d\n", a, b);
    return 0;
}