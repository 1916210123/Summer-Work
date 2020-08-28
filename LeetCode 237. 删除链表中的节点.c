/*请编写一个函数,使其可以删除某个链表中给定的(非末尾)节点,传入函数的唯一参数为要被删除的节点 */

/**
*Definition for singly-linked list.
*struct ListNode{
*    int val;
*    struct ListNode *next;
*};
*/

void deleteNode(struct ListNode* node)
{
    node->val=node->next->val; //使用后一个节点覆盖
    node->next=node->next->next;
    return;
}
