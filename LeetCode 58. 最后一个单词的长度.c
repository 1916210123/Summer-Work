/*
给定一个仅包含大小写字母和空格' '的字符串s,返回其最后一个单词的长度,如果字符串从左向右滚动显示,那么最后一个单词就是最后出现的单词
如果不存在最后一个单词,请返回0
说明：一个单词是指仅由字母组成、不包含任何空格字符的最大子字符串。
链接：https://leetcode-cn.com/problems/length-of-last-word
*/

//反向遍历字符串,从不等于空格的字符开始计数sum,直到碰到下一个空格

int lengthOfLastWord(char * s){
    int i,len,sum;
    len=strlen(s);
    sum=0;
    if(len==0) return 0;   //空字符串,不存在最后一个单词,直接返回0

    for(i=len-1;i>=0;i--){   //反向遍历
        if(s[i]!=' ') sum++;
        if(s[i]==' '&&sum>0) break;
    }
    return sum;
}
