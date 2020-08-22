/*
给定一个大小为n的数组,找到其中的多数元素,多数元素是指在数组中出现次数大于n/2的元素,你可以假设数组是非空的,并且给定的数组总是存在多数元素

示例:输入:[3,2,3]
     输出:3
示例:输入:[2,2,1,1,1,2,2]
     输出:2
*/

#include<stdio.h>
int main(void)
{
    int i,j,k,n,nums[20];
    char ch;
    n=0;
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums[i]);
        n=n+1;
    }
    if(n<=1) printf("It's wrong!\n");
    for(i=0;i<n;i++){
        k=1;
        for(j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                k=k+1;
                if(k>n/2){
                    printf("%d\n",nums[i]);
                    return 0;
                }
            }
        }
    }
}
