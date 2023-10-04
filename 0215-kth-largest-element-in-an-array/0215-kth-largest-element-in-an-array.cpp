class LargestComparator {
public:
    bool operator() (int a, int b) {
        return a > b;
    }  
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int sz = (int)nums.size();
        priority_queue<int, vector<int>, LargestComparator> pr;
        
        for(int i = 0; i < sz; i++) {
            if((int)pr.size() <= k || nums[i] > pr.top()) {
                pr.push(nums[i]);
                
                if((int)pr.size() > k)
                    pr.pop();
            }
        }
        
        return pr.top();        
    }
};