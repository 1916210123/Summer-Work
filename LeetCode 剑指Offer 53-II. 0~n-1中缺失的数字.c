/*
一个长度为n-1的递增排序数组中的所有数字都是唯一的,并且每个数字都在范围0～n-1之内.在范围0～n-1内的n个数字中有且只有一个数字不在该数组中,请找出这个数字

示例1：输入:[0,1,3]
       输出:2
示例2：输入:[0,1,2,3,4,5,6,7,9]
       输出:8
限制：1<=数组长度<=10000   (即1<=n-1<=10000)
*/

//递增，所以当a[i]=i时符合要求，只需找出a[i]!=i的数所对应的i值
//有且只有一个数字缺失，当这个数字被找出来时可以直接结束循环

#include<stdio.h>
int main(void)
{
    int n,i,a[10000];
    char ch;
    printf("输入:[");
    n=0;
    for(i=0;i<10000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        if(a[i]!=i){
            printf("输出:%d",i);
            break;
        }
    }
    return 0;
}
