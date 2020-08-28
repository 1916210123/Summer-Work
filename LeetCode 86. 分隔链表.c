/*
给定一个链表和一个特定值x,对链表进行分隔,使得所有小于x的节点都在大于或等于x的节点之前
你应当保留两个分区中每个节点的初始相对位置

示例:输入:head=1->4->3->2->5->2,x=3
     输出:1->2->2->4->3->5
*/

/**
*Definition for singly-linked list.
*struct ListNode{
*    int val;
*    struct ListNode *next;
*};
*/

struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *before = (struct ListNode*)malloc(sizeof(struct ListNode)),*p1 = before;
    struct ListNode *after = (struct ListNode*)malloc(sizeof(struct ListNode)),*p2 = after;
    while(head) {
        if(head->val < x){
            before->next=head;
            before=before->next;
        }
        else{
            after->next=head;
            after=after->next;
        }
        head=head->next;
    }
    after->next=NULL;
    before->next=p2->next;
    return p1->next;
}
