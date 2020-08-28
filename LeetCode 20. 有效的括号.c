/*YIWEN
给定一个只包括 '(',')','{','}','[',']' 的字符串，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

题目链接：https://leetcode-cn.com/problems/valid-parentheses
*/

bool isValid(char * s){
    char a[3500];
    char temp;
    int i,cnt;
    cnt=-1;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            cnt++;
            a[cnt]=s[i];
        }
        else{
            if(cnt<0){ //出现了右括号,但没有左括号与之匹配
                return false;
            }
            temp=a[cnt];
            if(s[i]==')'){
                if(temp!='(') return false;
                else cnt--;
            }
            if(s[i]=='}'){
                if(temp!='{') return false;
                else cnt--;
            }
            if(s[i]==']'){
                if(temp!='[') return false;
                else cnt--;
            }
        }
    }
    if(cnt>=0) return false;    //数组中剩余未匹配的左括号
    return true;
}
