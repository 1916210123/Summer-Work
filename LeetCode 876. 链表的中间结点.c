/*
����һ������ͷ���head�ķǿյ�����,����������м��㡣
����������м��㣬�򷵻صڶ����м���
*/

struct ListNode* middleNode(struct ListNode* head){
    if(head==NULL||head->next==NULL)return head;
    if(head->next->next==NULL)return head->next;   /*�������:ֻ��һ���ڵ�������ڵ�*/
    //�����ٿ���ָ��
    struct ListNode *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
