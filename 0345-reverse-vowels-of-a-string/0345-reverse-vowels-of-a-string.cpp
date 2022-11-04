class Solution {
public:
    
    bool isVowel(char c){
        if(c == 'a' || c == 'A') return true;
        if(c == 'e' || c == 'E') return true;
        if(c == 'i' || c == 'I') return true;
        if(c == 'o' || c == 'O') return true;
        if(c == 'u' || c == 'U') return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int sz = (int)s.size();
        
        int start = 0;
        int end = sz - 1;
        
        while(start <= end){
            if(!isVowel(s[start])) {
                start++;
                if(!isVowel(s[end])){
                    end--;
                }
            }else if(!isVowel(s[end])){
                end--;
            }else{
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};