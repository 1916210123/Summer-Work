/*
С�����������ڴ���,��numExchange���վ�ƿ���Զһ�һƿ�¾�.�㹺����numBottlesƿ��,����ȵ��˾�ƿ�еľ�,��ô��ƿ�ͻ��ɿյ�.�����������ܺȵ�����ƿ��

ʾ��1:����:numBottles=9,numExchange=3
      ���:13
����:�������3���վ�ƿ�һ�1ƿ��,��������ܺȵ�9+3+1=13ƿ��

ʾ��2:����:numBottles=15,numExchange=4
      ���:19
����:�������4���վ�ƿ�һ�1ƿ��,��������ܺȵ�15+3+1=19ƿ��

ʾ��3:����:numBottles=5,numExchange=5
      ���:6

ʾ��4:����:numBottles=2,numExchange=3
      ���:2

��ʾ:1<=numBottles<=100
     2<=numExchange<=100
*/

//���������̼ҽ��

#include<stdio.h>
int main(void)
{
    int numBottles,numExchange;
    int sum,num;
    printf("numBottles=");
    scanf("%d",&numBottles);
    printf("numExchange=");
    scanf("%d",&numExchange);

    sum=numBottles;
    num=sum;            /*sumΪ�ܺȾƵ���ƿ����numΪÿ��ʣ������п�ƿ��*/
    while(num>=numExchange){
        sum=sum+num/numExchange;
        num=num%numExchange+num/numExchange;
    }
    printf("%d\n",sum);
    return 0;
}
