//0-f �ߴη���ģYIWEN

/*
����n^p mod m,��p��ֵ�ܴ�ʱֱ������ǲ����ܵģ����Բ��ö��ַ����
n^p=n^(p/2)*n^(p/2),Ȼ���ٶ���n^(p/2),ֱ��p����1Ϊֹ�����ֵĹ����ж�m��ģ
��ʽ�ӣ�N mod m=[N1 mod m*N2 mod m*N3 mod m������Nn mod m] mod m
*/


#include<stdio.h>
int M;
int PowMod(int n,int p);
int main(void)
{
    int n,pow;
    printf("���� �� M : ");
    scanf("%d %d %d",&n,&pow,&M);
    PowMod(n,pow);
    printf("���ģΪ��%d\n",PowMod(n,pow));
    return 0;
}


int PowMod(int n, int p)
{
	int result=1;
	while(p>0)
	{
		if(p%2==1)   /*��Ϊ����*/
			result=(result*n)%M;
        p=p/2;
		n=(n*n)%M;
	}
	return result;
}
