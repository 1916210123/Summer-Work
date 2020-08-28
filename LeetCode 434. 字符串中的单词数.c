/*
统计字符串中的单词个数，这里的单词指的是连续的不是空格的字符。
请注意，你可以假定字符串里不包括任何不可打印的字符。

题目链接：https://leetcode-cn.com/problems/number-of-segments-in-a-string
*/

//当前一个字符为空格后一个不为空格时,单词数加一

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
