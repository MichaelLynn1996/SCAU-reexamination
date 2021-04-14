#include<stdio.h>
#include<stdlib.h>

int cmp(const void *v1, const void *v2)
{
    return *(int *)v1 - *(int *)v2;
}

int main()
{
    int N, map[36] = {0}, cnt = 0, ans[37];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int num, sum = 0;
        scanf("%d", &num);
        if(num >= 100)
        {
            sum += num / 100;
            num /= 100;
        }
        if(num >= 10)
        {
            sum += num / 10;
            num /= 10;
        }
        sum += num;
        if(map[sum] == 0)
        {
            ans[cnt] = sum;
            cnt++;
        }
        map[sum]++;
    }
    printf("%d\n", cnt);
    qsort(ans, cnt, sizeof(int), cmp);
    for(int i = 0; i < cnt; i++)
        if(i == cnt - 1)    printf("%d\n", ans[i]);
        else    printf("%d ", ans[i]);
    
    return 0;
}