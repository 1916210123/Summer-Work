/*WENTI
ʵ��int sqrt(int x)����,���㲢����x��ƽ����,����x�ǷǸ�����,���ڷ�������������,���ֻ���������Ĳ���,С�����ֽ�����ȥ

ʾ��:����:4
     ���:2
ʾ��:����:8
     ���:2
˵��:8��ƽ������2.82842...,���ڷ�������������,С�����ֽ�����ȥ
*/

#include<stdio.h>
#include<math.h>
int s(int x);
int main(void)
{
    int x;
    scanf("%d",&x);
    s(x);
    printf("%d\n",s(x));
    return 0;
}

int s(int x)
{
    int result;
    result=pow(x,0.5);
    return result;
}
