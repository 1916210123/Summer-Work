/*给定一个单链表,把所有的奇数节点和偶数节点分别排在一起,请注意,这里的奇数节点和偶数节点指的是节点编号的奇偶性,而不是节点的值的奇偶性*/

struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL||head->next==NULL) {
        return head;
    }
    struct ListNode *odd=head; //奇数节点
    struct ListNode *evenHead=head->next;   //偶数节点
    struct ListNode *even=evenHead;  //保存偶数节点的首地址

    while(even!=NULL&&even->next!=NULL) {
        odd->next=even->next;  //奇数,连接下下个节点
        odd=even->next;
        even->next=odd->next;  //偶数,连接下下个节点
        even=odd->next;
    }
    odd->next=evenHead;  //奇偶相连
    return head;
}
