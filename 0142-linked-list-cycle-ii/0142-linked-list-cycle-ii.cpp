/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *node = nullptr;
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow) {
                node = fast;
                break;
            }
        }
        
        if(node == nullptr)
            return nullptr;
    
        while(node != head) {
            node = node->next;
            head = head->next;
        }
        
        return head;
    }
};