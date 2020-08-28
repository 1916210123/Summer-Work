/*
给定一位研究者论文被引用次数的数组(被引用次数是非负整数),编写一个方法,计算出研究者的h指数
h指数的定义:h代表"高引用次数"(high citations),一名科研人员的h指数是指他的N篇论文中总共有h篇论文分别被引用了至少h次,其余的N-h篇论文每篇被引用次数不超过h次
例如:某人的h指数是20,这表示他已发表的论文中,每篇被引用了至少20次的论文总共有20篇

示例:输入:citations=[3,0,6,1,5]
     输出:3
解释:给定数组表示研究者总共有5篇论文,每篇论文相应的被引用了3,0,6,1,5次,由于研究者有3篇论文每篇至少被引用了3次,其余两篇论文每篇被引用不多于3次,所以她的h指数是3
提示:如果h有多种可能的值,h指数是其中最大的那个
*/

//0<h<citationsSize,若h满足，则小于等于h的数一定满足条件，只需倒数第h个数大于等于h，即citation[cutationsSize-mid]>=mid

int hIndex(int* citations, int citationsSize){
int l=0,r=citationsSize;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(citations[citationsSize-mid]>=mid)
            l=mid;
        else r=mid-1;
    }
    return l;
}
