/*YIWEN
��һ��n*m�Ķ�ά������,ÿһ�ж����մ����ҵ�����˳������,ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ������,�ж��������Ƿ��и�������

ʾ��:���о���matrix���£�
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
����target=5,����true
����target=20,����false

����:0<=n<=1000
*/

//���⣺��Ҫÿ�����������ά����

#include<stdio.h>
int main(void)
{
    int i,j,m,n,t,target;
    printf("n��m:");
    scanf("%d %d",&n,&m);
    printf("target=");
    scanf("%d",&target);
    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    t=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==target){
                printf("ture\n");
                return 0;
            }
            if(a[i][j]!=target) t=t+1;  /*����,�ж��ж��ٸ���������target*/
        }
    }
    if(t==m*n) printf("false\n");
    return 0;
}
