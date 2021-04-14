// 1038 打印图案
// 时间限制:1000MS  代码长度限制:10KB
// 提交次数:4316 通过次数:2828

// 题型: 编程题   语言: G++;GCC
// Description
// 由键盘输入正数n（n<10），要求输出如下中间数字为n的菱形图案。

// 输出格式
// 菱形右边不留多余空格

// 输入样例
// 4

// 输出样例
//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1

// 作者 admin

// Version: 0
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        int blank = abs(n - i);
        int nums = n - blank;
        int k = 2;
        for(int j = 0; j < blank; j++)  printf(" ");
        for(int j = 1; j <= nums; j++)  printf("%d", j);
        for(int j = nums - 1; j >= 1; j--)  printf("%d", j);
        
        printf("\n");
    }
    return 0;
}