/*  YI
有一堆石头,每块石头的重量都是正整数,每一回合,从中选出两块最重的石头,然后将它们一起粉碎,假设石头的重量
分别为x和y,且x<=y,那么粉碎的可能结果如下：
如果x==y,那么两块石头都会被完全粉碎；
如果x!=y,那么重量为x的石头将会完全粉碎,而重量为y的石头新重量为y-x
最后,最多只会剩下一块石头,返回此石头的重量,如果没有石头剩下,就返回0
题目链接：https://leetcode-cn.com/problems/last-stone-weight
*/

//N块石头需要碰撞N-1次,排序

int Cmp(const void* a,const void* b)
{
    return *(int*)b-*(int*)a;
}
int lastStoneWeight(int *stones,int stonesSize)
{
    int time=stonesSize-1;
    int buf[30]={0};
    memcpy(buf,stones,stonesSize *sizeof(int));
    while(time>0){
        qsort(buf,30,sizeof(int),Cmp);
        buf[0]-=buf[1];
        buf[1]=0;
        time--;
    }
    return buf[0];
}
