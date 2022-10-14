class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        vector<int> v;
        int q = x;
        while(q != 0){
            x = q % 10;
            q /= 10;
            v.push_back(x);
        }
        int sz = (int)v.size();
        for(int i = 0; i < sz; ++i){
            if(v[i] != v[sz-i-1]){
                return false;
            }
        }
        return true;
    }
};