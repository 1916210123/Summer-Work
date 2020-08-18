/*
小区便利店正在促销,用numExchange个空酒瓶可以兑换一瓶新酒.你购入了numBottles瓶酒,如果喝掉了酒瓶中的酒,那么酒瓶就会变成空的.请你计算最多能喝到多少瓶酒

示例1:输入:numBottles=9,numExchange=3
      输出:13
解释:你可以用3个空酒瓶兑换1瓶酒,所以最多能喝到9+3+1=13瓶酒

示例2:输入:numBottles=15,numExchange=4
      输出:19
解释:你可以用4个空酒瓶兑换1瓶酒,所以最多能喝到15+3+1=19瓶酒

示例3:输入:numBottles=5,numExchange=5
      输出:6

示例4:输入:numBottles=2,numExchange=3
      输出:2

提示:1<=numBottles<=100
     2<=numExchange<=100
*/

//并不能向商家借酒

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
    num=sum;            /*sum为能喝酒的总瓶数，num为每次剩余的所有空瓶数*/
    while(num>=numExchange){
        sum=sum+num/numExchange;
        num=num%numExchange+num/numExchange;
    }
    printf("%d\n",sum);
    return 0;
}
