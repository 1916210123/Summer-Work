/*
给定一个整数数组nums和一个目标值target,请你在该数组中找出和为目标值的那两个整数,并返回他们的数组下标
你可以假设每种输入只会对应一个答案,但是,数组中同一个元素不能使用两遍

示例:给定nums=[2,7,11,15],target=9,因为nums[0]+nums[1]=2+7=9,所以返回[0,1]
*/

//有且仅有一个答案,当两数和与目标值相等时可以直接返回结果结束,因为元素只能使用一遍,所以必须是两不相等整数和等于目标值

#include<stdio.h>
int main(void)
{
    int i,j,n,sum,target,nums[20];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<20;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=nums[i]+nums[j];
            if(target==sum&&nums[i]!=nums[j]){
                printf("[%d,%d]\n",i,j);
                return 0;
            }
        }
    }
}
