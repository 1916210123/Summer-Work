//最小的k个数
/*
输入整数数组arr,找出其中最小的k个数

示例1:输入:arr=[3,2,1],k=2
      输出:[1,2]或者[2,1]
示例2:输入:arr=[0,1,2,1],k=1
      输出:[0]
限制：0<=k<=arr.lenght<=10000
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
                t=arr[i];               /*两数交换代替值*/
                arr[i]=arr[j];
                arr[j]=t;               /*将数组中的元素按从小到大顺序重新排列*/
            }
        }
    }
    m=0;      /*便于确定输出格式*/
    for(i=0;i<n;i++){
        if(m==0) printf("[");
        m=m+1;
        if(m<k) printf("%d,",arr[i]);
        if(m==k) printf("%d",arr[i]);
    }
    printf("]\n");
    return 0;
}
