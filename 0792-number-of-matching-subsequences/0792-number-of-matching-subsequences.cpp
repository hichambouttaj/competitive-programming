class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "") return true;
        if(s != "" && t == "") return false;
        
        if(s.size() > t.size()) return false;
        
        int p = 0;
        int k = 0;
        while(p < s.size() && k < t.size()){
            if(s[p] == t[k]){
                p++;
                k++;
            }else{
                k++;
            }
        }
        
        if(p < s.size() - 1) return false;
        if(p >= s.size()) p--;
        return s[p] == t[k-1];        
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int sz = (int)words.size();
        int cnt = 0;
        
        unordered_set<string> st;
        
        for(int i = 0; i < sz; i++) {
            if(st.count(words[i])) {
                cnt++;
                continue;
            }

            if(isSubsequence(words[i], s)) {
                st.insert(words[i]);
                cnt++;
            }
        }
        
        return cnt;
    }
};