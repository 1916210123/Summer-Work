/*
实现函数double Power(double base, int exponent),求base的exponent次方.不得使用库函数,同时不需要考虑大数问题

示例1:输入:2.00000,10
      输出:1024.00000
示例2:输入:2.10000,3
      输出:9.26100
示例3:输入:2.00000,-2
      输出:0.25000
解释:2^(-2)=1/(2^2)=1/4=0.25

说明:-100.0<x<100.0
     n是32位有符号整数,其数值范围是[−231,231−1]
*/

#include<stdio.h>
double Power(double base,int exponent);
int main(void)
{
    int exponent;
    double base;
    scanf("%le %d",&base,&exponent);
    Power(base,exponent);
    printf("%.5f\n",Power(base,exponent));
    return 0;
}

double Power(double base,int exponent)
{
    double result;
    int i;
    result=1.0;
    if(exponent<0){
        for(i=1;i<=-exponent;i++){
            result=result*base;
        }
        return 1/result;
    }
    if(exponent==0) result=1;
    if(exponent>0){
        for(i=1;i<=exponent;i++){
            result=result*base;
        }
    }
    return result;
}
