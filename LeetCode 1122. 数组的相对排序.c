/*
������������,arr1��arr2,arr2�е�Ԫ�ظ�����ͬ,arr2�е�ÿ��Ԫ�ض�������arr1��,��arr1�е�Ԫ�ؽ�������,ʹarr1�����
���˳���arr2�е����˳����ͬ.δ��arr2�г��ֹ���Ԫ����Ҫ�����������arr1��ĩβ

����:arr1=[2,3,1,3,2,4,6,7,9,2,19],arr2=[2,1,4,3,9,6]
���:[2,2,2,1,4,3,3,9,6,7,19]

��ʾ:
arr1.length,arr2.length<=1000
0<=arr1[i],arr2[i]<=1000
arr2�е�Ԫ��arr2[i]������ͬ
arr2�е�ÿ��Ԫ��arr2[i]��������arr1��
*/

#include<stdio.h>
int main(void)
{
    int i,j,k,l,n1,n2,temp;
    int arr1[1000],arr2[1000];
    char ch;
    n1=n2=0;
    printf("arr1=[");
    for(i=0;i<1000;i++){
        scanf("%d",&arr1[i]);
        n1=n1+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("arr2=[");
    for(i=0;i<1000;i++){
        scanf("%d",&arr2[i]);
        n2=n2+1;
        ch=getchar();
        if(ch==']') break;
    }
    int A[n1],B[n2];
    k=0;
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(arr2[i]==arr1[j]){
                A[k]=arr1[j];            /*����arr2��Ԫ����ͬ�������δ�������A��,����k����*/
                k=k+1;
                arr1[j]=-1;
            }
        }
    }
    l=0;
    for(i=0;i<n1;i++){
        if(arr1[i]>=0){
            B[l]=arr1[i];
            l=l+1;                      /*������arr2�е�������B��*/
        }
    }
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(B[i]>B[j]){
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;              /*��С��������*/
            }
        }
    }
    printf("[%d",A[0]);
    for(i=1;i<k;i++){
        printf(",%d",A[i]);
    }
    for(i=0;i<l;i++){
        printf(",%d",B[i]);
    }
    printf("]\n");
    return 0;
}
