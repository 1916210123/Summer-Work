/*
给定一个非负整数数组A,返回一个数组,在该数组中,A的所有偶数元素之后跟着所有奇数元素,可以返回满足此条件的任何数组作为答案

示例:
输入:[3,1,2,4]
输出:[2,4,3,1]
输出[4,2,3,1],[2,4,1,3]和[4,2,1,3]也会被接受

提示：1<=A.length<=5000
      0<=A[i]<=5000
*/

//偶数在奇数前面，奇(偶)数没有顺序要求

#include<stdio.h>
int main(void)
{
    int n,i,k;
    char ch;
    printf("n=");
    scanf("%d",&n);
    int A[n],B[n];
    printf("[");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        ch=getchar();
        if(ch==']') break;
    }
    k=0;
    for(i=0;i<n;i++){
        if(A[i]%2==0){
            B[k]=A[i];
            k=k+1;          /*从B[0]处开始存放偶数*/
            A[i]=-1;
        }
    }
    k=n-1;
    for(i=n-1;i>=0;i--){
        if(A[i]>=0){
            B[k]=A[i];     /*从B[n-1]处开始存放奇数*/
            k=k-1;
        }
    }
    printf("[%d",B[0]);
    for(i=1;i<n;i++){
        printf(",%d",B[i]);
    }
    printf("]\n");
    return 0;
}
