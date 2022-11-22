class Solution {
public:
    bool isHappy(int n) {
        set<int> arr;
        arr.insert(n);
        int nbr = n;
        while(true){
            int sum = 0;
            while(n){
                int x = n % 10;
                sum += x * x;
                n /= 10;
            }
            if(sum == 1) return true;
            if(arr.count(sum)) return false;
            arr.insert(sum);
            n = sum;
        }
    }
};