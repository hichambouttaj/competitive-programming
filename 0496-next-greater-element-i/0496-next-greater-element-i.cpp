class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = (int)nums1.size();
        int sz2 = (int)nums2.size();
        
        vector<int> rs;
        map<int, int> arr;
        
        for(int i = 0; i < sz2; i++){
            arr.insert({nums2[i], i});
        }
        
        for(int i = 0; i < sz1; i++){
            int start = arr[nums1[i]];
            int v = -1;
            for(int j = start + 1; j < sz2; j++){
                if(nums2[j] > nums1[i]){
                    v = nums2[j];
                    break;
                }
            }
            rs.push_back(v);
        }
        return rs;
        
    }
};