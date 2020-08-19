/*YIWEN
写一个函数,求两个整数之和,要求在函数体内不得使用“+”、“-”、“*”、“/”四则运算符号

示例:输入:a=1,b=1
     输出:2

提示:a,b均可能是负数或0,结果不会溢出32位整数
*/

//通过位运算实现,分两步:不带进位加的结果以及进位结果
//存在疑问

#include<stdio.h>
int main(void)
{
    int a,b,temp;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    while(b!=0){
        temp=a^b;    /*各位相加的值*/
        b=(a&b)<<1;  /*进位值*/
        a=temp;
    }
    printf("%d\n",a);
    return 0;
}
