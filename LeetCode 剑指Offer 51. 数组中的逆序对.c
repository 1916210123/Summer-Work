/*
�������е���������,���ǰ��һ�����ִ��ں��������,���������������һ�������
����һ�����飬�����������е�����Ե�����

ʾ��:����:[7,5,6,4]
     ���:5
����:0<=���鳤��<=50000
*/

#include<stdio.h>
int main(void)
{
    int i,j,n,num,a[50000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<50000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    num=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]) num=num+1;
        }
    }
    printf("%d\n",num);
    return 0;
}
