#include<stdio.h>
#include<math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        int blank = abs(n - i);
        int cs = n - blank;
        for(int i = 0; i < blank; i++)  printf(" ");
        for(int i = 0; i < cs; i++)  printf("*");
        printf("\n");
    }
    return 0;
}