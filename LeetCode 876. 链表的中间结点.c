/*
给定一个带有头结点head的非空单链表,返回链表的中间结点。
如果有两个中间结点，则返回第二个中间结点
*/

struct ListNode* middleNode(struct ListNode* head){
    if(head==NULL||head->next==NULL)return head;
    if(head->next->next==NULL)return head->next;   /*特殊情况:只有一个节点或两个节点*/
    //二倍速快慢指针
    struct ListNode *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
