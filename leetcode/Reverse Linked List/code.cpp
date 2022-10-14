class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *previous = nullptr;
        ListNode *current = head;
        ListNode *next_current = nullptr;
        while(current != nullptr){
            next_current = current->next;
            current->next = previous;
            previous = current;

            if(next_current == nullptr){
                current = previous;
                break;
            }

            current = next_current;
        }
        return current;
    }
};