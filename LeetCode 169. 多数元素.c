/*
����һ����СΪn������,�ҵ����еĶ���Ԫ��,����Ԫ����ָ�������г��ִ�������n/2��Ԫ��,����Լ��������Ƿǿյ�,���Ҹ������������Ǵ��ڶ���Ԫ��

ʾ��:����:[3,2,3]
     ���:3
ʾ��:����:[2,2,1,1,1,2,2]
     ���:2
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
