/*
给定一个已按照升序排列的有序数组,找到两个数使得它们相加之和等于目标数。
函数应该返回这两个下标值index1和index2,其中index1必须小于index2

说明:
返回的下标值（index1和index2）不是从零开始的。
你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
示例:
输入:numbers=[2,7,11,15],target=9
输出:[1,2]
解释:2与7之和等于目标数9.因此index1=1,index2=2
*/

#include<stdio.h>
int main(void)
{
    int target,sum,i,j,n,numbers[10000];
    int index[n];
    char ch;
    printf("numbers=[");
    n=0;
    for(i=0;i<10000;i++){
        scanf("%d",&numbers[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    index[n]=-1;     /*因为下标值不可能为负，定义数组index[n]=-1便于33行判断*/
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(index[i]==-1) break;   /*判断该元素是否被使用过*/
            sum=numbers[i]+numbers[j];
            if(sum==target){
                printf("[%d,",i+1);
                printf("%d]\n",j+1);  /*规定下标值从1开始，需要i+1*/
                index[i]=-1;
                index[j]=-1;          /*避免重复使用相同元素*/
            }
        }
    }
    return 0;
}

