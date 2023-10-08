class Solution {
private: 
    string s1, s2;
    int dp[501][501];
    
    int solve(int i, int j) {
        if(i >= (int)s1.size())
            return (int)s2.size() - j;
        
        if(j >= (int)s2.size())
            return (int)s1.size() - i;
        
        int &ref = dp[i][j];
        
        if(ref != -1)
            return ref;
        
        if(s1[i] == s2[j])
            return ref = solve(i + 1, j + 1);
        
        int change_choice = 1 + solve(i + 1, j + 1);
        int delete_choice = 1 + solve(i + 1, j);
        int insert_choice = 1 + solve(i, j + 1);
        
        return ref = std::min(change_choice, std::min(delete_choice, insert_choice));
    }
    
public:
    int minDistance(string word1, string word2) {
        s1 = word1;
        s2 = word2;
        memset(dp, -1, sizeof(dp));
        
        return solve(0, 0);
    }
};