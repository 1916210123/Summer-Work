/*计算x的n次幂函数*/
//采用递归，若n为偶数，则x^n=y^2;若n为奇数，则x^n=y^2*x;递归边界为n=0

double F(double x, int n, double re)
{
    if (n==0) return 1*re;
    else if(n==1) return x*re;
    else return n%2==0?F(x*x,n/2,re):F(x*x,n/2,x*re);
}

double myPow(double x, int n)
{
    if(n<0) x=1/x;
    return n%2==0?F(x*x,n/2,1):F(x*x,n/2,x);
}
