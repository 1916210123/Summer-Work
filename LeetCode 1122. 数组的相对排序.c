/*
给你两个数组,arr1和arr2,arr2中的元素各不相同,arr2中的每个元素都出现在arr1中,对arr1中的元素进行排序,使arr1中项的
相对顺序和arr2中的相对顺序相同.未在arr2中出现过的元素需要按照升序放在arr1的末尾

输入:arr1=[2,3,1,3,2,4,6,7,9,2,19],arr2=[2,1,4,3,9,6]
输出:[2,2,2,1,4,3,3,9,6,7,19]

提示:
arr1.length,arr2.length<=1000
0<=arr1[i],arr2[i]<=1000
arr2中的元素arr2[i]各不相同
arr2中的每个元素arr2[i]都出现在arr1中
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
                A[k]=arr1[j];            /*将与arr2中元素相同的数依次存入数组A中,共有k个数*/
                k=k+1;
                arr1[j]=-1;
            }
        }
    }
    l=0;
    for(i=0;i<n1;i++){
        if(arr1[i]>=0){
            B[l]=arr1[i];
            l=l+1;                      /*将不在arr2中的数存入B中*/
        }
    }
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(B[i]>B[j]){
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;              /*从小到大排序*/
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
