/*
ʵ��һ���㷨,ȷ��һ���ַ���s�������ַ��Ƿ�ȫ����ͬ

ʾ��:����:s="leetcode"
     ���:false
ʾ��:����:s="abc"
     ���:true
����:0<=len(s)<=100
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
