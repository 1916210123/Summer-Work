/*
�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β��
�붨��һ������ʵ���ַ�������ת�����Ĺ���,����,�����ַ���"abcdefg"������2,�ú�������������ת��λ�õ��Ľ��"cdefgab"

��Ŀ���ӣ�https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof
*/

char* reverseLeftWords(char* s, int n){
    int len,i;
    char *ans;
    len=strlen(s);
    i=0;
    *ans=malloc(sizeof(char)*(len + 1));
    while(i < len){
        *(ans++)=s[(n+i++)%len];
    }
    *ans='\0';
    return ans-len;
}
