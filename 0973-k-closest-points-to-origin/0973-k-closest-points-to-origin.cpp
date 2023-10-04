class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pr;
        int sz = (int)points.size();
        
        for(int i = 0; i < sz; i++) {
            int d = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            if((int)pr.size() <= k || d < pr.top().first)
                pr.push({d, {points[i][0], points[i][1]}});
                
                if((int)pr.size() > k)
                    pr.pop();
            }
        
        vector<vector<int>> rs((int)pr.size());
        int cnt = 0;
        
        while(!pr.empty()) {
            rs[cnt++] = pr.top().second;
            pr.pop();
        }
        
        return rs;
    }
    
};