class Solution {
private:
    void reverse(string &s, int start, int end) {
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
public:
    string reverseWords(string s) {
        int n = (int)s.size();
        
        // reverse entire string s
        reverse(s, 0, n - 1);
        
        // reverse each words in string s
        int left = 0;
        int right = 0;
        
        while(left < n) {
            while(left < n && s[left] == ' ') left++;
            right = left;
            
            while(right < n && s[right] != ' ') right++;
            reverse(s, left, right - 1);
            left = right;
        }
        
        // remove spaces in string s
        left = 0, right = 0;
        while(right < n) {
            while(right < n && s[right] == ' ') right++;
            while(right < n && s[right] != ' ') {
                s[left] = s[right];
                left++;
                right++;
            }
            while(right < n && s[right] == ' ') right++;
            
            if(right < n) {
                s[left] = ' ';
                left++;
            }
        }
         
        return s.substr(0, left);
    }
};