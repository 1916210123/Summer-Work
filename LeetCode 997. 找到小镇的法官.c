/*
һ��С����,����1��N�����N����,���Գ�,��Щ������һ����С���ϵ����ܷ���,���С��ķ�����Ĵ���,��ô��
С��ķ��ٲ������κ���;ÿ����(����С�򷨹���)������С��ķ���;ֻ��һ����ͬʱ��������1������2
��������trust,�����������ζ�trust[i]=[a,b]���,��ʾ���Ϊa�������α��Ϊb����
���С��������ܷ��ٲ��ҿ���ȷ���������,�뷵�ظ÷��ٵı��,����,����-1
��Ŀ���ӣ�https://leetcode-cn.com/problems/find-the-town-judge
*/

//���ٲ������κ���
//����Ҫ��N-1��������
//ֻ��һ�����Ǳ�N-1������
//ֻ��һ������



int findJudge(int N, int** trust, int trustSize, int* trustColSize){
    int *ret_val=(int *)calloc(N+2,sizeof(int));
    for(int i=0;i<N+1;++i) ret_val[i] = 0;
    for(int i=0;i<trustSize;++i) ++ret_val[trust[i][1]];   //��¼�����ŵĴ���
    for(int i=0;i<trustSize;++i) ret_val[trust[i][0]]=0;  //��������ű���(������Ϊ����),�ͶԱ����ŵĴ�������

    int num,i,top;
    num=0;
    top=-1;
    for(i=1;i<=N;++i){
        if(ret_val[i]==N-1) {  //�������Ŵ���ΪN-1����
            ++num;
            top=i;   //��¼�±�
        }
    }
    return (num>1?-1:top);   //����д���1������,��Ϊ-1,�����Ϊ���±�
}
