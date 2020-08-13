/*
写一个函数,输入n,求斐波那契(Fibonacci)数列的第n项
斐波那契数列的定义：F(0)=0,F(1)=1,F(N)=F(N-1)+F(N-2),其中N>1,斐波那契数列由0和1开始,之后的斐波那契数就是由之前的两数相加而得出

注：答案需要取模1e9+7(1000000007),如计算初始结果为:1000000008,请返回1

示例1:输入:n=2
      输出:1
示例2:输入:n=5
      输出:5
提示:0<=n<=100
*/
//存在问题：取模

#include<stdio.h>
int F(int n);
int main(void)
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n",F(n));
    return 0;
}

int F(int n)
{
    int result;
    if(n==1||n==2) result=1;
    else result=F(n-1)+F(n-2);
    return result;
}
