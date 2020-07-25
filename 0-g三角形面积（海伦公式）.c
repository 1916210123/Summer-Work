//0-g 三角形面积（海伦公式）

//假设在平面内有一个三角形，边长分别为a、b、c，则面积S=√p(p-a)(p-b)(p-c),p为半周长，即p=(a+b+c)/2



#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,p;
    double S;                     //S为面积,p为半周长
    printf("三边长分别为：");
    scanf("%d %d %d",&a,&b,&c);

    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("面积S = %.2f\n",S);
    return 0;
}
