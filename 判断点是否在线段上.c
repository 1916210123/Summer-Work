/*
先根据给出的两点A,B的坐标判断点Q是否在AB中间部分,求线段AB的斜率k,再根据直线公式确定线段AB方程,将Q的坐标带入判断
y-y0=k(x-x0),(x0,y0)为直线上一点
设A(x1,y1),B(x2,y2),Q(x3,y3),且x1<x2,y1<y2
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
    int x1,y1,x2,y2,x3,y3,k,t;
    printf("A的坐标为:");
    scanf("%d %d",&x1,&y1);
    printf("B的坐标为:");
    scanf("%d %d",&x2,&y2);
    printf("Q的坐标为:");
    scanf("%d %d",&x3,&y3);

    if(x3<x1||x3>x2||y3<y1||y3>y2){
        printf("点Q不在线段AB上\n");
        return 0;
    }
    k=(y2-y1)/(x2-x1);
    t=k*(x3-x1)+y1;
    if(t==y3) printf("点Q在线段AB上\n");
    else printf("点Q不在线段AB上\n");
    return 0;
}
