/*
����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ����������λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

ʾ��������:nums=[1,2,3,4]
      ���:[1,3,2,4]
ע��[3,1,2,4] Ҳ����ȷ�Ĵ�֮һ  (����/ż����������

��ʾ��1<=nums.length<=50000
      1<=nums[i]<=10000
*/

#include<stdio.h>
int main(void)
{
    int i,n,t,nums[50000],odd[50000],even[50000];
    char ch;
    n=0;
    printf("nums=[");
    for(i=0;i<50000;i++){
        scanf("%d",&nums[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    odd[n]=0;
    even[n]=0;   /*���������ŵ���(ż)��*/
    for(i=0;i<n;i++){
        if(nums[i]%2==0) even[i]=nums[i]; /*�ж���ż�ԣ�ż������ż����*/
        else odd[i]=nums[i];              /*��������������*/
    }

    printf("[");
    t=0;   /*t���ڵ��������ʽ*/
    for(i=0;i<n;i++){
        if(odd[i]>0){
            if(t=0){
                printf("%d",odd[i]);
                t=1;
            }
            if(t=1) printf(",%d",odd[i]);     /*�������*/
        }
    }
    for(i=0;i<n;i++){
        if(even[i]>0) printf(",%d",even[i]);  /*���ż��*/
    }
    printf("]\n");
    return 0;
}
