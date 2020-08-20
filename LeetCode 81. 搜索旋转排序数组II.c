/*
假设按照升序排序的数组在预先未知的某个点上进行了旋转
例如,数组[0,0,1,2,2,5,6]可能变为[2,5,6,0,0,1,2]
编写一个函数来判断给定的目标值是否存在于数组中.若存在返回true,否则返回false

示例1:输入:nums=[2,5,6,0,0,1,2],target=0
      输出:true
示例2:输入:nums=[2,5,6,0,0,1,2],target=3
      输出:false
*/

//数组旋转前后元素对应下标改变而元素不变

#include<stdio.h>
int main(void)
{
    int nums[20];
    int i,n,target;
    char ch;
    printf("nums=[");
    n=0;
    for(i=0;i<20;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(target==nums[i]){
            printf("true\n");
            return 0;
        }
    }
    printf("false\n");
    return 0;
}
