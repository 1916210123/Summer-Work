/*
����һ���ַ���������Ҫ��ת�ַ�����ÿ�����ʵ��ַ�˳��ͬʱ�Ա����ո�͵��ʵĳ�ʼ˳��

���룺"Let's take LeetCode contest"
�����"s'teL ekat edoCteeL tsetnoc"
��Ŀ���ӣ�https://leetcode-cn.com/problems/reverse-words-in-a-string-iii
*/

void fact(char *s, int i, int j)
{
    char t;
    while(i<j){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
}

char * reverseWords(char * s){
    if(s==0) return s;
    int len=strlen(s);
    int i,j;

    for(i=0,j=0;j<len;){
        while(s[j]!=' '&&s[j]!='\0') j++;
        fact(s,i,j-1);
        i=j+1;
        j=i;
    }
    return s;
}
