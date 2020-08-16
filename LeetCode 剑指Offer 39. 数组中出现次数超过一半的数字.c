/*
数组中有一个数字出现的次数超过数组长度的一半,请找出这个数字。可以假设数组是非空的,并且给定的数组总是存在多数元素

示例:输入:[1,2,3,2,2,2,5,4,2]
     输出:2
限制:1<=数组长度<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,j,t,n,a[50000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<50000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        t=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                t=t+1;
            }
        }
        if(t>n/2){
            printf("%d\n",a[i]);
            break;
        }
    }
    return 0;
}
