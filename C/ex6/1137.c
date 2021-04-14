// 1137 找满足要求的数字
// 时间限制:1000MS  代码长度限制:10KB
// 提交次数:6079 通过次数:2986

// 题型: 编程题   语言: G++;GCC
// Description
// 输出1到9999中能被7整除，而且至少有一位数字是5的所有数字

// 输出格式
// 一行一个

// 输出样例
// 35
// 56
// 105
// 154
// ......

// 作者 admin

// Version: 0
#include<stdio.h>
#define MAX 9999

int main(int argc, char const *argv[])
{
    for(int i = 35; i <= MAX; i += 7)
    {
        int n = i;
        while (n != 0)
        {
            if (n % 10 == 5)
            {
                printf("%d\n", i);
                break;
            }
            n /= 10;
        }
    }
    return 0;
}
