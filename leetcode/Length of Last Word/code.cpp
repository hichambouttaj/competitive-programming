class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int detect_c = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == ' ' && detect_c == 1)
                break;
            if(s[i] != ' '){
                cnt++;
                detect_c = 1;
            }
        }
        return cnt;
    }
};