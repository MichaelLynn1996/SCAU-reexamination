#include<stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    scanf("%d", &value);
    printf("%d\n", value / 100);
    printf("%d", value % 10);
    return 0;
}
