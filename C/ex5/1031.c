// Description
// 写一个函数实现：输入一行字符，以空格分割单词，回车结束输入，输出单词的个数

// 输入样例
// There are many students and many trees!

// 输出样例
// 7
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    int count = 0;
    while((c = getchar()) != '\n')
        if(c == ' ')    count++;
    printf("%d", count + 1);
    return 0;
}