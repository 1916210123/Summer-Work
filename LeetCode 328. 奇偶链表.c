/*����һ��������,�����е������ڵ��ż���ڵ�ֱ�����һ��,��ע��,����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż��,�����ǽڵ��ֵ����ż��*/

struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL||head->next==NULL) {
        return head;
    }
    struct ListNode *odd=head; //�����ڵ�
    struct ListNode *evenHead=head->next;   //ż���ڵ�
    struct ListNode *even=evenHead;  //����ż���ڵ���׵�ַ

    while(even!=NULL&&even->next!=NULL) {
        odd->next=even->next;  //����,�������¸��ڵ�
        odd=even->next;
        even->next=odd->next;  //ż��,�������¸��ڵ�
        even=odd->next;
    }
    odd->next=evenHead;  //��ż����
    return head;
}
