/*
����һ������0,1,2,...,n��n����������,�ҳ�0...n��û�г����������е��Ǹ���

ʾ��:����:[3,0,1]
     ���:2
ʾ��:����:[9,6,4,2,3,5,7,0,1]
     ���:8
*/

//����������,���ҳ�ȱʧ���Ǹ���.�����ֻ��Ƚ��������Ӧ�±�Ĺ�ϵ,�����߲����ʱ,�±�����Ϊȱʧ��

#include<stdio.h>
int main(void)
{
    int i,j,n,temp,nums[20];
    char ch;
    n=0;
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&nums[i]);
        n=n+1;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(nums[i]!=i){
            printf("%d\n",i);
            return 0;
        }
    }
}
