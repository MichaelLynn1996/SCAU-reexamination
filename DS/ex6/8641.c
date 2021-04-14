#include <stdio.h>

void printList(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main()
{  
    int N;
    scanf("%d", &N);
    int a[100];
    for(int i=0; i < N; i++)
        scanf("%d", &a[i]) ;    
    for(int i = N - 1; i > 0; i--)
    {
        int isOrder = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j + 1])
            {
                isOrder = 0;
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
        printList(a, N);
        if(isOrder) break;
    }
}