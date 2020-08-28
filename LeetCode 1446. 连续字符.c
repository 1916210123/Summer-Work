/*给你一个字符串s,字符串的「能量」定义为：只包含一种字符的最长非空子字符串的长度
请你返回字符串的能量

题目链接：https://leetcode-cn.com/problems/consecutive-characters
*/

int maxPower(char * s){
	int len,i,m,n;
	len=strlen(s);
	m=0;
	n=0;
	for(i=0;i<len;i++){
        if(s[i]==s[i+1]){
            m++;
            if(m>n) n=m;
        }
        else m=0;
	}
	return n+1;
}
