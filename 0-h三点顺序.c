//0-h ����˳��

/*
�������ָ��������ߵ�������A,B,C�����꣬����һ�������һ�������Σ����ж�A,B,C��˳ʱ�����������ʱ�����
����������ʸ������ж�,A(x1,y1),B(x2,y2),C(x3,y3),��ʸ��AB=��x2-x1,y2-y1),AC=(x3-x1,y3-y1),��ABxAC=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1)
���ַ�����ABxAC>0,��������ABC����ʱ���
          ��ABxAC<0,��������ABC��˳ʱ���
          ��ABxAC=0,�����㹲��
*/


#include<stdio.h>
int main(void)
{
    double x1,x2,x3,y1,y2,y3,fact;
    printf("A������:");
    scanf("%lf %lf",&x1,&y1);
    printf("B������:");
    scanf("%lf %lf",&x2,&y2);
    printf("C������:");
    scanf("%lf %lf",&x3,&y3);

    while(x1!=0||x2!=0||x3!=0||y1!=0||y2!=0||y3!=0){
        fact=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
        if(fact>0) {
            printf("0\n");
            break;  /*��ʱ��*/
        }
        else if(fact<0){
            printf("1\n");
            break;  /*˳ʱ��*/
        }
    }
    return 0;
}
