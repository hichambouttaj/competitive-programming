class Solution {
    vector<string> split_s(string &s) {
        vector<string> arr;
        stringstream ss(s);
        string word;
        
        while(ss >> word) {
            arr.push_back(word);
        }
        
        return arr;
    }
    
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> m;
        unordered_set<char> cs;
        
        vector<string> arr = split_s(s);
        int n = (int)arr.size();
        
        if(n != (int)pattern.size())
            return false;
        
        for(int i = 0; i < n; i++) {
            if(!m.count(arr[i])) {
                if(cs.count(pattern[i]))
                    return false;
                m[arr[i]] = pattern[i];
                cs.insert(pattern[i]);
            }else {
                if(m[arr[i]] != pattern[i])
                    return false;
            }
        }
        
        return true;
    }
};