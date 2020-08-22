/*
给定一个包含0,1,2,...,n中n个数的序列,找出0...n中没有出现在序列中的那个数

示例:输入:[3,0,1]
     输出:2
示例:输入:[9,6,4,2,3,5,7,0,1]
     输出:8
*/

//可以先排序,再找出缺失的那个数.排序后只需比较数与其对应下标的关系,当两者不相等时,下标数即为缺失数

#include<stdio.h>
int main(void)
{
    int i,j,n,temp,nums[20];
    char ch;
    n=0;
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums[i]);
        n=n+1;
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
    for(i=0;i<n;i++){
        if(nums[i]!=i){
            printf("%d\n",i);
            return 0;
        }
    }
}
