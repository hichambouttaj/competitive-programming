class Solution {
public:
    int reverse(int x) {
        long long nbr = 0;
        while(x){
            nbr += x % 10;
            x /= 10;
            if(x)
                nbr *= 10;
        }
        
        if(nbr > INT_MAX || nbr < INT_MIN) return 0;
        return nbr;
        
    }
};