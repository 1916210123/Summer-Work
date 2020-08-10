//0-f 高次方求模YIWEN

/*
对于n^p mod m,当p的值很大时直接求解是不可能的，可以采用二分法拆分
n^p=n^(p/2)*n^(p/2),然后再二分n^(p/2),直到p等于1为止，二分的过程中对m求模
有式子：N mod m=[N1 mod m*N2 mod m*N3 mod m···Nn mod m] mod m
*/


#include<stdio.h>
int M;
int PowMod(int n,int p);
int main(void)
{
    int n,pow;
    printf("底数 幂 M : ");
    scanf("%d %d %d",&n,&pow,&M);
    PowMod(n,pow);
    printf("求得模为：%d\n",PowMod(n,pow));
    return 0;
}


int PowMod(int n, int p)
{
	int result=1;
	while(p>0)
	{
		if(p%2==1)   /*幂为奇数*/
		   result=(result*n)%M;
                p=p/2;
		n=(n*n)%M;
	}
	return result;
}
