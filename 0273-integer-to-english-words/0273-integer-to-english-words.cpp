class Solution {
private:
    string zero = "Zero";
    string less_than_20[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",                              "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",                                "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty",
                     "Ninety"};
    
    string hundred = "Hundred";
    string thousands[4] = {"", "Thousand", "Million", "Billion"};
    
    string helper(int n) {
        if(n == 0)
            return "";
        
        if(n < 20)
            return less_than_20[n] + " ";
        
        if(n < 100)
            return tens[n / 10] + " " + helper(n % 10);
        
        return less_than_20[n / 100] + " " + hundred + " " + helper(n % 100);
    }
    
public:
    string numberToWords(int num) {
        if(num == 0) return zero;
        int idx = 0;
        
        string rs = "";
        
        while(num) {
            if(num % 1000)
                rs = helper(num % 1000) + thousands[idx] + " " + rs;
            num /= 1000;
            idx++;
        }
        
        int end = (int)rs.size() - 1;
        
        while(end >= 0 && rs[end] == ' ') {
            end--;
        }
        
        return rs.substr(0, end + 1);        
    }
};