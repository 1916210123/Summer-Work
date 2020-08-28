/*
����һ���ַ���path,����path[i]��ֵ������'N','S','E'����'W',�ֱ��ʾ�򱱡����ϡ��򶫡������ƶ�һ����λ
�����˴Ӷ�άƽ���ϵ�ԭ��(0,0)����ʼ����,��path��ָʾ��·������,���·�����κ�λ���ϳ����ཻ�������Ҳ
�����ߵ�֮ǰ�Ѿ��߹���λ��,�뷵��True;����,����False
��Ŀ���ӣ�https://leetcode-cn.com/problems/path-crossing
https://leetcode-cn.com/problems/path-crossing/solution/er-wei-shu-zu-ji-lu-wei-zhi-by-yuan-fen-miao-bu-ke/
*/

bool isPathCrossing(char * path){
    int i=0,size=0,j=0;
    size=strlen(path);
    int position[size+1][2];  //������ų�ʼλ��(0,0)��ÿ��һ�������λ��
    position[0][0]=0;         //x��ʼλ��Ϊ0
    position[0][1]=0;         //y��ʼλ��Ϊ0
    for(i=0;i<size;i++)       //����Ҫ���ƶ�����¼ÿ��һ����λ��
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
    for(i=0;i<size+1;i++)       //�ж�λ���������Ƿ������ͬ����
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
