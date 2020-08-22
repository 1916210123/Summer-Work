/*WENTI
实现int sqrt(int x)函数,计算并返回x的平方根,其中x是非负整数,由于返回类型是整数,结果只保留整数的部分,小数部分将被舍去

示例:输入:4
     输出:2
示例:输入:8
     输出:2
说明:8的平方根是2.82842...,由于返回类型是整数,小数部分将被舍去
*/

#include<stdio.h>
#include<math.h>
int s(int x);
int main(void)
{
    int x;
    scanf("%d",&x);
    s(x);
    printf("%d\n",s(x));
    return 0;
}

int s(int x)
{
    int result;
    result=pow(x,0.5);
    return result;
}
