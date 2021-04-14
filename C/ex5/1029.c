// Description
// 由键盘输入两个正整数m、n（m、n<1000000），计算它们的最大公约数。
// 输入样例
// 16,24
// 输出样例
// 8
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d,%d", &m, &n);
    if(m == n)  return m;
    int a = m > n ? m : n, b = m > n ? n : m;
    while (a % b != 0)
    {
        int c = b;
        b = a % b;
        a = c;
    }
    printf("%d", b);
    
    return 0;
}
