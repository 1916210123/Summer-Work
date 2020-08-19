/*
假设你是一位很棒的家长,想要给你的孩子们一些小饼干.但是,每个孩子最多只能给一块饼干.对每个孩子i,都有一个胃口值gi,这是能让
孩子们满足胃口的饼干的最小尺寸,并且每块饼干j,都有一个尺寸sj.如果sj>=gi,我们可以将这个饼干j分配给孩子i,这个孩子会得到满
足.你的目标是尽可能满足越多数量的孩子，并输出这个最大数值。
注意：你可以假设胃口值为正,一个小朋友最多只能拥有一块饼干。

示例1:输入:[1,2,3],[1,1]
      输出:1
解释:你有三个孩子和两块小饼干,3个孩子的胃口值分别是:1,2,3。虽然你有两块小饼干，由于他们的尺寸都是1,你只能让胃口值是1的
孩子满足,所以你应该输出1

示例2:输入:[1,2],[1,2,3]
      输出:2
解释:你有两个孩子和三块小饼干,2个孩子的胃口值分别是1,2。你拥有的饼干数量和尺寸都足以让所有孩子满足,所以你应该输出2
*/

//现将gi与sj按从小到大排序，从胃口最小的孩子开始满足，假设孩子胃口值均大于零
//太多相似部分

#include<stdio.h>
int main(void)
{
    int i,j,m,n,t,sum;
    int gi[10],sj[10];
    char ch;
    sum=m=n=0;
    printf("[");
    for(i=0;i<10;i++){
        scanf("%d",&gi[i]);
        m=m+1;
        ch=getchar();
        if(ch==']') break;
    }
    printf("[");
    for(i=0;i<10;i++){
        scanf("%d",&sj[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    for(i=0;i<m;i++){
        if(gi[i+1]<gi[i]){
            t=gi[i];
            gi[i]=gi[i+1];
            gi[i+1]=t;           /*将孩子的胃口值gi排序*/
        }
    }
    for(i=0;i<n;i++){
        if(sj[i+1]<sj[i]){
            t=sj[i];
            sj[i]=sj[i+1];
            sj[i+1]=t;           /*将饼干的尺寸sj排序*/
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(sj[j]==0) continue;
            if(gi[i]<=sj[j]){
                sum=sum+1;
                sj[j]=0;         /*已分发的饼干尺寸记为零*/
                break;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
