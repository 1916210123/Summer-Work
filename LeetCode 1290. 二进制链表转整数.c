/*
给你一个单链表的引用结点head,链表中每个结点的值不是0就是1,已知此链表是一个整数数字的二进制表示形式,
请你返回该链表所表示数字的十进制值
题目链接：https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer
*/

//每读一位零,整体相当于左移一位,也就是整体乘2,如果读到1就乘2再加1

int getDecimalValue(struct ListNode* head)
{
    if(head==NULL) return 0;
    int ans=0;
    while(head!=NULL){
        if(head->val==1){
            ans=ans*2+1；
        }
        if(head->val==0){
            ans=ans*2;
        }
        head=head->next;
    }
    return ans;
}
