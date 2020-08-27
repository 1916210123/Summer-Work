/*
给定一个非负整数num,反复将各个位上的数字相加,直到结果为一位数

输入:38
输出:2
解释:各位相加的过程为:3+8=11,1+1=2,由于2是一位数,所以返回2
*/

#include<stdio.h>

int main(void)
{
    int num,sum;
    scanf("%d",&num);
    if(num/10==0){
        printf("%d\n",num);
        return 0;
    }
    sum=0;
    while(num!=0){
        sum=num%10+sum;
        num=num/10;
        if(num==0&&sum>=10){
            num=sum;                /*第一次各位相加后和仍不为一位数,需将和sum作为新的num运算*/
            sum=0;
        }
    }
    printf("%d\n",sum);
    return 0;
}
