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
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;

        ListNode *current = head;
        
        while(current) {
            length++;
            current = current->next;
        }
        
        current = head;
        ListNode *first = nullptr;
        ListNode *second = nullptr;
        
        for(int i = 1; i <= length; i++) {
            if(i == k)
                first = current;
            if(i == length - k + 1)
                second = current;
            current = current->next;
        }
  
        swap(first->val, second->val);
        
        return head;
    }
};