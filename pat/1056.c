#include<stdio.h>

int main()
{
    int N, list[10];
    for(int i = 0; i < N; i++)  scanf("%d", &list[i]);
    int sum = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i != j)  sum += list[i] * 10 + list[j];
    printf("%d", sum);
    
    return 0;
}