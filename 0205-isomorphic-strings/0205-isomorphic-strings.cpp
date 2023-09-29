class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_map<char, char> inv_m;
        int sz = (int)s.size();
        
        for(int i = 0; i < sz; i++) {
            if(m.count(s[i]) && m[s[i]] != t[i])
                return false;
            if(inv_m.count(t[i]) && inv_m[t[i]] != s[i])
                return false;
            
            m[s[i]] = t[i];
            inv_m[t[i]] = s[i];
        }
        
        return true;
    }
};