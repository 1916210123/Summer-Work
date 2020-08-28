//0-d 康托展开
//康托展开是一个全排列到一个自然数的双射，因此是可逆的。、

/*逆康托展开举例:1~5从小到大的全排列中求出第62个排列对应的排列组合34152
首先应将序列数减去1，表示前面有61个序列，康托展开的初始序列编号为0
用61/4!=2余13，说明a[5]=2,说明比首位小的数有2个，所以首位为3
用13/3!=2余1，说明a[4]=2，说明在第二位之后小于第二位的数有2个，所以第二位为4
用1/2!=0余1，说明a[3]=0，说明在第三位之后没有小于第三位的数，所以第三位为1
用1/1!=1余0，说明a[2]=1，说明在第四位之后小于第四位的数有1个，所以第四位为5
最后一位自然就是剩下的数2
通过以上分析，所求排列组合为 34152 */


#include<stdio.h>
//#include<math.h>
//double fact (int n);
int main(void)
{
    int X,m,n,N,i,j,t,k,a[10],b[10],c[10];
    int d[9]={1,2,6,24,120,720,5040,40320,362880};
    printf("数的个数：");
    scanf("%d",&n);
    printf("要求数排列位数为第:");
    scanf("%d",&N);
//printf("%.0f\n",2*pow(10,0));
    for(i=1;i<=n;i++){
            c[i]=i;
    }
    N=N-1;
    for(i=n-1;i>=1;i--){
        //t=N/fact(i);
        t=N/d[i-1];
        m=N-t*(d[i-1]);
   // printf("%d=%d/%d--%d ",t,N,d[i-1]),m;
        a[i+1]=t;
    //printf("a[%d]=%d\n",i+1,t);
        //m=N-(fact(i)*t);
        //m=N%d[i-1];
        N=m;
    }
    b[n+1]=0;
    for(i=n;i>2;i--){
            k=0;
        for(j=1;j<=n;j++){
            if(c[j]!=0){
                k=k+1;
                if(k>a[i]){
                    //b[i]=k;
                    b[i]=c[j];
                    while(b[i]==b[i+1]) b[i]=b[i]+1;
               // printf("b[%d]=%d\n",i,b[i]);
                    c[b[i]]=0;
                    break;
                }
            }
        }
    }
    t=0;
    for(i=n;i>=1;i--){
        if(c[i]!=0){
                t=t+1;
            if(a[2]==1){
                b[2]=c[i];
                a[2]=0;
            }
            else{
                b[1]=c[i];
                a[2]=1;
            }

                //b[1]=c[i];

                //b[2]=c[i];
            //else b[1]=c[i];
            c[i]=1;
            //a[2]=0;
        }
    //printf("b[2]=%d\nb[1]=%d\n",b[2],b[1]);
        if(t==2) break;
    }
   // if(a[2]!=1) b[2]=b[1];
  //printf("b[2]=%d\nb[1]=%d\n",b[2],b[1]);
    X=0;t=1;
    for(i=1;i<=n;i++){

        X=b[i]*t+X;
        t=t*10;
//printf("%d %d=%d",b[i],t,b[i]*t);
    }
   // X=X+b[1];
    printf("所求排列组合为%d\n",X);
    return 0;
}

/*
double fact (int n)
{
    int i;
    double result;
    result=1;
    for(i=1;i<=n;i++)
        result=result*i;

    return result;
}*/
