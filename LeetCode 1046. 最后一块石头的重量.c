/*  YI
��һ��ʯͷ,ÿ��ʯͷ����������������,ÿһ�غ�,����ѡ���������ص�ʯͷ,Ȼ������һ�����,����ʯͷ������
�ֱ�Ϊx��y,��x<=y,��ô����Ŀ��ܽ�����£�
���x==y,��ô����ʯͷ���ᱻ��ȫ���飻
���x!=y,��ô����Ϊx��ʯͷ������ȫ����,������Ϊy��ʯͷ������Ϊy-x
���,���ֻ��ʣ��һ��ʯͷ,���ش�ʯͷ������,���û��ʯͷʣ��,�ͷ���0
��Ŀ���ӣ�https://leetcode-cn.com/problems/last-stone-weight
*/

//N��ʯͷ��Ҫ��ײN-1��,����

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
