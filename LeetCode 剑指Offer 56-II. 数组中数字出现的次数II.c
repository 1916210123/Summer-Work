/*
��һ������nums�г�һ������ֻ����һ��֮�⣬�������ֶ����������Ρ����ҳ��Ǹ�ֻ����һ�ε����֡�

ʾ��1:����:nums=[3,4,3,3]
      ���:4
ʾ��2:����:nums=[9,1,7,9,7,9,7]
      ���:1
����:1<=nums.length<=10000
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
        if(t==2){    /*t==0��ʾa[i]���������Σ�t==2��ʾa[i]������һ��*/
            printf("%d\n",nums[i]);
            break;
        }
    }
    return 0;
}
