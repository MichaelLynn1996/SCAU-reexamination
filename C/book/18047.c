#include<stdio.h>
#include<math.h>

int judge(int n)
{
    int n1 = n / 100, n2 = n % 100 /10, n3 = n % 10;
    return (pow(n1, 3) + pow(n2, 3) + pow(n3, 3)) == n;
}

int main()
{
    for (int i = 100; i < 1000; i++)
        if(judge(i))   printf("%d\n", i);
    
    return 0;
}