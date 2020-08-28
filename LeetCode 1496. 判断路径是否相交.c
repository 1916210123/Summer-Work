/*
给你一个字符串path,其中path[i]的值可以是'N','S','E'或者'W',分别表示向北、向南、向东、向西移动一个单位
机器人从二维平面上的原点(0,0)处开始出发,按path所指示的路径行走,如果路径在任何位置上出现相交的情况，也
就是走到之前已经走过的位置,请返回True;否则,返回False
题目链接：https://leetcode-cn.com/problems/path-crossing
https://leetcode-cn.com/problems/path-crossing/solution/er-wei-shu-zu-ji-lu-wei-zhi-by-yuan-fen-miao-bu-ke/
*/

bool isPathCrossing(char * path){
    int i=0,size=0,j=0;
    size=strlen(path);
    int position[size+1][2];  //用来存放初始位置(0,0)和每走一步后的新位置
    position[0][0]=0;         //x初始位置为0
    position[0][1]=0;         //y初始位置为0
    for(i=0;i<size;i++)       //根据要求移动，记录每走一步的位置
    {
        if(path[i]=='N')
        {
            position[i+1][0]=position[i][0];
            position[i+1][1]=position[i][1]+1;
        }
        else if(path[i]=='S')
        {
            position[i+1][0]=position[i][0];
            position[i+1][1]=position[i][1]-1;
        }
        else if(path[i]=='E')
        {
            position[i+1][0]=position[i][0]+1;
            position[i+1][1]=position[i][1];
        }
        else
        {
            position[i+1][0]=position[i][0]-1;
            position[i+1][1]=position[i][1];
        }
    }
    for(i=0;i<size+1;i++)       //判断位置数组中是否存在相同坐标
    {
        for(j=0;j<size+1;j++)
        {
            if(i==j) continue;
            if(position[i][0]==position[j][0]&&position[i][1]==position[j][1])
            {
                return true;
            }
        }
    }
    return false;
}
