#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day = 0;
    float m, money, give = 0.01;
    scanf("%f", &m);
    while(money >= 0)
    {
        money += m - give;
        give *= 2;
        day++;
    }
    printf("%d", day);
    return 0;
}
