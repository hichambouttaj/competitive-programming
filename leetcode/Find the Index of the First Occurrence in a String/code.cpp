class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        int sz = (int)needle.size();
        for(int i = sz-1; i < (int)haystack.size(); i++){
            if(needle[sz-1] == haystack[i]){
                if(sz == 1)
                    return i;
                else{
                    int test = 0;
                    for(int j = 1; j < sz; j++){
                        if(haystack[i - j] != needle[sz - j - 1]){
                            test = 1;
                            break;
                        }
                    }
                    if(test == 1)
                        continue;
                    else
                        return i - sz + 1;
                }
            }
        }
        return -1;
    }
};