/*��תһ������
ʾ��:����:1->2->3->4->5->NULL
     ���:5->4->3->2->1->NULL
*/

struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL) return head;
    struct ListNode *oldHead, *newHead, *temp;
    oldHead=head;
    newHead=NULL;

    while(oldHead){
        temp=oldHead->next;     //�洢oldHead���������ڵ�, �Ա�oldHead�ı�������
        oldHead->next=newHead;  //ͷ��,���ĵ�ǰoldHead�ڵ�nextָ��,oldHead���뵽������
        newHead=oldHead;        //����������ͷ
        oldHead=temp;           //�����������������
    }
    return newHead;
}
