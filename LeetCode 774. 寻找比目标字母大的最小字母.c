/*
����һ���������ַ��б�letters,�б���ֻ����СдӢ����ĸ,�����һ��Ŀ����ĸtarget,����Ѱ������һ�����б����Ŀ����ĸ�����С��ĸ
�ڱȽ�ʱ,��ĸ������ѭ�����ֵ�.�ٸ�����:���Ŀ����ĸtarget='z'�����ַ��б�Ϊletters=['a','b'],��𰸷���'a'
��Ŀ���ӣ�https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target
*/

char nextGreatestLetter(char* letters,int lettersSize,char target){
    int i=0;
    if(target>=letters[lettersSize-1])   //Ŀ����ĸ���������ĸ,�����б��е�һ����ĸ
        return letters[0];
    while(letters[i]<=target){
        i++;
    }
    return letters[i];
}
