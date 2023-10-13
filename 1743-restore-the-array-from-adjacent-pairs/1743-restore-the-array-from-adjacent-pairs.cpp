typedef unordered_map<int, vector<int>> GRAPH;

class Solution {
public:
    
    void create_edge(GRAPH &graph, int from, int to) {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    
    void dfs(GRAPH &graph, int node, unordered_set<int> &visited, vector<int> &nodes) {
        visited.insert(node);
        nodes.push_back(node);
        
        for(int neighbour : graph[node]) {
            if(!visited.count(neighbour)) {
                dfs(graph, neighbour, visited, nodes);
            }
        }
    }
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int nodes = (int)adjacentPairs.size() + 1;
        GRAPH graph;
        
        for(int i = 0; i < nodes - 1; i++) {
            create_edge(graph, adjacentPairs[i][0], adjacentPairs[i][1]);
        }
        
        unordered_set<int> visited;
        vector<int> list_nodes;
        
        for(const pair<int, vector<int>> &node_adj : graph) {
            if((int)node_adj.second.size() == 1) {
                dfs(graph, node_adj.first, visited, list_nodes);
                break;
            }
        }   
        
        return list_nodes;
    }
};