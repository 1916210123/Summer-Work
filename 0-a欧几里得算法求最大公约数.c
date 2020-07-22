//0-a 欧几里得算法求最大公约数

//辗转相除法（除数除以余数直至余数为零,最后的除数即为两数最大公约数）
//若输出为空，则两数无最大公约数


#include<stdio.h>
int main(void){
    int a,b,c,t,i;    //c为余数
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++){
       t=b;
       c=a%b;
       if(c==0){
          printf("%d\n",b);  //余数为零时，其除数即为所求
          break;
       }
       a=t;b=c;
    }
    return 0;
}
