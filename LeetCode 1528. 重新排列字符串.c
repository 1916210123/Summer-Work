/*
����һ���ַ���s��һ��������ͬ����������indices,�������������ַ���s,���е�i���ַ���Ҫ�ƶ���indices[i]ָʾ��λ��,�����������к���ַ���

ʾ��1:����:s="codeleet",indices=[4,5,6,7,0,2,1,3]
      ���:"leetcode"

ʾ��2:����:s="abc",indices=[0,1,2]
      ���:"abc"

ʾ��3:����:s="aiohn",indices=[3,1,4,2,0]
      ���:"nihao"

ʾ��4:����:s="aaiougrt",indices=[4,0,2,6,7,3,1,5]
      ���:"arigatou"

ʾ��5:����:s="art",indices=[1,0,2]
      ���:"rat"

��ʾ:s.length==indices.length==n
     1<=n<=100
     s������СдӢ����ĸ
     0<=indices[i]<n
     indices�����е�ֵ����Ψһ��(Ҳ����˵,indices������0��n-1�γɵ�һ������)
*/

#include<stdio.h>
int main(void)
{
    int i,j,k;
    int indices[100];
    char ch,s[100];
    /*�����ַ���*/
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
