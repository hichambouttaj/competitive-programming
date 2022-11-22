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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> arr;
        while(head){
            if(arr.count(head)) return true;
            arr.insert(head);            
            head = head->next;
        }
        return false;
    }
};