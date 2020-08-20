/*
给定两个排序后的数组A和B,其中A的末端有足够的缓冲空间容纳B.编写一个方法,将B合并入A并排序,初始化A和B的元素数量分别为m和n

输入:A=[1,2,3,0,0,0],m=3
     B=[2,5,6],n=3
输出:[1,2,2,3,5,6]

说明:A.length==n+m
*/

//A的缓冲空间长度与B相等，两数组合并后需排序,从小到大

#include<stdio.h>
int main(void)
{
    int i,j,k,m,n,temp;
    char ch;
    printf("m、n=");
    scanf("%d %d",&m,&n);
    int A[m+n],B[n];
    printf("A=[");
    for(i=0;i<m+n;i++){
        scanf("%d",&A[i]);
        ch=getchar();
        if(ch==']') break;
    }
    printf("B=[");
    for(i=0;i<n;i++){
        scanf("%d",&B[i]);
        ch=getchar();
        if(ch==']') break;
    }
    k=0;
    for(i=m;i<m+n;i++){
        A[i]=B[k];    /*将B[0]的值传给A[m],使B合并入A*/
        k=k+1;
    }
    for(i=0;i<m+n;i++){
        for(j=0;j<m+n-1;j++){
            if(A[i]<A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;     /*将A中的数按从小到大顺序排列*/
            }
        }
    }
    printf("[%d",A[0]);
    for(i=1;i<m+n;i++){
        printf(",%d",A[i]);
    }
    printf("]\n");          /*按顺序输出A中的数即可*/
    return 0;
}
