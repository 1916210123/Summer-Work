/*
����һ���Ǹ�����num,����������λ�ϵ��������,ֱ�����Ϊһλ��

����:38
���:2
����:��λ��ӵĹ���Ϊ:3+8=11,1+1=2,����2��һλ��,���Է���2
*/

#include<stdio.h>

int main(void)
{
    int num,sum;
    scanf("%d",&num);
    if(num/10==0){
        printf("%d\n",num);
        return 0;
    }
    sum=0;
    while(num!=0){
        sum=num%10+sum;
        num=num/10;
        if(num==0&&sum>=10){
            num=sum;                /*��һ�θ�λ��Ӻ���Բ�Ϊһλ��,�轫��sum��Ϊ�µ�num����*/
            sum=0;
        }
    }
    printf("%d\n",sum);
    return 0;
}
