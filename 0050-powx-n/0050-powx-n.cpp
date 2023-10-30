class Solution {
public:
    double myPow(double x, int n) {
        double rs = 1;
        
        bool isLessThanZero = n < 0;
        
        long abs_n = abs(n);
        
        while(abs_n != 0) {
            if(abs_n % 2 != 0) {
                rs *= x;
                abs_n = abs_n - 1;
            }
            x *= x;
            abs_n /= 2;
        }
        
        return isLessThanZero ? 1 / rs : rs;
    }
};