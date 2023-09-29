class Solution {
private:
    bool isValid(string &s, int start, int end, int limit) {
        if(start >= end)
            return true;
        
        if(s[start] == s[end])
            return isValid(s, start + 1, end - 1, limit);
        
        if(limit)
            return isValid(s, start + 1, end, limit - 1) || isValid(s, start, end - 1, limit - 1);
        
        return false;
    }
public:
    bool validPalindrome(string s) {
        return isValid(s, 0, (int)s.size() - 1, 1);
    }
};