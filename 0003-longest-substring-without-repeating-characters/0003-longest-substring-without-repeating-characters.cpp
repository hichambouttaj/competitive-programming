class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = (int)s.size();
        unordered_map<char, int> my_map;
        
        int start = 0;
        int max_length = 0;
        
        for(int end = 0; end < sz; end++) {
            if(my_map.count(s[end]) && start <= my_map[s[end]]) {
                start = my_map[s[end]] + 1;
            }
            max_length = std::max(max_length, end - start + 1);
            my_map[s[end]] = end;
        }
        
        return max_length;
    }
};