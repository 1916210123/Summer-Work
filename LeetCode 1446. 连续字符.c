/*����һ���ַ���s,�ַ����ġ�����������Ϊ��ֻ����һ���ַ�����ǿ����ַ����ĳ���
���㷵���ַ���������

��Ŀ���ӣ�https://leetcode-cn.com/problems/consecutive-characters
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
