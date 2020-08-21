/*
给你一个数字数组arr,如果一个数列中,任意相邻两项的差总等于同一个常数,那么这个数列就称为等差数列,如果可以重新排列数组形成等差数列,请返回true,否则返回false

示例:输入:arr=[3,5,1]
     输出:true
解释:对数组重新排序得到[1,3,5]或者[5,3,1],任意相邻两项的差分别为2或-2,可以形成等差数列
示例:输入:arr=[1,2,4]
     输出:false
解释:无法通过重新排序得到等差数列
*/

//等差数列一定是递增或递减的，可将所有数按从小到大或从大到小顺序排列后判断,当相邻两项之差不等于d时,该数组一定不可以形成等差数列

#include<stdio.h>
int main(void)
{
    int i,j,n,d,temp,arr[20];
    char ch;
    n=0;
    printf("arr=[");
    for(i=0;i<20;i++){
        scanf("%d",&arr[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    d=arr[1]-arr[0];
    for(i=1;i<n;i++){
        if((arr[i]-arr[i-1])!=d){
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}
