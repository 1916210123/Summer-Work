/*
给你一个整数数组 nums，请你将该数组升序排列。

示例1:输入:nums=[5,2,3,1]
      输出:[1,2,3,5]
示例2:输入:nums=[5,1,1,2,0,0]
      输出:[0,0,1,1,2,5]

提示:1<=nums.length<=50000
     -50000<=nums[i]<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,j,n,temp;
    int nums[50000];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<50000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    printf("[%d",nums[0]);
    for(i=1;i<n;i++){
        printf(",%d",nums[i]);
    }
    printf("]\n");
    return 0;
}
