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
    ListNode* partition(ListNode* head, int x) {
        ListNode *less_dummy = new ListNode(-1);
        ListNode *greater_dummy = new ListNode(-1);
        
        ListNode *before = less_dummy;
        ListNode *after = greater_dummy;
        
        while(head) {
            if(head->val < x) {
                before->next = head;
                before = head;
            }else {
                after->next = head;
                after = head;
            }
            head = head->next;
        }
        
        after->next = nullptr;
        
        before->next = greater_dummy->next;
        head = less_dummy->next;
        
        delete less_dummy;
        delete greater_dummy;
        
        return head;
    }
};