class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        string rs;
        
        if(num1.size() < num2.size()){
            swap(num1, num2);
        }

        int carry = 0;
        int i;
        for(i = 0; i < num2.size(); i++){
            int x = num1[i] - '0';
            int y = num2[i] - '0';
            int sum = x + y;
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            rs += (sum + '0');
        }
        while(i < num1.size()){
            int x = num1[i] - '0';
            int y = carry;
            int sum = x + y;
            carry = sum / 10;
            sum = sum % 10;
            rs += (sum + '0');
            i++;
        }
        
        if(carry) rs += (carry + '0');
        
        reverse(rs.begin(), rs.end());
        return rs;
    }
};