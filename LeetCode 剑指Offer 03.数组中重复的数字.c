/*
题：在一个长度为n的数组nums里的所有数字都在0～n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 ：输入：[2, 3, 1, 0, 2, 5, 3]
       输出：2 或 3
限制：2<=n<=100000
*/


#include<stdio.h>
int main(void)
{
    int i,j,n,t,nums[100000],a[100000];
    char ch;
    n=0;
    a[100000]=-1;   /*便于最后通过循环输出符合条件的数*/
    printf("输入：[");
    for(i=0;i<=100000;i++){
        scanf("%d",&nums[i]);
        n=n+1;     /*计算数组nums长度*/
        ch=getchar();
        if(ch==']') break;
    }

    for(i=0;i<n;i++){
        if(nums[i]<0||nums[i]>=n){
            printf("数字不满足题目条件\n");   /*所有数字要在0~n-1范围内*/
            return 0;
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]==nums[j]&&nums[i]>=0){
                a[i]=nums[i]+1;
                nums[j]=-1;   /*避免重复计数*/
                break;
            }
        }
    }

    t=0;
    for(i=0;i<n;i++){
            if(a[i]>0){
                t=t+1;
                if(t==1) printf("%d",a[i]-1);
                else printf(" 或 %d",a[i]-1);
            }
    }
    if(t==0) printf("数组nums里无重复数字\n");
    return 0;
}
