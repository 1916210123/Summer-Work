/*�ַ���ѹ��
�����ַ��ظ����ֵĴ���,��дһ�ַ���,ʵ�ֻ������ַ���ѹ�����ܡ�
����,�ַ���aabcccccaaa���Ϊa2b1c5a3������ѹ��������ַ���û�б��,�򷵻�ԭ�ȵ��ַ���,����Լ����ַ�����ֻ������СдӢ����ĸ(a��z)

��Ŀ���ӣ�https://leetcode-cn.com/problems/compress-string-lcci
*/

class Solution {
public:
    string compressString(string S) {
        if ((int)S.length() == 0) return S; //�մ�����
        string ans="";
        int cnt=1;
        char ch=S[0];
        for(int i=1;i<(int)S.length();++i){
            if (ch == S[i]) cnt++;
            else{
                ans+=ch+to_string(cnt); // cntҪתΪ�ַ���
                ch=S[i];
                cnt=1;
            }
        }
        ans+=ch+to_string(cnt);
        return ans.length()>=S.length()?S:ans;
    }
};
