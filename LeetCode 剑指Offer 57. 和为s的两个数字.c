/*
����һ����������������һ������s,�������в���������,ʹ�����ǵĺ�������s������ж�����ֵĺ͵���s,���������һ�Լ���

ʾ��1:����:nums=[2,7,11,15],target=9
      ���:[2,7]����[7,2]
ʾ��2:����:nums=[10,26,30,31,47,60],target=40
      ���:[10,30]����[30,10]
����:1<=nums.length<=10^5
     1<=nums[i]<=10^6
*/

//��⣺���������һ��(���һ�鼴��),Ԫ�ؿ����ظ�ʹ��,һ�����������Ⱥ�˳��Ҫ��,�������У�����Ҫ������Ԫ���Ƿ���ͬ

#include<stdio.h>
int main(void)
{
    int i,j,n,sum,target,nums[100000];
    char ch;
    printf("nums=[");
    n=0;
    for(i=0;i<100000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=nums[i]+nums[j];   /*���*/
            if(sum==target){
                printf("[%d,%d]��[%d,%d]\n",nums[i],nums[j],nums[j],nums[i]);
                return 0;   /*�����һ�������������������ֱ�ӷ��ؽ�������*/
            }
        }
    }
}
