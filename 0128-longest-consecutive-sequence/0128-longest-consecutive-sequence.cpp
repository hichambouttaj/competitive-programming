typedef unordered_map<int, vector<int>> GRAPH;

class Solution {
private:
    void create_edge(GRAPH &graph, int from, int to) {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    
    int dfs(GRAPH &graph, int node, unordered_set<int> &visited) {
        visited.insert(node);
        
        for(int neighbour : graph[node]) {
            if(!visited.count(neighbour)) {
                return 1 + dfs(graph, neighbour, visited);
            }
        }
        
        return 1;
    }
    
public:
    int longestConsecutive(vector<int>& nums) {
        int n = (int)nums.size();
        unordered_set<int> us(nums.begin(), nums.end());

        if((int)us.size() == 0)
            return 0;
        
        GRAPH graph;
        
        for(int num : us) {
            int next = num + 1;
            if(us.count(next)) {
                create_edge(graph, num, next);
            }
        }
        
        int max_cc_length = 1;
        unordered_set<int> visited;
        
        for(auto &node : graph) {
            if(!visited.count(node.first) && node.second.size() == 1) {
                int current_cc_length = dfs(graph, node.first, visited);
                max_cc_length = std::max(max_cc_length, current_cc_length);
            }
        }
        
        return max_cc_length;
    }
};