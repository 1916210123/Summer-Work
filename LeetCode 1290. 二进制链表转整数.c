/*
����һ������������ý��head,������ÿ������ֵ����0����1,��֪��������һ���������ֵĶ����Ʊ�ʾ��ʽ,
���㷵�ظ���������ʾ���ֵ�ʮ����ֵ
��Ŀ���ӣ�https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer
*/

//ÿ��һλ��,�����൱������һλ,Ҳ���������2,�������1�ͳ�2�ټ�1

int getDecimalValue(struct ListNode* head)
{
    if(head==NULL) return 0;
    int ans=0;
    while(head!=NULL){
        if(head->val==1){
            ans=ans*2+1��
        }
        if(head->val==0){
            ans=ans*2;
        }
        head=head->next;
    }
    return ans;
}
