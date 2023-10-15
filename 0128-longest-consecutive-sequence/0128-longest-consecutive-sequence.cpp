typedef map<int, vector<int>> GRAPH;

class Solution {
private:
    void create_edge(GRAPH &graph, int from, int to) {
        graph[from].push_back(to);
    }
    
    int dfs(GRAPH &graph, int node) {
        int length = 1;
        
        while((int)graph[node].size() > 0) {
            node = graph[node][0];
            length++;
        }
        
        return length;
    }
    
public:
    int longestConsecutive(vector<int>& nums) {
        int n = (int)nums.size();
        unordered_set<int> us(nums.begin(), nums.end());

        if((int)us.size() == 0)
            return 0;
        
        GRAPH graph;
        
        for(int num : us) {
            if(us.count(num + 1)) {
                create_edge(graph, num, num + 1);
            }
        }
        
        int max_cc_length = 1;
        
        for(auto &node : graph) {
            if(!us.count(node.first - 1)) {
                int current_cc_length = dfs(graph, node.first);
                max_cc_length = std::max(max_cc_length, current_cc_length);
            }
        }
        
        return max_cc_length;
    }
};