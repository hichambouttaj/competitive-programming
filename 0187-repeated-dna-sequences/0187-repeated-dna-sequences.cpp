class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> memo;
        unordered_set<string> rs;
        int n = (int)s.size();
        
        for(int i = 0; i <= n - 10; i++) {
            string sub = s.substr(i, 10);
            if(memo.count(sub)) {
                rs.insert(sub);
            }else {
                memo.insert(sub);
            }
        } 
        
        return {rs.begin(), rs.end()};
    }
};