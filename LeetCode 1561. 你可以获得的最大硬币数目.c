/*
有3n堆数目不一的硬币,你和你的朋友们打算按以下方式分硬币：每一轮中,你将会选出任意3堆硬币(不一定连续),Alice将会取走硬币数量最多的
那一堆,你将会取走硬币数量第二多的那一堆,Bob将会取走最后一堆,重复这个过程,直到没有更多硬币
给你一个整数数组piles,其中piles[i]是第i堆中硬币的数目,返回你可以获得的最大硬币数目

示例:输入:piles=[2,4,1,2,7,8]
     输出:9
解释:选出(2,7,8),Alice取走8枚硬币的那堆,你取走7枚硬币的那堆,Bob取走最后一堆
     选出(1,2,4),Alice取走4枚硬币的那堆,你取走2枚硬币的那堆,Bob取走最后一堆
     你可以获得的最大硬币数目:7+2=9
     考虑另外一种情况,如果选出的是(1,2,8)和(2,4,7),你就只能得到2+4=6枚硬币,这不是最优解
示例:输入:piles=[2,4,5]
     输出:4
示例:输入:piles=[9,8,7,6,5,1,2,3,4]
     输出:18

提示:3<=piles.length<=10^5
     piles.length%3==0
     1<=piles[i]<=10^4
*/

//从小到大排序，贪心:获得硬币最大数=pile[1]+pile[3]+···+pile[3n-2]

int cmpdown(const void *a, const void *b)
{
    return (*(int *)b-*(int *)a);
}

int maxCoins(int *piles, int pilesSize)
{
    int i;
    int res=0;
    int start=1;

    qsort(piles,pilesSize,sizeof(int),cmpdown);
    for(i=0;i<pilesSize/3;i++) {
        res+=piles[start];
        start+=2;
    }
    return res;
}
