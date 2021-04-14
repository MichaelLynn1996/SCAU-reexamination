#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++)
        for(int j = 0; j < 4; j++)
        {
            char ch, ans;
            scanf("%c-%c", &ch, &ans);
            getchar();
            if(ans == 'T')
                printf("%d", ch - 'A' + 1);
        }
    printf("\n");
    return 0;
}