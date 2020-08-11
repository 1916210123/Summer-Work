//0-h 三点顺序

/*
描述：现给出不共线的三个点A,B,C的坐标，它们一定能组成一个三角形，需判断A,B,C是顺时针给出还是逆时针给出
方法：利用矢量叉积判断,A(x1,y1),B(x2,y2),C(x3,y3),则矢量AB=（x2-x1,y2-y1),AC=(x3-x1,y3-y1),则ABxAC=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1)
右手法则：若ABxAC>0,则三角形ABC是逆时针的
          若ABxAC<0,则三角形ABC是顺时针的
          若ABxAC=0,则三点共线
*/


#include<stdio.h>
int main(void)
{
    double x1,x2,x3,y1,y2,y3,fact;
    printf("A点坐标:");
    scanf("%lf %lf",&x1,&y1);
    printf("B点坐标:");
    scanf("%lf %lf",&x2,&y2);
    printf("C点坐标:");
    scanf("%lf %lf",&x3,&y3);

    while(x1!=0||x2!=0||x3!=0||y1!=0||y2!=0||y3!=0){
        fact=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
        if(fact>0) {
            printf("0\n");
            break;  /*逆时针*/
        }
        else if(fact<0){
            printf("1\n");
            break;  /*顺时针*/
        }
    }
    return 0;
}
