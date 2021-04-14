#include "stdio.h"
#define N 10

int main()
{  
    int a[N], i, j, t;
    for(i=0;i<N;i++)
        scanf("%d", &a[i]) ;    
    for(int i = N - 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}