/*
����һ������A[0,1,��,n-1],�빹��һ������B[0,1,��,n-1],����B�е�Ԫ��B[i]=A[0]��A[1]������A[i-1]��A[i+1]������A[n-1]
����ʹ�ó���!!!

ʾ��:����:[1,2,3,4,5]
     ���:[120,60,40,30,24]
��ʾ:����Ԫ�س˻�֮�Ͳ������32λ����
     a.length <= 100000
*/

//��⣺B[i]=A[0]xA[1]x������xA[i-1]x 1 xA[i+1]x������xA[n-1]

#include<stdio.h>
int main(void)
{
    int i,j,n,fact,A[100000];
    char ch;
    n=0;
    printf("[");
    for(i=0;i<100000;i++){
        scanf("%d",&A[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    int B[n];
    for(i=0;i<n;i++){
        fact=1;
        for(j=0;j<n;j++){
            if(i==j) fact=fact;    /*A[i]��ʱֵ����*/
            else fact=fact*A[j];
        }
        B[i]=fact;
    }
    printf("[%d",B[0]);
    for(i=1;i<n;i++) printf(",%d",B[i]);
    printf("]\n");
    return 0;
}
