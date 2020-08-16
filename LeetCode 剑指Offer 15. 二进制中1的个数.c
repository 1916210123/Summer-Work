/*
请实现一个函数,输入一个整数,输出该数二进制表示中1的个数。例如,把9表示成二进制是1001,有2位是1。因此,如果输入9,则该函数输出2
(输入一个十进制整数，输出其二进制表示中的1的个数)
*/

#include<stdio.h>
int main(void)
{
    int i,n,t,sum,a[32];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(n==1) break;
        a[i]=n%2;
        n=n/2;
    }
    sum=0;
    for(i=0;i<32;i++){
        if(a[i]==1) sum=sum+1;
    }
    printf("%d\n",sum+1);
    return 0;
}
