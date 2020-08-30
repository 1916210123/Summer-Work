/*
给定两个字符串s和t,编写一个函数来判断t是否是s的字母异位词,假设字符串只包含小写字母
字母异位词:字符串中字母的种类和个数相等,只有排列顺序不同
*/

//先判断两字符串长度是否相等(字母异位词长度必然相等),再判断字母种类和数量,若同一字母数量相同,最后得出的a[i]=0

bool isAnagram(char *s,char *t){
    int m=strlen(s),n=strlen(t);
    if(m!=n)
        return false;
    int i=0;
    int a[26]={0};
    while(i<m){
        a[s[i]-'a']++;
        a[t[i]-'a']--;
        i++;
    }
    for(i=0;i<26;i++){
        if(a[i]!=0) return false;
    }
    return true;
}
