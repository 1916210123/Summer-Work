/*���дһ������,ʹ�����ɾ��ĳ�������и�����(��ĩβ)�ڵ�,���뺯����Ψһ����ΪҪ��ɾ���Ľڵ� */

/**
*Definition for singly-linked list.
*struct ListNode{
*    int val;
*    struct ListNode *next;
*};
*/

void deleteNode(struct ListNode* node)
{
    node->val=node->next->val; //ʹ�ú�һ���ڵ㸲��
    node->next=node->next->next;
    return;
}
