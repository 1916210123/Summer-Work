/*
统计一个数字在排序数组中出现的次数。

示例1:输入:nums=[5,7,7,8,8,10],target=8
      输出:2
示例2:输入:nums=[5,7,7,8,8,10],target=6
      输出:0
限制:0<= 数组长度<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,n,t,target,nums[50000];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<50000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    t=0;
    for(i=0;i<n;i++){
        if(nums[i]==target) t=t+1;
    }
    printf("%d",t);
    return 0;
}
