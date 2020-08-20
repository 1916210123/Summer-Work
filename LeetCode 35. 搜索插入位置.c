/*
给定一个排序数组和一个目标值,在数组中找到目标值,并返回其索引.如果目标值不存在于数组中,返回它将会被按顺序插入的位置,你可以假设数组中无重复元素

示例1:输入:[1,3,5,6],5
      输出:2
示例2:输入:[1,3,5,6],2
      输出:1
示例3:输入:[1,3,5,6],7
      输出:4
示例4:输入:[1,3,5,6],0
      输出:0
*/

//先判断是否存在该数，若存在，输出下标；若不存在，从[0]开始比较大小，确定要插入的地方

#include<stdio.h>
int main(void)
{
    int i,n,target,k;
    char ch;
    printf("n=");
    scanf("%d",&n);        /*给定排序数组长度*/
    int s[n+1];            /*多一个长度便于插入目标值*/
    printf("s=[");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(s[i]==target){
            printf("%d\n",i);
            return 0;              /*当目标值存在于数组中时，输出索引，结束*/
        }
    }
    k=0;                           /*目标值不存在与数组中，判断插入位置*/
    for(i=0;i<n;i++){
        if(target>s[i]){
            k=i+1;
        }
    }
    printf("%d\n",k);
    return 0;
}
