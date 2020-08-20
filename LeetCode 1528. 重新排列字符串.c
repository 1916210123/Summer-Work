/*
给你一个字符串s和一个长度相同的整数数组indices,请你重新排列字符串s,其中第i个字符需要移动到indices[i]指示的位置,返回重新排列后的字符串

示例1:输入:s="codeleet",indices=[4,5,6,7,0,2,1,3]
      输出:"leetcode"

示例2:输入:s="abc",indices=[0,1,2]
      输出:"abc"

示例3:输入:s="aiohn",indices=[3,1,4,2,0]
      输出:"nihao"

示例4:输入:s="aaiougrt",indices=[4,0,2,6,7,3,1,5]
      输出:"arigatou"

示例5:输入:s="art",indices=[1,0,2]
      输出:"rat"

提示:s.length==indices.length==n
     1<=n<=100
     s仅包含小写英文字母
     0<=indices[i]<n
     indices的所有的值都是唯一的(也就是说,indices是整数0到n-1形成的一组排列)
*/

#include<stdio.h>
int main(void)
{
    int i,j,k;
    int indices[100];
    char ch,s[100];
    /*输入字符串*/
    printf("s=");
    k=0;
    while((s[k]=getchar())!='\n')
        k++;
    s[k]='\0';
    printf("indices=[");
    for(i=0;i<k;i++){
        scanf("%d",&indices[i]);
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(indices[j]==i){
                printf("%c",s[j]);
            }
        }
    }
    printf("\n");
    return 0;
}
