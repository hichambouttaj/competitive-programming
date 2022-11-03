class Solution {
public:
    bool isAnagram(string s, string t) {    
        
        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> arr;
        for(int i = 0; i < s.size(); i++){
            arr[s[i]]++;
        }
        
        for(int i = 0; i < t.size(); i++){
            if(arr.find(t[i]) == arr.end()) return false;
            arr[t[i]]--;
            if(arr[t[i]] == 0){
                arr.erase(t[i]);
            }
            
        }
        return arr.empty();
    }
};