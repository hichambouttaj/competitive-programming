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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        
        ListNode *cur = head;
        while(cur){
            len++;
            cur = cur->next;
        }
        
        ListNode *dumy = new ListNode(0);
        dumy->next = head;
        
        for(int i = 0; i < len - n; i++){
            dumy = dumy->next;
        }
        
        ListNode *dNode = dumy->next;
        dumy->next = dNode->next;
        
        if(dNode == head){
            head = dumy->next;
        }
        
        delete dNode;
        return head;
    }
};