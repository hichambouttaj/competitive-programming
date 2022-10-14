class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> merge;
        while(list1){
            merge.insert(list1->val);
            list1 = list1->next;
        }
        while(list2){
            merge.insert(list2->val);
            list2 = list2->next;
        }

        ListNode *head = nullptr;
        ListNode *current = head;
        for(int num : merge){
            if(head == nullptr){
                head = new ListNode(num);
                current = head;
            }else{
                current->next = new ListNode(num);
                current = current->next;
            }
        }

        return head;
    }
};