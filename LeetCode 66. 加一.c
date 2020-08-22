/*
给定一个由整数组成的非空数组所表示的非负整数,在该数的基础上加一,最高位数字存放在数组的首位,数组中每个元素只存储单个数字,
可以假设除了整数0之外,这个整数不会以零开头

示例:输入:[1,2,3]
     输出:[1,2,4]
解释:输入数组表示数字123

示例:输入:[4,3,2,1]
     输出:[4,3,2,2]
解释:输入数组表示数字4321
*/

//要考虑进位

#include<stdio.h>
int main(void)
{
    int i,j,n,s[20];
    char ch;
    n=0;
    for(i=0;i<20;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&s[i]);
        n=n+1;
    }
    printf("[");
    for(i=n-1;i>=0;i--){
        s[i]=s[i]+1;
        if(i==0&&s[0]==10) printf("1,");
        if(s[i]==10){
            s[i]=0;
        }
        else break;
    }
    printf("%d",s[0]);
    for(i=1;i<n;i++){
        printf(",%d",s[i]);
    }
    printf("]\n");
    return 0;
}
