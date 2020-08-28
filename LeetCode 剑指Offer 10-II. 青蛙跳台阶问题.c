/*一只青蛙一次可以跳上1级台阶,也可以跳上2级台阶,求该青蛙跳上一个n级的台阶总共有多少种跳法。
答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。
题目链接：https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof
*/
//假设跳上第n级台阶的跳法总数为f(n),则跳上n级台阶可以分以下两种情况：
//1 在第n-1阶台阶上跳1级台阶,此时有f(n-1)种跳法
//2 在第n-2阶台阶上跳2级台阶,此时有f(n-2)种跳法
//由于这两种情况都可以达到跳上n级台阶,所以f(n)=f(n-1)+f(n-2) (n>=2)
//边界条件为f(1)=1,f(0)=1

#include<stdio.h>
int numWays(int n);
int main(void)
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n",numWays(n));
}
int numWays(int n){
    if(n<2) return 1;
    if(n<3) return n;
    return numWays(n-1)+numWays(n-2);
}
