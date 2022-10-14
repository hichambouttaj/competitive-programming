class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        stack<char> par;
        for(int i = 0; i < (int)s.size(); ++i){
            if(mp.count(s[i])){
                if(par.empty())
                    return false;
                char open = mp[s[i]];
                char cur_open = par.top();
                if(open != cur_open)
                    return false;
                par.pop();
            }else{
                par.push(s[i]);
            }
        }
        return par.empty();
    }
};