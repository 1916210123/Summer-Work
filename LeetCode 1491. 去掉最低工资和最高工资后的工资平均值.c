/*
给你一个整数数组salary,数组里每个数都是唯一的,其中salary[i]是第i个员工的工资,请你返回去掉最低工资和最高工资以后,剩下员工工资的平均值

示例:输入:salary=[4000,3000,1000,2000]
     输出:2500.00000
解释:最低工资和最高工资分别是1000和4000,去掉最低工资和最高工资以后的平均工资是(2000+3000)/2=2500

示例:输入:salary=[1000,2000,3000]
     输出:2000.00000
解释:最低工资和最高工资分别是1000和3000,去掉最低工资和最高工资以后的平均工资是(2000)/1=2000

示例:输入:salary=[6000,5000,4000,3000,2000,1000]
     输出:3500.00000

示例:输入:salary=[8000,9000,2000,3000,6000,1000]
     输出:4750.00000

提示:3<=salary.length<=100
     10^3<=salary[i]<=10^6
     salary[i]是唯一的
     与真实值误差在10^-5以内的结果都将视为正确答案
*/

//先将工资排序，从大到小或从小到大，去掉首尾两项，其余求和取平均值，并保留小数点后五位

#include<stdio.h>
int main(void)
{
    int i,j,n,temp;
    int salary[100];
    char ch;
    n=0;
    printf("salary=[");
    for(i=0;i<300;i++){
        scanf("%d",&salary[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(salary[i]>salary[j]){
                temp=salary[i];
                salary[i]=salary[j];
                salary[j]=temp;
            }
        }
    }
    double sum=0;
    for(i=1;i<n-1;i++){
        sum=sum+salary[i];
    }
    printf("%.5f\n",sum/(n-2));
    return 0;
}
