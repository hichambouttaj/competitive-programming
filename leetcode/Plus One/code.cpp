class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = (int)digits.size();
        digits[sz - 1] += 1;
        for(int i = sz - 1; i >= 1; i--){
            if(digits[i] > 9){
                digits[i - 1] += (digits[i] / 10);
                digits[i] = digits[i] % 10;
            }else{
                return digits;
            }
        }
        if(digits[0] > 9){
            vector<int> v;
            v.push_back(digits[0] / 10);
            v.push_back(digits[0] % 10);
            for(int i = 1; i < sz; i++)
                v.push_back(digits[i]);
            return v;
        }
        return digits;
    }
};