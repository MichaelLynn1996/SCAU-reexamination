#include<stdio.h>
#include<string.h>

int main()
{
    int M, N, S;
    char price[1000][21];
    int len = 0, next = S;
    scanf("%d %d %d", &M, &N, &S);
    if(M < S)   //  小于的情况无人中奖
    {
        printf("Keep going...\n");
        return 0;
    }
    for(int i = 1; i <= M; i++)
    {
        char name[21];
        scanf("%s", &name);
        if(i == next)
        {
            int isNew = 1;
            for(int j = 0; j < len; j++)
                if(strcmp(name, price[j]) == 0) 
                {
                    isNew = 0;
                    break;
                }
            if(isNew)
            {
                strcpy(price[len], name);
                len++;
                next += N;
            }else
            {
                next += 1;
            }
        }
    }
    for(int i = 0; i < len; i++)
        printf("%s\n", price[i]);
    return 0;
}