class Solution {
public:
    int mySqrt(int x) {
        double start = 0.0;
        double end = x;
        double e = 1e-6;
        
        if(x < 2)
            return x;
        
        while(end - start > e) {
            double mid = (end + start) / 2;
            double square = mid * mid;

            if(square >= x) {
                end = mid;
            }else {
                start = mid;
            }
        }
                
        return static_cast<int>(floor(end));
    }
};