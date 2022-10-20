class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode *first_even = head->next;
        ListNode *current_odd = head;
        while(current_odd->next && current_odd->next->next){
            ListNode *next_even = current_odd->next;
            current_odd->next = current_odd->next->next;
            next_even->next = next_even->next->next;
            current_odd = current_odd->next;
        }
        current_odd->next = first_even;
        return head;
    }
};