/*
ͳ��һ�����������������г��ֵĴ�����

ʾ��1:����:nums=[5,7,7,8,8,10],target=8
      ���:2
ʾ��2:����:nums=[5,7,7,8,8,10],target=6
      ���:0
����:0<= ���鳤��<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,n,t,target,nums[50000];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<50000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    t=0;
    for(i=0;i<n;i++){
        if(nums[i]==target) t=t+1;
    }
    printf("%d",t);
    return 0;
}
