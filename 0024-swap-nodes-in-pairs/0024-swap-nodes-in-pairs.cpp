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
    
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return head;
        if(head->next == nullptr) return head;
        
        ListNode *cur = head->next;
        head->next = cur->next;
        cur->next = head;
        head = cur;
        
        if(!cur->next->next) {
            return head;
        }
        cur = cur->next;
        
        while(cur->next && cur->next->next){
            ListNode *tmp = cur->next->next;
            cur->next->next = tmp->next;
            tmp->next = cur->next;
            cur->next = tmp;
            cur = cur->next->next;
        }
        return head;
    }
};