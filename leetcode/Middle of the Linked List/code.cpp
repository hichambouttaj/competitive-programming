class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* current = head;
        while(current){
            size++;
            current = current->next;
        }

        current = head;
        for(int i = 0; i < size / 2; i++){
            current = current->next;
        }
        return current;

    }
};