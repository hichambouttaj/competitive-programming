class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
            return false;
        long nbr = 1;
        while(true){
            if(nbr == n)
                return true;
            if(nbr > n)
                return false;
            nbr *= 2;
        }
    }
};