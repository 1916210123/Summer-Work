/*һֻ����һ�ο�������1��̨��,Ҳ��������2��̨��,�����������һ��n����̨���ܹ��ж�����������
����Ҫȡģ 1e9+7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��
��Ŀ���ӣ�https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof
*/
//�������ϵ�n��̨�׵���������Ϊf(n),������n��̨�׿��Է��������������
//1 �ڵ�n-1��̨������1��̨��,��ʱ��f(n-1)������
//2 �ڵ�n-2��̨������2��̨��,��ʱ��f(n-2)������
//������������������Դﵽ����n��̨��,����f(n)=f(n-1)+f(n-2) (n>=2)
//�߽�����Ϊf(1)=1,f(0)=1

#include<stdio.h>
int numWays(int n);
int main(void)
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n",numWays(n));
}
int numWays(int n){
    if(n<2) return 1;
    if(n<3) return n;
    return numWays(n-1)+numWays(n-2);
}
