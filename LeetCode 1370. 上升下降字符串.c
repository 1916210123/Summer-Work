/*给你一个字符串s,请你根据下面的算法重新构造字符串：
1、从s中选出最小的字符,将它接在结果字符串的后面。
2、从s剩余字符中选出最小的字符,且该字符比上一个添加的字符大,将它接在结果字符串后面。
3、重复步骤2,直到你没法从s中选择字符。
4、从s中选出最大的字符,将它接在结果字符串的后面。
5、从s剩余字符中选出最大的字符,且该字符比上一个添加的字符小,将它接在结果字符串后面。
6、重复步骤5,直到你没法从s中选择字符。
7、重复步骤1到6,直到s中所有字符都已经被选过。
在任何一步中,如果最小或者最大字符不止一个,你可以选择其中任意一个,并将其添加到结果字符串。
请你返回将s中字符重新排序后的结果字符串

示例1:输入:s="aaaabbbbcccc"
      输出:"abccbaabccba"
解释：第一轮的步骤1,2,3后,结果字符串为result="abc"
      第一轮的步骤4,5,6后,结果字符串为result="abccba"
      第一轮结束,现在s="aabbcc",我们再次回到步骤1
      第二轮的步骤1,2,3后,结果字符串为result="abccbaabc"
      第二轮的步骤4,5,6后,结果字符串为result="abccbaabccba"
示例2:输入:s="rat"
      输出:"art"
解释：单词"rat"在上述算法重排序以后变成"art"
示例3:输入:s="leetcode"
      输出:"cdelotee"
示例4:输入:s="ggggggg"
      输出:"ggggggg"
示例5:输入:s="spo"
      输出:"ops"

提示：1<=s.length<=500
      s只包含小写英文字母
*/
char * sortString(char * s)
{
    int map[26]={0};
    int cnt,i,len;
    cnt=0;
    len=strlen(s);

    for(i=0;i<len;i++) map[s[i]-'a']++;

repeat:
    for(i=0;cnt<len&&i<26;i++) {
        if(map[i]!=0) {
            s[cnt++]=i+'a';
            map[i]--;
        }
    }
    if(cnt==len) goto out;

    for(i=25;cnt<len&&i>=0;i--) {
        if(map[i]!=0) {
            s[cnt++]=i+'a';
            map[i]--;
        }
    }
    if(cnt!=len) goto repeat;

out:
    return s;
}
