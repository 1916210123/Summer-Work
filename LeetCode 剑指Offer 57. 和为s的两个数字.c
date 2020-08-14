/*
输入一个递增排序的数组和一个数字s,在数组中查找两个数,使得它们的和正好是s。如果有多对数字的和等于s,则输出任意一对即可

示例1:输入:nums=[2,7,11,15],target=9
      输出:[2,7]或者[7,2]
示例2:输入:nums=[10,26,30,31,47,60],target=40
      输出:[10,30]或者[30,10]
限制:1<=nums.length<=10^5
     1<=nums[i]<=10^6
*/

//理解：可输出任意一组(输出一组即可),元素可以重复使用,一组数据中无先后顺序要求,递增序列，不需要考虑两元素是否相同

#include<stdio.h>
int main(void)
{
    int i,j,n,sum,target,nums[100000];
    char ch;
    printf("nums=[");
    n=0;
    for(i=0;i<100000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=nums[i]+nums[j];   /*求和*/
            if(sum==target){
                printf("[%d,%d]或[%d,%d]\n",nums[i],nums[j],nums[j],nums[i]);
                return 0;   /*已求得一组符合条件的数，可以直接返回结束程序*/
            }
        }
    }
}
