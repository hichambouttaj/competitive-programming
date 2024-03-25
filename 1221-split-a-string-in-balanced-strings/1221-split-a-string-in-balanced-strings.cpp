class Solution {
public:
    int balancedStringSplit(string s) {
        int countL = 0;
        int countR = 0;
        int counter = 0;
        
        int sz = s.size();
        
        for(int i = 0; i < sz; i++) {
            if(s[i] == 'L') {
                countL++;
            }
            
            if(s[i] == 'R') {
                countR++;
            }
            
            if(countL == countR) {
                counter++;
                countL = countR = 0;
            }
        }
        
        return counter;
    }
};