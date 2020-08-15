/*YIWEN
在一个n*m的二维数组中,每一行都按照从左到右递增的顺序排序,每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数,判断数组中是否含有该整数。

示例:现有矩阵matrix如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定target=5,返回true
给定target=20,返回false

限制:0<=n<=1000
*/

//问题：需要每次重新输入二维数组

#include<stdio.h>
int main(void)
{
    int i,j,m,n,t,target;
    printf("n、m:");
    scanf("%d %d",&n,&m);
    printf("target=");
    scanf("%d",&target);
    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    t=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==target){
                printf("ture\n");
                return 0;
            }
            if(a[i][j]!=target) t=t+1;  /*计数,判断有多少个数不等于target*/
        }
    }
    if(t==m*n) printf("false\n");
    return 0;
}
