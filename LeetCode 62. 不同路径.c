/*
一个机器人位于一个m x n网格的左上角,机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角,问总共有多少条不同的路径？

示例1:输入:m=3,n=2
      输出:3
解释:从左上角开始,总共有3条路径可以到达右下角。
     1. 向右->向右->向下
     2. 向右->向下->向右
     3. 向下->向右->向右

示例2:输入:m=7,n=3
      输出:28

提示:1<=m,n<=100
题目数据保证答案小于等于2*10^9
*/

//分析：机器人总共需要走m+n-2步才能从左上角到达右下角，其中需要向下走n-1步，向右走m-1步。通过排列组合计算，路径数=C(m+n-2,m-1)
//C(下，上) 有公式:C(n,k)+C(n,k+1)=C(n+1,k+1)

#include<stdio.h>
int sumzuhe(int N,int K);
int main(void)
{
    int N,K,m,n;
    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);

    N=m+n-2;
    K=m-1;
    printf("%d\n",sumzuhe(N,K));
    return 0;
}

int sumzuhe(int N,int K)    /*递归*/
{
    if(K==0) return 1;
    if(K==N) return 1;
    return sumzuhe(N-1,K-1)+sumzuhe(N-1,K);
}
