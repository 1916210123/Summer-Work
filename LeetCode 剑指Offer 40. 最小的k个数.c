//��С��k����
/*
������������arr,�ҳ�������С��k����

ʾ��1:����:arr=[3,2,1],k=2
      ���:[1,2]����[2,1]
ʾ��2:����:arr=[0,1,2,1],k=1
      ���:[0]
���ƣ�0<=k<=arr.lenght<=10000
      0<=arr[i]<=10000
*/

#include<stdio.h>
int main(void)
{
    int i,j,k,t,m,n,arr[10000];
    char ch;
    printf("arr=[");
    n=0;
    for(i=0;i<10000;i++){
        scanf("%d",&arr[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("k=");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[i]<arr[j]){
                t=arr[i];               /*������������ֵ*/
                arr[i]=arr[j];
                arr[j]=t;               /*�������е�Ԫ�ذ���С����˳����������*/
            }
        }
    }
    m=0;      /*����ȷ�������ʽ*/
    for(i=0;i<n;i++){
        if(m==0) printf("[");
        m=m+1;
        if(m<k) printf("%d,",arr[i]);
        if(m==k) printf("%d",arr[i]);
    }
    printf("]\n");
    return 0;
}
