#include<stdio.h>

int main()
{
    char choice[3][10][5]; //0 手 1 眼 2 口
    int cnts[3] = {0};
    for(int i = 0; i < 3; i++)
    {
        char ch;
        int isEnd = 0;
        while((ch = getchar()) != '[')
            if(ch == '\n')
            {
                isEnd == 1;
                continue;
            }
        if(isEnd)   break;
        int pos = 0;
        while((ch = getchar()) != ']')
        {
            choice[i][cnts[i]][pos] = ch;
            pos++;
        }
        choice[i][cnts[i]][pos] = '\0';
        cnts[i]++;
    }
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if(a - 1 < cnts[0] && b - 1 < cnts[1] && c - 1 < cnts[2] && d - 1 < cnts[1] && e - 1 < cnts[0])
        {
            printf("%s", choice[0][a - 1]);
            printf("(");
            printf("%s", choice[1][b - 1]);
            printf("%s", choice[2][c - 1]);
            printf("%s", choice[1][d - 1]);
            printf(")");
            printf("%s", choice[0][e - 1]);
            printf("\n");
        }else   printf("Are you kidding me? @\\/@\n");
    } 
    
    return 0;
}