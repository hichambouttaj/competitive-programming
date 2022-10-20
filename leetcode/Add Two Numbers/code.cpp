class Solution {
public:

    ListNode *getTail(ListNode *l){
        ListNode *cur = l;
        while(cur->next){
            cur = cur->next;
        }
        return cur;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *hisCur = l2;
        ListNode *myCur = l1;
        ListNode *tail = l1;
        int carry = 0;
        int myValue, hisValue;

        while(hisCur || myCur){
            myValue = 0; hisValue = 0;

            if(myCur && myCur->next == nullptr){
                tail = myCur;
            }

            if(myCur){
                myValue = myCur->val;
            }
            if(hisCur){
                hisValue = hisCur->val;
                hisCur = hisCur->next;
            }

            myValue += hisValue + carry;
            carry = myValue / 10;
            myValue = myValue % 10;

            if(myCur){
                myCur->val = myValue;
                myCur = myCur->next;
            }else{
                ListNode *node = getTail(l1);
                node->next = new ListNode(myValue);
            }
        }

        if(carry){
            getTail(l1)->next = new ListNode(carry);
        }

        return l1;
    }
};