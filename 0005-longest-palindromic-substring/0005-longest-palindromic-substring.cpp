class Solution {
    string str;
    int dp[1001][1001];
    
    int isPalindrome(int i, int j) {
        if(i >= j)
            return 1;
        
        int &ref = dp[i][j];
        
        if(ref != -1)
            return ref;
        
        if(str[i] == str[j])
            return ref = isPalindrome(i + 1, j - 1);
        
        return ref = 0;
    }
public:
    string longestPalindrome(string s) {
        str = s;
        int n = (int)s.size();
        memset(dp, -1, sizeof(dp));

        int length = 0;
        int start = -1;
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int sub_len = j - i + 1;
                if(isPalindrome(i, j) && sub_len > length) {
                    length = sub_len;
                    start = i;
                }
            }
        }
        
        
        if(start == -1)
            return "";
        
        return s.substr(start, length);
    }
};