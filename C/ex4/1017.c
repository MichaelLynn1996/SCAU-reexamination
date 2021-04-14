// 1017 求数的位数
// 时间限制:1000MS  代码长度限制:10KB
// 提交次数:4463 通过次数:3702

// 题型: 编程题   语言: G++;GCC
// Description
// 由键盘输入一个不多于9位的正整数，要求输出它是几位数。


// 输入格式
// 一个整数

// 输出格式
// 输出该数为几位数

// 输入样例
// 349213

// 输出样例
// 6

// 作者 admin

// Version: 2
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int i = 0, value;
    scanf("%d", &value);
    while (value > 0) 
    {
        value /= 10;
        i++;
    }
    printf("%d", i);
    
    return 0;
}
