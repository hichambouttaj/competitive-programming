class Solution {
private:
    unordered_map<char, int> m;
public:
    bool isSmaller(string &s, string t) {
        int length = std::min(s.size(), t.size());
        
        for(int i = 0; i < length; i++) {
            if(s[i] != t[i]) {
                return m[s[i]] < m[t[i]];
            }
        }
        
        return s.size() < t.size();
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < (int)order.size(); i++) {
            m[order[i]] = i;
        }
        
        int sz = (int)words.size();
        
        for(int i = 0; i < sz - 1; i++) {
            if(words[i] != words[i + 1] && !isSmaller(words[i], words[i + 1]))
                return false;
        }
    
        return true;        
    }
};