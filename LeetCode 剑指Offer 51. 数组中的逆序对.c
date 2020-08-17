/*
在数组中的两个数字,如果前面一个数字大于后面的数字,则这两个数字组成一个逆序对
输入一个数组，求出这个数组中的逆序对的总数

示例:输入:[7,5,6,4]
     输出:5
限制:0<=数组长度<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,j,n,num,a[50000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<50000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    num=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]) num=num+1;
        }
    }
    printf("%d\n",num);
    return 0;
}
