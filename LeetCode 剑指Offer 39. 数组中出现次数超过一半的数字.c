/*
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ��,���ҳ�������֡����Լ��������Ƿǿյ�,���Ҹ������������Ǵ��ڶ���Ԫ��

ʾ��:����:[1,2,3,2,2,2,5,4,2]
     ���:2
����:1<=���鳤��<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,j,t,n,a[50000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<50000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<n;i++){
        t=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                t=t+1;
            }
        }
        if(t>n/2){
            printf("%d\n",a[i]);
            break;
        }
    }
    return 0;
}
