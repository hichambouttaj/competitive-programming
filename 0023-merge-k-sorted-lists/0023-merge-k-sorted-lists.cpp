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

class ListNodeComparator {
public:
    int operator()(ListNode *n1, ListNode *n2) {
        return n1->val > n2->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, ListNodeComparator> lnHeap;
        
        for(int i = 0; i < (int)lists.size(); i++) {
            if(lists[i]) {
                lnHeap.push(lists[i]);
            }
        }
        
        ListNode *head = nullptr;
        ListNode *tail = head;
        
        while(!lnHeap.empty()) {
            ListNode *top = lnHeap.top();
            lnHeap.pop();
            
            if(top->next) {
                lnHeap.push(top->next);
            }
            
            if(!head) {
                head = tail = top;
            }else {
                tail->next = top;
                tail = tail->next;
            }
        }
        
        return head;
    }
};