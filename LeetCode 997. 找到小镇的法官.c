/*
一个小镇里,按从1到N标记了N个人,传言称,这些人中有一个是小镇上的秘密法官,如果小镇的法官真的存在,那么：
小镇的法官不相信任何人;每个人(除了小镇法官外)都信任小镇的法官;只有一个人同时满足属性1和属性2
给定数组trust,该数组由信任对trust[i]=[a,b]组成,表示标记为a的人信任标记为b的人
如果小镇存在秘密法官并且可以确定他的身份,请返回该法官的标记,否则,返回-1
题目链接：https://leetcode-cn.com/problems/find-the-town-judge
*/

//法官不相信任何人
//法官要被N-1个人相信
//只有一个人是被N-1个相信
//只有一个法官



int findJudge(int N, int** trust, int trustSize, int* trustColSize){
    int *ret_val=(int *)calloc(N+2,sizeof(int));
    for(int i=0;i<N+1;++i) ret_val[i] = 0;
    for(int i=0;i<trustSize;++i) ++ret_val[trust[i][1]];   //记录被相信的次数
    for(int i=0;i<trustSize;++i) ret_val[trust[i][0]]=0;  //如果他相信别人(不可能为法官),就对被相信的次数清零

    int num,i,top;
    num=0;
    top=-1;
    for(i=1;i<=N;++i){
        if(ret_val[i]==N-1) {  //查找相信次数为N-1的人
            ++num;
            top=i;   //记录下标
        }
    }
    return (num>1?-1:top);   //如果有大于1个法官,就为-1,否则就为该下标
}
