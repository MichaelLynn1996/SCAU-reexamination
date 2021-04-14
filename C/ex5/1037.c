#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double a = 2.0, b = 1.0, sum = a / b;
    for (int i = 1; i < n; i++)
    {
        int temp = b;
        b = a;
        a = a + temp;
        sum += a / b;
    }
    printf("%0.4f", sum);
    
    return 0;
}
