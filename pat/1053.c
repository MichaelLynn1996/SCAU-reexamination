#include<stdio.h>

int main()
{
    int N;
    double e;
    int D;
    scanf("%d %lf %d", &N, &e,& D);
    double pro = 0, abs = 0;
    for(int i = 0; i < N; i++)
    {
        int K;
        scanf("%d", &K);
        int day = 0;
        for(int j = 0; j < K; j++)
        {
            double temp;
            scanf("%lf", &temp);
            if(temp < e)    day++;
        }
        if(day > K / 2)
        {
            if(K > D)   abs++;
            else    pro++;
        }
    }
    printf("%.1lf%% %.1lf%%\n", abs / N * 100, pro / N * 100);
    return 0;
}