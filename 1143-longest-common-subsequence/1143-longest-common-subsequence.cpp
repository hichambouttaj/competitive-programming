class Solution {
    int dp[1001][1001];
    string s1, s2;
public:
    int lcs(int idx1, int idx2) {
        if(idx1 == (int)s1.size() || idx2 == (int)s2.size())
            return 0;
        
        int &history = dp[idx1][idx2];
        
        if(history != -1)
            return history;
        
        if(s1[idx1] == s2[idx2])
            return history = 1 + lcs(idx1 + 1, idx2 + 1);
        
        return history = std::max(lcs(idx1 + 1, idx2), lcs(idx1, idx2 + 1));        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        s1 = text1;
        s2 = text2;
        
        memset(dp, -1, sizeof(dp));
        
        return lcs(0, 0);
    }
};