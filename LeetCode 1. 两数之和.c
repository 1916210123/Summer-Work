/*
����һ����������nums��һ��Ŀ��ֵtarget,�����ڸ��������ҳ���ΪĿ��ֵ������������,���������ǵ������±�
����Լ���ÿ������ֻ���Ӧһ����,����,������ͬһ��Ԫ�ز���ʹ������

ʾ��:����nums=[2,7,11,15],target=9,��Ϊnums[0]+nums[1]=2+7=9,���Է���[0,1]
*/

//���ҽ���һ����,����������Ŀ��ֵ���ʱ����ֱ�ӷ��ؽ������,��ΪԪ��ֻ��ʹ��һ��,���Ա�����������������͵���Ŀ��ֵ

#include<stdio.h>
int main(void)
{
    int i,j,n,sum,target,nums[20];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<20;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("target=");
    scanf("%d",&target);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=nums[i]+nums[j];
            if(target==sum&&nums[i]!=nums[j]){
                printf("[%d,%d]\n",i,j);
                return 0;
            }
        }
    }
}
