/*反转一个链表
示例:输入:1->2->3->4->5->NULL
     输出:5->4->3->2->1->NULL
*/

struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL) return head;
    struct ListNode *oldHead, *newHead, *temp;
    oldHead=head;
    newHead=NULL;

    while(oldHead){
        temp=oldHead->next;     //存储oldHead的向后遍历节点, 以便oldHead的遍历链表
        oldHead->next=newHead;  //头插,更改当前oldHead节点next指向,oldHead加入到新链表
        newHead=oldHead;        //更新新链表头
        oldHead=temp;           //余下老链表继续遍历
    }
    return newHead;
}
