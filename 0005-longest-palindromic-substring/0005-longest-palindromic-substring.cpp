class Solution {
private:
    int start = 0;
    int end = 0;
    void expand_around_center(string &s, int left, int right) {
        while(left >= 0 && right < (int)s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        left++;
        right--;
        
        if((end - start) < (right - left)) {
            start = left;
            end = right;
        }
    }
public:
    string longestPalindrome(string s) {
        int n = (int)s.size();
        
        // use expand arround center alogrithm
        for(int i = 0; i < n; i++) {
            expand_around_center(s, i, i);
            expand_around_center(s, i, i + 1);
        }
        
        return s.substr(start, end - start + 1);
    }
};