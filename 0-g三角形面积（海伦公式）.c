//0-g ��������������׹�ʽ��

//������ƽ������һ�������Σ��߳��ֱ�Ϊa��b��c�������S=��p(p-a)(p-b)(p-c),pΪ���ܳ�����p=(a+b+c)/2



#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,p;
    double S;                     //SΪ���,pΪ���ܳ�
    printf("���߳��ֱ�Ϊ��");
    scanf("%d %d %d",&a,&b,&c);

    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("���S = %.2f\n",S);
    return 0;
}
