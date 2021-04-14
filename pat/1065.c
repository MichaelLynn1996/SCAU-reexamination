#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main()
{
    int N, map[MAX] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int p1, p2;
        scanf("%d %d", &p1, &p2);
        map[p1] = p2;
        map[p2] = p1;
    }
    int M, ps[10000], cnt = 0, map_pre[MAX] = {0};
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        int p;
        scanf("%d", &p);
        if (map[p] == 0)
        {
            map_pre[p] = 1;
        }
        else
        {
            if (map_pre[map[p]] == 1)    map_pre[[map[p]] = 0
            else    map_pre[p] = 1;
        }
    }
    for (int i = 0; i < MAX; i++)
        if (map_pre[i] == 1)
        {
            cnt++;
            ps[cnt] = i;
        }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
        if (i == cnt - 1)
            printf("%d\n", ps[i]);
        else
            printf("%d ", ps[i]);
    return 0;
}