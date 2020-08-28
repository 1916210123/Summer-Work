/*
删除链表中等于给定值val的所有节点
示例:输入:1->2->6->3->4->5->6,val=6
     输出:1->2->3->4->5
*/

struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *p;
    while(head!=NULL&&head->val==val) {
        head = head->next;        //需先判断head是否等于val,否则p->next会直接跳过
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
