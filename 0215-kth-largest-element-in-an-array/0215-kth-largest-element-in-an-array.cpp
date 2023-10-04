class LargestComparator {
public:
    bool operator() (int a, int b) {
        return a < b;
    }  
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int sz = (int)nums.size();
        priority_queue<int, vector<int>, LargestComparator> pr;
        
        for(int i = 0; i < sz; i++) {
            pr.push(nums[i]);
        }
        
        while(!pr.empty() && k > 1) {
            pr.pop();
            k--;
        }
        
        return pr.top();        
    }
};