/*
дһ������,����n,��쳲�����(Fibonacci)���еĵ�n��
쳲��������еĶ��壺F(0)=0,F(1)=1,F(N)=F(N-1)+F(N-2),����N>1,쳲�����������0��1��ʼ,֮���쳲�������������֮ǰ��������Ӷ��ó�

ע������Ҫȡģ1e9+7(1000000007),������ʼ���Ϊ:1000000008,�뷵��1

ʾ��1:����:n=2
      ���:1
ʾ��2:����:n=5
      ���:5
��ʾ:0<=n<=100
*/
//�������⣺ȡģ

#include<stdio.h>
int F(int n);
int main(void)
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n",F(n));
    return 0;
}

int F(int n)
{
    int result;
    if(n==1||n==2) result=1;
    else result=F(n-1)+F(n-2);
    return result;
}
