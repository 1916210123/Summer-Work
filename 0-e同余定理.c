//0-e ͬ�ඨ��

//�Ƿ�:a�� b(mod d)
//����:����������dȥ������ͬ������,d��Ϊģ
//����ͬ��������˵�����ǵȼ۵�,�ֱ�Ϊ:(1)a��b��ģdͬ���  (2)����ĳ������n,ʹ��a=b+nd  (3)d����a-b.


#include<stdio.h>
int main(void)
{
    int a,b,d;
    printf("a,b,d�ֱ�Ϊ��");
    scanf("%d %d %d",&a,&b,&d);

    if(a%d==b%d) printf("%d��%d��ģ%dͬ���\n",a,b,d);
        else printf("������ģ%d��ͬ��\n",d);
    return 0;
}
