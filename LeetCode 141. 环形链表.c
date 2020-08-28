/*定一个链表，判断链表中是否有环。
题目链接：https://leetcode-cn.com/problems/linked-list-cycle
*/

bool hasCycle(struct ListNode *head) {
    struct ListNode *Addr[10000]={0};
    short i,j;
    i=0;
    while(head!=0){
        for(j=0;j<10000;j++)
            if(head==Addr[j]) return 1;
        Addr[i]=head;
        head=head->next;
        i++;
    }
    return 0;
}
