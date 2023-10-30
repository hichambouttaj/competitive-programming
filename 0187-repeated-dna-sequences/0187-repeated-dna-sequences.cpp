class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> m;
        int n = (int)s.size();
        
        for(int i = 0; i < n - 9; i++) {
            m[s.substr(i, 10)]++;
        } 
        
        vector<string> rs;
        
        for(const pair<string, int> &p : m) {
            if(p.second > 1) {
                rs.push_back(p.first);
            }
        }
        
        return rs;
    }
};