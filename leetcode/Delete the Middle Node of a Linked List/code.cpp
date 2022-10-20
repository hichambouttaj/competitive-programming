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
        int sz = 0;
        ListNode *current = head;
        while(current != nullptr){
            sz++;
            current = current->next;
        }

        if(sz == 1){
            return nullptr;
        }

        if(sz == 2){
            delete head->next;
            head->next = nullptr;
            return head;
        }

        current = head;

        for(int i = 0; i < sz / 2 - 1; i++){
            current = current->next;
        }

        ListNode *tmp = current->next;
        current->next = tmp->next;
        delete tmp;
        return head;
    }
};