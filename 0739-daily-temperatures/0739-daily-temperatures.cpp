class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int sz = (int)temperatures.size();

        for(int i = 0; i < sz; i++) {
            while(!st.empty() && temperatures[st.top()] < temperatures[i]) {
                temperatures[st.top()] = i - st.top();
                st.pop();
            } 
            st.push(i);
        }
        
        while(!st.empty()) {
            temperatures[st.top()] = 0;
            st.pop();
        }
        
        return temperatures;
    }
};