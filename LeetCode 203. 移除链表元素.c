/*
ɾ�������е��ڸ���ֵval�����нڵ�
ʾ��:����:1->2->6->3->4->5->6,val=6
     ���:1->2->3->4->5
*/

struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *p;
    while(head!=NULL&&head->val==val) {
        head = head->next;        //�����ж�head�Ƿ����val,����p->next��ֱ������
    }
    p=head;
    while(p!=NULL&&p->next!=NULL) {
        if(p->next->val==val){
            p->next=p->next->next;
        }
        else p=p->next;
    }
    return head;
}
