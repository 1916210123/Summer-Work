/*
ͳ���ַ����еĵ��ʸ���������ĵ���ָ���������Ĳ��ǿո���ַ���
��ע�⣬����Լٶ��ַ����ﲻ�����κβ��ɴ�ӡ���ַ���

��Ŀ���ӣ�https://leetcode-cn.com/problems/number-of-segments-in-a-string
*/

//��ǰһ���ַ�Ϊ�ո��һ����Ϊ�ո�ʱ,��������һ

int countSegments(char * s){
    int i,num;
    i=0;
    num=0;
    while((s[i]!='\0')) {
        if(s[i]==' ') {
            i++;
            continue;
        }
        else{
            num++;
            while((s[i]!=' ')&&(s[i]!='\0')) i++;
        }
    }
    return num;
}
