/*
实现一个算法,确定一个字符串s的所有字符是否全都不同

示例:输入:s="leetcode"
     输出:false
示例:输入:s="abc"
     输出:true
限制:0<=len(s)<=100
*/

#include<stdio.h>
int main(void)
{
    int i,j,k;
    char s[100];
    k=0;
    printf("s=");
    while((s[k]=getchar())!='\n')
        k++;
    s[k]='\0';
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(s[i]==s[j]){
                printf("false\n");
                return 0;
            }
        }
    }
    printf("true\n");
    return 0;
}
