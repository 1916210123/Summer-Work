/*
����һ�������һ���ض�ֵx,��������зָ�,ʹ������С��x�Ľڵ㶼�ڴ��ڻ����x�Ľڵ�֮ǰ
��Ӧ����������������ÿ���ڵ�ĳ�ʼ���λ��

ʾ��:����:head=1->4->3->2->5->2,x=3
     ���:1->2->2->4->3->5
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
