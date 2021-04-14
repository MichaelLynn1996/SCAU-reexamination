#include<stdio.h>

int main(int argc, char const *argv[])
{
    double value;
    scanf("%lf", &value);
    printf("%0.2lf", (value - 32) * 5 / 9 );
    return 0;
}
