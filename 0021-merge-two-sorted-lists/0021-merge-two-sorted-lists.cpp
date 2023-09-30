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
    void merge(ListNode *node, ListNode *list1, ListNode *list2) {
        if(!list1 && !list2)
            return;
        if(list1 == nullptr) {
            node->next = list2;
            return;
        }
        if(list2 == nullptr) {
            node->next = list1;
            return;
        }
        if(list1->val <= list2->val) {
            node->next = list1;
            merge(node->next, list1->next, list2);
            return;
        }
        
        if(list1->val > list2->val) {
            node->next = list2;
            merge(node->next, list1, list2->next);
            return;
        }
        
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode(-1);
        
        merge(head, list1, list2);
        
        return head->next;
    }
};