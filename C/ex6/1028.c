// 1028 求素数
// 时间限制:1000MS  代码长度限制:10KB
// 提交次数:4562 通过次数:3274

// 题型: 编程题   语言: G++;GCC
// Description
// 输出2到200之间（包括2、200）的所有素数（注：要求1行1个素数，按由小到大的顺序输出）。

// 输入样例
// （无）

// 输出样例
// 2
// 3
// 5
// 7
// ……
// 199

// 作者 admin

// Version: 0
#include<stdio.h>
#include<math.h>
#define MAX 200

int isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)  return 0;
    return 1;
}

int main(int argc, char const *argv[])
{
    for(int i = 2; i <= MAX; i++)
    {
        if (isPrime(i))
            printf("%d\n", i);
    }
    return 0;
}
