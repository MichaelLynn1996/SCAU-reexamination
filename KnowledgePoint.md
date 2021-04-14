# 知识点记录

为华南农业大学2021计算机考研复试的刷题知识点的记录。

## 有点巧妙的题

ex4	1017

ex5	1030

ex7	1047(冒泡排序)	1046(计算高精度加法)

ex11 1107(链表的排序)

## 数学知识

* 素数/质数：是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。

## 一些ASCII码及其在C语言中的运算

* 0 ~ 9	48 ~ 47
* A ~ Z	 65 ~ 90
* a~z 	97 ~ 122
* 运算

```c
//	大小写切换
if(cs[i] > 64 && cs[i] < 91) cs[i] += 32;
else if(cs[i] > 96 && cs[i] < 123)  cs[i] -= 32;
//	字符数字的运算
int n = c - 48;	//char数字转int数字
char c = n + 48;	//	int数字转char数字
```



## qsort()函数的使用

在华农2020上机真题中两次遇到需要排序的地方，在考试中自己写会很麻烦。使用qsort()函数可以极大的提高上机效率。

```c
#include<stdlib.h>	//	需要引入的头文件

//	对int的比较（2020上机真题第九题）
int compare(const void *value1, const void *value2) 	//	compare函数
{
	return *(int*)value1 - *(int*)value2;
}
qsort(scores, n, sizeof(int), compare);	//	使用
									//	参数1：需要排序的数组
									//	参数2：排序的数组长度
									//	参数2：参与排序的元素的大小
									//	参数4：自己实现的compare函数
//	compar返回值小于0（< 0），那么value1所指向元素会被排在value2所指向元素的前面
//	compar返回值等于0（= 0），那么value1所指向元素与value2所指向元素的顺序不确定
//	compar返回值大于0（> 0），那么value1所指向元素会被排在value2所指向元素的后面
									
//	对结构体进行比较（2020上机真题第十题）
struct Cargo	//	结构体
{
    double value;
    int weight;
}Cargo;
int compare(const void *value1, const void *value2) {	//	compare函数
    double v1 = ((struct Cargo*)value1)->value / ((struct Cargo*)value1)->weight;
    double v2 = ((struct Cargo*)value2)->value / ((struct Cargo*)value2)->weight;
	// 降序
	return v1 - v2? -1 : 1;
}
qsort(cargos, CARGO_KIND, sizeof(Cargo), compare);	//使用
```

## ex5 1029求最大公约数

思路1)：因此判断一个整数m是否是素数，只需把 m 被 2 ~ m-1 之间的每一个整数去除，如果都不能被整除，那么 m 就是一个素数。

思路2)：另外判断方法还可以简化。m 不必被 2 ~ m-1 之间的每一个整数去除，只需被 2 ~ $\sqrt{m}$ 之间的每一个整数去除就可以了。如果 m 不能被 2 ~  $\sqrt{m}$间任一整数整除，m 必定是素数。例如判别 17 是是否为素数，只需使 17 被 2~4 之间的每一个整数去除，由于都不能整除，可以判定 17 是素数。

##  默认值问题

ex7中的1051，出现了二维int型数组以及普通int变量默认值不为0的问题影响最终结果。所以遇到问题可以自己初始化试试。

## 浮点数的精度问题

ex4 1120题