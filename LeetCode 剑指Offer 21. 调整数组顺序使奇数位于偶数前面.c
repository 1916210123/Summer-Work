/*
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数位于数组的前半部分，所有偶数位于数组的后半部分。

示例：输入:nums=[1,2,3,4]
      输出:[1,3,2,4]
注：[3,1,2,4] 也是正确的答案之一  (奇数/偶数不用排序）

提示：1<=nums.length<=50000
      1<=nums[i]<=10000
*/

#include<stdio.h>
int main(void)
{
    int i,n,t,nums[50000],odd[50000],even[50000];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<50000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    odd[n]=0;
    even[n]=0;   /*便于输出存放的奇(偶)数*/
    for(i=0;i<n;i++){
        if(nums[i]%2==0) even[i]=nums[i]; /*判断奇偶性，偶数放入偶数组*/
        else odd[i]=nums[i];              /*奇数放入奇数组*/
    }

    printf("[");
    t=0;   /*t便于调整输出格式*/
    for(i=0;i<n;i++){
        if(odd[i]>0){
            if(t=0){
                printf("%d",odd[i]);
                t=1;
            }
            if(t=1) printf(",%d",odd[i]);     /*输出奇数*/
        }
    }
    for(i=0;i<n;i++){
        if(even[i]>0) printf(",%d",even[i]);  /*输出偶数*/
    }
    printf("]\n");
    return 0;
}
