/*
���һ���㷨,�ҳ���������С��k����,������˳�򷵻���k��������
ʾ��:����:arr=[1,3,5,7,2,4,6,8],k=4
     ���:[1,2,3,4]
��ʾ:0<=len(arr)<=100000
     0<=k<=min(100000,len(arr))
*/

#include<stdio.h>
int main(void)
{
    int i,j,k,n,temp,arr[100000];
    char ch;
    n=0;
    printf("arr=");
    for(i=0;i<100000;i++){
        ch=getchar();
        if(ch==']') break;
        scanf("%d",&arr[i]);
        n=n+1;
    }
    printf("k=");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("[%d",arr[0]);
    for(i=1;i<k;i++){
        printf(",%d",arr[i]);
    }
    printf("]\n");
    return 0;
}
