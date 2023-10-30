class Solution {
public:
    int reverse(int x) {
        if(x == INT_MAX || x == INT_MIN)
            return 0;

        int limit_min = INT_MIN / 10;
        int limit_max = INT_MAX / 10;
        
        int nbr = 0;
        
        while(x){
            if(x / 10 == 0 && (nbr < limit_min || nbr > limit_max))
                return 0;
            nbr = nbr * 10 + (x % 10);
            x /= 10;
        }
        
        return nbr;
    }
};