class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> rs;
        for(int i = 1; i <= n; i++){
            if(i % 5 == 0 && i % 3 == 0) rs.push_back("FizzBuzz");
            else if(i % 5 == 0) rs.push_back("Buzz");
            else if(i % 3 == 0) rs.push_back("Fizz");
            else rs.push_back(to_string(i));
        }
        return rs;
    }
};