/*
在一个数组nums中除一个数字只出现一次之外，其他数字都出现了三次。请找出那个只出现一次的数字。

示例1:输入:nums=[3,4,3,3]
      输出:4
示例2:输入:nums=[9,1,7,9,7,9,7]
      输出:1
限制:1<=nums.length<=10000
     1<=nums[i]<2^31
*/


#include<stdio.h>
int main(void)
{
    int i,j,t,n,nums[10000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<10000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        t=3;
        for(j=0;j<n;j++){
            if(nums[i]==nums[j]) t=t-1;
        }
        if(t==2){    /*t==0表示a[i]出现了三次，t==2表示a[i]出现了一次*/
            printf("%d\n",nums[i]);
            break;
        }
    }
    return 0;
}
