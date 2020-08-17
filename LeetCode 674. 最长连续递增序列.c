/*
给定一个未经排序的整数数组,找到最长且连续的的递增序列,并返回该序列的长度

示例1:输入:[1,3,5,4,7]
      输出:3
解释:最长连续递增序列是[1,3,5],长度为3
     尽管[1,3,5,7]也是升序的子序列,但它不是连续的,因为5和7在原数组里被4隔开

示例2:输入:[2,2,2,2,2]
输出:1
解释:最长连续递增序列是[2],长度为1

注意:数组长度不会超过10000
*/

#include<stdio.h>
int main(void)
{
    int i,j,n,num,a[10000];
    int max;
    char ch;
    n=0;
    printf("[");
    for(i=0;i<10000;i++){
        scanf("%d",&a[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    int b[n];
    for(i=0;i<n;i++){
        num=1;
        for(j=i;j<n;j++){
            if(a[j]<a[j+1]){
                num=num+1;
            }
            else break;
        }
        b[i]=num;    /*计算各连续数列中元素的个数*/
    }
    max=b[0];
    for(i=0;i<n;i++){
        if(b[i]>max) max=b[i];   /*找出长度最长的连续数列*/
    }
    printf("%d\n",max);
    return 0;
}
