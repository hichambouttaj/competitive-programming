class Solution {
public:
    int romanToInt(string s) {
        map<char, int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        
        int sz = (int)s.size();
        int rs = 0;
        
        for(int i = 0; i < sz; i++) {
            if(i + 1 < sz && arr[s[i]] < arr[s[i + 1]])
                rs -= arr[s[i]];
            else 
                rs += arr[s[i]];
        }
        
        return rs;
    }
};