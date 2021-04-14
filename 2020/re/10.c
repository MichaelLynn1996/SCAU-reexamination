#include<stdio.h>
#include<stdlib.h>

struct cargo
{
    double weight;
    int count;
};

int cmp(const void *v1, const void *v2)
{
    double d1 = (*(struct cargo*)v1).weight;
    double d2 = (*(struct cargo*)v2).weight;
    return d1 > d2 ? -1 : 1;
}

int main()
{
    struct cargo cs[3];
    int vol;
    scanf("%d", &vol);
    double max = 0;
    for(int i = 0; i < 3; i++)
    {
        scanf("%lf %d", &cs[i].weight, &cs[i].count);
        cs[i].weight /= cs[i].count;
    }
    qsort(cs, 3, sizeof(struct cargo), cmp);
    for(int i = 0; i < 3; i++)
    {
        if(vol > cs[i].count)
        {
            max += cs[i].count * cs[i].weight;
            vol -= cs[i].count;
        }else
        {
            max += vol * cs[i].weight;
            vol = 0;
            break;
        }
    }
    printf("%.1lf", max);

    return 0;
}


