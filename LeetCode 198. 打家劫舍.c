/*
你是一个专业的小偷,计划偷窃沿街的房屋,每间房内都藏有一定的现金,影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统,如果两间相邻的房屋在同
一晚上被小偷闯入,系统会自动报警,给定一个代表每个房屋存放金额的非负整数数组,计算你不触动警报装置的情况下,一夜之内能够偷窃到的最高金额

示例:输入:[1,2,3,1]
     输出:4
解释:偷窃1号房屋(金额=1),然后偷窃3号房屋(金额=3),偷窃到的最高金额=1+3=4
示例:输入:[2,7,9,3,1]
     输出:12
解释:偷窃1号房屋(金额=2),偷窃3号房屋(金额=9),接着偷窃5号房屋(金额=1),偷窃到的最高金额=2+9+1=12

提示:0<=nums.length<=100
     0<=nums[i]<=400
*/

//不能偷相邻两家,可以进一家空一家,即要进入下标奇偶性相同的房屋,分别计算奇数房屋总金额与偶数房屋总金额并进行比较来判断最高金额

#include<stdio.h>
int main(void)
{
    int i,n,nums[100];
    int sum1,sum2;
    char ch;
    n=0;
    sum1=sum2=0;
    for(i=0;i<100;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums[i]);
        n=n+1;
    }
    i=0;     /*下标为偶数的房屋*/
    while(i<n){
        sum1=sum1+nums[i];
        i=i+2;
    }
    i=1;     /*下标为奇数的房屋*/
    while(i<n){
        sum2=sum2+nums[i];
        i=i+2;
    }
    if(sum1>sum2) printf("%d\n",sum1);
    else printf("%d\n",sum2);
    return 0;
}


//以上解题之考虑到了每间隔一家进入的情况，但题目意思只是要求不能进入相邻两家即可
//以下为正确答案(按照力扣网格式)

int max(int x,int y)
{
    int t;
    t=y;
    if(x>y) t=x;
    return t;
}

int rob(int *nums,int numsSize)
{
    int i,n;
    n=numsSize;
    if(n==0) return 0;
    if(n==1) return nums[0];
    int sum[numsSize];
    sum[0]=nums[0];
    sum[1]=max(nums[0],nums[1]);
    for(i=2;i<n;i++){
        sum[i]=max(sum[i-1],sum[i-2]+nums[i]);
    }
    return sum[n-1];
}
