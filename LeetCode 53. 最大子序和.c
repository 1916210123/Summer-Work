/*
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
输入: [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释: 连续子数组[4,-1,2,1]的和最大为6

题目链接：https://leetcode-cn.com/problems/maximum-subarray
*/

int maxSubArray(int* nums, int numsSize){
    int sum,i,ans;
    sum=0;
    ans=nums[0];
    for(i=0;i<numsSize;i++){
        sum+=nums[i];
        if(ans<sum)
            ans=sum;
        if(sum<=0){
            sum=0;
        }
    }
    return ans;
}
