class Solution {
public:
    int addDigits(int num) {
        while(num / 10 > 0){
            int carry = num % 10;
            int q = num / 10;
            num = carry + q;
        }
        return num;
    }
};