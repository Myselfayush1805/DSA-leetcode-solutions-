/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* pre=dummy;
        for(int i=0;i<left-1;i++) pre=pre->next;
        ListNode* curr=pre->next;
        ListNode* nextnode=NULL;
        for(int i=0;i<right-left;i++){
            nextnode=curr->next;
            curr->next=nextnode->next;
            nextnode->next=pre->next;
            pre->next=nextnode;
        }
        return dummy->next;
    }
};
