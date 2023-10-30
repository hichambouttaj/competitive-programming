class Solution {
public:
    bool isAnagram(string s, string t) {    
        if(s.size() != t.size()) return false;
        
        int arr[26];
        memset(arr, 0, sizeof(arr));
        
        for(int i = 0; i < (int)s.size(); i++) {
            arr[s[i] - 'a']++;
        }
        
        for(int i = 0; i < (int)t.size(); i++) {
            if(arr[t[i] - 'a'] == 0)
                return false;
            arr[t[i] - 'a']--;
        }
        
        for(int i = 0; i < 26; i++) {
            if(arr[i] != 0)
                return false;
        }
        
        return true;
    }
};