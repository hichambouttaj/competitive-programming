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

        map<string, int> cas = {{"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}};

        int sz = (int)s.length();
        int cnt = 0;

        for(int i = 0; i < sz; i++){
            if(i+1 < sz){
                string str = "";
                str += s[i];
                str += s[i+1];
                if(cas.count(str) == 1){
                    cnt += cas[str];
                    i++;
                    continue;
                }
            }
            cnt += arr[s[i]];
        }
        return cnt;
    }
};