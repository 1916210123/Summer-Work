/*
给定两个数组，编写一个函数来计算它们的交集。

示例:输入:nums1=[1,2,2,1],nums2=[2,2]
     输出:[2]
示例:输入:nums1=[4,9,5],nums2=[9,4,9,8,4]
     输出:[9,4]

说明:输出结果中的每个元素一定是唯一的,可以不考虑输出结果的顺序
*/

#include<stdio.h>
int main(void)
{
    int i,j,k,n;
    int nums1[20],nums2[20];
    int a[20];
    char ch;
    n=0;
    printf("nums1=");
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums1[i]);
        n=n+1;
    }
    k=0;
    printf("nums2=");
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums2[i]);
        k=k+1;
    }
    for(i=0;i<n;i++){
        a[i]=-1;
        for(j=0;j<k;j++){
            if(nums1[i]==nums2[j]){
                a[i]=nums1[i];
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>=0) printf("%d ",a[i]);
    }
    return 0;
}
