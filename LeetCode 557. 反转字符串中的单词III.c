/*
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

输入："Let's take LeetCode contest"
输出："s'teL ekat edoCteeL tsetnoc"
题目链接：https://leetcode-cn.com/problems/reverse-words-in-a-string-iii
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
