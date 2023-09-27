class Solution {
public:
    int countSegments(string s) {
        int cnt = 0;
        int sz = (int)s.size();
        
        if(sz == 0)
            return 0;
        
        for(int i = 1; i < sz; i++) {
            if(s[i] == ' ' && s[i - 1] != ' ' )
                cnt++;
        }
        
        if(s[sz - 1] != ' ')
            cnt++;
        
        return cnt;
    }
};