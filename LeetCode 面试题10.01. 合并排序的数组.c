/*
������������������A��B,����A��ĩ�����㹻�Ļ���ռ�����B.��дһ������,��B�ϲ���A������,��ʼ��A��B��Ԫ�������ֱ�Ϊm��n

����:A=[1,2,3,0,0,0],m=3
     B=[2,5,6],n=3
���:[1,2,2,3,5,6]

˵��:A.length==n+m
*/

//A�Ļ���ռ䳤����B��ȣ�������ϲ���������,��С����

#include<stdio.h>
int main(void)
{
    int i,j,k,m,n,temp;
    char ch;
    printf("m��n=");
    scanf("%d %d",&m,&n);
    int A[m+n],B[n];
    printf("A=[");
    for(i=0;i<m+n;i++){
        scanf("%d",&A[i]);
        ch=getchar();
        if(ch==']') break;
    }
    printf("B=[");
    for(i=0;i<n;i++){
        scanf("%d",&B[i]);
        ch=getchar();
        if(ch==']') break;
    }
    k=0;
    for(i=m;i<m+n;i++){
        A[i]=B[k];    /*��B[0]��ֵ����A[m],ʹB�ϲ���A*/
        k=k+1;
    }
    for(i=0;i<m+n;i++){
        for(j=0;j<m+n-1;j++){
            if(A[i]<A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;     /*��A�е�������С����˳������*/
            }
        }
    }
    printf("[%d",A[0]);
    for(i=1;i<m+n;i++){
        printf(",%d",A[i]);
    }
    printf("]\n");          /*��˳�����A�е�������*/
    return 0;
}
