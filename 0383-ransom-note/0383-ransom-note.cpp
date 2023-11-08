class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphabet[26];
        memset(alphabet, 0, sizeof(alphabet));
        
        for(int i = 0; i < magazine.size(); i++) {
            alphabet[magazine[i] - 97]++;
        }
        
        for(int i = 0; i < ransomNote.size(); i++) {
            alphabet[ransomNote[i] - 97]--;
        }
        
        for(int i = 0; i < 26; i++) {
            if(alphabet[i] < 0)
                return false;
        }
        
        return true;
    }
};