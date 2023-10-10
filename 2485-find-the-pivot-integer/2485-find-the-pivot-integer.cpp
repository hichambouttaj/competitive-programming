class Solution {
public:
    int pivotInteger(int n) {
        
        if(n == 1)
            return 1;
        
        vector<int> pf(n);
         
        for(int i = 0; i < n; i++) {
            if(i == 0)
                pf[i] = 1;
            else
                pf[i] = pf[i - 1] + (i + 1);
        }
        
        for(int pivot = 1; pivot < n; pivot++) {
            if(pf[pivot] == pf[n - 1] - pf[pivot - 1])
                return pivot + 1;
        }
        
        return -1;
    }
};