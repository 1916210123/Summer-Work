/*
���谴�����������������Ԥ��δ֪��ĳ�����Ͻ�������ת
����,����[0,0,1,2,2,5,6]���ܱ�Ϊ[2,5,6,0,0,1,2]
��дһ���������жϸ�����Ŀ��ֵ�Ƿ������������.�����ڷ���true,���򷵻�false

ʾ��1:����:nums=[2,5,6,0,0,1,2],target=0
      ���:true
ʾ��2:����:nums=[2,5,6,0,0,1,2],target=3
      ���:false
*/

//������תǰ��Ԫ�ض�Ӧ�±�ı��Ԫ�ز���

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
