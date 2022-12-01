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
    ListNode* deleteMiddle(ListNode* head) {
        int len = 0;
        ListNode *cur = head;
        while(cur){
            len++;
            cur = cur->next;
        }
        
        int idx = len / 2;
        cur = head;
        for(int i = 0; i < idx - 1; i++){
            cur = cur->next;
        }
        
        ListNode *tmp = cur->next;
        if(tmp == nullptr)
            return nullptr;
        cur->next = tmp->next;
        delete tmp;
        return head;
    }
};