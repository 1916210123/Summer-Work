/*
给你一个排序后的字符列表letters,列表中只包含小写英文字母,另给出一个目标字母target,请你寻找在这一有序列表里比目标字母大的最小字母
在比较时,字母是依序循环出现的.举个例子:如果目标字母target='z'并且字符列表为letters=['a','b'],则答案返回'a'
题目链接：https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target
*/

char nextGreatestLetter(char* letters,int lettersSize,char target){
    int i=0;
    if(target>=letters[lettersSize-1])   //目标字母大于最大字母,返回列表中第一个字母
        return letters[0];
    while(letters[i]<=target){
        i++;
    }
    return letters[i];
}
