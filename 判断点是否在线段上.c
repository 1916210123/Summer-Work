/*
�ȸ��ݸ���������A,B�������жϵ�Q�Ƿ���AB�м䲿��,���߶�AB��б��k,�ٸ���ֱ�߹�ʽȷ���߶�AB����,��Q����������ж�
y-y0=k(x-x0),(x0,y0)Ϊֱ����һ��
��A(x1,y1),B(x2,y2),Q(x3,y3),��x1<x2,y1<y2
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
    int x1,y1,x2,y2,x3,y3,k,t;
    printf("A������Ϊ:");
    scanf("%d %d",&x1,&y1);
    printf("B������Ϊ:");
    scanf("%d %d",&x2,&y2);
    printf("Q������Ϊ:");
    scanf("%d %d",&x3,&y3);

    if(x3<x1||x3>x2||y3<y1||y3>y2){
        printf("��Q�����߶�AB��\n");
        return 0;
    }
    k=(y2-y1)/(x2-x1);
    t=k*(x3-x1)+y1;
    if(t==y3) printf("��Q���߶�AB��\n");
    else printf("��Q�����߶�AB��\n");
    return 0;
}
