/*
多边形的面积可以看做是两个多边形面积的差,借助另一点O,使其便于运算
Sabcde=Soab+Soae+Soed-Socd-Socb =0.5*（B.x*A.y-B.y*A.x+A.x*E.y-A.y*E.xE.x*D.y-E.y*D.x+D.x*C.y-D.y*C.x+C.x*B.y-C.y*B.x）
*/

#include<stdio.h>
typedef struct{
    double x,y;
}qq;
const int maxn=1e3+7;

double SSS(qq *p,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=(p[i].x*p[(i+1)%n].y-p[(i+1)%n].x*p[i].y);
    }
    return s/2;
}
int main()
{
    qq q[maxn],A;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&q[i].x,&q[i].y);
        }
        double sz=SSS(q,n);
        printf("%lf\n",sz);
    }
    return 0;
}
